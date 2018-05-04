---
title: vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 66fd7c468e516c25e2c2b408b8c1112061eeb5e0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="vsnprintfs-vsnprintfs-vsnprintfsl-vsnwprintfs-vsnwprintfsl"></a>vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l

Scrivere l'output formattato mediante un puntatore a un elenco di argomenti. Queste sono versioni di [vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l](vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per l'output.

*sizeOfBuffer*<br/>
Le dimensioni del *buffer* per l'output, come il numero di caratteri.

*count*<br/>
Numero massimo di caratteri wide da scrivere, escluso il carattere Null di terminazione o [_TRUNCATE](../../c-runtime-library/truncate.md).

*format*<br/>
Specifica di formato.

*valore di ArgPtr*<br/>
Puntatore a un elenco di argomenti.

*locale*<br/>
Impostazioni locali da usare.

Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

**vsnprintf_s**, **vsnprintf_s** e **vsnwprintf_s** restituire il numero di caratteri scritti, senza includere il carattere di terminazione null o un valore negativo se si verifica un errore di output. **vsnprintf_s** è identica a **vsnprintf_s**. **vsnprintf_s** è incluso per conformità allo standard ANSI. **_vnsprintf** viene mantenuto per compatibilità con le versioni precedenti.

Se lo spazio di archiviazione necessaria per archiviare i dati e un carattere di terminazione null supera *sizeOfBuffer*, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md), a meno che *conteggio*  viene [truncate](../../c-runtime-library/truncate.md), nel qual caso la maggior parte della stringa come adatteranno *buffer* viene scritto e restituito -1. Se l'esecuzione continua dopo il gestore di parametri non validi, queste funzioni impostano *buffer* su una stringa vuota, impostare **errno** al **ERANGE**e restituiscono -1.

Se *buffer* oppure *formato* è un **NULL** puntatore, o se *conteggio* è minore o uguale a zero, viene richiamato il gestore di parametri non validi. Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituiscono -1.

### <a name="error-conditions"></a>Condizioni di errore

|**Condizione**|INVIO|**errno**|
|-----------------|------------|-------------|
|*buffer* è **NULL**|-1|**EINVAL**|
|*formato* è **NULL**|-1|**EINVAL**|
|*conteggio* < = 0|-1|**EINVAL**|
|*sizeOfBuffer* troppo piccolo (e *conteggio* ! = **truncate**)|-1 (e *buffer* impostato su una stringa vuota)|**ERANGE**|

## <a name="remarks"></a>Note

Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta e scrive fino a *conteggio* caratteri di dati specificati per la memoria a cui punta *buffer* e aggiunge un carattere di terminazione null.

Se *conteggio* viene [truncate](../../c-runtime-library/truncate.md), quindi queste funzioni scrivono come gran parte della stringa può contenere *buffer* lasciando spazio per un terminazione null. Se l'intera stringa (con terminazione null) è contenuto in *buffer*, quindi queste funzioni restituiscono il numero di caratteri scritti (senza includere il carattere di terminazione null); in caso contrario, queste funzioni restituiscono -1 per indicare che il troncamento del si è verificato.

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).

> [!NOTE]
> Per garantire che ci sia spazio per il carattere di terminazione null, assicurarsi che *conteggio* è minore rispetto alla lunghezza del buffer o utilizzare **truncate**.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**vsntprintf_s**|**_vsnprintf_s**|**_vsnprintf_s**|**_vsnwprintf_s**|
|**vsntprintf_s_l**|**_vsnprintf_s_l**|**_vsnprintf_s_l**|**_vsnwprintf_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**vsnprintf_s**|\<stdio.h> e \<stdarg.h>|\<varargs.h>*|
|**vsnprintf_s**, **vsnprintf_s_l**|\<stdio.h> e \<stdarg.h>|\<varargs.h>*|
|**vsnwprintf_s**, **vsnwprintf_s_l**|\<stdio.h> o \<wchar.h> e \<stdarg.h>|\<varargs.h>*|

\* Richiesto per la compatibilità con UNIX V.

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
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

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
