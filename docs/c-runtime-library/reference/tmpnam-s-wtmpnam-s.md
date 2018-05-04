---
title: tmpnam_s, _wtmpnam_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- tmpnam_s
- _wtmpnam_s
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
- tmpnam_s
- _wtmpnam_s
- L_tmpnam_s
dev_langs:
- C++
helpviewer_keywords:
- tmpnam_s function
- file names [C++], creating temporary
- _wtmpnam_s function
- L_tmpnam_s constant
- temporary files, creating
- file names [C++], temporary
- wtmpnam_s function
ms.assetid: e70d76dc-49f5-4aee-bfa2-f1baa2bcd29f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d8c6298c7b66c8967a4e5e23a37c3614edcddf3d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="tmpnams-wtmpnams"></a>tmpnam_s, _wtmpnam_s

Genera i nomi che è possibile usare per creare file temporanei. Queste sono versioni di [tmpnam e _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t tmpnam_s(
   char * str,
   size_t sizeInChars
);
errno_t _wtmpnam_s(
   wchar_t *str,
   size_t sizeInChars
);
template <size_t size>
errno_t tmpnam_s(
   char (&str)[size]
); // C++ only
template <size_t size>
errno_t _wtmpnam_s(
   wchar_t (&str)[size]
); // C++ only
```

### <a name="parameters"></a>Parametri

*str*<br/>
Puntatore che conterrà il nome generato.

*sizeInChars*<br/>
Dimensioni del buffer in caratteri.

## <a name="return-value"></a>Valore restituito

Entrambe queste funzioni restituiscono 0 in caso di esito positivo o un numero di errore in caso di esito negativo.

### <a name="error-conditions"></a>Condizioni di errore

|||||
|-|-|-|-|
|*str*|*sizeInChars*|**Valore restituito**|**Contenuto della***str* |
|**NULL**|qualsiasi|**EINVAL**|non modificato|
|Non **NULL** (punta a valide per la memoria)|troppo breve|**ERANGE**|non modificato|

Se *str* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituire **EINVAL**.

## <a name="remarks"></a>Note

Ognuna di queste funzioni restituisce il nome di un file che non esiste. **tmpnam_s generavano** restituisce un nome univoco nella directory di lavoro corrente. Tenere presente che quando un nome di file è preceduto da una barra rovesciata senza informazioni sul percorso, ad esempio \nomef21, significa che il nome è valido per la directory di lavoro corrente.

Per **tmpnam_s generavano**, è possibile archiviare questo nome file generato nel *str*. La lunghezza massima di una stringa restituita da **tmpnam_s generavano** viene **L_tmpnam_s**, definita in STDIO. H. Se *str* viene **NULL**, quindi **tmpnam_s generavano** lascia il risultato in un buffer interno statico. Le eventuali chiamate successive eliminano quindi questo valore. Il nome generato dal **tmpnam_s generavano** composto da un nome file generato automaticamente e, dopo la prima chiamata a **tmpnam_s generavano**, un'estensione di file di numeri sequenziali in base 32 (1 alla copia-.1vvvvvu quando **TMP _MAX_S** in STDIO. H viene **INT_MAX**).

**tmpnam_s generavano** handle stringa di caratteri multibyte gli argomenti alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici OEM ottengono automaticamente dal sistema operativo. **wtmpnam_s** è una versione a caratteri wide **tmpnam_s generavano**; l'argomento e il valore restituito di **wtmpnam_s** sono stringhe a caratteri "wide". **wtmpnam_s** e **tmpnam_s generavano** si comportano in modo identico con la differenza che **wtmpnam_s** gestiscono le stringhe di caratteri multibyte.

In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ttmpnam_s**|**tmpnam_s**|**tmpnam_s**|**_wtmpnam_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**tmpnam_s**|\<stdio.h>|
|**_wtmpnam_s**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_tmpnam_s.c
// This program uses tmpnam_s to create a unique filename in the
// current working directory.
//

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   char name1[L_tmpnam_s];
   errno_t err;
   int i;

   for (i = 0; i < 15; i++)
   {
      err = tmpnam_s( name1, L_tmpnam_s );
      if (err)
      {
         printf("Error occurred creating unique filename.\n");
         exit(1);
      }
      else
      {
         printf( "%s is safe to use as a temporary file.\n", name1 );
      }
   }
}
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[malloc](malloc.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[tmpfile_s](tmpfile-s.md)<br/>
