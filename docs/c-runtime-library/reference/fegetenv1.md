---
title: "fegetenv1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fetegenv"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "fegetenv"
  - "fenv/fegetenv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione fetegenv"
ms.assetid: 68962421-6978-4b27-8e4c-ad1577830cf6
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# fegetenv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Archivia l'ambiente a virgola mobile corrente nell'oggetto specificato.  
  
## Sintassi  
  
```  
int fegetenv(  
   fenv_t *penv  
);  
  
```  
  
#### Parametri  
 `penv`  
 Puntatore a un `fenv_t` oggetto che contiene i valori correnti di ambiente a virgola mobile.  
  
## Valore restituito  
 Restituisce 0 se l'ambiente a virgola mobile è stata archiviata correttamente `penv`. In caso contrario, restituisce un valore diverso da zero.  
  
## Note  
 Il `fegetenv` funzione consente di archiviare l'ambiente a virgola mobile corrente nell'oggetto a cui fa riferimento `penv`. Virgola mobile punto ambiente è il set di flag di stato e le modalità di controllo che influiscono sui calcoli a virgola mobile. Ciò include la modalità di arrotondamento e i flag di stato per le eccezioni a virgola mobile. Se `penv` non fa riferimento a un oggetto valido `fenv_t` dell'oggetto, il successivo comportamento è indefinito.  
  
 Per utilizzare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso utilizzando il `#pragma fenv_access(on)` direttiva prima della chiamata. Per altre informazioni, vedere [fenv\_access](../../preprocessor/fenv-access.md).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`fegetenv`|\<fenv.h\>|\<cfenv\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fesetenv](../../c-runtime-library/reference/fesetenv1.md)