---
title: wcstombs, _wcstombs_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- wcstombs
- _wcstombs_l
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
- wcstombs
- _wcstombs_l
dev_langs:
- C++
helpviewer_keywords:
- _wcstombs_l function
- wcstombs function
- string conversion, wide characters
- wide characters, converting
- wcstombs_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 91234252-9ea1-423a-af99-e9d0ce4a40e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5cbc89ff9a6c353b0df1df606a08a8c2515ed04a
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43217134"
---
# <a name="wcstombs-wcstombsl"></a>wcstombs, _wcstombs_l

Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente. Sono disponibili versioni più sicure di queste funzioni. Vedere [wcstombs_s, _wcstombs_s_l](wcstombs-s-wcstombs-s-l.md).

## <a name="syntax"></a>Sintassi

```C
size_t wcstombs(
   char *mbstr,
   const wchar_t *wcstr,
   size_t count
);
size_t _wcstombs_l(
   char *mbstr,
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
);
template <size_t size>
size_t wcstombs(
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count
); // C++ only
template <size_t size>
size_t _wcstombs_l(
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*mbstr*<br/>
Indirizzo di una sequenza di caratteri multibyte.

*wcstr*<br/>
Indirizzo di una sequenza di caratteri wide.

*count*<br/>
Numero massimo di byte che possono essere archiviati nella stringa di output multibyte.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Se **wcstombs** converte correttamente la stringa multibyte, restituisce il numero di byte scritti nella stringa di output multibyte, escluso il carattere di terminazione null (se presente). Se il *mbstr* l'argomento è **NULL**, **wcstombs** restituisce le dimensioni necessarie in byte della stringa di destinazione. Se **wcstombs** rileva un carattere wide che non è possibile convertire in carattere multibyte, restituisce -1 eseguire il cast al tipo **size_t** e imposta **errno** a **EILSEQ** .

## <a name="remarks"></a>Note

Il **wcstombs** funzione converte la stringa di caratteri wide a cui punta *wcstr* per i caratteri multibyte corrispondenti e archivia i risultati nel *mbstr* matrice. Il *conteggio* parametro indica il numero massimo di byte che possono essere archiviati nella stringa di output multibyte (vale a dire, la dimensione del *mbstr*). In generale, non è possibile sapere quanti byte saranno necessari durante la conversione di stringa di caratteri wide. Alcuni caratteri wide richiederanno un solo byte nella stringa di output, altri due. Se sono presenti due byte nella stringa di output multibyte per ogni carattere wide nella stringa di input (incluso il carattere null di caratteri "wide"), il risultato sarà sicuramente sufficiente per.

Se **wcstombs** rileva il carattere null di caratteri "wide" (L '\0') prima o quando *conteggio* si verifica, lo converte in un 0 a 8 bit e si arresta. Pertanto, la stringa di caratteri multibyte in *mbstr* sono con terminazione null solo se **wcstombs** rileva un carattere null di caratteri "wide" durante la conversione. Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento delle **wcstombs** è definito.

Se il *mbstr* l'argomento è **NULL**, **wcstombs** restituisce le dimensioni necessarie in byte della stringa di destinazione.

**wcstombs** convalida i propri parametri. Se *wcstr* viene **NULL**, o se *count* è maggiore di quella **INT_MAX**, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione imposterà **errno** al **EINVAL** e restituisce -1.

**wcstombs** Usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. **wcstombs_l** è identica, ma usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcstombs**|\<stdlib.h>|
|**_wcstombs_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma illustra il comportamento dei **wcstombs** (funzione).

```C
// crt_wcstombs.c
// compile with: /W3
// This example demonstrates the use
// of wcstombs, which converts a string
// of wide characters to a string of
// multibyte characters.

#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 100

int main( void )
{
    size_t  count;
    char    *pMBBuffer = (char *)malloc( BUFFER_SIZE );
    wchar_t *pWCBuffer = L"Hello, world.";

    printf("Convert wide-character string:\n" );

    count = wcstombs(pMBBuffer, pWCBuffer, BUFFER_SIZE ); // C4996
    // Note: wcstombs is deprecated; consider using wcstombs_s instead
    printf("   Characters converted: %u\n",
            count );
    printf("    Multibyte character: %s\n\n",
           pMBBuffer );

    free(pMBBuffer);
}
```

```Output
Convert wide-character string:
   Characters converted: 13
    Multibyte character: Hello, world.
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[WideCharToMultiByte](/windows/desktop/api/stringapiset/nf-stringapiset-widechartomultibyte)<br/>
