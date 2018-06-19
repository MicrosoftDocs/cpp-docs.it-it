---
title: Classificazione per byte | Microsoft Docs
ms.custom: ''
ms.date: 04/04/2018
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.types.bytes
dev_langs:
- C++
helpviewer_keywords:
- code page 932
- byte classification routines
- bytes, testing
ms.assetid: 1cb52d71-fb0c-46ca-aad7-6472c1103370
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f1051ea7b8d4cc3a3f38a5a95f015674ac3e35c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32390974"
---
# <a name="byte-classification"></a>Classificazione per byte

Ognuna di queste routine verifica una specifico byte di un carattere multibyte per soddisfare una condizione. Se non specificato diversamente, la configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali.

> [!NOTE]
> Per definizione, i caratteri ASCII tra 0 e 127 sono un sottoinsieme di tutti i caratteri multibyte. Ad esempio, il set di caratteri giapponese katakana comprende caratteri ASCII e non ASCII.

Le costanti predefinite nella tabella seguente sono definite in \<ctype.h>.

## <a name="multibyte-character-byte-classification-routines"></a>Routine di classificazione per byte di caratteri multibyte

|Routine|Condizione di test di byte|
|-------------|-------------------------|
|[isleadbyte, _isleadbyte_l](../c-runtime-library/reference/isleadbyte-isleadbyte-l.md)|Byte di apertura; il risultato del test dipende dall'impostazione di categoria **LC_CTYPE** delle impostazioni locali correnti|
|[_ismbbalnum, _ismbbalnum_l](../c-runtime-library/reference/ismbbalnum-ismbbalnum-l.md)|**isalnum** &#124;&#124; **_ismbbkalnum**|
|[_ismbbalpha, _ismbbalpha_l](../c-runtime-library/reference/ismbbalpha-ismbbalpha-l.md)|**isalpha** &#124;&#124; **_ismbbkalnum**|
|[_ismbbgraph, _ismbbgraph_l](../c-runtime-library/reference/ismbbgraph-ismbbgraph-l.md)|Come **_ismbbprint**, ma **_ismbbgraph** non include lo spazio (0x20)|
|[_ismbbkalnum, _ismbbkalnum_l](../c-runtime-library/reference/ismbbkalnum-ismbbkalnum-l.md)|Simbolo di testo non ASCII e non di punteggiatura. Ad esempio, solo nella tabella codici 932, **_ismbbkalnum** esegue il test per caratteri alfanumerici Katakana|
|[_ismbbkana, _ismbbkana_l](../c-runtime-library/reference/ismbbkana-ismbbkana-l.md)|Katakana (0xA1 - 0xDF), solo tabella codici 932|
|[_ismbbkprint, _ismbbkprint_l](../c-runtime-library/reference/ismbbkprint-ismbbkprint-l.md)|Testo non ASCII o simbolo di punteggiatura non ASCII. Ad esempio, solo nella tabella codici 932, **_ismbbkprint** esegue il test per i caratteri alfanumerici o la punteggiatura Katakana (intervallo: 0xA1 - 0xDF).|
|[_ismbbkpunct, _ismbbkpunct_l](../c-runtime-library/reference/ismbbkpunct-ismbbkpunct-l.md)|Punteggiatura non ASCII. Ad esempio, solo nella tabella codici 932, **_ismbbkpunct** verifica la punteggiatura Katakana.|
|[_ismbblead, _ismbblead_l](../c-runtime-library/reference/ismbblead-ismbblead-l.md)|Primo byte di un carattere multibyte. Ad esempio, solo nella tabella codici 932, gli intervalli validi sono compresi tra 0x81 e 0x9F e tra 0xE0 e 0xFC.|
|[_ismbbprint, _ismbbprint_l](../c-runtime-library/reference/ismbbprint-ismbbprint-l.md)|**isprint** &#124;&#124; **_ismbbkprint**. **ismbbprint** include lo spazio (0x20)|
|[_ismbbpunct, _ismbbpunct_l](../c-runtime-library/reference/ismbbpunct-ismbbpunct-l.md)|**ispunct** &#124;&#124; **_ismbbkpunct**|
|[_ismbbtrail, _ismbbtrail_l](../c-runtime-library/reference/ismbbtrail-ismbbtrail-l.md)|Secondo byte di un carattere multibyte. Ad esempio, solo nella tabella codici 932, gli intervalli validi sono compresi tra 0x40 e 0x7E e tra 0x80 e 0xEC.|
|[_ismbslead, _ismbslead_l](../c-runtime-library/reference/ismbslead-ismbstrail-ismbslead-l-ismbstrail-l.md)|Byte di apertura (nel contesto della stringa)|
|[ismbstrail, _ismbstrail_l](../c-runtime-library/reference/ismbslead-ismbstrail-ismbslead-l-ismbstrail-l.md)|Byte di chiusura (nel contesto della stringa)|
|[_mbbtype, _mbbtype_l](../c-runtime-library/reference/mbbtype-mbbtype-l.md)|Tipo di byte restituito basato sul byte precedente|
|[_mbsbtype, _mbsbtype_l](../c-runtime-library/reference/mbsbtype-mbsbtype-l.md)|Tipo restituito di byte all'interno della stringa|
|[mbsinit](../c-runtime-library/reference/mbsinit.md)|Tiene traccia dello stato di una conversione di caratteri multibyte.|

La macro **MB_LEN_MAX**, definita in \<limits.h>, si espande alla lunghezza massima in byte che può avere qualsiasi carattere multibyte. **MB_CUR_MAX**, definita in \<stdlib.h>, si espande alla lunghezza massima in byte di qualsiasi carattere multibyte nelle impostazioni locali correnti.

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)