---
title: wcstombs_s, _wcstombs_s_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _wcstombs_s_l
- wcstombs_s
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- wcstombs_s
- _wcstombs_s_l
dev_langs:
- C++
helpviewer_keywords:
- wcstombs_s function
- string conversion, wide characters
- wide characters, converting
- _wcstombs_s_l function
- wcstombs_s_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 105f2d33-221a-4f6d-864c-23c1865c42af
caps.latest.revision: 31
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d392e2a970627cd59d4cb96ae354c3b15406731e
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="wcstombss-wcstombssl"></a>wcstombs_s, _wcstombs_s_l

Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente. Questa è una versione di [wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t wcstombs_s(
   size_t *pReturnValue,
   char *mbstr,
   size_t sizeInBytes,
   const wchar_t *wcstr,
   size_t count
);

errno_t _wcstombs_s_l(
   size_t *pReturnValue,
   char *mbstr,
   size_t sizeInBytes,
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
);

template <size_t size>
errno_t wcstombs_s(
   size_t *pReturnValue,
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count
); // C++ only

template <size_t size>
errno_t _wcstombs_s_l(
   size_t *pReturnValue,
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*pReturnValue*<br/>
Numero di caratteri convertiti.

*mbstr*<br/>
Indirizzo di un buffer per la stringa di caratteri multibyte convertita risultante.

*sizeInBytes*<br/>
Le dimensioni in byte del *mbstr* buffer.

*wcstr*<br/>
Punta alla stringa di caratteri wide da convertire.

*count*<br/>
Il numero massimo di byte da archiviare nel *mbstr* buffer, escluso il carattere di terminazione null o [truncate](../../c-runtime-library/truncate.md).

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

|Condizione di errore|Valore restituito e **errno**|
|---------------------|------------------------------|
|*mbstr* viene **NULL** e *sizeInBytes* > 0|**EINVAL**|
|*wcstr* è **NULL**|**EINVAL**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che *conteggio* viene **truncate**; vedere la sezione Osservazioni riportata di seguito)|**ERANGE**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Note

Il **wcstombs_s** funzione converte una stringa di caratteri "wide" a cui puntata *wcstr* in caratteri multibyte archiviati nel buffer a cui puntato *mbstr*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null wide

- Viene rilevato un carattere wide che non può essere convertito

- Il numero di byte archiviato nel *mbstr* buffer equals *conteggio*.

La stringa di destinazione termina sempre con Null, anche in caso di errore.

Se *conteggio* è il valore speciale [truncate](../../c-runtime-library/truncate.md), quindi **wcstombs_s** Converte la gran parte della stringa come rientrano nel buffer di destinazione, lasciando comunque una chat room per un valore null carattere di terminazione. Se la stringa viene troncata, il valore restituito è **STRUNCATE**, e la conversione viene considerata riuscita.

Se **wcstombs_s** converte correttamente la stringa di origine, inserisce la dimensione in byte della stringa convertita, incluso il terminatore null, in  *&#42;pReturnValue* (fornito  *pReturnValue* non è **NULL**). Questo errore si verifica anche se il *mbstr* argomento **NULL** e fornisce un modo per determinare le dimensioni del buffer richieste. Si noti che se *mbstr* viene **NULL**, *conteggio* viene ignorato.

Se **wcstombs_s** rileva un carattere "wide" non è possibile convertire un carattere multibyte in tale client inserisce 0  *&#42;pReturnValue*, imposta il buffer di destinazione in una stringa vuota, imposta **errno**  al **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcstombs_s** è definito.

> [!IMPORTANT]
> Verificare che *wcstr* e *mbstr* si sovrappongano e che *conteggio* rispecchi correttamente il numero di caratteri wide da convertire.

**wcstombs_s** utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; **wcstombs_s_l** è identica alla **wcstombs** ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcstombs_s**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma viene illustrato il comportamento del **wcstombs_s** (funzione).

```C
// crt_wcstombs_s.c
// This example converts a wide character
// string to a multibyte character string.
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define BUFFER_SIZE 100

int main( void )
{
    size_t   i;
    char      *pMBBuffer = (char *)malloc( BUFFER_SIZE );
    wchar_t*pWCBuffer = L"Hello, world.";

    printf( "Convert wide-character string:\n" );

    // Conversion
    wcstombs_s(&i, pMBBuffer, (size_t)BUFFER_SIZE,
               pWCBuffer, (size_t)BUFFER_SIZE );

    // Output
    printf("   Characters converted: %u\n", i);
    printf("    Multibyte character: %s\n\n",
     pMBBuffer );

    // Free multibyte character buffer
    if (pMBBuffer)
    {
    free(pMBBuffer);
    }
}
```

```Output
Convert wide-character string:
   Characters converted: 14
    Multibyte character: Hello, world.
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wctomb_s, _wctomb_s_l](wctomb-s-wctomb-s-l.md)<br/>
[WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)<br/>
