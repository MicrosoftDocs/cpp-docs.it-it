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
ms.openlocfilehash: 15c166f51e8d512dd0c5ef8d98bf1e6cf991664f
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45714207"
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
*ParteBassa*<br/>
[in] 64 bit meno significativi della quantità di 128 bit da spostare.  
  
*HighPart*<br/>
[in] I 64 bit alti della quantità di 128 bit da spostare.  
  
*MAIUSC*<br/>
[in] Il numero di bit da spostare.  
  
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