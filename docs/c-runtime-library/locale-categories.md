---
title: "Categorie di impostazioni locali | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "LC_MAX"
  - "LC_MIN"
  - "LC_MONETARY"
  - "LC_TIME"
  - "LC_NUMERIC"
  - "LC_COLLATE"
  - "LC_CTYPE"
  - "LC_ALL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LC_ALL (costante)"
  - "LC_COLLATE (costante)"
  - "LC_CTYPE (costante)"
  - "LC_MAX (costante)"
  - "LC_MIN (costante)"
  - "LC_MONETARY (costante)"
  - "LC_NUMERIC (costante)"
  - "LC_TIME (costante)"
  - "costanti locali"
ms.assetid: 868f1493-fe5d-4722-acab-bfcd374a063a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Categorie di impostazioni locali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <locale.h>  
  
```  
  
## Note  
 Le categorie delle impostazioni locali sono costanti manifesto utilizzate dalle routine di localizzazione per specificare quale porzione delle impostazioni locali di un programma verrà utilizzata.  Le impostazioni locali fanno riferimento alla località \(o al paese\) per il quale certi aspetti del programma possono essere personalizzati.  Le aree dipendenti dalle impostazioni locali includono, ad esempio, la formattazione delle date o il formato di visualizzazione dei valori monetari.  
  
|Categoria delle impostazioni locali|Parti del programma interessate|  
|-----------------------------------------|-------------------------------------|  
|`LC_ALL`|Qualsiasi comportamento specifico delle impostazioni locali \(tutte le categorie\)|  
|`LC_COLLATE`|Comportamento delle funzioni `strcoll` e `strxfrm`|  
|`LC_CTYPE`|Comportamento delle funzioni per la gestione di caratteri \(ad eccezione di **isdigit**, `isxdigit`, `mbstowcs` e `mbtowc`, che non vengono influenzati\)|  
|`LC_MAX`|Uguale a `LC_TIME`|  
|`LC_MIN`|Uguale a `LC_ALL`|  
|`LC_MONETARY`|Informazioni di formattazione monetaria restituite dalla funzione `localeconv`|  
|`LC_NUMERIC`|Carattere del separatore decimale per le routine di output formattate \(ad esempio `printf`\), routine di conversione dati e formattazione di informazioni non monetarie restituite dalla funzione `localeconv`|  
|`LC_TIME`|Comportamento della funzione `strftime`|  
  
 Per un esempio, vedere [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
## Vedere anche  
 [localeconv](../c-runtime-library/reference/localeconv.md)   
 [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni strcoll](../c-runtime-library/strcoll-functions.md)   
 [strftime, wcsftime, \_strftime\_l, \_wcsftime\_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [strxfrm, wcsxfrm, \_strxfrm\_l, \_wcsxfrm\_l](../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)