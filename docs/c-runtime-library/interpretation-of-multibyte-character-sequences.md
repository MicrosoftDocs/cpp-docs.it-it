---
title: Interpretazione di sequenze di caratteri multibyte
ms.date: 10/22/2019
f1_keywords:
- c.character.multibyte
helpviewer_keywords:
- MBCS [C++], locale code page
ms.assetid: da9150de-70ea-4d2f-90e6-ddb9202dd80b
ms.openlocfilehash: 7431f0c63df60414af192ea38103318c775c430d
ms.sourcegitcommit: 0a5518fdb9d87fcc326a8507ac755936285fcb94
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2019
ms.locfileid: "72811082"
---
# <a name="interpretation-of-multibyte-character-sequences"></a>Interpretazione di sequenze di caratteri multibyte

La maggior parte delle routine di caratteri multibyte nella libreria di runtime Microsoft riconoscono le sequenze di caratteri multibyte relative a una tabella codici multibyte. Il valore di output è influenzato dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Per altre informazioni, vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **suffisso** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **suffisso** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali anziché le impostazioni locali correnti.

## <a name="locale-dependent-multibyte-routines"></a>Routine multibyte dipendenti dalle impostazioni locali

|Routine|Usa|
|-------------|---------|
|[_mbclen, mblen, _mblen_l](../c-runtime-library/reference/mbclen-mblen-mblen-l.md)|Convalidare e restituire il numero di byte in carattere multibyte|
|[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|Per le stringhe di caratteri multibyte: convalidare ciascun carattere della stringa; restituire la lunghezza della stringa. Per le stringhe di caratteri wide: restituire la lunghezza della stringa.|
|[mbstowcs, _mbstowcs_l](../c-runtime-library/reference/mbstowcs-mbstowcs-l.md), [mbstowcs_s, _mbstowcs_s_l](../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md)|Converte una sequenza di caratteri multibyte in una sequenza di caratteri wide corrispondente|
|[mbtowc, _mbtowc_l](../c-runtime-library/reference/mbtowc-mbtowc-l.md)|Converte un carattere multibyte in un carattere wide corrispondente|
|[wcstombs, _wcstombs_l](../c-runtime-library/reference/wcstombs-wcstombs-l.md), [wcstombs_s, _wcstombs_s_l](../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md)|Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente|
|[wctomb, _wctomb_l](../c-runtime-library/reference/wctomb-wctomb-l.md), [wctomb_s, _wctomb_s_l](../c-runtime-library/reference/wctomb-s-wctomb-s-l.md)|Converte un carattere wide in un carattere multibyte corrispondente|

## <a name="locale-independent-multibyte-routines"></a>Routine multibyte indipendenti dalle impostazioni locali

|Routine|Usa|
|-------------|---------|
|[mbrtoc16, mbrtoc32](../c-runtime-library/reference/mbrtoc16-mbrtoc323.md)|Converte un carattere UTF-8 multibyte in un carattere UTF-16 o UTF-32 equivalente|
|[c16rtomb, c32rtomb](../c-runtime-library/reference/c16rtomb-c32rtomb1.md)|Converte un carattere UTF-16 o UTF-32 in un carattere multibyte UTF-8 equivalente|

## <a name="see-also"></a>Vedere anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)\
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
