---
title: Categorie di impostazioni locali | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- LC_MAX
- LC_MIN
- LC_MONETARY
- LC_TIME
- LC_NUMERIC
- LC_COLLATE
- LC_CTYPE
- LC_ALL
dev_langs:
- C++
helpviewer_keywords:
- LC_MIN constant
- LC_MONETARY constant
- LC_CTYPE constant
- locale constants
- LC_MAX constant
- LC_ALL constant
- LC_TIME constant
- LC_NUMERIC constant
- LC_COLLATE constant
ms.assetid: 868f1493-fe5d-4722-acab-bfcd374a063a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8e2188dc477a81477b65db22bcd06390a4b6773c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="locale-categories"></a>Categorie di impostazioni locali
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <locale.h>  
  
```  
  
## <a name="remarks"></a>Note  
 Le categorie di impostazioni locali sono costanti manifesto usate dalle routine di localizzazione per specificare quale porzione delle impostazioni locali di un programma verrà usata. Le impostazioni locali fanno riferimento alla località o al paese per il quale è possibile personalizzare aspetti specifici del programma. Le aree dipendenti dalle impostazioni locali includono, ad esempio, la formattazione delle date o il formato di visualizzazione dei valori monetari.  
  
|Categoria di impostazioni locali|Parti del programma interessate|  
|---------------------|-------------------------------|  
|`LC_ALL`|Qualsiasi comportamento specifico delle impostazioni locali (tutte le categorie)|  
|`LC_COLLATE`|Comportamento delle funzioni `strcoll` e `strxfrm`|  
|`LC_CTYPE`|Comportamento delle funzioni per la gestione di caratteri, ad eccezione di **isdigit**, `isxdigit`, `mbstowcs` e `mbtowc`, che non sono interessate|  
|`LC_MAX`|Uguale a `LC_TIME`|  
|`LC_MIN`|Uguale a `LC_ALL`|  
|`LC_MONETARY`|Informazioni di formattazione monetaria restituite dalla funzione `localeconv`|  
|`LC_NUMERIC`|Carattere del separatore decimale per le routine di output formattate, ad esempio `printf`, le routine di conversione dati e la formattazione di informazioni non monetarie restituite dalla funzione `localeconv`|  
|`LC_TIME`|Comportamento della funzione `strftime`|  
  
 Per un esempio, vedere [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
## <a name="see-also"></a>Vedere anche  
 [localeconv](../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni strcoll](../c-runtime-library/strcoll-functions.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)