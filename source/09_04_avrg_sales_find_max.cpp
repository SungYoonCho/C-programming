int max_sales_day(int sun, int mon, int tue, int wed, int thu,
	int fri, int sat) {
	int max_val = sun, day = 1;

	if (max_val < mon) {
		max_val = mon; day = 2;
	}
	if (max_val < tue) {
		max_val = tue; day = 3;
	}
	if (max_val < wed) {
		max_val = wed; day = 4;
	}
	if (max_val < thu) {
		max_val = thu; day = 5;
	}
	if (max_val < fri) {
		max_val = fri; day = 6;
	}
	if (max_val < sat) {
		max_val = sat; day = 7;
	}
	return day;
}