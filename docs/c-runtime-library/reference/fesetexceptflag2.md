---
title: "fesetexceptflag2 | Microsoft Docs"
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
  - "fesetexceptflag"
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
  - "fesetexceptflag"
  - "fenv/fesetexceptflag"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione fesetexceptflag"
ms.assetid: 2f7dad77-9e54-4097-a3e3-35176ace4de5
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# fesetexceptflag
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta i flag di stato a virgola mobile specificati nell'ambiente corrente a virgola mobile.  
  
## Sintassi  
  
```  
int fesetexceptflag(  
     const fexcept_t *pstatus,  
     int excepts  
);  
  
```  
  
#### Parametri  
 `pstatus`  
 Puntatore a un  `fexcept_t` oggetto contenente i valori per impostare l'eccezione flag di stato. L'oggetto può essere impostato da una precedente chiamata a [fegetexceptflag](../Topic/fegetexceptflag1.md).  
  
 `excepts`  
 I flag di stato eccezione a virgola mobile da impostare.  
  
## Valore restituito  
 Se tutti i flag di stato di eccezione specificata sono impostati correttamente, restituisce 0. In caso contrario, restituisce un valore diverso da zero.  
  
## Note  
 Il `fesetexceptflag` funzione imposta lo stato di flag di stato eccezione a virgola mobile specificato da `excepts` ai corrispondenti valori impostati `fexcept_t` oggetto a cui puntava `pstatus`.  Non genera eccezioni. Il `pstatus` puntatore deve puntare a un oggetto valido `fexcept_t` oggetto o il successivo comportamento è indefinito. Il `fesetexceptflag` funzione supporta i valori di macro di eccezione nel `excepts`, definito in \< fenv. h \>:  
  
|Macro \(eccezione\)|Descrizione|  
|-------------------------|-----------------|  
|FE\_DIVBYZERO|Si è verificato un errore singolarità o polo in un'operazione a virgola mobile in precedenza. è stato creato un valore infinito.|  
|FE\_INEXACT|La funzione è stata forzata per arrotondare il risultato archiviato di un'operazione a virgola mobile in precedenza.|  
|FE\_INVALID|Si è verificato un errore di dominio in un'operazione a virgola mobile in precedenza.|  
|FE\_OVERFLOW|Si è verificato un errore di intervallo; un risultato dell'operazione a virgola mobile precedente è troppo grande per essere rappresentato.|  
|FE\_UNDERFLOW|Un risultato dell'operazione a virgola mobile precedente era troppo piccolo per essere rappresentare con la massima precisione; un valore denormal è stato creato.|  
|FE\_ALLEXCEPT|L'operatore OR bit per bit di tutte supportate eccezioni a virgola mobile.|  
  
 Il `excepts` argomento può essere uguale a zero, uno delle macro delle eccezioni a virgola mobile supportati o bit per bit o di due o più delle macro. L'effetto di qualsiasi altro valore di argomento non è definito.  
  
 Per utilizzare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso utilizzando il `#pragma fenv_access(on)` direttiva prima della chiamata. Per altre informazioni, vedere [fenv\_access](../../preprocessor/fenv-access.md).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`fesetexceptflag`|\<fenv.h\>|\<cfenv\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fegetexceptflag](../../c-runtime-library/reference/fegetexceptflag2.md)