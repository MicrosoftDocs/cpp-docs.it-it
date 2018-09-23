---
title: Interpretazione di sequenze di caratteri multibyte | Microsoft Docs
ms.custom: ''
ms.date: 04/11/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- c.character.multibyte
dev_langs:
- C++
helpviewer_keywords:
- MBCS [C++], locale code page
ms.assetid: da9150de-70ea-4d2f-90e6-ddb9202dd80b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 86fc93b74f661ac0829c0ed5925cb9cf78a8876e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46103633"
---
# <a name="interpretation-of-multibyte-character-sequences"></a>Interpretazione di sequenze di caratteri multibyte

La maggior parte delle routine di caratteri multibyte nella libreria di runtime Microsoft riconoscono le sequenze di caratteri multibyte relative a una tabella codici multibyte. La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali.

## <a name="locale-dependent-multibyte-routines"></a>Routine multibyte dipendenti dalle impostazioni locali

|Routine|Usa|
|-------------|---------|
|[_mbclen, mblen, _mblen_l](../c-runtime-library/reference/mbclen-mblen-mblen-l.md)|Convalidare e restituire il numero di byte in carattere multibyte|
|[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|Per le stringhe di caratteri multibyte: convalidare ciascun carattere della stringa; restituire la lunghezza della stringa. Per le stringhe di caratteri wide: restituire la lunghezza della stringa.|
|[mbstowcs, _mbstowcs_l](../c-runtime-library/reference/mbstowcs-mbstowcs-l.md), [mbstowcs_s, _mbstowcs_s_l](../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md)|Converte una sequenza di caratteri multibyte in una sequenza di caratteri wide corrispondente|
|[mbtowc, _mbtowc_l](../c-runtime-library/reference/mbtowc-mbtowc-l.md)|Converte un carattere multibyte in un carattere wide corrispondente|
|[wcstombs, _wcstombs_l](../c-runtime-library/reference/wcstombs-wcstombs-l.md), [wcstombs_s, _wcstombs_s_l](../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md)|Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente|
|[wctomb, _wctomb_l](../c-runtime-library/reference/wctomb-wctomb-l.md), [wctomb_s, _wctomb_s_l](../c-runtime-library/reference/wctomb-s-wctomb-s-l.md)|Converte un carattere wide in un carattere multibyte corrispondente|
|[mbrtoc16, mbrtoc32](../c-runtime-library/reference/mbrtoc16-mbrtoc323.md)|Converte un carattere multibyte nel carattere UTF-16 o UTF-32 equivalente|
|[c16rtomb, c32rtomb](../c-runtime-library/reference/c16rtomb-c32rtomb1.md)|Converte un carattere UTF-16 o UTF-32 nel carattere multibyte equivalente|

## <a name="see-also"></a>Vedere anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
