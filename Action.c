//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Navigate");
	truclient_step("1", "Navigate to 'www.advantageonlineshopping.com'", "snapshot=Action_1.inf");
	lr_end_transaction("Navigate",0);
	truclient_step("2", "Click on SPEAKERS link", "snapshot=Action_2.inf");
	truclient_step("3", "Click on image (1) image", "snapshot=Action_3.inf");
	lr_start_transaction("AddtoCart");
	truclient_step("4", "Click on ADD TO CART button", "snapshot=Action_4.inf");
	lr_end_transaction("AddtoCart",0);
	truclient_step("5", "Click on HOME link", "snapshot=Action_5.inf");

	return 0;
}
