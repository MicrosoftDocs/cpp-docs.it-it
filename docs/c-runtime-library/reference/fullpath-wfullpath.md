---
title: _fullpath, _wfullpath | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _fullpath
- _wfullpath
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
- wfullpath
- fullpath
- _wfullpath
- _fullpath
dev_langs:
- C++
helpviewer_keywords:
- _wfullpath function
- relative file paths
- absolute paths
- wfullpath function
- _fullpath function
- fullpath function
ms.assetid: 4161ec17-0d22-45dd-b07d-0222553afae9
caps.latest.revision: 18
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 7641c3cdc2a437d2c65f964ca6b1220992d11bca
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="fullpath-wfullpath"></a>_fullpath, _wfullpath
Crea un nome di percorso assoluto o completo per il nome di percorso relativo specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *_fullpath(   
   char *absPath,  
   const char *relPath,  
   size_t maxLength   
);  
wchar_t *_wfullpath(   
   wchar_t *absPath,  
   const wchar_t *relPath,  
   size_t maxLength   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `absPath`  
 Puntatore a un buffer contenente il nome del percorso assoluto o completo o NULL.  
  
 `relPath`  
 Nome del percorso relativo.  
  
 `maxLength`  
 Lunghezza massima del buffer del nome del percorso assoluto (`absPath`). Tale lunghezza è espressa in byte per `_fullpath` ma in caratteri wide (`wchar_t`) per `_wfullpath`.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore a un buffer contenente il nome del percorso assoluto (`absPath`). Se è presente un errore, ad esempio se il valore passato in `relPath` include una lettera di unità non valida o che non può essere trovata oppure se la lunghezza del nome del percorso assoluto creato (`absPath`) è maggiore di `maxLength`, la funzione restituisce `NULL`.  
  
## <a name="remarks"></a>Note  
 Il `_fullpath` espande il nome di percorso relativo in `relPath` archivia questo nome nel percorso completamente completo o assoluto e `absPath`. Se `absPath` è NULL, `malloc` viene usato per allocare un buffer di lunghezza sufficiente a contenere il nome del percorso. È responsabilità del chiamante liberare questo buffer. Un nome di percorso relativo specifica un percorso a un'altra posizione dalla posizione corrente (ad esempio la directory di lavoro corrente: "."). Un nome di percorso assoluto è l'espansione di un nome di percorso relativo che indica il percorso intero necessario per raggiungere la posizione desiderata dalla radice del file system. Diversamente da `_makepath`, `_fullpath` può essere usata per ottenere il nome di percorso assoluto per i percorsi relativi (`relPath`) che includono "./" o "../" nei nomi.  
  
 Per usare le routine di runtime C, ad esempio, l'applicazione deve includere i file di intestazione contenenti le dichiarazioni per le routine. L'istruzione include per ogni file di intestazione fa riferimento al percorso del file in modo relativo (dalla cartella di lavoro dell'applicazione):  
  
```  
#include <stdlib.h>  
```  
  
 e il percorso assoluto (percorso effettivo nel file sytem) del file potrebbe essere:  
  
```  
\\machine\shareName\msvcSrc\crt\headerFiles\stdlib.h  
```  
  
 `_fullpath` gestisce automaticamente e in modo appropriato gli argomenti stringa di caratteri multibyte, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. `_wfullpath` è una versione a caratteri wide di `_fullpath`. Gli argomenti stringa per `_wfullpath` sono stringhe di caratteri wide. `_wfullpath` e `_fullpath` si comportano in modo identico, ma `_wfullpath` non gestisce le stringhe di caratteri multibyte.  
  
 Se vengono definiti sia `_DEBUG` che `_CRTDBG_MAP_ALLOC`, le chiamate a `_fullpath` e `_wfullpath` vengono sostituite da chiamate a `_fullpath_dbg` e `_wfullpath_dbg` per consentire il debug delle allocazioni di memoria. Per altre informazioni, vedere [_fullpath_dbg, _wfullpath_dbg](../../c-runtime-library/reference/fullpath-dbg-wfullpath-dbg.md).  
  
 Se `maxlen` è minore o uguale a 0, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce `NULL`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tfullpath`|`_fullpath`|`_fullpath`|`_wfullpath`|  
  
 Se il buffer `absPath` è `NULL`, `_fullpath` chiama [malloc](../../c-runtime-library/reference/malloc.md) per allocare un buffer e ignora l'argomento `maxLength`. È responsabilità del chiamante deallocare questo buffer (usando [free](../../c-runtime-library/reference/free.md)) come appropriato. Se l'argomento `relPath` specifica un'unità disco, la directory corrente dell'unità viene combinata con il percorso.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_fullpath`|\<stdlib.h>|  
|`_wfullpath`|\<stdlib.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fullpath.c  
// This program demonstrates how _fullpath  
// creates a full path from a partial path.  
  
#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>  
#include <direct.h>  
  
void PrintFullPath( char * partialPath )  
{  
   char full[_MAX_PATH];  
   if( _fullpath( full, partialPath, _MAX_PATH ) != NULL )  
      printf( "Full path is: %s\n", full );  
   else  
      printf( "Invalid path\n" );  
}  
  
int main( void )  
{  
   PrintFullPath( "test" );  
   PrintFullPath( "\\test" );  
   PrintFullPath( "..\\test" );  
}  
```  
  
```Output  
Full path is: C:\Documents and Settings\user\My Documents\test  
Full path is: C:\test  
Full path is: C:\Documents and Settings\user\test  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_getcwd, _wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [_getdcwd, _wgetdcwd](../../c-runtime-library/reference/getdcwd-wgetdcwd.md)   
 [_makepath, _wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md)   
 [_splitpath, _wsplitpath](../../c-runtime-library/reference/splitpath-wsplitpath.md)
