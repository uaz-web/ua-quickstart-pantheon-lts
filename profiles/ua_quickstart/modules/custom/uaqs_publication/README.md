# UAQS Publication #

## End of life (2023-11-15)

As of November 15, 2023, UA Quickstart (Quickstart 1) and all of its associated repositories will no longer supported by the Arizona Digital team.  Any website still using Quickstart 1 after the end-of-life date should be migrated to Quickstart 2 as soon as possible.

See the [main UA Quickstart repository](https://bitbucket.org/ua_drupal/ua_quickstart/src/7.x-1.x/README.md) for more information.

## Overview ##
The UA QuickStart component that describes a publication reference. This repository contains a module made with [Features](https://www.drupal.org/project/features) that provides a UAQS Publication content type.

## Requirements ##
- In order to use this feature, you must first download and enable the [Features](https://www.drupal.org/project/features) module.
- Place the feature from this repository into your site's module folder and enable it as you would any other module.
- Dependencies:
  - Drupal Core modules
    - Image
    - Taxonomy
    - Text
  - Contributed modules
    - [CTools](https://www.drupal.org/project/ctools) used in support of the Strongarm module
    - [Date](https://www.drupal.org/project/date) used for the publications's publishing date
    - [Entity Reference](https://www.drupal.org/project/entityreference) used to reference relating publications
    - [Link](https://www.drupal.org/project/link) used for the more information link
    - [StrongArm](https://www.drupal.org/project/strongarm) used to save content type settings
  - UAQS modules
    - [UAQS Fields](...) Provides base fields for the uaqs_publication content type

Handy Drush dl/en command:

```
#!

drush en ctools date entityreference link strongarm
```
## Views ##
Not yet known if this feature will contain views.
