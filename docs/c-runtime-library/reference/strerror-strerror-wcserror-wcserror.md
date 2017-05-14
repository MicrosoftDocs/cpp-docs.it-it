---
title: strerror, _strerror, _wcserror, __wcserror | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- strerror
- _strerror
- _wcserror
- __wcserror
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- __sys_errlist
- wcserror
- _strerror
- __wcserror
- strerror
- __sys_nerr
- _tcserror
- _wcserror
- tcserror
dev_langs:
- C++
helpviewer_keywords:
- strerror function
- _strerror function
- __sys_errlist
- wcserror function
- error messages, printing
- __sys_nerr
- tcserror function
- printing error messages
- _wcserror function
- _tcserror function
- __wcserror function
- error messages, getting
ms.assetid: 27b72255-f627-43c0-8836-bcda8b003e14
caps.latest.revision: 21
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
ms.openlocfilehash: 3c79a2502fd9e52ff5e05e600c4d1a1e8e3761c8
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="strerror-strerror-wcserror-wcserror"></a>strerror, _strerror, _wcserror, __wcserror
Ottiene un messaggio di errore dal sistema (`strerror`, `_wcserror`) o formatta una stringa di messaggio di errore fornita dall'utente (`_strerror`, `__wcserror`). Sono disponibili versioni più sicure di queste funzioni. Vedere [strerror_s, _strerror_s, _wcserror_s, \__wcserror_s](../../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *strerror(  
   int errnum   
);  
char *_strerror(  
   const char *strErrMsg   
);  
wchar_t * _wcserror(  
   int errnum   
);  
wchar_t * __wcserror(  
   const wchar_t *strErrMsg   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `errnum`  
 Numero errore.  
  
 `strErrMsg`  
 Messaggio fornito dall'utente.  
  
## <a name="return-value"></a>Valore restituito  
 Tutte queste funzioni restituiscono un puntatore alla stringa del messaggio di errore. Le chiamate successive possono sovrascrivere la stringa.  
  
## <a name="remarks"></a>Note  
 La funzione `strerror` mappa `errnum` su una stringa di messaggio di errore e restituisce un puntatore alla stringa. Né `strerror` né `_strerror` stampano effettivamente il messaggio. A tale scopo, è necessario chiamare una funzione di output come [fprintf](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md):  
  
```  
if (( _access( "datafile",2 )) == -1 )  
   fprintf( stderr, _strerror(NULL) );  
```  
  
 Se `strErrMsg` viene passato come `NULL`, `_strerror`, restituisce un puntatore a una stringa contenente il messaggio di errore di sistema per l'ultima chiamata della libreria che ha generato un errore. La stringa del messaggio di errore termina con il carattere di nuova riga ("\n"). Se `strErrMsg` non è uguale a `NULL`, `_strerror` restituisce un puntatore a una stringa che contiene, nell'ordine, il messaggio stringa, i due punti, uno spazio, il messaggio di errore del sistema per l'ultima chiamata della libreria che ha generato un errore e il carattere di nuova riga. La lunghezza massima consentita del messaggio stringa è pari a 94 caratteri.  
  
 Il numero di errore effettivo per `_strerror` viene archiviato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Per risultati accurati, chiamare `_strerror` immediatamente dopo la restituzione di un errore da parte della routine di libreria. In caso contrario, le chiamate successive a `strerror` o `_strerror` possono sovrascrivere il valore `errno`.  
  
 `_wcserror` e `__wcserror` sono versioni a caratteri wide di `strerror` e `_strerror` rispettivamente.  
  
 `_strerror`, `_wcserror` e `__wcserror` fanno parte della definizione ANSI ma si tratta di estensioni Microsoft e se ne sconsiglia l'uso laddove si voglia ottenere codice portabile. Per la compatibilità ANSI, usare invece `strerror`.  
  
 Per ottenere le stringhe di errore, si consiglia l'uso di `strerror` o `_wcserror` al posto delle macro deprecate [_sys_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) e [_sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) e delle funzioni interne deprecate `__sys_errlist` e `__sys_nerr`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcserror`|`strerror`|`strerror`|`_wcserror`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strerror`|\<string.h>|  
|`_strerror`|\<string.h>|  
|`_wcserror`, `__wcserror`|\<string.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo a [perror](../../c-runtime-library/reference/perror-wperror.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [clearerr](../../c-runtime-library/reference/clearerr.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [perror, _wperror](../../c-runtime-library/reference/perror-wperror.md)
