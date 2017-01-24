---
title: "Funzioni strcoll | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr120.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr110.dll"
apitype: "DLLExport"
f1_keywords: 
  - "strcoll"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tabelle codici, utilizzo per confronti tra stringhe"
  - "strcoll (funzioni)"
  - "confronto tra stringhe [C++], specifici delle impostazioni cultura"
  - "stringhe [C++], confronto per tabella codici"
ms.assetid: c09eeff3-8aba-4cfb-a524-752436d85573
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni strcoll
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ognuna delle funzioni `wcscoll` e `strcoll` confronta due stringhe in base all'impostazione di categoria di `LC_COLLATE` della tabella codici delle impostazioni locali in uso.  Ognuna delle funzioni `_mbscoll` confronta due stringhe in base alla tabella codici multibyte in uso.  Usa le funzioni `coll` per il confronto tra stringhe quando esiste una differenza tra l'ordine del set di caratteri e l'ordine dei caratteri lessicografico nella tabella codici corrente, questa differenza è particolarmente interessante per il confronto di stringhe.  Utilizza le funzioni corrispondenti di `cmp` per testare solo per l'uguaglianza di stringhe.  
  
### Funzioni strcoll  
  
|SBCS|Unicode|MBCS|Descrizione|  
|----------|-------------|----------|-----------------|  
|[strcoll](../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md)|[wcscoll](../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md)|[\_mbscoll](../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md)|Confronta due stringhe|  
|[\_stricoll](../c-runtime-library/reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md)|[\_wcsicoll](../c-runtime-library/reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md)|[\_mbsicoll](../c-runtime-library/reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md)|Confronta due stringhe \(senza distinzione tra maiuscole e minuscole\)|  
|[\_strncoll](../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|[\_wcsncoll](../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|[\_mbsncoll](../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|Riordina i primi caratteri `count` di due stringhe|  
|[\_strnicoll](../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|[\_wcsnicoll](../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|[\_mbsnicoll](../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|Riordina i primi caratteri `count` di due stringhe \(senza distinzione tra maiuscole e minuscole\)|  
  
## Note  
 Le versioni del carattere a singolo byte \(SBCS\) di queste funzioni \(`strcoll`, `stricoll`, `_strncoll` e `_strnicoll`\) confrontano `string1` e `string2` secondo l'impostazione di categoria di `LC_COLLATE` delle impostazioni locali correnti.  Queste funzioni sono diverse dalle corrispondenti funzioni di `strcmp` in quanto le funzioni di `strcoll` utilizzano le informazioni della tabella codici delle impostazioni locali che forniscono le sequenze di ordinamento.  Per i confronti di stringhe nelle impostazioni locali in cui differiscono l'ordine del set di caratteri e l'ordine dei caratteri lessicografico, le funzioni di `strcoll` devono essere utilizzate anziché funzioni corrispondenti di `strcmp`.  Per ulteriori informazioni su `LC_COLLATE`, vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 Per alcune tabelle codici e per il set di caratteri corrispondenti, l'ordine di caratteri nel set di caratteri potrebbe differire dall'ordine dei caratteri lessicografici.  Nelle impostazioni locali "C", questo non avviene: l'ordine dei caratteri nel set di caratteri ASCII è identico all'ordine lessicografico dei caratteri.  Tuttavia, in alcune tabelle codici Europee, ad esempio, il carattere "a" \(valore 0x61\) precede il carattere "ä" \(valore 0xE4\) nel set di caratteri, ma il carattere "ä" precede il carattere lessicografico "a".  Per eseguire un confronto lessicografico in tale istanza, utilizzare `strcoll` anziché `strcmp`.  In alternativa, è possibile utilizzare `strxfrm` sulle stringhe originali, quindi usare `strcmp` sulle stringhe risultanti.  
  
 `strcoll`, `stricoll`, `_strncoll` e `_strnicoll` gestiscono automaticamente stringhe di caratteri multibyte in base alla tabella codici delle impostazioni locali attualmente in uso, analogamente alle rispettive controparti a caratteri estesi \(Unicode\).  Le versioni di caratteri multibyte \(MBCS\) di queste funzioni, tuttavia, riordinano le stringhe sui caratteri in base alla tabella codici multibyte in uso.  
  
 Poiché le funzioni `coll` raccolgono le stringhe lessicografiche per il confronto, mentre le funzioni `cmp` verificano semplicemente l'uguaglianza della stringa, le funzioni `coll` sono più lente delle versioni corrispondenti `cmp`.  Pertanto, le funzioni `coll` devono essere utilizzate solamente quando esiste una differenza tra l'ordine del set di caratteri e l'ordine dei caratteri lessicografici nella tabella codici corrente e questa differenza è particolarmente interessante per il confronto di stringhe.  
  
## Vedere anche  
 [Impostazioni locali](../c-runtime-library/locale.md)   
 [Modifica di stringhe](../c-runtime-library/string-manipulation-crt.md)   
 [localeconv](../c-runtime-library/reference/localeconv.md)   
 [\_mbsnbcoll, \_mbsnbcoll\_l, \_mbsnbicoll, \_mbsnbicoll\_l](../c-runtime-library/reference/mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)   
 [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [strcmp, wcscmp, \_mbscmp](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strxfrm, wcsxfrm, \_strxfrm\_l, \_wcsxfrm\_l](../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)