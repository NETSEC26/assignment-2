
/* Golang function info: {@address 00e579ac "Flags: []"}
   Golang source: salat/screenshot/screenshot.go:50
   Golang stacktrace signature: func salat/screenshot.Capture(4, 4, 4, 4, 1) ??? */

void salat/screenshot::salat_screenshot_Capture
               (int param_1,int param_2,uint param_3,int param_4,char param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  __uintptr args;
  multireturn_uintptr_uintptr_syscall_Errno_ mVar3;
  runtime__defer *prVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int in_FS_OFFSET;
  runtime *unaff_retaddr;
  int x;
  int iVar10;
  int iVar11;
  int *piVar12;
  int y;
  undefined4 *puVar13;
  int iVar14;
  int *in_stack_fffffe70;
  int in_stack_fffffe74;
  char local_17c;
  undefined4 local_168;
  uint local_164;
  int local_160;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined4 local_158;
  undefined4 local_154;
  int local_140;
  int local_13c;
  int local_138;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  int local_124;
  undefined1 local_120 [16];
  undefined4 local_110;
  int local_10c;
  func__ local_108;
  int local_104;
  int local_100;
  func__ local_fc;
  int local_f8;
  func__ local_f4;
  int local_f0;
  func__ local_ec;
  int local_e8;
  func__ local_e4;
  int local_e0;
  func__ local_dc;
  uintptr local_d8;
  int local_d4;
  undefined1 *local_d0;
  runtime__defer local_cc;
  runtime__defer local_b4;
  runtime__defer local_9c;
  runtime__defer local_84;
  runtime__defer local_6c;
  runtime__defer local_54;
  runtime__defer local_3c;
  undefined1 *local_24;
  int *local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_4;
  
  while (local_120 <= *(undefined1 **)(**(int **)(in_FS_OFFSET + DAT_00f2a8c0) + 8)) {
    local_4 = (undefined4 *)0x6e8a87;
    runtime::runtime_morestack_noctxt(unaff_retaddr);
  }
  local_3c.fn = (func__ *)&PTR_salat_screenshot_Capture_func1_00b81b7c;
  prVar4 = &local_3c;
  runtime::runtime_deferprocStack(prVar4);
  if (prVar4 != (runtime__defer *)0x0) {
    runtime::runtime_deferreturn();
    return;
  }
  if ((int)param_3 < 0) {
    uVar5 = param_3;
    uVar6 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = param_3;
  }
  if (param_4 < 0) {
    iVar10 = param_4;
    iVar14 = 0;
  }
  else {
    iVar10 = 0;
    iVar14 = param_4;
  }
  salat_screenshot_CreateImage(uVar5,iVar10,uVar6,iVar14);
  if (in_stack_fffffe74 != 0) {
    runtime::runtime_deferreturn();
    return;
  }
  iVar10 = 0;
  iVar14 = 0;
  local_20 = in_stack_fffffe70;
  mVar3 = syscall::syscall_Syscall(DAT_00f2a788,0,0,0,0);
  github.com/lxn/win::github_com_lxn_win_GetDC(mVar3.~r0);
  if (iVar10 == 0) {
    puVar13 = runtime::runtime_newobject(&errors::errors_errorString___Struct_type.Type);
    puVar13[1] = 0xc;
    *puVar13 = &DAT_009743da;
    runtime::runtime_deferreturn();
    return;
  }
  local_dc.F = salat_screenshot_Capture_deferwrap1;
  local_54.fn = &local_dc;
  iVar11 = iVar10;
  local_140 = iVar10;
  local_d8 = mVar3.~r0;
  local_d4 = iVar10;
  runtime::runtime_deferprocStack(&local_54);
  if (iVar10 != 0) {
    runtime::runtime_deferreturn();
    return;
  }
  github.com/lxn/win::github_com_lxn_win_CreateCompatibleDC(local_140);
  if (iVar11 == 0) {
    puVar13 = runtime::runtime_newobject(&errors::errors_errorString___Struct_type.Type);
    puVar13[1] = 0x19;
    *puVar13 = &DAT_0097ffa1;
    runtime::runtime_deferreturn();
    return;
  }
  local_e4.F = salat_screenshot_Capture_deferwrap2;
  local_6c.fn = &local_e4;
  iVar10 = iVar11;
  local_e0 = iVar11;
  runtime::runtime_deferprocStack(&local_6c);
  if (iVar10 != 0) {
    runtime::runtime_deferreturn();
    return;
  }
  iVar10 = param_4;
  github.com/lxn/win::github_com_lxn_win_CreateCompatibleBitmap(local_140,param_3);
  if (iVar14 == 0) {
    puVar13 = runtime::runtime_newobject(&errors::errors_errorString___Struct_type.Type);
    puVar13[1] = 0x1d;
    *puVar13 = &DAT_00983ad3;
    runtime::runtime_deferreturn();
    return;
  }
  local_ec.F = salat_screenshot_Capture_deferwrap3;
  local_84.fn = &local_ec;
  local_10c = iVar14;
  local_e8 = iVar14;
  runtime::runtime_deferprocStack(&local_84);
  if (iVar14 != 0) {
    runtime::runtime_deferreturn();
    return;
  }
  runtime::runtime_duffzero_0046dcd6(&local_168,0);
  local_168 = 0x28;
  local_15c = 1;
  local_15a = 0x20;
  local_164 = param_3;
  local_160 = -param_4;
  local_158 = 0;
  local_154 = 0;
  uVar5 = (uint)((ulong)param_3 * 0x20);
  iVar14 = (int)((ulong)param_3 * 0x20 >> 0x20) + ((int)param_3 >> 0x1f) * 0x20;
  uVar6 = (uint)((int)(iVar14 + (uint)(0xffffffe0 < uVar5)) >> 0x1f) >> 0x1b;
  uVar7 = uVar6 + uVar5;
  puVar8 = (undefined1 *)
           ((uVar7 + 0x1f >> 5 |
            (iVar14 + (uint)CARRY4(uVar6,uVar5) + (uint)(0xffffffe0 < uVar7)) * 0x8000000) * 4 *
           param_4);
  puVar9 = puVar8;
  github.com/lxn/win::github_com_lxn_win_GlobalAlloc(2);
  local_f4.F = salat_screenshot_Capture_deferwrap4;
  local_9c.fn = &local_f4;
  iVar14 = iVar10;
  local_f0 = iVar10;
  runtime::runtime_deferprocStack(&local_9c);
  if (puVar8 != (undefined1 *)0x0) {
    runtime::runtime_deferreturn();
    return;
  }
  github.com/lxn/win::github_com_lxn_win_GlobalLock(iVar10);
  local_fc.F = salat_screenshot_Capture_deferwrap5;
  local_b4.fn = &local_fc;
  local_f8 = iVar10;
  local_24 = puVar9;
  runtime::runtime_deferprocStack(&local_b4);
  if (puVar9 != (undefined1 *)0x0) {
    runtime::runtime_deferreturn();
    return;
  }
  github.com/lxn/win::github_com_lxn_win_SelectObject(iVar11,local_10c);
  if (iVar14 == 0) {
    puVar13 = runtime::runtime_newobject(&errors::errors_errorString___Struct_type.Type);
    puVar13[1] = 0x13;
    *puVar13 = &DAT_00979db2;
    runtime::runtime_deferreturn();
    return;
  }
  local_108.F = salat_screenshot_Capture_deferwrap6;
  local_cc.fn = &local_108;
  prVar4 = &local_cc;
  local_104 = iVar11;
  local_100 = iVar14;
  runtime::runtime_deferprocStack(prVar4);
  if (prVar4 != (runtime__defer *)0x0) {
    runtime::runtime_deferreturn();
    return;
  }
  iVar10 = param_2;
  github.com/lxn/win::github_com_lxn_win_BitBlt
            (iVar11,0,0,param_3,param_4,local_140,param_1,param_2,&DAT_00cc0020);
  if (local_17c == '\0') {
    puVar13 = runtime::runtime_newobject(&errors::errors_errorString___Struct_type.Type);
    puVar13[1] = 0xd;
    *puVar13 = &DAT_00974fba;
    runtime::runtime_deferreturn();
    return;
  }
  if (param_5 != '\0') {
    runtime::runtime_duffzero_0046dcdb(&local_134,0);
    local_134 = 0x14;
    local_4 = &local_134;
    piVar12 = runtime::runtime_newobject(&_1_uintptr___Array_type.Type);
    *piVar12 = (int)local_4;
    args.len = 1;
    args.array = (uintptr *)piVar12;
    args.cap = 1;
    mVar3 = syscall::syscall_SyscallN(DAT_00f2a798,args);
    if ((mVar3.~r0 != 0) && (local_130 == 1)) {
      runtime::runtime_duffzero_0046dcdb(local_120,0);
      github.com/lxn/win::github_com_lxn_win_GetIconInfo(local_12c,local_120);
      local_138 = local_128 - param_1;
      local_13c = local_124 - param_2;
      runtime::runtime_duffzero_0046dcda(local_1c,0);
      github.com/lxn/win::github_com_lxn_win_GetObject(local_110,0x18,local_1c);
      iVar10 = 0;
      github.com/lxn/win::github_com_lxn_win_DrawIconEx
                (iVar11,local_138,local_13c,local_12c,local_18,local_14,0,0,3);
    }
  }
  x = local_140;
  y = local_10c;
  github.com/lxn/win::github_com_lxn_win_GetDIBits
            (local_140,local_10c,0,param_4,local_24,&local_168,0);
  if (iVar10 == 0) {
    puVar13 = runtime::runtime_newobject(&errors::errors_errorString___Struct_type.Type);
    puVar13[1] = 0x10;
    *puVar13 = &DAT_00977457;
    runtime::runtime_deferreturn();
    return;
  }
  uVar5 = 0;
  puVar8 = local_24;
  do {
    uVar6 = param_3;
    if (param_4 < 1) {
      runtime::runtime_deferreturn();
      return;
    }
    for (; 0 < (int)uVar6; uVar6 = uVar6 - 1) {
      uVar7 = local_20[1];
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        runtime::runtime_panicIndex(x,y);
      }
      iVar10 = *local_20;
      *(undefined1 *)(iVar10 + uVar5) = puVar8[2];
      local_d0 = puVar8;
      if (uVar7 <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
        runtime::runtime_panicIndex(x,y);
      }
      *(undefined1 *)(uVar5 + 1 + iVar10) = uVar2;
      if (uVar7 <= uVar5 + 2) {
                    /* WARNING: Subroutine does not return */
        runtime::runtime_panicIndex(x,y);
      }
      *(undefined1 *)(uVar5 + 2 + iVar10) = uVar1;
      if (uVar7 <= uVar5 + 3) {
                    /* WARNING: Subroutine does not return */
        runtime::runtime_panicIndex(x,y);
      }
      *(undefined1 *)(uVar5 + 3 + iVar10) = 0xff;
      uVar5 = uVar5 + 4;
      puVar8 = puVar8 + 4;
    }
    param_4 = param_4 + -1;
  } while( true );
}

