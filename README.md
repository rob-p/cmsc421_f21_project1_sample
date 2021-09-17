# cmsc421_f21_project1_sample

Some sample input/output for project 1

The output in `test_output` was created by running : `./randsim 100 5 0.2 test_input/sars_cov2.fa sample_reads`
where `randsim` is the name of the simulator you create in part (a).  Note, `randsim` is not provided in this 
repository for obvious reasons.  Further, while your statistics should be similar, the `var_depth` and
`num_islands` values may be somewhat different given that each simulation is _random_.

The output `test_output/sample_reads_recon_naive.fa` was created by running `./scsbler test_output/sample_reads.fa 20 test_output/sample_reads_recon_naive.fa`.
This was created by a version of the greedy SCS algorithm that relies on the rules discussed in the specification to break ties.  In this case, the number of reconstructed strings equals the number of islands, and each reconstructed string is a substring of the original input genome.  This won't always be the case, of course, but it should be for your solution on this test data.  While the order of your output need not be identical to this file, **the contents of the reconstructed strings you output should be**.
