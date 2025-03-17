# UAQS Navigation Feature Module

Provides various dependencies and configuration for navigation components consistent with UA web branding standards.

## End of life (2023-11-15)

As of November 15, 2023, UA Quickstart (Quickstart 1) and all of its associated repositories will no longer supported by the Arizona Digital team.  Any website still using Quickstart 1 after the end-of-life date should be migrated to Quickstart 2 as soon as possible.

See the [main UA Quickstart repository](https://bitbucket.org/ua_drupal/ua_quickstart/src/7.x-1.x/README.md) for more information.

## Features

- Creates 'Utility links' menu.
- Configures 'Utility links' menu as `menu_secondary_links_source`.
- Pre-configures Superfish menu block.
- Provides pre-configured second-level menu block for display on child pages.

## Packaged Dependencies

When this module is used as part of a Drupal distribution (such as [UA Quickstart](https://bitbucket.org/ua_drupal/ua_quickstart)), the following dependencies will be automatically packaged with the distribution.

### Drupal Contrib Modules

- [Menu Block](https://www.drupal.org/project/menu_block)
- [Superfish](https://www.drupal.org/project/superfish)

### Libraries

- [Superfish](https://github.com/mehrpadin/Superfish-for-Drupal/)

### UAQS Submodule Dependencies

Global Footer Menu Beans
- [Menu Bean](https://www.drupal.org/project/menu_bean)
- [xAutoload](https://www.drupal.org/project/xautoload)
