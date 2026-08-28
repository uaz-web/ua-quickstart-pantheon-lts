### ABOUT THIS REPOSITORY / UPSTREAM

* This is an LTS version of the Drupal 7 version of UA Quickstart, incorporating 
  LTS security updates provided by Tag1 (https://d7es.tag1.com/announcements)
* When updates are available for a module that we use, Tag1 will send an email
  notification. (the d7es-update-notify Pantheon site has all modules enabled 
  and is configured so that Tag1's notifications are sent to ServiceNow and 
  create tickets for our team)
* To apply updates, do NOT just overwrite the current version of a module with 
  that Quickstart depends on. If Tag1's notification email provides a patchfile
  for their fix, just apply that.
* If a patchfile is NOT provided for the fix:
  - download the latest version of the affected module from Tag1
  - check which version of the module is in this repo. download a fresh copy of 
    this version of the module from drupal.org
  - in terminal, use diff to compare the two versions of the module and use the
    resulting differences to patch this repository.
