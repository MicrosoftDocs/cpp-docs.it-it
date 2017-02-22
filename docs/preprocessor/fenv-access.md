---
title: "fenv_access | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.fenv_access"
  - "fenv_access_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fenv_access (pragma)"
  - "pragma, fenv_access"
ms.assetid: 2ccea292-0ae4-42ce-9c67-cc189299857b
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# fenv_access
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Disabilita \(Attivato\) o abilita \(Disattivato\) le ottimizzazioni che potrebbero modificare test dei flag e le variazioni delle modalità.  
  
## Sintassi  
  
```  
#pragma fenv_access [ON | OFF]  
```  
  
## Note  
 Per impostazione predefinita, `fenv_access` è disattivato.  
  
 Per ulteriori informazioni sul comportamento delle operazioni a virgola mobile, vedere [\/fp \(Specifica il comportamento della virgola mobile\)](../build/reference/fp-specify-floating-point-behavior.md).  
  
 I tipi di ottimizzazioni soggette a `fenv_access` sono i seguenti:  
  
-   Eliminazione di sottoespressioni comuni globali  
  
-   Movimento di codice  
  
-   Riduzione di costanti  
  
 Altri pragma a virgola mobile sono i seguenti:  
  
-   [float\_control](../preprocessor/float-control.md)  
  
-   [fp\_contract](../preprocessor/fp-contract.md)  
  
## Esempio  
  
```  
// pragma_directive_fenv_access_x86.cpp  
// compile with: /O2  
// processor: x86  
#include <stdio.h>  
#include <float.h>   
#include <errno.h>  
#pragma fenv_access (on)  
  
int main() {  
   double z, b = 0.1, t = 0.1;  
   unsigned int currentControl;  
   errno_t err;  
  
   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);  
   if (err != 0) {  
      printf_s("The function _controlfp_s failed!\n");  
      return -1;  
   }  
   z = b * t;  
   printf_s ("out=%.15e\n",z);  
}  
```  
  
  **out\=9,999999776482582e\-003**   
## Esempio  
 L'esempio seguente riguarda compilatori che creano file di output per processori Itanium.  **\/fp:precise** mantiene i risultati intermedi in precisione estesa in cui i valori maggiori di FLT\_MAX \(3,402823466e\+38F\) possono essere calcolati e il risultato della somma sarà 1,0 \(come se fosse calcolato manualmente\).  **\/fp:strict** mantiene i risultati intermedi nella precisione di origine \(mobile\) in modo che la prima addizione restituisca infinito, mantenuto in tutto l'espressione.  
  
```  
// pragma_directive_fenv_access_IPF.cpp  
// compile with: /O2 /fp:precise  
// processor: IPF  
// compiling with /fp:precise prints 1.0F  
// compile with /fp:strict to print infinity  
  
#include <stdio.h>  
float arr[5] = {3.402823465e+38F,   
               3.402823462e+38F,  
               3.402823464e+38F,  
               3.402823463e+38F,  
               1.0F};  
  
int main() {  
   float sum = 0;  
   sum = arr[0] + arr[1] - arr[2] - arr[3] + arr[4];  
   printf_s("%f\n", sum);  
}  
```  
  
  **1.000000**   
## Esempio  
 Si noti che nell'esempio precedente, quando `#pragma fenv_access (on)` viene trasformato in commento l'output è diverso perché la valutazione viene eseguita in fase di compilazione, in cui non viene utilizzata la modalità di controllo.  
  
```  
// pragma_directive_fenv_access_2.cpp  
// compile with: /O2  
#include <stdio.h>  
#include <float.h>   
  
int main() {  
   double z, b = 0.1, t = 0.1;  
   unsigned int currentControl;  
   errno_t err;  
  
   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);  
   if (err != 0) {  
      printf_s("The function _controlfp_s failed!\n");  
      return -1;  
   }  
   z = b * t;  
   printf_s ("out=%.15e\n",z);  
}  
```  
  
  **out\=1,000000000000000e\-002**   
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)