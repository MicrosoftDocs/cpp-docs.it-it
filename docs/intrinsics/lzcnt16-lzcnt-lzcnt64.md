---
title: __lzcnt16, __lzcnt, __lzcnt64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- __lzcnt64
- __lzcnt16
- __lzcnt
dev_langs:
- C++
helpviewer_keywords:
- __lzcnt intrinsic
- lzcnt instruction
- lzcnt16 intrinsic
- lzcnt intrinsic
- __lzcnt16 intrinsic
- lzcnt64 intrinsic
- __lzcnt64 intrinsic
ms.assetid: 412113e7-052e-46e5-8bfa-d5ad72abc10e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 85af6534ccf578bccabcd0f7b517234b2b560b6f
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="lzcnt16-lzcnt-lzcnt64"></a>__lzcnt16, __lzcnt, __lzcnt64
**Sezione specifica Microsoft**  
  
 Conta il numero di iniziali gli zeri in 16, 32 o integer a 64 byte.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 [in] `value`  
 16 - 32- o intero senza segno a 64 bit in modo da cercare gli zeri iniziali.  
  
## <a name="return-value"></a>Valore restituito  
 Il numero di bit zero iniziali di `value` parametro. Se `value` è zero, il valore restituito è la dimensione dell'operando di input (16, 32 o 64). Se più significativa di `value` uno, il valore restituito è zero.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__lzcnt16`|: AMD Modifica avanzata Bit (ABM)<br /><br /> Intel: Haswalle|  
|`__lzcnt`|: AMD Modifica avanzata Bit (ABM)<br /><br /> Intel: Haswalle|  
|`__lzcnt64`|AMD: Avanzate Bit manipolazione (ABM) in modalità a 64 bit.<br /><br /> Intel: Haswalle|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni intrinseche genera il `lzcnt` istruzione.  Le dimensioni del valore che il `lzcnt` istruzione restituisce la stessa dimensione del relativo argomento.  In modalità a 32 bit non esistono alcun 64-bit registri di utilizzo generale, pertanto non è a 64 bit `lzcnt`.  
  
 Per determinare il supporto hardware per il `lzcnt` chiamata istruzione il `__cpuid` intrinseco con `InfoType=0x80000001` e i bit di controllo 5 di `CPUInfo[2] (ECX)`. Questo bit sarà 1 se l'istruzione è supportata e 0 in caso contrario. Se si esegue il codice che utilizza questa funzione intrinseca nell'hardware che non supporta il `lzcnt` (istruzione), i risultati sono imprevedibili.  
  
 Nei processori Intel che non supportano il `lzcnt` , la codifica dei byte istruzione viene eseguita come `bsr` (bit analisi inversa). Se la portabilità del codice è un problema, provare a usare il `_BitScanReverse` intrinseca invece. Per ulteriori informazioni, vedere [_BitScanReverse, _BitScanReverse64](../intrinsics/bitscanreverse-bitscanreverse64.md).  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
__lzcnt16(0x0) = 16  
__lzcnt16(0xff) = 8  
__lzcnt16(0xffff) = 0  
__lzcnt(0x0) = 32  
__lzcnt(0xff) = 24  
__lzcnt(0xffff) = 16  
__lzcnt(0xffffffff) = 0  
```  
  
**Fine sezione specifica Microsoft**  
 Parti del contenuto sono Copyright 2007 Advanced Micro dispositivi, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)