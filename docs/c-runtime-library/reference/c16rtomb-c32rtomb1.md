---
title: c16rtomb, c32rtomb
ms.date: 01/22/2018
api_name:
- c16rtomb
- c32rtomb
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- c16rtomb
- c32rtomb
- uchar/c16rtomb
- uchar/c32rtomb
helpviewer_keywords:
- c16rtomb function
- c32rtomb function
ms.assetid: 7f5743ca-a90e-4e3f-a310-c73e16f4e14d
ms.openlocfilehash: a16effe48442ccbb5144b57ead2fb15c908fe898
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70943423"
---
# <a name="c16rtomb-c32rtomb"></a>c16rtomb, c32rtomb

Convertire un carattere wide UTF-16 o UTF-32 in un carattere multibyte nelle impostazioni locali correnti.

## <a name="syntax"></a>Sintassi

```C
size_t c16rtomb(
    char *mbchar,
    char16_t wchar,
    mbstate_t *state
);
size_t c32rtomb(
    char *mbchar,
    char32_t wchar,
    mbstate_t *state
);
```

### <a name="parameters"></a>Parametri

*mbchar*<br/>
Puntatore a una matrice per archiviare il carattere multibyte convertito.

*wchar*<br/>
Carattere wide da convertire.

*state*<br/>
Puntatore a un oggetto **mbstate_t** .

## <a name="return-value"></a>Valore restituito

Numero di byte archiviati nell'oggetto matrice *mbchar*, incluse tutte le sequenze di spostamento. Se *WCHAR* non è un carattere wide valido, viene restituito il valore (**size_t**) (-1), **errno** viene impostato su **EILSEQ**e il valore di *state* non è specificato.

## <a name="remarks"></a>Note

La funzione **c16rtomb** converte il carattere *WCHAR* UTF-16 in una sequenza di caratteri narrow multibyte equivalente nelle impostazioni locali correnti. Se *mbchar* non è un puntatore null, la funzione Archivia la sequenza convertita nell'oggetto matrice a cui punta *mbchar*. Fino a **MB_CUR_MAX** byte vengono archiviati in *mbchar*e *lo stato* viene impostato sullo stato di spostamento multibyte risultante.    Se *WCHAR* è un carattere wide null, viene archiviata una sequenza necessaria per ripristinare lo stato di spostamento iniziale, se necessario, seguita dal carattere null e *lo stato viene impostato* sullo stato di conversione iniziale. La funzione **c32rtomb** è identica, ma converte un carattere UTF-32.

Se *mbchar* è un puntatore null, il comportamento è equivalente a una chiamata alla funzione che sostituisce un buffer interno per *mbchar* e un carattere null Wide per *WCHAR*.

L'oggetto stato di conversione *dello stato* consente di effettuare chiamate successive a questa funzione e ad altre funzioni riavviabili che mantengono lo stato di spostamento dei caratteri di output multibyte. I risultati non sono definiti quando si combina l'uso di funzioni riavviabili e non riavviabili oppure se viene eseguita una chiamata a **setlocale** tra le chiamate di funzione riavviabili.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**c16rtomb**, **c32rtomb**|C, C++: \<uchar.h>|

Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbrtoc16, mbrtoc32](mbrtoc16-mbrtoc323.md)<br/>
[wcrtomb](wcrtomb.md)<br/>
[wcrtomb_s](wcrtomb-s.md)<br/>
