---
title: c16rtomb, c32rtomb1 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- c16rtomb
- c32rtomb
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
- c16rtomb
- c32rtomb
- uchar/c16rtomb
- uchar/c32rtomb
dev_langs:
- C++
helpviewer_keywords:
- c16rtomb function
- c32rtomb function
ms.assetid: 7f5743ca-a90e-4e3f-a310-c73e16f4e14d
caps.latest.revision: 3
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e051fe8fdb0bfaad4d34ce50e91bf7611a47ee81
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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
Un puntatore a un **mbstate_t** oggetto.

## <a name="return-value"></a>Valore restituito

Il numero di byte archiviati nell'oggetto matrice *mbchar*, comprese tutte le sequenze di spostamento. Se *wchar* non è un carattere wide valido, il valore (**size_t**)(-1) viene restituito, **errno** è impostata su **EILSEQ**e il valore di *stato* non è specificato.

## <a name="remarks"></a>Note

Il **c16rtomb** funzione converte il carattere UTF-16 *wchar* alla sequenza di caratteri narrow multibyte equivalente nelle impostazioni locali correnti. Se *mbchar* non è un puntatore null, la funzione archivia la sequenza convertita nell'oggetto matrice a cui punta *mbchar*. Fino a **MB_CUR_MAX** byte sono archiviati in *mbchar*, e *stato* è impostato sullo stato di spostamento multibyte risultante.    Se *wchar* è un carattere wide null, una sequenza richiesta per il ripristino è archiviato lo stato iniziale di spostamento, se necessario, seguita dal carattere null, e *stato* è impostato sullo stato di conversione iniziale. Il **c32rtomb** funzione è identica, ma converte un carattere UTF-32.

Se *mbchar* è un puntatore null, il comportamento è equivalente a una chiamata alla funzione che sostituisce un buffer interno per *mbchar* e un carattere wide null per *wchar*.

Il *stato* oggetto stato di conversione consente di eseguire chiamate successive a questa funzione e altre funzioni riavviabili che mantengono lo stato di spostamento dei caratteri multibyte di output. I risultati sono indefiniti quando si usano insieme funzioni riavviabili e non riavviabili insieme o se una chiamata a **setlocale** viene fatta tra chiamate di funzioni riavviabili.

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
