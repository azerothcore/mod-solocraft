CREATE TABLE IF NOT EXISTS `custom_solocraft_character_stats` (
  `GUID` bigint unsigned NOT NULL,
  `Difficulty` float NOT NULL,
  `GroupSize` int NOT NULL,
  `SpellPower` int unsigned NOT NULL DEFAULT '0',
  `Stats` float NOT NULL DEFAULT '100',
  `NoXP` tinyint unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`GUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_bin;

SET @solocraft_add_no_xp = (
  SELECT IF(
    EXISTS(
      SELECT 1
      FROM `information_schema`.`COLUMNS`
      WHERE `TABLE_SCHEMA` = DATABASE()
        AND `TABLE_NAME` = 'custom_solocraft_character_stats'
        AND `COLUMN_NAME` = 'NoXP'
    ),
    'SELECT 1',
    'ALTER TABLE `custom_solocraft_character_stats` ADD COLUMN `NoXP` tinyint unsigned NOT NULL DEFAULT 0 AFTER `Stats`'
  )
);
PREPARE solocraft_add_no_xp_statement FROM @solocraft_add_no_xp;
EXECUTE solocraft_add_no_xp_statement;
DEALLOCATE PREPARE solocraft_add_no_xp_statement;
