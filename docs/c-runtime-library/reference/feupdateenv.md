---
title: "feupdateenv | Microsoft Docs"
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
  - "feupdateenv"
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
apitype: "HeaderDef"
f1_keywords: 
  - "feupdateenv"
  - "fenv/feupdateenv"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "funzione feupdateenv"
ms.assetid: 3d170042-dfd5-4e4f-a55f-038cf2296cc9
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# feupdateenv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Salva le eccezioni a virgola mobile attualmente generate, Ripristina lo stato dell'ambiente a virgola mobile specificati e genera quindi le eccezioni a virgola mobile e salvate.  
  
## Sintassi  
  
```  
int feupdateenv(  
   const fenv_t* penv  
);  
```  
  
#### Parametri  
 `penv`  
 Puntatore a un `fenv_t` oggetto che contiene un ambiente a virgola mobile come impostato da una chiamata a [fegetenv](../Topic/fegetenv2.md) o [feholdexcept](../Topic/feholdexcept1.md). È inoltre possibile specificare l'ambiente a virgola mobile e di avvio predefinito utilizzando la macro FE\_DFL\_ENV.  
  
## Valore restituito  
 Restituisce 0 se tutte le operazioni completate correttamente. In caso contrario, restituisce un valore diverso da zero.  
  
## Note  
 Il `feupdateenv` funzione consente di eseguire più azioni. Innanzitutto, archivia i flag di stato generato eccezioni a virgola mobile corrente nel servizio di archiviazione automatica. Quindi, viene impostato l'ambiente corrente a virgola mobile e dal valore archiviato nel `fenv_t` oggetto a cui puntava `penv`. Se `penv` non FE\_DFL\_ENV o non fa riferimento a un oggetto valido `fenv_t` dell'oggetto, il successivo comportamento è indefinito. Infine, `feupdateenv` Genera le eccezioni a virgola mobile e archiviate localmente.  
  
 Per utilizzare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso utilizzando il `#pragma fenv_access(on)` direttiva prima della chiamata. Per altre informazioni, vedere [fenv\_access](../../preprocessor/fenv-access.md).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`feupdateenv`|\<fenv.h\>|\<cfenv\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [fegetenv](../../c-runtime-library/reference/fegetenv1.md)   
 [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md)   
 [feholdexcept](../../c-runtime-library/reference/feholdexcept2.md)   
 [fesetexceptflag](../../c-runtime-library/reference/fesetexceptflag2.md)