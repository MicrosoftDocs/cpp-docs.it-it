---
title: _vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _vwprintf_p
- _vprintf_p
- _vprintf_p_l
- _vwprintf_p_l
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
apitype: DLLExport
f1_keywords:
- _vwprintf_p_l
- vprintf_p
- _vprintf_p_l
- _vwprintf_p
- vprintf_p_l
- vwprintf_p_l
- vwprintf_p
- vtprintf_p
- _vtprintf_p
- _vprintf_p
dev_langs:
- C++
helpviewer_keywords:
- _vtprintf_p_l function
- _vtprintf_p function
- vtprintf_p function
- _vwprintf_p function
- _vwprintf_p_l function
- _vprintf_p function
- _vprintf_p_l function
- vprintf_p_l function
- vwprintf_p function
- vprintf_p function
- vtprintf_p_l function
- vwprintf_p_l function
- formatted text [C++]
ms.assetid: 3f99bde3-c891-493d-908f-30559c421058
caps.latest.revision: 17
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
ms.openlocfilehash: bcf46edc032856c7fa6b74d928cd08c04dcfac26
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="vprintfp-vprintfpl-vwprintfp-vwprintfpl"></a>_vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l
Scrive l'output formattato usando un puntatore a un elenco di argomenti e consente di specificare l'ordine in cui usare gli argomenti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _vprintf_p(  
   const char *format,  
   va_list argptr   
);  
int _vprintf_p_l(  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vwprintf_p(  
   const wchar_t *format,  
   va_list argptr   
);  
int _vwprintf_p_l(  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `format`  
 Specifica di formato.  
  
 `argptr`  
 Puntatore a un elenco di argomenti.  
  
 `locale`  
 Impostazioni locali da usare.  
  
 Per altre informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## <a name="return-value"></a>Valore restituito  
 `_vprintf_p` e `_vwprintf_p` restituiscono il numero di caratteri scritti, escludendo il carattere Null di terminazione, o un valore negativo se si verifica un errore di output.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta e scrive i dati specificati in `stdout`. Queste funzioni differiscono da `vprintf_s` e `vwprintf_s` solo per il fatto che supportano la possibilità di specificare l'ordine in cui vengono usati gli argomenti. Per altre informazioni, vedere [Parametri posizionali printf_p](../../c-runtime-library/printf-p-positional-parameters.md).  
  
 `_vwprintf_p` è la versione a caratteri wide di `_vprintf_p`; se il flusso viene aperto in modalità ANSI, le due funzioni si comportano in modo identico. `_vprintf_p` non supporta attualmente l'output in un flusso UNICODE.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 Se `format` è un puntatore Null o se la stringa di formato contiene caratteri di formattazione non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiranno -1 e imposteranno `errno` su `EINVAL`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vtprintf_p`|`_vprintf_p`|`_vprintf_p`|`_vwprintf_p`|  
|`_vtprintf_p_l`|`_vprintf_p_l`|`_vprintf_p_l`|`_vwprintf_p_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|---------------------|----------------------|  
|`_vprintf_p`, `_vprintf_p_l`|\<stdio.h> e \<stdarg.h>|\<varargs.h>*|  
|`_vwprintf_p`, `_vwprintf_p_l`|\<stdio.h> o \<wchar.h> e \<stdarg.h>|\<varargs.h>*|  
  
 \* Richiesto per la compatibilità con UNIX V.  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Gli handle del flusso standard associati alla console, `stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime del linguaggio C nelle app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)   
 [_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l](../../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)   
 [_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l](../../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)   
 [_sprintf_p, _sprintf_p_l, _swprintf_p, _swprintf_p_l](../../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)   
 [vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l](../../c-runtime-library/reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md)   
 [va_arg, va_copy, va_end, va_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)   
 [_vfprintf_p, _vfprintf_p_l, _vfwprintf_p, _vfwprintf_p_l](../../c-runtime-library/reference/vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)   
 [_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l](../../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)   
 [Parametri posizionali printf_p](../../c-runtime-library/printf-p-positional-parameters.md)
