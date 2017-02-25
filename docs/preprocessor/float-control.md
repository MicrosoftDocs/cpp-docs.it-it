---
title: "float_control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.float_control"
  - "float_control_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "float_control (pragma)"
  - "pragma, float_control"
ms.assetid: 4f4ba5cf-3707-413e-927d-5ecdbc0a9a43
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# float_control
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il comportamento a virgola mobile per una funzione.  
  
## Sintassi  
  
```  
float_control( value,setting [push] | push | pop )  
```  
  
## Flag  
 `value` *,* `setting` **\[push\]**  
 Specifica il comportamento a virgola mobile.  `value` può essere **precise** o **except**.  Per ulteriori informazioni, vedere [\/fp \(Specifica il comportamento della virgola mobile\)](../build/reference/fp-specify-floating-point-behavior.md).  `setting` può essere **on** o **off**.  
  
 Se `value` è **precise**, le impostazioni per **precise** e **except** vengono specificate.  **except** può essere impostata solo su **on** quando **precise** è anche impostato su **on**.  
  
 Se il token **push** facoltativo viene aggiunto, l'impostazione corrente per `value` viene inserita nello stack del compilatore interno.  
  
 **push**  
 Inserire l'impostazione `float_control` corrente nello stack del compilatore interno  
  
 **pop**  
 Rimuove l'impostazione`float_control` dalla parte superiore dello stack del compilatore intero e la rende la nuova impostazione `float_control`.  
  
## Note  
 Non è possibile disattivare `float_control precise` da quando **except** è attivo.  Analogamente, **precise** non può essere disattivato quando `fenv_access` è attivo.  Per passare dal modello di tipo strict a un modello di tipo fast con il pragma `float_control`, utilizzare il codice seguente:  
  
```  
#pragma float_control(except, off)  
#pragma fenv_access(off)  
#pragma float_control(precise, off)  
// The following line is needed on Itanium processors  
#pragma fp_contract(on)  
```  
  
 Per passare dal modello di tipo fast a un modello di tipo strict con il pragma `float_control`, utilizzare il codice seguente:  
  
```  
#pragma float_control(precise, on)  
#pragma fenv_access(on)  
#pragma float_control(except, on)  
// The following line is needed on Itanium processors.  
#pragma fp_contract(off)  
```  
  
 Altri pragma a virgola mobile sono i seguenti:  
  
-   [fenv\_access](../preprocessor/fenv-access.md)  
  
-   [fp\_contract](../preprocessor/fp-contract.md)  
  
## Esempio  
 Il seguente esempio mostra come acquisire un'eccezione a virgola mobile dell'overflow utilizzando il pragma `float_control`.  
  
```  
// pragma_directive_float_control.cpp  
// compile with: /EHa  
#include <stdio.h>  
#include <float.h>  
  
double func( ) {  
   return 1.1e75;  
}  
  
#pragma float_control (except,on)  
  
int main( ) {  
   float u[1];  
   unsigned int currentControl;  
   errno_t err;  
  
   err = _controlfp_s(&currentControl, ~_EM_OVERFLOW, _MCW_EM);  
   if (err != 0)  
      printf_s("_controlfp_s failed!\n");  
  
   try  {  
      u[0] = func();  
      printf_s ("Fail");     
      return(1);  
   }   
  
   catch (...)  {  
      printf_s ("Pass");  
      return(0);  
   }  
}  
```  
  
  **Superato**   
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)