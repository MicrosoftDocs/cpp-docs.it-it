---
title: "_get_current_locale | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_current_locale"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-locale-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "get_current_locale"
  - "__get_current_locale"
  - "_get_current_locale"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__get_current_locale (funzione)"
  - "_get_current_locale (funzione)"
  - "get_current_locale (funzione)"
  - "impostazioni locali, recupero di informazioni"
ms.assetid: 572217f2-a37a-4105-a293-a250b4fabd99
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_current_locale
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene un oggetto delle impostazioni locali che rappresenta le impostazioni locali correnti.  
  
## Sintassi  
  
```  
_locale_t _get_current_locale(void);  
```  
  
## Valore restituito  
 Un oggetto delle impostazioni locali che rappresenta le impostazioni locali correnti.  
  
## Note  
 La funzione `_get_current_locale`ottiene le impostazioni locali attualmente impostate per il thread e restituisce un oggetto che rappresenta le impostazioni locali.  
  
 Il nome precedente di questa funzione, `__get_current_locale` \(con due caratteri di sottolineatura\), è stato deprecato.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_get_current_locale`|\<locale.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Nessun equivalente.  
  
## Vedere anche  
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [\_create\_locale, \_wcreate\_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [\_free\_locale](../../c-runtime-library/reference/free-locale.md)