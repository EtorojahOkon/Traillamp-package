8th Jun,2022 09:13pm RuntimeException: Failed to write cache file "./app/server/cache/10/101870ddecd9af07fd69b93104cde11bb59491208180c7a2e50f780c92d8cf33.php". in C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Cache\FilesystemCache.php:76Stack trace:#0 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(349): Twig\Cache\FilesystemCache->write('./app/server/ca...', '<?php\n\nuse Twig...')#1 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(309): Twig\Environment->loadTemplate('__TwigTemplate_...', 'welcome.html')#2 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(277): Twig\Environment->load('welcome.html')#3 C:\xampp\htdocs\traillamp\app\controllers\Controller.php(46): Twig\Environment->render('welcome.html', Array)#4 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(19): Controller->view('welcome', Array)#5 C:\xampp\htdocs\traillamp\app\server\Router.php(245): WelcomeController->main()#6 C:\xampp\htdocs\traillamp\app\server\Router.php(140): Router->controller_routing('WelcomeControll...', 'GET', false)#7 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#8 C:\xampp\htdocs\traillamp\app\server\Router.php(283): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#9 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#10 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#11 {main}
8th Jun,2022 09:14pm Twig\Error\LoaderError: Unable to find template "welcome.lamp.txt" (looked into: ./app/views). in C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Loader\FilesystemLoader.php:227Stack trace:#0 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Loader\FilesystemLoader.php(131): Twig\Loader\FilesystemLoader->findTemplate('welcome.lamp.tx...')#1 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(261): Twig\Loader\FilesystemLoader->getCacheKey('welcome.lamp.tx...')#2 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(309): Twig\Environment->getTemplateClass('welcome.lamp.tx...')#3 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(277): Twig\Environment->load('welcome.lamp.tx...')#4 C:\xampp\htdocs\traillamp\app\controllers\Controller.php(46): Twig\Environment->render('welcome.lamp.tx...', Array)#5 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(19): Controller->view('welcome', Array)#6 C:\xampp\htdocs\traillamp\app\server\Router.php(245): WelcomeController->main()#7 C:\xampp\htdocs\traillamp\app\server\Router.php(140): Router->controller_routing('WelcomeControll...', 'GET', false)#8 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#9 C:\xampp\htdocs\traillamp\app\server\Router.php(283): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#10 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#11 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#12 {main}
8th Jun,2022 09:20pm Twig\Error\SyntaxError: Unexpected token "end of print statement" of value "". in C:\xampp\htdocs\traillamp\app\views\welcome.html:10Stack trace:#0 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\ExpressionParser.php(175): Twig\ExpressionParser->parsePrimaryExpression()#1 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\ExpressionParser.php(70): Twig\ExpressionParser->getPrimary()#2 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Parser.php(127): Twig\ExpressionParser->parseExpression()#3 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Parser.php(83): Twig\Parser->subparse(NULL, false)#4 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(488): Twig\Parser->parse(Object(Twig\TokenStream))#5 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(516): Twig\Environment->parse(Object(Twig\TokenStream))#6 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(348): Twig\Environment->compileSource(Object(Twig\Source))#7 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(309): Twig\Environment->loadTemplate('__TwigTemplate_...', 'welcome.html')#8 C:\xampp\htdocs\traillamp\app\controllers\Controller.php(46): Twig\Environment->load('welcome.html')#9 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(19): Controller->view('welcome')#10 C:\xampp\htdocs\traillamp\app\server\Router.php(245): WelcomeController->main()#11 C:\xampp\htdocs\traillamp\app\server\Router.php(140): Router->controller_routing('WelcomeControll...', 'GET', false)#12 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#13 C:\xampp\htdocs\traillamp\app\server\Router.php(283): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#14 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#15 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#16 {main}
8th Jun,2022 09:20pm Twig\Error\SyntaxError: Unexpected token "end of print statement" of value "". in C:\xampp\htdocs\traillamp\app\views\welcome.html:10Stack trace:#0 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\ExpressionParser.php(175): Twig\ExpressionParser->parsePrimaryExpression()#1 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\ExpressionParser.php(70): Twig\ExpressionParser->getPrimary()#2 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Parser.php(127): Twig\ExpressionParser->parseExpression()#3 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Parser.php(83): Twig\Parser->subparse(NULL, false)#4 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(488): Twig\Parser->parse(Object(Twig\TokenStream))#5 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(516): Twig\Environment->parse(Object(Twig\TokenStream))#6 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(348): Twig\Environment->compileSource(Object(Twig\Source))#7 C:\xampp\htdocs\traillamp\vendor\twig\twig\src\Environment.php(309): Twig\Environment->loadTemplate('__TwigTemplate_...', 'welcome.html')#8 C:\xampp\htdocs\traillamp\app\controllers\Controller.php(46): Twig\Environment->load('welcome.html')#9 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(19): Controller->view('welcome')#10 C:\xampp\htdocs\traillamp\app\server\Router.php(245): WelcomeController->main()#11 C:\xampp\htdocs\traillamp\app\server\Router.php(140): Router->controller_routing('WelcomeControll...', 'GET', false)#12 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#13 C:\xampp\htdocs\traillamp\app\server\Router.php(283): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#14 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#15 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#16 {main}
9th Jun,2022 12:42pm No Middleware status response 1 in <b>FormMiddleware</b> class method <b>main</b>. Remember to return true in the callback function.  Stack trace: <b>./app/middlewares/FormMiddleware.php</b>
9th Jun,2022 12:45pm No Middleware status response 1 in <b>FormMiddleware</b> class method <b>main</b>. Remember to return true in the callback function.  Stack trace: <b>./app/middlewares/FormMiddleware.php</b>
9th Jun,2022 12:46pm No Middleware status response 1 in <b>FormMiddleware</b> class method <b>main</b>. Remember to return true in the callback function.  Stack trace: <b>./app/middlewares/FormMiddleware.php</b>
9th Jun,2022 12:46pm No Middleware status response 1 in <b>FormMiddleware</b> class method <b>main</b>. Remember to return true in the callback function.  Stack trace: <b>./app/middlewares/FormMiddleware.php</b>
9th Jun,2022 12:50pm No Middleware status response 1 in <b>FormMiddleware</b> class method <b>main</b>. Remember to return true in the callback function.  Stack trace: <b>./app/middlewares/FormMiddleware.php</b>
9th Jun,2022 12:51pm No Middleware status response 1 in <b>FormMiddleware</b> class method <b>main</b>. Remember to return true in the callback function.  Stack trace: <b>./app/middlewares/FormMiddleware.php</b>
9th Jun,2022 08:34pm Database connection failedSQLSTATE[HY000] [2002] No connection could be made because the target machine actively refused it.
9th Jun,2022 08:34pm Database connection failedSQLSTATE[HY000] [1049] Unknown database 'testd'
9th Jun,2022 08:34pm Database connection failedSQLSTATE[HY000] [1049] Unknown database 'testd'
9th Jun,2022 08:34pm Database connection failedSQLSTATE[HY000] [1049] Unknown database 'testd'
9th Jun,2022 08:34pm Database connection failedSQLSTATE[HY000] [1049] Unknown database 'testd'
9th Jun,2022 08:35pm Error: Cannot access private property Database::$db in C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php:21Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#1 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#2 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#3 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#4 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#5 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#6 {main}
9th Jun,2022 08:35pm Error: Object of class PDO could not be converted to string in C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php:21Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#1 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#2 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#3 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#4 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#5 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#6 {main}
9th Jun,2022 08:35pm Error: Object of class PDO could not be converted to string in C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php:21Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#1 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#2 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#3 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#4 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#5 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#6 {main}
9th Jun,2022 08:35pm Error: Object of class PDO could not be converted to string in C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php:21Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#1 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#2 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#3 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#4 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#5 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#6 {main}
9th Jun,2022 08:35pm Error: Object of class PDO could not be converted to string in C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php:21Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#1 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#2 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#3 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#4 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#5 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#6 {main}
9th Jun,2022 08:35pm Error: Object of class PDO could not be converted to string in C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php:21Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#1 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#2 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#3 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#4 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#5 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#6 {main}
9th Jun,2022 08:35pm Error: Object of class PDO could not be converted to string in C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php:21Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#1 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#2 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#3 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#4 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#5 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#6 {main}
9th Jun,2022 08:35pm Error: Object of class PDO could not be converted to string in C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php:21Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#1 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#2 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#3 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#4 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#5 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#6 {main}
9th Jun,2022 08:44pm PDOException: SQLSTATE[42000]: Syntax error or access violation: 1064 You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near '' at line 1 in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:44pm PDOException: SQLSTATE[42000]: Syntax error or access violation: 1064 You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near 'test' at line 1 in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:44pm PDOException: SQLSTATE[42000]: Syntax error or access violation: 1064 You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near 'test' at line 1 in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:44pm PDOException: SQLSTATE[42000]: Syntax error or access violation: 1064 You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near 'test' at line 1 in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:44pm PDOException: SQLSTATE[42000]: Syntax error or access violation: 1064 You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near 'test' at line 1 in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:45pm PDOException: SQLSTATE[42S02]: Base table or view not found: 1109 Unknown table 'schematable' in information_schema in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:45pm PDOException: SQLSTATE[42S02]: Base table or view not found: 1109 Unknown table 'schematable' in information_schema in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:45pm PDOException: SQLSTATE[42S02]: Base table or view not found: 1109 Unknown table 'schema_table' in information_schema in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:45pm PDOException: SQLSTATE[42S02]: Base table or view not found: 1109 Unknown table 'schema_table' in information_schema in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:46pm PDOException: SQLSTATE[42S02]: Base table or view not found: 1146 Table 'test.information_schema' doesn't exist in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:46pm PDOException: SQLSTATE[42S02]: Base table or view not found: 1146 Table 'test.information_schema' doesn't exist in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:46pm PDOException: SQLSTATE[42S02]: Base table or view not found: 1146 Table 'test.information_schema' doesn't exist in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:46pm PDOException: SQLSTATE[42S02]: Base table or view not found: 1146 Table 'test.information_schema' doesn't exist in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 08:46pm PDOException: SQLSTATE[42S02]: Base table or view not found: 1146 Table 'test.information_schema' doesn't exist in C:\xampp\htdocs\traillamp\app\server\Migrations.php:20Stack trace:#0 C:\xampp\htdocs\traillamp\app\server\Migrations.php(20): PDOStatement->execute()#1 C:\xampp\htdocs\traillamp\app\controllers\WelcomeController.php(21): DatabaseSchema->migrate()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(248): WelcomeController->main()#3 C:\xampp\htdocs\traillamp\app\server\Router.php(141): Router->controller_routing('WelcomeControll...', 'GET', false)#4 C:\xampp\htdocs\traillamp\app\server\Router.php(39): Router->middleware_routing('WelcomeMiddlewa...', 'GET', false, 'WelcomeControll...')#5 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/', 'WelcomeControll...', 'WelcomeMiddlewa...', 'GET')#6 C:\xampp\htdocs\traillamp\app\routes\routes.php(7): Router::get('/', 'WelcomeControll...', 'WelcomeMiddlewa...')#7 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#8 {main}
9th Jun,2022 10:11pm Invalid loadModel parameter in Controller method for route /traillamp/ Expects Model@method
9th Jun,2022 10:12pm No such Model class Test file found! Please create a file Test.php in app/models/
9th Jun,2022 10:12pm No such Model class Test file found! Please create a file Test.php in app/models/
9th Jun,2022 10:14pm No such  method <b>dmain</b> found in class <b>TestModel</b> Ensure your Model class method matches that specified in the loadModel method call
9th Jun,2022 10:16pm No such  method <b>dmain</b> found in class <b>TestModel</b> Ensure your Model class method matches that specified in the loadModel method call
9th Jun,2022 10:30pm No such Controller class <b>Migrations</b> file found! Please create a file Migrations.php in <b>app/contollers/</b>
9th Jun,2022 10:32pm Error: Class 'ActionSchema' not found in C:\xampp\htdocs\traillamp\app\migrations\schema.php:8Stack trace:#0 C:\xampp\htdocs\traillamp\app\controllers\Migrations.php(19): include()#1 C:\xampp\htdocs\traillamp\app\server\Router.php(248): Migrations->main()#2 C:\xampp\htdocs\traillamp\app\server\Router.php(36): Router->controller_routing('Migrations@main', 'GET', false)#3 C:\xampp\htdocs\traillamp\app\server\Router.php(286): Router->route('/migrations', 'Migrations@main', false, 'GET')#4 C:\xampp\htdocs\traillamp\app\routes\routes.php(8): Router::get('/migrations', 'Migrations@main')#5 C:\xampp\htdocs\traillamp\index.php(14): include('C:\\xampp\\htdocs...')#6 {main}
10th Jun,2022 07:58am Unknown error: Could not call <b>TestModel</b> class method <b>main</b>. Try refreshing your page or check your code again
10th Jun,2022 07:58am Unknown error: Could not call <b>TestModel</b> class method <b>main</b>. Try refreshing your page or check your code again
10th Jun,2022 07:58am Unknown error: Could not call <b>TestModel</b> class method <b>main</b>. Try refreshing your page or check your code again
10th Jun,2022 07:58am Unknown error: Could not call <b>TestModel</b> class method <b>main</b>. Try refreshing your page or check your code again
10th Jun,2022 07:58am Unknown error: Could not call <b>TestModel</b> class method <b>main</b>. Try refreshing your page or check your code again
10th Jun,2022 08:34am No such Middleware class WelcomeMiddleware file found! Please create a file WelcomeMiddleware.php in app/middlewares/
10th Jun,2022 08:38am view method expects parameter 2 to be an array.  found instead. Check Controller method for this route /traillamp/
10th Jun,2022 08:38am view method expects parameter 2 to be an array.  found instead. Check Controller method for this route /traillamp/
10th Jun,2022 08:39am view method expects parameter 2 to be an array.  found instead. Check Controller method for this route /traillamp/
10th Jun,2022 08:39am view method expects parameter 2 to be an array.  found instead. Check Controller method for this route /traillamp/
10th Jun,2022 08:39am view method expects parameter 2 to be an array.  found instead. Check Controller method for this route /traillamp/
10th Jun,2022 08:39am view method expects parameter 2 to be an array.  found instead. Check Controller method for this route /traillamp/
10th Jun,2022 08:39am view method expects parameter 2 to be an array.  found instead. Check Controller method for this route /traillamp/
10th Jun,2022 08:39am view method expects parameter 2 to be an array.  found instead. Check Controller method for this route /traillamp/
10th Jun,2022 08:39am view method expects parameter 2 to be an array. Check Controller method for this route /traillamp/
10th Jun,2022 08:40am view method expects parameter 2 to be an array. Check Controller method for this route <b>/traillamp/</b>