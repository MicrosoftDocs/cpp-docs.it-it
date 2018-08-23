---
title: __shiftright128 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __shiftright128
dev_langs:
- C++
helpviewer_keywords:
- __shiftright128 intrinsic
ms.assetid: 5419a6c4-0de1-43fb-b314-4faa5b2d051f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0aa5b4028863ff31084e8d01892a86b990de51fb
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42540449"
---
# <a name="shiftright128"></a>__shiftright128
**Sezione specifica Microsoft**  
  
 Sposta una quantità di 128 bit, rappresentata come due quantità di 64 bit `LowPart` e `HighPart`, a destra di un numero di bit specificato da `Shift` e restituisce i 64 bit meno significativi del risultato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned __int64 __shiftright128(   
   unsigned __int64 LowPart,   
   unsigned __int64 HighPart,   
   unsigned char Shift   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `LowPart`  
 I 64 bit meno significativi della quantità di 128 bit da spostare.  
  
 [in] `HighPart`  
 I 64 bit più significativi della quantità di 128 bit da spostare.  
  
 [in] `Shift`  
 Numero di bit da spostare.  
  
## <a name="return-value"></a>Valore restituito  
 I 64 bit meno significativi del risultato.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__shiftright128`|X64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il valore `Shift` è sempre modulo 64 in modo che, ad esempio, se si chiama `__shiftright128(0, 1, 64)`, la funzione sposterà la parte più significativa di `0` bit a destra e restituirà la parte meno significativa di `0` e non di `1`, come ci si aspetterebbe altrimenti.  
  
## <a name="example"></a>Esempio  
 Per un esempio, vedere [__shiftleft128](../intrinsics/shiftleft128.md).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__shiftleft128](../intrinsics/shiftleft128.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)