---
title: _ungetc_nolock, _ungetwc_nolock | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ungetwc_nolock
- _ungetc_nolock
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
- _ungettc_nolock
- ungetwc_nolock
- ungetc_nolock
- _ungetc_nolock
- _ungetwc_nolock
dev_langs:
- C++
helpviewer_keywords:
- _ungettc_nolock function
- _ungetwc_nolock function
- characters, pushing back onto stream
- _ungetc_nolock function
- ungetwc_nolock function
- ungettc_nolock function
- ungetc_nolock function
ms.assetid: aa02d5c2-1be1-46d2-a8c4-b61269e9d465
caps.latest.revision: 9
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 9a16b7d6152ce3070eb8e4ea7552ab83200c0910
ms.lasthandoff: 02/24/2017

---
# <a name="ungetcnolock-ungetwcnolock"></a>_ungetc_nolock, _ungetwc_nolock
Reinserisce un carattere nel flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _ungetc_nolock(  
   int c,  
   FILE *stream   
);  
wint_t _ungetwc_nolock(  
   wint_t c,  
   FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Carattere da inserire.  
  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito negativo, ognuna di queste funzioni restituisce l'argomento del carattere `c`*.* Se non è possibile reinserire `c` oppure se non è stato letto alcun carattere, il flusso di input rimane invariato e `_ungetc_nolock` restituisce `EOF`. `_ungetwc_nolock` restituisce `WEOF`. Se `stream` è `NULL`, `EOF` o `WEOF` viene restituito e `errno` è impostato su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Queste funzioni sono versioni non di blocco di `ungetc` e `ungetwc`. Le versioni con suffisso `_nolock` sono identiche, ad eccezione del fatto che non sono protette da interferenze da parte di altri thread. Potrebbero essere più veloci perché non comportano il sovraccarico dovuto al blocco degli altri thread. Utilizzare queste funzioni solo in contesti thread-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_ungettc_nolock`|`_ungetc_nolock`|`_ungetc_nolock`|`_ungetwc_nolock`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_ungetc_nolock`|\<stdio.h>|  
|`_ungetwc_nolock`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)   
 [putc, putwc](../../c-runtime-library/reference/putc-putwc.md)
