# Ding event subscriptions

This modules add "subscribe" button on events list page,
click on button user will be able to download a file in .ics format,
which could be imported in calendar application like outlook, google calendar, etc..

# Requirements:
No special requirements.

# Configuration:
Module should add "subscribe" button automatically to events list pages,
but it could be, that existing pages will change machine name,
if so you can add 'Subscribe to events button' plugin manually to event pages.

**IMPORTANT**: If after module enabling, the **field_ding_event_subscribe** field is missing, you have to revert first **ding_event** feature and after **ding_event_subscribe** feature.
