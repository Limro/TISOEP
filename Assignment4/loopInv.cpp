{
	assert m == m0;
	int i;
	assert m == m0;
	for(i=0; i<k; i++) {
		m = m + x;
		invariant (i <= k /\ m == m0 + (x * k));
	}
	assert m == m0 + (x * k);
}