---
title: "fp_contract | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.fp_contract"
  - "fp_contract_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "fp_contract (pragma)"
  - "pragma, fp_contract"
ms.assetid: 15b97338-6680-4287-ba2a-2dccc5b2ccf5
caps.latest.revision: 12
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fp_contract
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Determina se verrà eseguita la contrazione a virgola mobile.  
  
## Sintassi  
  
```  
#pragma fp_contract [ON | OFF]  
```  
  
## Note  
 L'opzione `fp_contract` è attiva per impostazione predefinita.  
  
 Per ulteriori informazioni sul comportamento delle operazioni a virgola mobile, vedere [\/fp \(Specifica il comportamento della virgola mobile\)](../build/reference/fp-specify-floating-point-behavior.md).  
  
 Altri pragma a virgola mobile sono i seguenti:  
  
-   [fenv\_access](../preprocessor/fenv-access.md)  
  
-   [float\_control](../preprocessor/float-control.md)  
  
## Esempio  
 Il codice generato da questo esempio non utilizza l'istruzione Fused Multiply Add \(**fma**\) su processori Itanium.  Se si imposta come commento `#pragma fp_contract (off)`, il codice generato utilizzerà l'istruzione **fma**.  
  
```  
// pragma_directive_fp_contract.cpp  
// compile with: /O2  
#include <stdio.h>  
#include <float.h>  
  
#pragma fp_contract (off)   
  
int main() {  
   double z, b, t;  
  
   for (int i = 0; i < 10; i++) {  
      b = i * 5.5;  
      t = i * 56.025;  
      _set_controlfp(_PC_24, _MCW_PC);  
  
      z = t * i + b;  
      printf_s ("out=%.15e\n", z);  
   }  
}  
```  
  
  **out\=0,000000000000000e\+000**  
**out\=6,152500152587891e\+001**  
**out\=2,351000061035156e\+002**  
**out\=5,207249755859375e\+002**  
**out\=9,184000244140625e\+002**  
**out\=1,428125000000000e\+003**  
**out\=2,049899902343750e\+003**  
**out\=2,783724853515625e\+003**  
**out\=3,629600097656250e\+003**  
**out\=4,587524902343750e\+003**   
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)