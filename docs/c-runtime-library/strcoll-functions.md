---
title: Funzioni strcoll | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apilocation:
- msvcr120.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr80.dll
- msvcr100.dll
- msvcr110.dll
apitype: DLLExport
f1_keywords:
- strcoll
dev_langs:
- C++
helpviewer_keywords:
- code pages, using for string comparisons
- string comparison [C++], culture-specific
- strcoll functions
- strings [C++], comparing by code page
ms.assetid: c09eeff3-8aba-4cfb-a524-752436d85573
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e97e16ec3360764411b36bf129c344a3455ce6a6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32418185"
---
# <a name="strcoll-functions"></a>Funzioni strcoll
Ognuna delle funzioni `strcoll` e `wcscoll`confronta due stringhe in base all'impostazione della categoria di `LC_COLLATE` della tabella codici delle impostazioni locali in uso. Ognuna delle funzioni `_mbscoll` confronta due stringhe in base all'impostazione della tabella codici multibyte delle impostazioni locali in uso. Usare le funzioni `coll` per il confronto di stringhe solo quando esiste una differenza nella tabella codici corrente tra l'ordine del set di caratteri e l'ordine lessicografico dei caratteri e quando questa differenza è di particolare interesse per il confronto. Usare le funzioni `cmp` corrispondenti per eseguire il test per testare solo per l'uguaglianza di stringhe.  
  
### <a name="strcoll-functions"></a>Funzioni strcoll  
  
|SBCS|Unicode|MBCS|Descrizione|  
|----------|-------------|----------|-----------------|  
|[strcoll](../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md)|[wcscoll](../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md)|[_mbscoll](../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md)|Collaziona due stringhe|  
|[_stricoll](../c-runtime-library/reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md)|[_wcsicoll](../c-runtime-library/reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md)|[_mbsicoll](../c-runtime-library/reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md)|Collaziona due stringhe senza distinzione tra maiuscole e minuscole|  
|[_strncoll](../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|[_wcsncoll](../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|[_mbsncoll](../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|Collaziona i primi `count` caratteri di due stringhe|  
|[_strnicoll](../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|[_wcsnicoll](../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|[_mbsnicoll](../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|Collaziona i primi `count` caratteri di due stringhe senza distinzione tra maiuscole e minuscole|  
  
## <a name="remarks"></a>Note  
 Le versioni a caratteri a un byte (SBCS) di queste funzioni (`strcoll`, `stricoll`, `_strncoll` e `_strnicoll`) confrontano `string1` e `string2` in base all'impostazione della categoria `LC_COLLATE` delle impostazioni locali correnti. Queste funzioni sono diverse dalle corrispondenti funzioni `strcmp`, in quanto le funzioni `strcoll` usano le informazioni della tabella codici delle impostazioni locali che forniscono sequenze di collazione. Per i confronti di stringhe nelle impostazioni locali in cui l'ordine del set di caratteri e l'ordine lessicografico dei caratteri differiscono, devono essere usate le funzioni `strcoll` anziché le funzioni `strcmp` corrispondenti. Per altre informazioni su `LC_COLLATE`, vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 Per alcune tabelle codici e per i set di caratteri corrispondenti, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico dei caratteri stessi. Ciò non è vero nelle impostazioni locali "C". L'ordine dei caratteri nel set di caratteri ASCII è lo stesso dell'ordine lessicografico dei caratteri. In alcune tabelle codici europee, tuttavia, il carattere "a" (valore 0x61) precede il carattere "ä" (valore 0xE4) nel set di caratteri, ma il carattere "ä" precede lessicograficamente il carattere "a". Per eseguire un confronto lessicografico in tale istanza, usare `strcoll` anziché `strcmp`. In alternativa, è possibile utilizzare `strxfrm` sulle stringhe originali, quindi usare `strcmp` sulle stringhe risultanti.  
  
 `strcoll`, `stricoll`, `_strncoll` e `_strnicoll` gestiscono automaticamente stringhe di caratteri multibyte in base alla tabella codici delle impostazioni locali attualmente in uso, analogamente alle rispettive controparti a caratteri wide (Unicode). Le versioni a caratteri multibyte (MBCS) di queste funzioni, tuttavia, riordinano le stringhe in base ai caratteri secondo la tabella codici multibyte in uso.  
  
 Dato che le funzioni `coll` collazionano le stringhe a livello lessicografico per il confronto, mentre le funzioni `cmp` testano semplicemente le stringhe per verificarne l'uguaglianza, le funzioni `coll` sono molto più lente delle versioni `cmp` corrispondenti. È quindi consigliabile usare le funzioni `coll` solo se esiste una differenza nella tabella codici corrente tra l'ordine del set di caratteri e l'ordine lessicografico dei caratteri e se questa differenza è di particolare interesse per il confronto delle stringhe.  
  
## <a name="see-also"></a>Vedere anche  
 [Locale](../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Modifica di stringhe](../c-runtime-library/string-manipulation-crt.md)   
 [localeconv](../c-runtime-library/reference/localeconv.md)   
 [_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l](../c-runtime-library/reference/mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [strcmp, wcscmp, _mbscmp](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)