---
description: 'Altre informazioni su: c16rtomb, c32rtomb'
title: c16rtomb, c32rtomb
ms.date: 10/22/2019
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
ms.openlocfilehash: 35fb8f46693008cca9ee2a28e5b2656f009e4a6c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97171673"
---
# <a name="c16rtomb-c32rtomb"></a>c16rtomb, c32rtomb

Convertire un carattere wide UTF-16 o UTF-32 in un carattere multibyte UTF-8.

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

*mbchar*\
Puntatore a una matrice per archiviare il carattere multibyte UTF-8 convertito.

*WCHAR*\
Carattere wide da convertire.

*stato*\
Puntatore a un oggetto **mbstate_t** .

## <a name="return-value"></a>Valore restituito

Numero di byte archiviati nell'oggetto matrice *mbchar*, incluse tutte le sequenze di spostamento. Se *WCHAR* non è un carattere wide valido, viene restituito il valore (**size_t**) (-1), **errno** viene impostato su **EILSEQ** e il valore di *state* non è specificato.

## <a name="remarks"></a>Commenti

La funzione **c16rtomb** converte il carattere *WCHAR* UTF-16 le nella sequenza di caratteri multibyte UTF-8 equivalente. Se *mbchar* non è un puntatore null, la funzione Archivia la sequenza convertita nell'oggetto matrice a cui punta *mbchar*. Fino a **MB_CUR_MAX** byte vengono archiviati in *mbchar* e lo *stato* viene impostato sullo stato di spostamento multibyte risultante.

Se *WCHAR* è un carattere wide null, viene archiviata una sequenza necessaria per ripristinare lo stato di spostamento iniziale, se necessario, seguita dal carattere null. *lo stato è impostato* sullo stato di conversione iniziale. La funzione **c32rtomb** è identica, ma converte un carattere UTF-32.

Se *mbchar* è un puntatore null, il comportamento è equivalente a una chiamata alla funzione che sostituisce un buffer interno per *mbchar* e un carattere null Wide per *WCHAR*.

L'oggetto stato di conversione *dello stato* consente di effettuare chiamate successive a questa funzione e ad altre funzioni riavviabili che mantengono lo stato di spostamento dei caratteri di output multibyte. I risultati non sono definiti quando si combina l'uso di funzioni riavviabili e non riavviabili.

Per convertire i caratteri UTF-16 in caratteri multibyte non UTF-8, usare le funzioni [wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md), [wcstombs_s o _wcstombs_s_l](wcstombs-s-wcstombs-s-l.md) .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**c16rtomb**, **c32rtomb**|C, C++: \<uchar.h>|

Per informazioni sulla compatibilità, vedere [Compatibilità](../compatibility.md).

## <a name="see-also"></a>Vedi anche

[Conversione dei dati](../data-conversion.md)\
[Locale](../locale.md)\
[Interpretazione di sequenze di caratteri multibyte](../interpretation-of-multibyte-character-sequences.md)\
[mbrtoc16, mbrtoc32](mbrtoc16-mbrtoc323.md)\
[wcrtomb](wcrtomb.md)\
[wcrtomb_s](wcrtomb-s.md)
