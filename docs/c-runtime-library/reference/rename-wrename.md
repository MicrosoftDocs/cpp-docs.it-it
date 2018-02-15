---
title: rename, _wrename | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- rename
- _wrename
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
- _wrename
- _trename
- Rename
dev_langs:
- C++
helpviewer_keywords:
- trename function
- directories [C++], renaming
- renaming directories
- names [C++], changing file
- _trename function
- rename function
- wrename function
- files [C++], renaming
- _wrename function
- names [C++], changing directory
- renaming files
ms.assetid: 9f0a6103-26a2-4dda-b14b-79a48946266a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 34da3f704f3350a9fbd8750c940cdc4e847cfb40
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="rename-wrename"></a>rename, _wrename
Rinomina un file o una directory.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int rename(  
   const char *oldname,  
   const char *newname   
);  
int _wrename(  
   const wchar_t *oldname,  
   const wchar_t *newname   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *oldname*  
 Puntatore al nome precedente.  
  
 *newname*  
 Puntatore al nome nuovo.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce 0 in caso di esito positivo. In caso di errore, la funzione restituisce un valore diverso da zero e imposta `errno` su uno dei valori seguenti:  
  
 `EACCES`  
 La directory o il file specificato da *newname* esiste già o non può essere creato (percorso non valido) oppure *oldname* è una directory e *newname* specifica un percorso diverso.  
  
 `ENOENT`  
 File o percorso specificato da *oldname* non trovato.  
  
 `EINVAL`  
 Il nome contiene caratteri non validi.  
  
 Per altri possibili valori restituiti, vedere [doserrno, errno, syserrlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione **rename** rinomina la directory o il file specificato da *oldname* con il nome specificato da *newname*. Il nome precedente deve essere il percorso di un file o una directory esistente. Il nuovo nome deve essere il nome di un file o una directory esistente. È possibile usare **rename** per spostare un file da una directory o un dispositivo a un altro, assegnando a un percorso diverso nell'argomento *newname*. Non è tuttavia possibile usare **rename** per spostare una directory. Le directory possono essere rinominate, ma non spostate.  
  
 `_wrename` è una versione a caratteri wide di **_rename**. Gli argomenti per `_wrename` sono stringhe a caratteri wide. In caso contrario, `_wrename` e **_rename** si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_trename`|**rename**|**rename**|`_wrename`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|**rename**|\<io.h> o \<stdio.h>|  
|`_wrename`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_renamer.c  
/* This program attempts to rename a file named  
 * CRT_RENAMER.OBJ to CRT_RENAMER.JBO. For this operation  
 * to succeed, a file named CRT_RENAMER.OBJ must exist and  
 * a file named CRT_RENAMER.JBO must not exist.  
 */  
  
#include <stdio.h>  
  
int main( void )  
{  
   int  result;  
   char old[] = "CRT_RENAMER.OBJ", new[] = "CRT_RENAMER.JBO";  
  
   /* Attempt to rename file: */  
   result = rename( old, new );  
   if( result != 0 )  
      printf( "Could not rename '%s'\n", old );  
   else  
      printf( "File '%s' renamed to '%s'\n", old, new );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
File 'CRT_RENAMER.OBJ' renamed to 'CRT_RENAMER.JBO'  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)