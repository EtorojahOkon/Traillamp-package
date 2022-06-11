<?php
/**
    * All routes go here
    *
    * @$router::<request_type>(<path>, <controllerClass@method>, <Middlewareclass@method> );
*/
    $router::get("/", "WelcomeController@main");
    $router::get("/migrations/", "MigrationController@main"); //handles migrations. Comment if not needed
    
?>