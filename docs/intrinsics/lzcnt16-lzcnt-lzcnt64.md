---
title: "__lzcnt16, __lzcnt, __lzcnt64 | Microsoft Docs"
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
  - "__lzcnt64"
  - "__lzcnt16"
  - "__lzcnt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__lzcnt (funzione intrinseca)"
  - "lzcnt (istruzione)"
  - "lzcnt16 (funzione intrinseca)"
  - "lzcnt (funzione intrinseca)"
  - "__lzcnt16 (funzione intrinseca)"
  - "lzcnt64 (funzione intrinseca)"
  - "__lzcnt64 (funzione intrinseca)"
ms.assetid: 412113e7-052e-46e5-8bfa-d5ad72abc10e
caps.latest.revision: 14
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __lzcnt16, __lzcnt, __lzcnt64
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Calcola il numero di zeri iniziali a un intero compreso tra 16 e 32, ovvero, o 64 byte.  
  
## Sintassi  
  
```  
unsigned short __lzcnt16(  
   unsigned short value  
);  
unsigned int __lzcnt(  
   unsigned int value  
);  
unsigned __int64 __lzcnt64(  
   unsigned __int64 value  
);  
```  
  
#### Parametri  
 \[in\] `value`  
 Il 16 \-, il 32 \-, o l'Unsigned Integer a 64 bit da cercare zeri iniziali.  
  
## Valore restituito  
 Il numero di bit di zero iniziale nel parametro di `value` .  Se `value` è zero, il valore restituito è la dimensione dell'operando di input \(16, 32, o 64\).  Se il bit più significativi di `value` è uno, il valore restituito è zero.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__lzcnt16`|La modifica dei bit avanzata|  
|`__lzcnt`|La modifica dei bit avanzata|  
|`__lzcnt64`|La modifica dei bit avanzate in modalità a 64 bit.|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Ognuna di queste funzioni intrinseche genera l'istruzione di `lzcnt` .  La dimensione del valore che l'istruzione di`lzcnt` restituisce è la stessa dimensione del relativo argomento.  In modalità a 32 bit non esiste registri di utilizzo generale a 64 bit, nessun 64 bit `lzcnt`.  
  
 Per determinare il supporto hardware all'istruzione di`lzcnt` chiamare la funzione intrinseca di `__cpuid` con `InfoType=0x80000001` e il bit di controllo, 5 di `CPUInfo[2] (ECX)`.  Questo bit è altrimenti 1 se l'istruzione è supportata e 0.  Se si esegue il codice che utilizza questa funzione intrinseca sull'hardware che non supporta l'istruzione di`lzcnt` , i risultati sono imprevedibili.  
  
## Esempio  
  
```  
// Compile this test with: /EHsc  
#include <iostream>   
#include <intrin.h>   
using namespace std;   
  
int main()   
{  
  unsigned short us[3] = {0, 0xFF, 0xFFFF};  
  unsigned short usr;  
  unsigned int   ui[4] = {0, 0xFF, 0xFFFF, 0xFFFFFFFF};  
  unsigned int   uir;  
  
  for (int i=0; i<3; i++) {  
    usr = __lzcnt16(us[i]);  
    cout << "__lzcnt16(0x" << hex << us[i] << ") = " << dec << usr << endl;  
  }  
  
  for (int i=0; i<4; i++) {  
    uir = __lzcnt(ui[i]);  
    cout << "__lzcnt(0x" << hex << ui[i] << ") = " << dec << uir << endl;  
  }  
}  
  
```  
  
  **\_\_lzcnt16 \(0x0\) \= 16 \_\_lzcnt16 \(0xff\) \= 8 \_\_lzcnt16 \(0xffff\) \= 0 \_\_lzcnt 32 \(0xff\) del \_\_lzcnt \(0x0\) \= \= 24 \_\_lzcnt 16 \(0xffffffff\) del \_\_lzcnt \(0xffff\) \= \= 0**   
## Microsoft FINALE specifico  
 Copyright 2007 da Advanced Micro Devices, inc tutti i diritti riservati.  Riprodotto con l'autorizzazione di Advanced Micro Devices, inc  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)