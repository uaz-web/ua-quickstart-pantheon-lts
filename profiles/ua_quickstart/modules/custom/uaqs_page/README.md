# UAQS Basic Page Drupal Feature Module

The UA QuickStart component for basic page content. Use basic pages for your static content, such as an 'About us' page.

## End of life (2023-11-15)

As of November 15, 2023, UA Quickstart (Quickstart 1) and all of its associated repositories will no longer supported by the Arizona Digital team.  Any website still using Quickstart 1 after the end-of-life date should be migrated to Quickstart 2 as soon as possible.

See the [main UA Quickstart repository](https://bitbucket.org/ua_drupal/ua_quickstart/src/7.x-1.x/README.md) for more information.

## Requirements ##
- In order to use this feature, you must first download and enable the [Features](https://www.drupal.org/project/features) module.
- Place the feature from this repository into your site's module folder and enable it as you would any other module.
- Dependencies:
  - UAQS modules
    - [UAQS Fields](...) Provides base fields for the uaqs_news content type


## Features

- Provides 'uaqs_page' content type (clone of Basic page content type from Drupal Standard install profile).

## Please Note ##

Wherever possible, use the uaqs_flexible_page content type in preference to a uaqs_page,
since it is very limited and semi-deprecated.
