---
title: Routine _ismbb | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apilocation:
- msvcr110.dll
- msvcrt.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr90.dll
- msvcr100.dll
apitype: DLLExport
f1_keywords:
- _ismbb
- ismbb
dev_langs:
- C++
helpviewer_keywords:
- ismbb routines
- _ismbb routines
ms.assetid: d63c232e-3fe4-4844-aafd-2133846ece4b
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Human Translation
ms.sourcegitcommit: 128bd124c2536d86c8b673b54abc4b5505526b41
ms.openlocfilehash: a9e24e349b829d9547037bba31c940f9af25f80c
ms.contentlocale: it-it
ms.lasthandoff: 05/10/2017

---
# <a name="ismbb-routines"></a>Routines _ismbb
Testa il valore integer specificato `c` per una determinata condizione, usando le impostazioni locali correnti o una categoria di stato di conversione LC_CTYPE specificata.  
  
|||  
|-|-|  
|[_ismbbalnum, _ismbbalnum_l](../c-runtime-library/reference/ismbbalnum-ismbbalnum-l.md)|[_ismbbkprint, _ismbbkprint_l](../c-runtime-library/reference/ismbbkprint-ismbbkprint-l.md)|  
|[_ismbbalpha, _ismbbalpha_l](http://msdn.microsoft.com/en-us/8e54cb92-fc2b-41f5-8ab4-b22ac8aa9ad0)|[_ismbbkpunct, _ismbbkpunct_l](../c-runtime-library/reference/ismbbkpunct-ismbbkpunct-l.md)|  
|[_ismbbblank, _ismbbblank_l](../c-runtime-library/reference/ismbbblank-ismbbblank-l.md)|[_ismbblead, _ismbblead_l](../c-runtime-library/reference/ismbblead-ismbblead-l.md)|  
|[_ismbbgraph, _ismbbgraph_l](../c-runtime-library/reference/ismbbgraph-ismbbgraph-l.md)|[_ismbbprint, _ismbbprint_l](../c-runtime-library/reference/ismbbprint-ismbbprint-l.md)|  
|[_ismbbkalnum, _ismbbkalnum_l](../c-runtime-library/reference/ismbbkalnum-ismbbkalnum-l.md)|[_ismbbpunct, _ismbbpunct_l](../c-runtime-library/reference/ismbbpunct-ismbbpunct-l.md)|  
|[_ismbbkana, _ismbbkana_l](../c-runtime-library/reference/ismbbkana-ismbbkana-l.md)|[_ismbbtrail, _ismbbtrail_l](../c-runtime-library/reference/ismbbtrail-ismbbtrail-l.md)|  
  
## <a name="remarks"></a>Note  
 Ogni routine nel gruppo `_ismbb` testa il valore integer specificato `c` per una determinata condizione. Il risultato del test dipende dalla tabella codici multibyte corrente. Per impostazione predefinita, la tabella codici multibyte è impostata sulla tabella codici ANSI ottenuta dal sistema operativo all'avvio del programma. È possibile usare [_getmbcp](../c-runtime-library/reference/getmbcp.md) per eseguire una query per la tabella codici multibyte in uso oppure [_setmbcp](../c-runtime-library/reference/setmbcp.md) per modificarla.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni che non hanno il suffisso **_l** usano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni che hanno il suffisso **_l** sono identiche, con la differenza che usano il parametro delle impostazioni locali che viene passato.  
  
 Le routine nella famiglia `_ismbb` testano il valore integer specificato `c` nel modo seguente.  
  
|Routine|Condizione di test di byte|  
|-------------|-------------------------|  
|[_ismbbalnum](../c-runtime-library/reference/ismbbalnum-ismbbalnum-l.md)|`isalnum` &#124;&#124; `_ismbbkalnum`.|  
|[_ismbbalpha](reference/ismbbalpha-ismbbalpha-l.md)|`isalpha` &#124;&#124; `_ismbbkalnum`.|  
|[_ismbbblank](../c-runtime-library/reference/ismbbblank-ismbbblank-l.md)|`isblank`|  
|[_ismbbgraph](../c-runtime-library/reference/ismbbgraph-ismbbgraph-l.md)|Come `_ismbbprint`, ma `_ismbbgraph` non include lo spazio (0x20).|  
|[_ismbbkalnum](../c-runtime-library/reference/ismbbkalnum-ismbbkalnum-l.md)|Simbolo di testo non ASCII e non di punteggiatura. Ad esempio, solo nella tabella codici 932, `_ismbbkalnum` esegue il test per caratteri alfanumerici Katakana.|  
|[_ismbbkana](../c-runtime-library/reference/ismbbkana-ismbbkana-l.md)|Katakana (0xA1 - 0xDF). Specifico per la tabella codici 932.|  
|[_ismbbkprint](../c-runtime-library/reference/ismbbkprint-ismbbkprint-l.md)|Testo non ASCII o simbolo di punteggiatura non ASCII. Ad esempio, solo nella tabella codici 932, `_ismbbkprint` esegue il test per i caratteri alfanumerici o la punteggiatura Katakana (intervallo: 0xA1 - 0xDF).|  
|[_ismbbkpunct](../c-runtime-library/reference/ismbbkpunct-ismbbkpunct-l.md)|Punteggiatura non ASCII. Ad esempio, solo nella tabella codici 932, `_ismbbkpunct` verifica la punteggiatura Katakana.|  
|[_ismbblead](../c-runtime-library/reference/ismbblead-ismbblead-l.md)|Primo byte di un carattere multibyte. Ad esempio, solo nella tabella codici 932, gli intervalli validi sono compresi tra 0x81 e 0x9F e tra 0xE0 e 0xFC.|  
|[_ismbbprint](../c-runtime-library/reference/ismbbprint-ismbbprint-l.md)|`isprint` &#124;&#124; `_ismbbkprint`. **ismbbprint** include lo spazio (0x20).|  
|[_ismbbpunct](../c-runtime-library/reference/ismbbpunct-ismbbpunct-l.md)|`ispunct` &#124;&#124; `_ismbbkpunct`.|  
|[_ismbbtrail](../c-runtime-library/reference/ismbbtrail-ismbbtrail-l.md)|Secondo byte di un carattere multibyte. Ad esempio, solo nella tabella codici 932, gli intervalli validi sono compresi tra 0x40 e 0x7E e tra 0x80 e 0xEC.|  
  
 La tabella seguente mostra i valori ORed che costituiscono le condizioni di test per le routine. Le costanti manifesto `_BLANK`, `_DIGIT`, `_LOWER`, `_PUNCT`e `_UPPER` sono definite in Ctype.h.  
  
|Routine|_BLANK|_DIGIT|LOWER|_PUNCT|UPPER|Testo<br /><br /> non<br /><br /> ASCII|Testo<br /><br /> non<br /><br /> ASCII|  
|-------------|-------------|-------------|-----------|-------------|-----------|------------------------------|-------------------------------|  
|`_ismbbalnum`|—|x|x|—|x|x|—|  
|`_ismbbalpha`|—|—|x|—|x|x|—|  
|`_ismbbblank`|x|—|—|—|—|—|—|  
|`_ismbbgraph`|—|x|x|x|x|x|x|  
|`_ismbbkalnum`|—|—|—|—|—|x|—|  
|`_ismbbkprint`|—|—|—|—|—|x|x|  
|`_ismbbkpunct`|—|—|—|—|—|—|x|  
|`_ismbbprint`|x|x|x|x|x|x|x|  
|`_ismbbpunct`|—|—|—|x|—|—|x|  
  
 Le routine `_ismbb` vengono implementate sia come funzioni che come macro. Per altre informazioni sulla scelta di un'implementazione, vedere [Suggerimenti per la scelta tra funzioni e macro](../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione per byte](../c-runtime-library/byte-classification.md)   
 [Routine is, isw](../c-runtime-library/is-isw-routines.md)   
 [_mbbtombc, _mbbtombc_l](../c-runtime-library/reference/mbbtombc-mbbtombc-l.md)   
 [_mbctombb, _mbctombb_l](../c-runtime-library/reference/mbctombb-mbctombb-l.md)
