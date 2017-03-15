---
title: "_free_locale | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_free_locale"
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
  - "__free_locale"
  - "free_locale"
  - "_free_locale"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__free_locale (funzione)"
  - "_free_locale (funzione)"
  - "free_locale (funzione)"
  - "impostazioni locali, rilascio"
ms.assetid: 1f08d348-ab32-4028-a145-6cbd51b49af9
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _free_locale
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Libera un oggetto impostazioni locali.  
  
## Sintassi  
  
```  
void _free_locale(  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `locale`  
 L'oggetto impostazioni locali da liberare.  
  
## Note  
 La funzione `_free_locale` viene utilizzata per liberare l'oggetto impostazioni locali ottenuto da una chiamata a `_get_current_locale` o a `_create_locale`.  
  
 Il nome precedente di questa funzione, `__free_locale` \(con due caratteri di sottolineatura\), è stato deprecato.  
  
## Requisiti  
  
|`Routine`|Intestazione obbligatoria|  
|---------------|-------------------------------|  
|`_free_locale`|\<locale.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Nessun equivalente.  
  
## Vedere anche  
 [\_get\_current\_locale](../../c-runtime-library/reference/get-current-locale.md)   
 [\_create\_locale, \_wcreate\_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)