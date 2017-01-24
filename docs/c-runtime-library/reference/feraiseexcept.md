---
title: "feraiseexcept | Microsoft Docs"
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
  - "feraiseexcept"
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
  - "feraiseexcept"
  - "fenv/feraiseexcept"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "funzione feraiseexcept"
ms.assetid: 87e89151-83c2-4563-9a9a-45666245d437
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# feraiseexcept
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera le eccezioni a virgola mobile specificate.  
  
## Sintassi  
  
```  
int feraiseexcept(  
   int excepts  
);  
```  
  
#### Parametri  
 `excepts`  
 Le eccezioni a virgola mobile per la generazione.  
  
## Valore restituito  
 Se tutte le eccezioni specificate vengono generate correttamente, restituisce 0.  
  
## Note  
 Il `feraiseexcept` funzione tenta di generare le eccezioni a virgola mobile specificate da `excepts`.   Il `feraiseexcept` funzione supporta queste macro delle eccezioni, definite in \< fenv. h \>:  
  
|Macro \(eccezione\)|Descrizione|  
|-------------------------|-----------------|  
|FE\_DIVBYZERO|Si è verificato un errore singolarità o polo in un'operazione a virgola mobile in precedenza. è stato creato un valore infinito.|  
|FE\_INEXACT|La funzione è stata forzata per arrotondare il risultato archiviato di un'operazione a virgola mobile in precedenza.|  
|FE\_INVALID|Si è verificato un errore di dominio in un'operazione a virgola mobile in precedenza.|  
|FE\_OVERFLOW|Si è verificato un errore di intervallo; un risultato dell'operazione a virgola mobile precedente è troppo grande per essere rappresentato.|  
|FE\_UNDERFLOW|Un risultato dell'operazione a virgola mobile precedente era troppo piccolo per essere rappresentare con la massima precisione; un valore denormal è stato creato.|  
|FE\_ALLEXCEPT|L'operatore OR bit per bit di tutte supportate eccezioni a virgola mobile.|  
  
 Il `excepts` argomento può essere uguale a zero, uno dei valori di macro eccezioni o bit per bit o di due o più delle macro eccezioni supportate. Se una delle macro eccezione specificata è FE\_OVERFLOW o FE\_UNDERFLOW, l'eccezione FE\_INEXACT può essere generato come effetto collaterale.  
  
 Per utilizzare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso utilizzando il `#pragma fenv_access(on)` direttiva prima della chiamata. Per altre informazioni, vedere [fenv\_access](../../preprocessor/fenv-access.md).  
  
 **Specifici di Microsoft:** specificato eccezioni `excepts` vengono generati nell'ordine FE\_INVALID, FE\_DIVBYZERO, FE\_OVERFLOW, FE\_UNDERFLOW, FE\_INEXACT. Tuttavia, FE\_INEXACT può essere generato quando viene generato FE\_OVERFLOW o FE\_UNDERFLOW, anche se non specificato `excepts`.**Fine sezione specifica Microsoft**  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`feraiseexcept`|\<fenv.h\>|\<cfenv\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fesetexceptflag](../../c-runtime-library/reference/fesetexceptflag2.md)   
 [feholdexcept](../../c-runtime-library/reference/feholdexcept2.md)   
 [fetestexcept](../../c-runtime-library/reference/fetestexcept1.md)   
 [feupdateenv](../../c-runtime-library/reference/feupdateenv.md)