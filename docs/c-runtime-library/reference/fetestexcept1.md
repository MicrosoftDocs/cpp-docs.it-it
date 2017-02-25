---
title: "fetestexcept1 | Microsoft Docs"
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
  - "fetestexcept"
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
  - "fetestexcept"
  - "fenv/fetestexcept"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione fetestexept"
ms.assetid: ca4dc43f-5573-440d-bc19-ead7571b13dc
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# fetestexcept
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina quali i flag di stato di eccezione a virgola mobile specificata attualmente impostati.  
  
## Sintassi  
  
```  
int fetestexcept(  
   int excepts  
);  
  
```  
  
#### Parametri  
 `excepts`  
 OR bit per bit di flag di stato a virgola mobile per eseguire il test.  
  
## Valore restituito  
 Esito positivo, restituisce una maschera di bit contenente un OR bit per bit delle macro delle eccezioni a virgola mobile che corrispondono ai flag di stato di eccezione attualmente impostato. Restituisce 0 se nessuna delle eccezioni sono impostati.  
  
## Note  
 Utilizzare la funzione fetestexcept per determinare le eccezioni che sono state generate da Mobile operazione. Utilizzare il `excepts` parametro per specificare il flag di stato di eccezione per eseguire il test. Il `fetestexcept` funzione utilizza le macro di eccezione definite in \< fenv. h \> in `excepts` e il valore restituito:  
  
|Macro \(eccezione\)|Descrizione|  
|-------------------------|-----------------|  
|FE\_DIVBYZERO|Si è verificato un errore singolarità o polo in un'operazione a virgola mobile in precedenza. è stato creato un valore infinito.|  
|FE\_INEXACT|La funzione è stata forzata per arrotondare il risultato archiviato di un'operazione a virgola mobile in precedenza.|  
|FE\_INVALID|Si è verificato un errore di dominio in un'operazione a virgola mobile in precedenza.|  
|FE\_OVERFLOW|Si è verificato un errore di intervallo; un risultato dell'operazione a virgola mobile precedente è troppo grande per essere rappresentato.|  
|FE\_UNDERFLOW|Un risultato dell'operazione a virgola mobile precedente era troppo piccolo per essere rappresentare con la massima precisione; un valore denormal è stato creato.|  
|FE\_ALLEXCEPT|L'operatore OR bit per bit di tutte supportate eccezioni a virgola mobile.|  
  
 Specificato `excepts` argomento può essere 0, un le macro delle eccezioni a virgola mobile supportati o bit per bit di due o più delle macro. L'effetto di eventuali altri `excepts` valore dell'argomento non è definito.  
  
 Per utilizzare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso utilizzando il `#pragma fenv_access(on)` direttiva prima della chiamata. Per altre informazioni, vedere [fenv\_access](../../preprocessor/fenv-access.md).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`fetestexcept`|\<fenv.h\>|\<cfenv\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md)   
 [feraiseexcept](../../c-runtime-library/reference/feraiseexcept.md)