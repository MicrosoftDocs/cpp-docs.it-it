---
title: _searchenv_s, _wsearchenv_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wsearchenv_s
- _searchenv_s
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
- api-ms-win-crt-environment-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _searchenv_s
- _wsearchenv_s
- wsearchenv_s
- searchenv_s
dev_langs:
- C++
helpviewer_keywords:
- tsearchenv_s function
- files [C++], finding
- buffers [C++], buffer overruns
- environment paths, searching for files
- wsearchenv_s function
- searchenv_s function
- _tsearchenv_s function
- buffer overruns
- buffers [C++], avoiding overruns
- _wsearchenv_s function
- _searchenv_s function
- environment paths
ms.assetid: 47f9fc29-250e-4c09-b52e-9e9f0ef395ca
caps.latest.revision: 32
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
ms.openlocfilehash: 3b7b1d4165edb3a7e34cda665de195759784eedc
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="searchenvs-wsearchenvs"></a>_searchenv_s, _wsearchenv_s
Cerca un file usando i percorsi di ambiente. Queste versioni di [_searchenv, _wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _searchenv_s(  
   const char *filename,  
   const char *varname,  
   char *pathname,  
   size_t numberOfElements  
);  
errno_t _wsearchenv_s(  
   const wchar_t *filename,  
   const wchar_t *varname,  
   wchar_t *pathname,  
   size_t numberOfElements  
);  
template <size_t size>  
errno_t _searchenv_s(  
   const char *filename,  
   const char *varname,  
   char (&pathname)[size]  
); // C++ only  
template <size_t size>  
errno_t _wsearchenv_s(  
   const wchar_t *filename,  
   const wchar_t *varname,  
   wchar_t (&pathname)[size]  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `filename`  
 Nome del file di cui eseguire la ricerca.  
  
 [in] `varname`  
 Ambiente per la ricerca.  
  
 [out] `pathname`  
 Buffer per l'archiviazione del percorso completo.  
  
 [in] `numberOfElements`  
 Dimensioni di `pathname` buffer.  
  
## <a name="return-value"></a>Valore restituito  
 Zero se con esito positivo; un codice di errore in caso di errore.  
  
 Se `filename` è una stringa vuota, il valore restituito è `ENOENT`.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`filename`|`varname`|`pathname`|`numberOfElements`|Valore restituito|Contenuto di `pathname`|  
|----------------|---------------|----------------|------------------------|------------------|----------------------------|  
|any|qualsiasi|`NULL`|any|`EINVAL`|n/d|  
|`NULL`|qualsiasi|qualsiasi|qualsiasi|`EINVAL`|non modificato|  
|any|qualsiasi|any|<= 0|`EINVAL`|non modificato|  
  
 Se si verifica una di queste condizioni di errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La routine `_searchenv_s` cerca il file di destinazione nel dominio specifico. La variabile `varname` può essere qualsiasi variabile di ambiente o variabile definita dall'utente, che specifica un elenco dei percorsi di directory, come `PATH`, `LIB` e `INCLUDE`. Poiché `_searchenv_s` fa distinzione tra maiuscole e minuscole, `varname` deve corrispondere alle maiuscole e minuscole della variabile d'ambiente. Se `varname` non corrisponde al nome di una variabile di ambiente definita nell'ambiente del processo, la funzione restituisce zero e la variabile `pathname` rimane invariata.  
  
 La routine cerca innanzitutto il file nella directory di lavoro corrente. Se non trova il file, cerca nelle directory specificate dalla variabile d'ambiente. Se il file di destinazione si trova in una di queste directory, il percorso appena creato viene copiato in `pathname`. Se il file `filename` non viene trovato, `pathname` contiene una stringa vuota con terminazione Null.  
  
 Il buffer `pathname` deve contenere almeno `_MAX_PATH` caratteri per consentire tutta la lunghezza del nome percorso completo. In alternativa, `_searchenv_s` potrebbe sovraccaricare il buffer `pathname` e causare un comportamento imprevisto.  
  
 `_wsearchenv_s` è una versione a caratteri "wide" di `_searchenv_s`. Gli argomenti per `_wsearchenv_s` sono stringhe a caratteri "wide". In caso contrario, `_wsearchenv_s` e `_searchenv_s` si comportano in modo identico.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tsearchenv_s`|`_searchenv_s`|`_searchenv_s`|`_wsearchenv_s`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_searchenv_s`|\<stdlib.h>|  
|`_wsearchenv_s`|\<stdlib.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_searchenv_s.c  
/* This program searches for a file in  
 * a directory specified by an environment variable.  
 */  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char pathbuffer[_MAX_PATH];  
   char searchfile[] = "CL.EXE";  
   char envvar[] = "PATH";  
   errno_t err;  
  
   /* Search for file in PATH environment variable: */  
   err = _searchenv_s( searchfile, envvar, pathbuffer, _MAX_PATH );  
   if (err != 0)  
   {  
      printf("Error searching the path. Error code: %d\n", err);  
   }  
   if( *pathbuffer != '\0' )  
      printf( "Path for %s:\n%s\n", searchfile, pathbuffer );  
   else  
      printf( "%s not found\n", searchfile );  
}  
```  
  
```Output  
Path for CL.EXE:  
C:\Program Files\Microsoft Visual Studio 2010\VC\BIN\CL.EXE  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo delle directory](../../c-runtime-library/directory-control.md)   
 [_searchenv, _wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md)   
 [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md)   
 [_putenv, _wputenv](../../c-runtime-library/reference/putenv-wputenv.md)
