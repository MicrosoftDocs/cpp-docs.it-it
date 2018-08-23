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
ms.openlocfilehash: 364ad39bfe47ff04c4a1eefb52b32ed4bddb7809
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42541454"
---
# <a name="lllshift"></a>__ll_lshift
**Sezione specifica Microsoft**  
  
 Sposta il valore fornito a 64 bit a sinistra del numero specificato di bit.  
  
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
 La maschera spostato a sinistra `nBit` bits.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__ll_lshift`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Se si compila il programma usando l'architettura a 64 bit e `nBit` è maggiore di 63 e tra il numero di bit da spostare sia `nBit` modulo 64. Se si compila il programma usando l'architettura a 32 bit e `nBit` è maggiore di 31, il numero di bit da spostare sia `nBit` modulo 32.  
  
 Il `ll` nel nome indica che si tratta di un'operazione sul `long long` (`__int64`).  
  
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
  
 **Nota** non è disponibile alcuna versione senza segno dell'operazione di spostamento a sinistra. Infatti, `__ll_lshift` Usa già un parametro di input senza segno. A differenza di spostamento a destra, non si verifica alcuna dipendenza dalla sign per lo spostamento a sinistra, poiché il bit meno significativo del risultato è sempre impostato su zero indipendentemente dal segno del valore spostato.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__ll_rshift](../intrinsics/ll-rshift.md)   
 [__ull_rshift](../intrinsics/ull-rshift.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)