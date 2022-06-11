<?php
include('Controller.php');

/** 
	*@MigrationController Controller class
*/

class MigrationController extends Controller{
	/**
		 *Default Controller properties.. 
		*
		*@Access parameters with $this->parameter if this controller handles a parameterized route 
	*/
	public $request,$method,$files;

	/**
		*@Your methods here
	*/
	public function main() {
		/** 
			* @your code here
		*/
		
		foreach(glob('app/migrations/*.php') as $file) {
			include($file);
		}
		
	}

}
?>
