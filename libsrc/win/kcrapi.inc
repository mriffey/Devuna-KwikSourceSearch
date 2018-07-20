! ================================================================================
! Notice : Copyright (C) 2017, Devuna
!          Distributed under the MIT License (https://opensource.org/licenses/MIT)
!
!    This file is part of Devuna-Common (https://github.com/Devuna/Devuna-Common)
!
!    Devuna-Common is free software: you can redistribute it and/or modify
!    it under the terms of the MIT License as published by
!    the Open Source Initiative.
!
!    Devuna-Common is distributed in the hope that it will be useful,
!    but WITHOUT ANY WARRANTY; without even the implied warranty of
!    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
!    MIT License for more details.
!
!    You should have received a copy of the MIT License
!    along with Devuna-Common.  If not, see <https://opensource.org/licenses/MIT>.
! ================================================================================

  OMIT('EndDefine',_WINAPI_)
HANDLE              EQUATE(LONG)
HBRUSH              EQUATE(HANDLE)
HGLOBAL             EQUATE(HANDLE)
HRESULT             EQUATE(HANDLE)
HWND                EQUATE(HANDLE)
DWORD               EQUATE(LONG)
COLORREF            EQUATE(LONG)
LPARAM              EQUATE(LONG)
  EndDefine

kcr_CHOOSECOLOR GROUP,TYPE
lStructSize         DWORD
hwndOwner           HWND
hInstance           HWND
rgbResult           COLORREF
lpCustColors        LONG   !*COLORREF
Flags               DWORD
lCustData           LPARAM
lpfnHook            LONG   !*LPCCHOOKPROC
lpTemplateName      LONG   !*LPCSTR
                END

kcr_RECT        GROUP,TYPE
left                SIGNED
top                 SIGNED
right               SIGNED
bottom              SIGNED
                END

kcr_SECURITY_ATTRIBUTES GROUP,TYPE
nLength                     LONG
lpSecurityDescriptor        LONG
bInheritHandle              BOOL
                        END
