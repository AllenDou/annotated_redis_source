SIZE_CLASS(0, 8, 8) SIZE_CLASS(1, 8, 16) SIZE_CLASS(2, 16, 32) SIZE_CLASS(3, 16, 48) SIZE_CLASS(4, 16, 64) SIZE_CLASS(5, 16, 80) SIZE_CLASS(6, 16, 96) SIZE_CLASS(7, 16, 112) SIZE_CLASS(8, 16, 128) SIZE_CLASS(9, 32, 160) SIZE_CLASS(10, 32, 192) SIZE_CLASS(11, 32, 224) SIZE_CLASS(12, 32, 256) SIZE_CLASS(13, 64, 320) SIZE_CLASS(14, 64, 384) SIZE_CLASS(15, 64, 448) SIZE_CLASS(16, 64, 512) SIZE_CLASS(17, 128, 640) SIZE_CLASS(18, 128, 768) SIZE_CLASS(19, 128, 896) SIZE_CLASS(20, 128, 1024) SIZE_CLASS(21, 256, 1280) SIZE_CLASS(22, 256, 1536) SIZE_CLASS(23, 256, 1792) SIZE_CLASS(24, 256, 2048) SIZE_CLASS(25, 512, 2560) SIZE_CLASS(26, 512, 3072) SIZE_CLASS(27, 512, 3584)

bin_info = &arena_bin_info[0]; bin_info->reg_size = 8; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[1]; bin_info->reg_size = 16; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[2]; bin_info->reg_size = 32; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[3]; bin_info->reg_size = 48; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[4]; bin_info->reg_size = 64; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[5]; bin_info->reg_size = 80; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[6]; bin_info->reg_size = 96; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[7]; bin_info->reg_size = 112; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[8]; bin_info->reg_size = 128; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[9]; bin_info->reg_size = 160; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[10]; bin_info->reg_size = 192; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[11]; bin_info->reg_size = 224; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[12]; bin_info->reg_size = 256; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[13]; bin_info->reg_size = 320; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[14]; bin_info->reg_size = 384; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[15]; bin_info->reg_size = 448; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[16]; bin_info->reg_size = 512; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[17]; bin_info->reg_size = 640; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[18]; bin_info->reg_size = 768; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[19]; bin_info->reg_size = 896; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[20]; bin_info->reg_size = 1024; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[21]; bin_info->reg_size = 1280; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[22]; bin_info->reg_size = 1536; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[23]; bin_info->reg_size = 1792; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[24]; bin_info->reg_size = 2048; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[25]; bin_info->reg_size = 2560; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[26]; bin_info->reg_size = 3072; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);
bin_info = &arena_bin_info[27]; bin_info->reg_size = 3584; prev_run_size = bin_info_run_size_calc(bin_info, prev_run_size); bitmap_info_init(&bin_info->bitmap_info, bin_info->nregs);


