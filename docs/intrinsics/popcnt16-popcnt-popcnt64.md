---
title: "__popcnt16, __popcnt, __popcnt64 | Microsoft Docs"
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
  - "__popcnt64"
  - "__popcnt"
  - "__popcnt16"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "popcnt (istruzione)"
  - "__popcnt16"
  - "__popcnt64"
  - "__popcnt"
ms.assetid: e525b236-adc8-42df-9b9b-8b7d8c245d3b
caps.latest.revision: 15
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __popcnt16, __popcnt, __popcnt64
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Calcola il numero uno dei bit \(censimento popolazione\) in Unsigned Integer compreso tra 16 e 32, ovvero, o 64 byte.  
  
## Sintassi  
  
```  
unsigned short __popcnt16(  
   unsigned short value  
);  
unsigned int __popcnt(  
   unsigned int value  
);  
unsigned __int64 __popcnt64(  
   unsigned __int64 value  
);  
```  
  
#### Parametri  
 \[in\] `value`  
 Il 16 \-, il 32 \-, o l'Unsigned Integer a 64 bit per il quale è il censimento della compilazione.  
  
## Valore restituito  
 Il numero di bit uno nel parametro di `value` .  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__popcnt16`|La modifica dei bit avanzata|  
|`__popcnt`|La modifica dei bit avanzata|  
|`__popcnt64`|La modifica dei bit avanzate in modalità a 64 bit.|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Ognuna di queste funzioni intrinseche genera l'istruzione di`popcnt` .  La dimensione del valore che l'istruzione di`popcnt` restituisce è la stessa dimensione del relativo argomento.  In modalità a 32 bit non esiste registri di utilizzo generale a 64 bit, nessun 64 bit `popcnt`.  
  
 Per determinare il supporto hardware all'istruzione di `popcnt`, chiamare la funzione intrinseca di `__cpuid` con `InfoType=0x00000001` e il bit di controllo, 23 di `CPUInfo[2] (ECX)`.  Questo bit è altrimenti 1 se l'istruzione è supportata e 0.  Se si esegue il codice che utilizza questa funzione intrinseca sull'hardware che non supporta l'istruzione di `popcnt` , i risultati sono imprevedibili.  
  
## Esempio  
  
```  
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
    usr = __popcnt16(us[i]);  
    cout << "__popcnt16(0x" << hex << us[i] << ") = " << dec << usr << endl;  
  }  
  
  for (int i=0; i<4; i++) {  
    uir = __popcnt(ui[i]);  
    cout << "__popcnt(0x" << hex << ui[i] << ") = " << dec << uir << endl;  
  }  
}  
  
```  
  
  **\_\_popcnt16 \(0x0\) \= 0 \_\_popcnt16 \(0xff\) \= 8 \_\_popcnt16 \(0xffff\) \= 16 \_\_popcnt \(0x0\) \= 0 \_\_popcnt \(0xff\) \= 8 \_\_popcnt di \_\_oopcnt \(0xffff\) \= 16 \(0xffffffff\) \= 32**   
## Microsoft FINALE specifico  
 Copyright 2007 da Advanced Micro Devices, inc tutti i diritti riservati.  Riprodotto con l'autorizzazione di Advanced Micro Devices, inc  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)