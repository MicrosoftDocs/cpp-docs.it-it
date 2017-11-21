---
title: __popcnt16 __popcnt, __popcnt64 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- __popcnt64
- __popcnt
- __popcnt16
dev_langs: C++
helpviewer_keywords:
- popcnt instruction
- __popcnt16
- __popcnt64
- __popcnt
ms.assetid: e525b236-adc8-42df-9b9b-8b7d8c245d3b
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2a73775316391fd90698f35a5d5f1fdd7e00ebe3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="popcnt16-popcnt-popcnt64"></a>__popcnt16, __popcnt, __popcnt64
**Sezione specifica Microsoft**  
  
 Conta il numero di un bit (Conteggio popolamento) di 16, 32 o intero senza segno a 64 byte.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 [in] `value`  
 16 - 32- o intero senza segno a 64 bit per il quale si desidera il conteggio di popolamento.  
  
## <a name="return-value"></a>Valore restituito  
 Il numero di bit di uno il `value` parametro.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__popcnt16`|Manipolazione dei Bit avanzate|  
|`__popcnt`|Manipolazione dei Bit avanzate|  
|`__popcnt64`|Manipolazione avanzati dei Bit in modalità a 64 bit.|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni intrinseche genera il `popcnt` istruzione.  Le dimensioni del valore che il `popcnt` istruzione restituisce la stessa dimensione del relativo argomento.  In modalità a 32 bit non esistono alcun 64-bit registri di utilizzo generale, pertanto non è a 64 bit `popcnt`.  
  
 Per determinare il supporto hardware per il `popcnt` istruzione, chiamate di `__cpuid` intrinseco con `InfoType=0x00000001` e i bit di controllo 23 di `CPUInfo[2] (ECX)`. Questo bit è 1 se l'istruzione è supportata e 0 in caso contrario. Se si esegue il codice che utilizza questa funzione intrinseca nell'hardware che non supporta il `popcnt` (istruzione), i risultati sono imprevedibili.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
__popcnt16(0x0) = 0  
__popcnt16(0xff) = 8  
__popcnt16(0xffff) = 16  
__popcnt(0x0) = 0  
__popcnt(0xff) = 8  
__oopcnt(0xffff) = 16  
__popcnt(0xffffffff) = 32  
```  
  
**Fine sezione specifica Microsoft**  
 Copyright 2007 dispositivi Micro avanzate, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)