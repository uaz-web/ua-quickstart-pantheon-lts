# UAQS Unit #

## End of life (2023-11-15)

As of November 15, 2023, UA Quickstart (Quickstart 1) and all of its associated repositories will no longer supported by the Arizona Digital team.  Any website still using Quickstart 1 after the end-of-life date should be migrated to Quickstart 2 as soon as possible.

See the [main UA Quickstart repository](https://bitbucket.org/ua_drupal/ua_quickstart/src/7.x-1.x/README.md) for more information.

## Overview ##
The UA QuickStart component that describes an academic unit. This repository contains a module made with [Features](https://www.drupal.org/project/features) that provides a UAQS Unit content type.

## Requirements ##
- In order to use this feature, you must first download and enable the [Features](https://www.drupal.org/project/features) module.
- Place the feature from this repository into your site's module folder and enable it as you would any other module.
- Dependencies:
  - Drupal Core modules
    - Taxonomy
    - Text
  - Contributed modules
    - [CTools](https://www.drupal.org/project/ctools) used in support of the Strongarm module
    - [Link](https://www.drupal.org/project/link) used for the more information link
    - [StrongArm](https://www.drupal.org/project/strongarm) used to save content type settings

Handy Drush dl/en command:

```
#!

drush en ctools link strongarm
```
## Views ##
Not yet known if this feature will contain views.
