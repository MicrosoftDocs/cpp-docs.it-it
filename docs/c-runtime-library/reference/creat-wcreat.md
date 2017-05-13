---
title: _creat, _wcreat | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _creat
- _wcreat
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- wcreat
- _wcreat
- _creat
- tcreat
- _tcreat
dev_langs:
- C++
helpviewer_keywords:
- wcreat function
- _wcreat function
- files [C++], creating
- _creat function
- tcreat function
- creat function
- _tcreat function
ms.assetid: 3b3b795d-1620-40ec-bd2b-a4bbb0d20fe5
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: f034e2b80cc1bd3e7b5fc4578a6f5e77a060593c
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="creat-wcreat"></a>_creat, _wcreat
Crea un nuovo file. `_creat` e `_wcreat` sono stati deprecati; usare invece [sopen_s, wsopen_s](../../c-runtime-library/reference/sopen-s-wsopen-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _creat(   
   const char *filename,  
   int pmode   
);  
int _wcreat(   
   const wchar_t *filename,  
   int pmode   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `filename`  
 Nome del nuovo file.  
  
 `pmode`  
 Impostazione di autorizzazione.  
  
## <a name="return-value"></a>Valore restituito  
 Queste funzioni, se hanno esito positivo, restituiscono un descrittore di file al file creato. In caso contrario, le funzioni restituiscono -1 e impostare `errno` come illustrato nella tabella seguente.  
  
|Impostazione di `errno`|Descrizione|  
|---------------------|-----------------|  
|`EACCES`|`filename` specifica un file di sola lettura esistente oppure una directory anziché un file.|  
|`EMFILE`|Non sono disponibili altri descrittori di file.|  
|`ENOENT`|Impossibile trovare il file specificato.|  
  
 Se `filename` è NULL, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono -1.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `_creat` crea un nuovo file oppure apre e tronca uno esistente. `_wcreat` è una versione a caratteri wide di `_creat`; l'argomento `filename` in `_wcreat` è una stringa di caratteri wide. In caso contrario, `_wcreat` e `_creat` si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcreat`|`_creat`|`_creat`|`_wcreat`|  
  
 Se il file specificato da `filename` non esiste, viene creato un nuovo file con l'impostazione di autorizzazione specificata e viene aperto per la scrittura. Se il file già esiste e l'impostazione di autorizzazione consente la scrittura, `_creat` tronca il file di lunghezza 0, eliminando il contenuto precedente e lo apre per la scrittura. L'impostazione di autorizzazione, `pmode`, si applica solo ai file appena creati. Il nuovo file riceve l'impostazione di autorizzazione specificata dopo averlo chiuso per la prima volta. L'espressione integer `pmode` contiene una o entrambe le costanti manifesto `_S_IWRITE` e `_S_IREAD`, definite in SYS\Stat.h. Quando vengono specificate entrambe le costanti, queste vengono unite con l'operatore `OR` bit per bit ( **&#124;** ). Il parametro `pmode` è impostato su uno dei valori seguenti.  
  
|Valore|Definizione|  
|-----------|----------------|  
|`_S_IWRITE`|Scrittura consentita.|  
|`_S_IREAD`|Lettura consentita.|  
|`_S_IREAD &#124; _S_IWRITE`|Lettura e scrittura consentite.|  
  
 Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura. Tutti i file sono sempre leggibili. Non è possibile concedere l'autorizzazione di sola scrittura. Le modalità `_S_IWRITE` e `_S_IREAD | _S_IWRITE` sono quindi equivalenti. I file aperti tramite `_creat` vengono sempre aperti in modalità di compatibilità (vedere [_sopen](../../c-runtime-library/reference/sopen-wsopen.md)) con `_SH_DENYNO`.  
  
 `_creat` applica la maschera corrente di autorizzazione file a `pmode` prima di impostare le autorizzazioni (vedere [_umask](../../c-runtime-library/reference/umask.md)). `_creat` viene specificato principalmente per la compatibilità con le librerie precedenti. Una chiamata a `_open` con `_O_CREAT` e `_O_TRUNC` nel parametro `oflag` equivale a `_creat` ed è preferibile per nuovo codice.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_creat`|\<io.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|  
|`_wcreat`|\<io.h> o \<wchar.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_creat.c  
// compile with: /W3  
// This program uses _creat to create  
// the file (or truncate the existing file)  
// named data and open it for writing.  
  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <io.h>  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   int fh;  
  
   fh = _creat( "data", _S_IREAD | _S_IWRITE ); // C4996  
   // Note: _creat is deprecated; use _sopen_s instead  
   if( fh == -1 )  
      perror( "Couldn't create data file" );  
   else  
   {  
      printf( "Created data file.\n" );  
      _close( fh );  
   }  
}  
```  
  
```Output  
Created data file.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di basso livello](../../c-runtime-library/low-level-i-o.md)   
 [_chmod, _wchmod](../../c-runtime-library/reference/chmod-wchmod.md)   
 [_chsize](../../c-runtime-library/reference/chsize.md)   
 [_close](../../c-runtime-library/reference/close.md)   
 [_dup, _dup2](../../c-runtime-library/reference/dup-dup2.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_sopen, _wsopen](../../c-runtime-library/reference/sopen-wsopen.md)   
 [_umask](../../c-runtime-library/reference/umask.md)
