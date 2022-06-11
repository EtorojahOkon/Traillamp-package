# Traillamp
A lightweight, easy to use, MVC Framework for Php

## What's New in V1.1.0
- Better Url routing
- Support for additional request types
- Better error handling
- Robust Templating Engine
- Middlewares
- Additional Console Commands
- Support for all web servers
- Additional utilities
- Migration Schemas
- Flexible Models

## Documentation
### Installation
- ####  Repository
Clone this directory using either git commands or download zip file
- ####  Composer
Run the following command to install Traillamp via composer
```php
    composer require etorojah/traillamp
```
Find the traillamp folder in the composer vendor folder
Move to final destination and rename.

### Usage
For local development, Any server environment application like Xampp, Lamp or Laragon can run Traillamp.
First configure environment variables in app/env/.env file and then launch the application

### .env file Parameters
- **APP_KEY**: A unique application identifier.
- **APP_NAME**: Your application/API name.
- **APP_VERSION**: Your application or API version.
- **DATABASE_HOST**: Your database connection host, defaults to localhost.
- **DATABASE_USER**: Your database connection username, default is root.
- **DATABASE_PASSWORD**: Your database connection password.
- **DATABASE_NAME**: The database name .
- **ENCRYPTION_KEY**: A random string used as key for encryption/decryption.
-  **MAIL_HOST**: Mail host.
-  **MAIL_PORT**: Port to be used to send mails from the application.
-  **MAIL_USERNAME**: Mail username.
-  **MAIL_PASSWORD**: Mail username password.
-  **MAIL_SENTFROM**: Describes Mail sources e.g The Traillamp Support Desk.
-  **SUBDOMAIN**: When true, development server is set up for subdomains or folder paths (https://example.com/traillamp/, https://traillamp.example.com, http://localhost/traillamp)

If you are deploying the contents directly to the server root(htdocs,www,public_html), set this value to false.

### Folder structure
<!--Image here-->
- **console.exe**: Run Traillamp console commands with the console executable.
- **app**: Contains all resources to be worked with.
- **app/controllers/**: Application controllers are found here.
- **app/env/**: .env file is located here. Holds environment variables.
- **app/errors/**: Holds the error log file for error logging and reference purposes.
- **app/middlewares/**: Application middlewares are found here.
- **app/migrations/**: Holds Database migration schema files.
- **app/models/**: Application Models are found here.
- **app/public/**: Contains files referenced in views such as style sheetes, scripts and other files.
- **app/routes/**: Holds all route and routing files.
- **app/server/**: Default application codebase is stored here. Editing any file here may break your application.
- **app/utilities/**: Holds Mailing utility files.
- **app/views/**: View subfolders and files are found here

### Routing
- #### Basic Routing
All route files are found in **app/routes/** directory.
A simple route without a middleware can be written as follows.
```php
   $router::get("/", "WelcomeController@main");
```
The first parameter is the relative route path or url

The second parameter is the Controller name and the controller method separated by an @ sign.

Routes can also be called with function callbacks. Eg

```php
     $router::get("/", function(){
        echo "ok";
    });
```
Routes can be called with Middleware specified for the route as the third parameter.
A simple route with a middleware can be written as follows.
```php
   $router::get("/", "WelcomeController@main", "WelcomeMiddlewarre@main");
```
Or with a function using,
```php
    $router::get("/", "WelcomeController@main", function(){
        echo "ok";
        return true;
    });
```
Remember to use the appropriate request method in your routes file.

- #### Parameterized routes
Routes with parameters are specified with the parameter names in  curly brackets.
```php
  $router::get("/about/{name}", "Controller@Main");
```

Thus visiting https://url/about/Etorojah will call the Main method in the Controller class with the name parameter assigned the value Etorojah.

Multiple parameters are supported. To get the values of the parameters simply use 
```php
    $this->parameter 
``` 
example
```php
    echo $this->name;
```
in the Middleware or Controller method.

A maximum of 4 parameters can be passed to a callback function. 

You should use Controller/Middleware class methods for routes with more than 4 parameters.

You can pass parameters to Controller/Middleware callback functions as shown below:
```php
    $router::get("/about/{name}", "WelcomeController@main", function($name){
        echo $name;
        return true;
    });
```
- #### Supported Requests
- GET
- POST
- PUT
- PATCH
- HEAD
- DELETE

- #### Multiple route files
To create a route file, simply run the command below in the Traillamp console
```
    create router-file <filename>
```
example
```
    create router-file admin_routes
```

### Controllers
Controllers form the backbone of your application. Controllers are found in the **app/controllers/** directory.

All Controllers inherit the default class **Controller**'s properties and methods in **Controller.php** file.

- #### Creating a Controller
To create a Controller, run the following command on the Traillamp console
```
    create controller <name>
```
example
```
    create controller Test
```
The above creates a Test.php Controller file in the **app/controllers/** directory.

Controller file name and classnames must be the same. 

You can now add the created controller to any route of your choice.

- #### Default Properties and Methods
The **request** property holds request parameters(array) for the given route and request type.
This can be used to get form values and other request parameters.

Example, using a route with a POST request which handles a form:
```php
    $name = $this->request["name"];

```
The **method** property holds the request type which may be useful in a code block.
Example
```php
    $name = $this->method;
    //returns POST for a POST request method etc

```

The **files** property holds the files sent as a request parameter to that route.
Example
```php
    $file = $this->files["photo"];
    
```
As shown earlier, route parameters can also be gotten using $this->parameter in controllers and middlewares.

- #### Inherited Methods
Inherited methods can be accessed from any Controller which extends the Parent Controller class.

They are listed below:

##### Rendering a View: **view(view, parameters)**
To render a view, use the inherited class method view which carries two parameters,

- view: string, name of the view(without file extension) .

- parameters: array, values to pass to view templating engine.

The 'parameters' parameter is optional.
Example:
- **Without parameters:**
```php
    $this->view("welcome");

    //subfolder view
    $this->view("includes.header");
```
The above renders a view **welcome.lamp** found in the **app/views** directory and **header.lamp** found in **app/views/includes/** subdirectory.
- **With parameters**
```php
    $this->view("profile", ["name" => "John", "email" => "john@site.io"]);
    
```
The parameters are passed to the templating engine and can be used in the view file.

##### Redirects: **redirect(route)**
To redirect to another route, use the inherited class method redirect which carries one parameter,
- route: string, relative valid url route.
Example
```php
    $this->redirect("/about/me");
    
```

##### Encryption: **encrypt(text)**
To encrypt plain text, use the inherited class method encrypt which carries one parameter,
- text: string, lain text to encrypt.
Example
```php
    $hash = $this->encrypt("I am Batman");
    echo $hash;
   
```

##### Decryption: **decrypt(hash)**
To encrypt plain text, use the inherited class method decrypt which carries one parameter,
- text: string, lain text to encrypt
Example
```php
    $hash = $this->encrypt("I am Batman");
    $text = $this->decrypt($hash);
    echo $text;
    //returns I am Batman
    
```
Remember to set environment variable, ENCRYPTION_KEY

##### Sending Mails: **sendMail(email, subject, message)**
To send mails, use the inherited class method sendMail which carries three parameters,
- email: string, valid email address.
- subject: string, subject of the message.
- message: string, message body.
Example
```php
    sendMail("john@site.io", "Greetings", "Hello to you");
```
Remember to set all mail environment variables. 

##### Load Models: **loadModel(model)**
To load and get database model results, use the inherited class method loadModel which carries one parameter,
- model, string, in the format Class@method
Example
```php
    $result = loadModel('Users@get_users');
```
Remember to always return model results in model methods.

### Middlewares
Middlewares are found in the **app/middlewares/** directory.

All middlewares inherit the default Middleware class methods.
Middlewares can be used for authentication and much more

- #### Creating Middlewares
To create a Middleware, run the following command on the Traillamp console
```
    create middleware <name>
```
example
```
    create middleware Test
```
The above creates a Test.php Middleware file in the **app/middlewares/** directory.

Middlewares file name and classnames must be the same. 

You can now add the created middleware to any route of your choice.

- #### Default Properties and Methods
Middlewares have same default properties as those in Controllers(See Controllers above).

- #### Inherited Methods
Inherited methods can be accessed from any Middleware which extends the Parent Middleware class.

Middlewares have same inherited methods as those in Controllers(See Controllers above).

All Middlewares should have a **return true** statement. This enables the application to transfer the logic to the controllers.

An exception will be thrown if this is not done.

Example: Using a middleware to check for account type
```php
    $router::get("/accounts/{type}", "WelcomeController@main", function($type){
        if($type !== "user") {
            echo "You are not allowed to access this page";
            exit;
        }

        return true;
    });
```
Same applies in Middleware methods.

### Models
Models interact with the database. They are used to query databases.
All Models inherit the default class **Model**'s properties and methods in **Model.php** file.

- #### Creating a Model
To create a Model, run the following command on the Traillamp console
```
    create model <name>
```
example
```
    create model Test
```
The above creates a Test.php Model file in the **app/models/** directory.

Model file name and classnames must be the same. 

- #### Default Properties and Methods
Models inherit the database connection variable from the Parent Model.

Traillamp uses PDO for database connections and migrations.
For flexibility purpose, however, you can use any other format to do this.

Simply connect to your database in the Model file or create a Database Connection class, include in in model file and use.

**Note:** Model methods must have a return statement. This makes it easy to pass the value to the Controller in the loadModel method.

Example Model method query using PDO
```php
    public function main(){
        try {
            $sql = "SELECT * FROM table_name";
            $stmt = $this->db->prepare($sql);
            $stmt->execute();
            $result = $stmt->setFetchMode(PDO::FETCH_ASSOC);
            return $stmt->fetchAll();
            
        } 
        catch (PDOException $error) {
            die("Error in query:\n".$error->getMessage());
        }
	
    }

```
### Views
Views are found in the **app/views/** directory.
View files have the extension **.lamp**.

- #### Creating a View
To create a View, run the following command on the Traillamp console
```
    create view <name>
```
example
```
    create view profile
```
The above creates a profile.lamp View file in the **app/views/** directory.

- #### Passing Parameters to View
Traillamp uses Twig as its templating Engine.
Twig is easy to use. [Check out Twig's documentation here]().
You can manipulate parameters passed to views from the controller in the view file using Twig's templating syntax.
Example
**In Controller:**
```php
    $this->view('about', ['name' => 'David']);
```
**In View:**
```
    <h5>{{ name }}</h5>
```
Database query results can even be displayed
**In Controller:**
```php
    $result = $this->loadModel('Users@get_users');
    $this->view('about', ['users' => $result]);
```
**In View:**
```
    {% for user in users %}
        <h5>Name: {{ user.name }} </h5> 
    {% else %}
        <h5>No Users found </h5> 
   {% endfor %}
```
- #### Referencing external files
Stylesheets and scripts in **app/public/**  directory can be referenced in views
Example
```html
    <!--Stylesheets-->
    <link rel="stylesheet" href="./app/public/css/styles.css">
    <!--Scripts-->
    <script src="./app/public/js/script.js"></script>
```
Note the relative path **./app/public**

### Utilities
The **mail.html** found in **app/utilities/** file's content can be replaced with your preferred Mail design.

However leave ********** where you want the message body to go into.

### Console Commands
Below is a list of Traillamp's Console Commands. 

You can type --help in the Traillamp's console to see a full list Traillamp's of console commands.
- clear error log | Clears error log file
- view error log | Displays error log
- create controller <name> | Creates a controller with filename and class <name>
- create middleware <name> | Creates a middleware with filename and class <name>
- create model <name> | Creates a model with filename and class <name>
- create view <name> | Creates a view with filename <name>
- create router-file <name> | Creates a router file with filename <name>
- create schema-file <name>  | Creates a migration file <name>
- remove controller <name> | Deletes a controller with filename <name>
- remove middleware <name> | Deletes a middleware with filename <name>
- remove model <name> | Deletes a model with filename <name>
- remove router-file <name> | Deletes a route file with filename <name>
- remove view <name> | Deletes a view with filename <name>

### Migrations
*Warning: This feature is still in development stage.*
Migration schemas can be used to create and modify database and database tables.
Migration schema  files are found in **app/migrations**

- #### Creating Migration Schema Files
To create a schema file, run the following command on the Traillamp console
```
    create schema-file <name>
```
example
```
    create schema-file users
```    
The above creates a file users.php in **app/migrations**.

There are three types of schema Traillamp supports
- DatabaseSchema
- TableSchema
- ActionSchema

To create a schema, create an instance of the type of schema you want with appropriate parameters and call the migrate method of that class.
Example
```php
    //Database schema
    $schema = new DatabaseSchema($parameters);
    $schema->migrate();

```

- #### DatabaseSchema
This class is used to create databases. It carries one parameter, the name of the database to be created.
Example
```php
    //new Database schema
    $dbname = "db_test";
    $schema = new DatabaseSchema($dbname);
    $schema->migrate();

```

- #### TableSchema
This class is used to create tables. It carries two parameters, the name of the table to be created and the table structure.
- name: string, table name
- structure: array, format ["col_name" => ["type" => "", "length" => "", "null" => boolean], ...]
Example:
```php
    //new Table schema
    $tablename = "users";
    $schema = new TableSchema($tablename, [
        "email" => ["type" => "varchar", "length" => "255"], 
        "fullname" => ["type" => "varchar", "length" => "255", "null" => true]
    ]);
    $schema->migrate();

```

**Note:** The id column should not be included in the structure.

- #### ActionSchema
This class is used to modify databases, tables and table columns. It carries one parameter, structure.
- structure: array, format ["action" => "", "target" => "", "target_type" => "", "action_type" => "", "data" => ["data_type" => "", "column" => ""]]

*action:* can be either 'truncate' or 'alter'.
*target_type:* can be either 'database' or 'table'.
*target:* can be either a database or table name.
*action_type:* can be either add, drop or modify.
*data*-*data_type:* any of the database table column data types (varchar, int, date, date-time) etc.
*data*-*column:* table column name.

Example:
```php
    //dropping a database
    $schema = new ActionSchema([
        "action" => "alter", 
        "target" => "db_name",
        "target_type" => "database",
        "action_type" => "drop"
    ]);
    $schema->migrate();

```

```php
    //dropping a table
    $tablename = "users";
    $schema = new ActionSchema([
        "action" => "alter", 
        "target" => $tablename,
        "target_type" => "table",
        "action_type" => "drop"
    ]);
    $schema->migrate();

```

```php
    //truncate a table
    $tablename = "users";
    $schema = new ActionSchema([
        "action" => "truncate", 
        "target" => $tablename,
        "target_type" => "table"
    ]);
    $schema->migrate();

```
Other actions can be achieved by passing the correct parameters.
To migrate a schema file, simply visit **"https://domain.ext/path/migrations/"**

You can change this path in **routes.php** to any path of your choice by changing the path in the line below:
```php
    $router::get("/migrations/", "MigrationController@main");
```
The **MigrationController** class handles migrations hence, the file **MigrationController** in **app/controllers/** should not be deleted unless it would not be used.

*Note* For security purposes, comment or remove the migration path from **routes.php** file when the application has been deployed.


### Error handling
Any error while developing is shown on the screen. The error is also logged into the error_log file for reference purposes.

The error log file can be cleared with the clear error log command

### Issues
If you face parameterized routing conflicts, you can solve this by making one of the conflicting routes unique.
Example
```php
    $router::get("/about/{user}", "AboutController@main");
    $router::get("/profile/{id}", "ProfileController@main");
    //this may create a routing conflict
```
The above can be solved as shown below
```php
    $router::get("/about/{user}", "AboutController@main");
    $router::get("/{id}/profile", "ProfileController@main");
    //routing conflict solved
```
or
```php
    $router::get("/about/{user}/details", "AboutController@main");
    $router::get("/profile/{id}", "ProfileController@main");
    //routing conflict solved
```
Any other issues found, please create an issue.

### Contributing
To contribute to this project, send an email to **etorojahokon100@gmail.com** or call **+234 803 264 5840**


