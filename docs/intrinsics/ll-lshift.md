---
title: __ll_lshift | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __ll_lshift_cpp
- __ll_lshift
dev_langs:
- C++
helpviewer_keywords:
- ll_lshift intrinsic
- __ll_lshift intrinsic
ms.assetid: fe98f733-426d-44b3-8f24-5d0d6d44bd94
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 94cf50287c28fe530df939488c4e707d17aede03
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33327372"
---
# <a name="lllshift"></a>__ll_lshift
**Sezione specifica Microsoft**  
  
 Passa il valore a 64 bit a sinistra del numero specificato di bit.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned __int64 __ll_lshift(  
   unsigned __int64 Mask,  
   int nBit  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `Mask`  
 Il valore integer a 64 bit da spostare a sinistra.  
  
 [in] `nBit`  
 Numero di bit da spostare.  
  
## <a name="return-value"></a>Valore restituito  
 La maschera spostato a sinistra di `nBit` bits.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__ll_lshift`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Se si compila il programma usando l'architettura a 64 bit e `nBit` è maggiore di 63, il numero di bit da spostare è `nBit` modulo 64. Se si compila il programma usando l'architettura a 32 bit e `nBit` è maggiore di 31, il numero di bit da spostare è `nBit` modulo 32.  
  
 Il `ll` nel nome indica che si tratta di un'operazione in `long long` (`__int64`).  
  
## <a name="example"></a>Esempio  
  
```  
// ll_lshift.cpp  
// compile with: /EHsc  
// processor: x86, x64  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
#pragma intrinsic(__ll_lshift)  
  
int main()  
{  
   unsigned __int64 Mask = 0x100;  
   int nBit = 8;  
   Mask = __ll_lshift(Mask, nBit);  
   cout << hex << Mask << endl;  
}  
```  
  
## <a name="output"></a>Output  
  
```  
10000  
```  
  
 **Nota** non è disponibile alcuna versione senza segno dell'operazione di spostamento a sinistra. In questo modo `__ll_lshift` è già utilizzato da un parametro di input senza segno. Differenza di spostamento a destra, non si verifica alcuna dipendenza di accesso per lo spostamento a sinistra, poiché il bit meno significativo nel risultato è sempre impostato su zero indipendentemente dal segno del valore spostato.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__ll_rshift](../intrinsics/ll-rshift.md)   
 [__ull_rshift](../intrinsics/ull-rshift.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)