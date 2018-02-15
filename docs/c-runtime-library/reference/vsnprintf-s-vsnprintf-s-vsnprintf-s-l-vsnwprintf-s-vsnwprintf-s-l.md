---
title: vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _vsnwprintf_s
- _vsnwprintf_s_l
- _vsnprintf_s
- vsnprintf_s
- _vsnprintf_s_l
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
- ntdll.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _vsnprintf_s
- _vsntprintf_s
- _vsnwprintf_s
dev_langs:
- C++
helpviewer_keywords:
- vsnwprintf_s function
- _vsntprintf_s function
- _vsntprintf_s_l function
- vsntprintf_s function
- vsnwprintf_s_l function
- vsnprintf_s_l function
- vsntprintf_s_l function
- _vsnwprintf_s_l function
- _vsnprintf_s function
- vsnprintf_s function
- _vsnprintf_s_l function
- _vsnwprintf_s function
- formatted text [C++]
ms.assetid: 147ccfce-58c7-4681-a726-ef54ac1c604e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6e908750b54778d4aad7affeb6bd748a84ab39bc
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="vsnprintfs-vsnprintfs-vsnprintfsl-vsnwprintfs-vsnwprintfsl"></a>vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l
Scrivere l'output formattato mediante un puntatore a un elenco di argomenti. Queste sono versioni di [vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l](../../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int vsnprintf_s(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf_s(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf_s_l(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vsnwprintf_s(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
);  
int _vsnwprintf_s_l(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
template <size_t size>  
int _vsnprintf_s(  
   char (&buffer)[size],  
   size_t count,  
   const char *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnwprintf_s(  
   wchar_t (&buffer)[size],  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `buffer`  
 Percorso di archiviazione per l'output.  
  
 `sizeOfBuffer`  
 Dimensioni di `buffer` per l'output, espresse come numero di caratteri.  
  
 `count`  
 Numero massimo di caratteri wide da scrivere, escluso il carattere Null di terminazione o [_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 `format`  
 Specifica di formato.  
  
 `argptr`  
 Puntatore a un elenco di argomenti.  
  
 `locale`  
 Impostazioni locali da usare.  
  
 Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## <a name="return-value"></a>Valore restituito  
 `vsnprintf_s`, `_vsnprintf_s` e `_vsnwprintf_s` restituiscono il numero di caratteri scritti, escludendo il carattere Null di terminazione, o un valore negativo se si verifica un errore di output. `vsnprintf_s` è identica a `_vsnprintf_s`. `vsnprintf_s` è inclusa per conformità allo standard ANSI. `_vnsprintf` viene mantenuta per compatibilità con le versioni precedenti.  
  
 Se lo spazio di archiviazione necessario per archiviare i dati e un carattere Null di terminazione supera `sizeOfBuffer`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md), a meno che `count` non sia [_TRUNCATE](../../c-runtime-library/truncate.md), nel qual caso viene scritta la parte della stringa che rientra in `buffer` e viene restituito -1. Se l'esecuzione continua dopo il gestore di parametri non validi, queste funzioni impostano `buffer` su una stringa vuota, impostano `errno` su `ERANGE` e restituiscono -1.  
  
 Se `buffer` o `format` è un puntatore `NULL` o se `count` è minore o uguale a zero, viene richiamato il gestore di parametri non validi. Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono -1.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`Condition`|INVIO|`errno`|  
|-----------------|------------|-------------|  
|`buffer` è `NULL`|-1|`EINVAL`|  
|`format` è `NULL`|-1|`EINVAL`|  
|`count` <= 0|-1|`EINVAL`|  
|`sizeOfBuffer` troppo piccolo (e `count` != `_TRUNCATE`)|-1 (e `buffer` impostato su una stringa vuota)|`ERANGE`|  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta scrive fino a `count` caratteri nella memoria a cui punta `buffer` e aggiunge un carattere Null di terminazione.  
  
 Se `count` è [_TRUNCATE](../../c-runtime-library/truncate.md), queste funzioni scrivono la parte della stringa che rientra in `buffer` lasciando spazio per un carattere Null di terminazione. Se l'intera stringa (con terminazione Null) rientra in `buffer`, queste funzioni restituiscono il numero di caratteri scritti (escluso il carattere Null di terminazione). In caso contrario, queste funzioni restituiscono -1 per indicare che è stato eseguito il troncamento.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
> [!NOTE]
>  Per assicurarsi che ci sia spazio per il carattere Null di terminazione, assicurarsi che il valore di `count` sia rigorosamente minore della lunghezza del buffer oppure usare `_TRUNCATE`.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vsntprintf_s`|`_vsnprintf_s`|`_vsnprintf_s`|`_vsnwprintf_s`|  
|`_vsntprintf_s_l`|`_vsnprintf_s_l`|`_vsnprintf_s_l`|`_vsnwprintf_s_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|---------------------|----------------------|  
|`vsnprintf_s`|\<stdio.h> e \<stdarg.h>|\<varargs.h>*|  
|`_vsnprintf_s`, `_vsnprintf_s_l`|\<stdio.h> e \<stdarg.h>|\<varargs.h>*|  
|`_vsnwprintf_s`, `_vsnwprintf_s_l`|\<stdio.h> o \<wchar.h> e \<stdarg.h>|\<varargs.h>*|  
  
 \* Richiesto per la compatibilità con UNIX V.  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_vsnprintf_s.cpp  
#include <stdio.h>  
#include <wtypes.h>  
  
void FormatOutput(LPCSTR formatstring, ...)   
{  
   int nSize = 0;  
   char buff[10];  
   memset(buff, 0, sizeof(buff));  
   va_list args;  
   va_start(args, formatstring);  
   nSize = vsnprintf_s( buff, _countof(buff), _TRUNCATE, formatstring, args);  
   printf("nSize: %d, buff: %s\n", nSize, buff); 
   va_end(args); 
}  
  
int main() {  
   FormatOutput("%s %s", "Hi", "there");  
   FormatOutput("%s %s", "Hi", "there!");  
   FormatOutput("%s %s", "Hi", "there!!");  
}  
```  
  
```Output  
nSize: 8, buff: Hi there  
nSize: 9, buff: Hi there!  
nSize: -1, buff: Hi there!  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [va_arg, va_copy, va_end, va_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)