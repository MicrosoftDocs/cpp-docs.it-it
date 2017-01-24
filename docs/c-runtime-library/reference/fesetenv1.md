---
title: "fesetenv | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fesetenv"
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
  - "fesetenv"
  - "fenv/fesetenv"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "funzione fesetenv"
ms.assetid: ffc64fff-8ea7-4d59-9e04-ff96ef8cd012
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fesetenv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta l'ambiente a virgola mobile corrente.  
  
## Sintassi  
  
```  
int fesetenv(  
   const fenv_t *penv  
);  
  
```  
  
#### Parametri  
 `penv`  
 Puntatore a un `fenv_t` oggetto che contiene un ambiente a virgola mobile come impostato da una chiamata a [fegetenv](../Topic/fegetenv2.md) o [feholdexcept](../Topic/feholdexcept1.md). È inoltre possibile specificare l'ambiente a virgola mobile e di avvio predefinito utilizzando la macro FE\_DFL\_ENV.  
  
## Valore restituito  
 Restituisce 0 se l'ambiente è stato impostato correttamente. In caso contrario, restituisce un valore diverso da zero.  
  
## Note  
 Il `fesetenv` funzione imposta l'ambiente corrente a virgola mobile e dal valore archiviato nel `fenv_t` oggetto a cui puntava `penv`. Virgola mobile punto ambiente è il set di flag di stato e le modalità di controllo che influiscono sui calcoli a virgola mobile. Ciò include la modalità di arrotondamento e i flag di stato per le eccezioni a virgola mobile. Se `penv` non FE\_DFL\_ENV o non fa riferimento a un oggetto valido `fenv_t` dell'oggetto, il successivo comportamento è indefinito.  
  
 Una chiamata a questa funzione imposta i flag di stato nell'eccezione di `penv` oggetto, ma non genera eccezioni.  
  
 Per utilizzare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso utilizzando il `#pragma fenv_access(on)` direttiva prima della chiamata. Per altre informazioni, vedere [fenv\_access](../../preprocessor/fenv-access.md).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`fesetenv`|\<fenv.h\>|\<cfenv\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fegetenv](../../c-runtime-library/reference/fegetenv1.md)   
 [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md)   
 [feholdexcept](../../c-runtime-library/reference/feholdexcept2.md)   
 [fesetexceptflag](../../c-runtime-library/reference/fesetexceptflag2.md)