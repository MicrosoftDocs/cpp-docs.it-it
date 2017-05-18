---
title: remove, _wremove | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wremove
- remove
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
- remove
- _wremove
- _tremove
dev_langs:
- C++
helpviewer_keywords:
- tremove function
- _wremove function
- files [C++], deleting
- _tremove function
- files [C++], removing
- wremove function
- remove function
ms.assetid: b6345ec3-3289-4645-93a4-28b9e478cc19
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 621a1c2ed9b44afb0f47fbac37b6c8de3cccecdf
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="remove-wremove"></a>remove, _wremove
Eliminare un file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int remove(  
   const char *path   
);  
int _wremove(  
   const wchar_t *path   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *path*  
 Percorso del file da rimuovere.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce 0 se il file viene eliminato correttamente. In caso contrario, restituisce -1 e imposta `errno` su `EACCES` per indicare che il percorso specifica un file di sola lettura o il file è aperto, oppure su **ENOENT** per indicare che il nome di file o il percorso non è stato trovato o il percorso specifica una directory.  
  
 Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione **remove** elimina il file specificato da *path*. `_wremove` è una versione a caratteri wide di **_remove**. L'argomento *path* per `_wremove` è una stringa di caratteri wide. In caso contrario, `_wremove` e **_remove** si comportano in modo identico. Tutti gli handle in un file devono essere chiusi prima che possano essere eliminati.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tremove`|**remove**|**remove**|`_wremove`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|**remove**|\<stdio.h> o \<io.h>|  
|`_wremove`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_remove.c  
/* This program uses remove to delete crt_remove.txt */  
  
#include <stdio.h>  
  
int main( void )  
{  
   if( remove( "crt_remove.txt" ) == -1 )  
      perror( "Could not delete 'CRT_REMOVE.TXT'" );  
   else  
      printf( "Deleted 'CRT_REMOVE.TXT'\n" );  
}  
```  
  
## <a name="input-crtremovetxt"></a>Input: crt_remove.txt  
  
```  
This file will be deleted.  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
Deleted 'CRT_REMOVE.TXT'  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_unlink, _wunlink](../../c-runtime-library/reference/unlink-wunlink.md)
