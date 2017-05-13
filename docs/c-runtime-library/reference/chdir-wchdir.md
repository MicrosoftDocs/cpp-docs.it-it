---
title: _chdir, _wchdir | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wchdir
- _chdir
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- tchdir
- _chdir
- _wchdir
- _tchdir
- wchdir
dev_langs:
- C++
helpviewer_keywords:
- _tchdir function
- _chdir function
- _wchdir function
- tchdir function
- wchdir function
- chdir function
- directories [C++], changing
ms.assetid: 85e9393b-62ac-45d5-ab2a-fa2217f6152e
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 14d6eb678a20d3f3fb0a6250e13005d904aed4b1
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="chdir-wchdir"></a>_chdir, _wchdir
Modifica la directory di lavoro corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _chdir(   
   const char *dirname   
);  
int _wchdir(   
   const wchar_t *dirname   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `dirname`  
 Percorso della nuova directory di lavoro.  
  
## <a name="return-value"></a>Valore restituito  
 Se eseguite correttamente, queste funzioni restituiscono un valore pari a 0. Il valore restituito-1 indica un errore. Se non è stato possibile trovare il percorso specificato, `errno` viene impostato su `ENOENT`. Se `dirname` è NULL, viene richiamato il gestore di parametro non valido, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce -1.  
  
## <a name="remarks"></a>Note  
 La funzione `_chdir` consente di passare dalla directory di lavoro corrente a quella specificata da `dirname`. Il parametro `dirname` deve fare riferimento a una directory esistente. Questa funzione può modificare la directory di lavoro corrente in qualsiasi unità. Se viene specificata una nuova lettera di unità in `dirname`, anche la lettera di unità predefinita verrà modificata. Ad esempio, se A è la lettera di unità predefinita e \BIN è la directory di lavoro corrente, la chiamata seguente consente di passare alla directory di lavoro corrente per l'unità C e stabilisce C come nuova unità predefinita:  
  
```  
_chdir("c:\\temp");  
```  
  
 Quando si usa il carattere barra rovesciata (`\`) facoltativo nei percorsi, si devono inserire due caratteri di barra rovesciata (`\\`) in un valore letterale stringa C per rappresentare una singola barra rovesciata (`\`).  
  
 `_wchdir` è una versione a caratteri wide di `_chdir`; l'argomento `dirname` in `_wchdir` è una stringa di caratteri wide`. _wchdir` e `_chdir` hanno lo stesso comportamento, in caso contrario.  
  
### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico:  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tchdir`|`_chdir`|`_chdir`|`_wchdir`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_chdir`|\<direct.h>|\<errno.h>|  
|`_wchdir`|\<direct.h> o \<wchar.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_chdir.c  
// arguments: C:\WINDOWS  
  
/* This program uses the _chdir function to verify  
   that a given directory exists. */  
  
#include <direct.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main( int argc, char *argv[] )  
{  
  
   if(_chdir( argv[1] ) )  
   {  
      switch (errno)  
      {  
      case ENOENT:  
         printf( "Unable to locate the directory: %s\n", argv[1] );  
         break;  
      case EINVAL:  
         printf( "Invalid buffer.\n");  
         break;  
      default:  
         printf( "Unknown error.\n");  
      }  
   }  
   else  
      system( "dir *.exe");  
}  
```  
  
```Output  
Volume in drive C has no label.  
 Volume Serial Number is 2018-08A1  
  
 Directory of c:\windows  
  
08/29/2002  04:00 AM         1,004,032 explorer.exe  
12/17/2002  04:43 PM            10,752 hh.exe  
03/03/2003  09:24 AM            33,792 ieuninst.exe  
10/29/1998  04:45 PM           306,688 IsUninst.exe  
08/29/2002  04:00 AM            66,048 NOTEPAD.EXE  
03/03/2003  09:24 AM            33,792 Q330994.exe  
08/29/2002  04:00 AM           134,144 regedit.exe  
02/28/2003  06:26 PM            46,352 setdebug.exe  
08/29/2002  04:00 AM            15,360 TASKMAN.EXE  
08/29/2002  04:00 AM            49,680 twunk_16.exe  
08/29/2002  04:00 AM            25,600 twunk_32.exe  
08/29/2002  04:00 AM           256,192 winhelp.exe  
08/29/2002  04:00 AM           266,752 winhlp32.exe  
              13 File(s)      2,249,184 bytes  
               0 Dir(s)  67,326,029,824 bytes free  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo delle directory](../../c-runtime-library/directory-control.md)   
 [_mkdir, _wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)   
 [_rmdir, _wrmdir](../../c-runtime-library/reference/rmdir-wrmdir.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)
