---
title: __nop | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __nop
dev_langs:
- C++
helpviewer_keywords:
- nop instruction
- __nop intrinsic
ms.assetid: 7a2a938b-87e0-476d-a348-03ea7635b6b9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1cfa38ddcd5b68c2f64e5c6d401ab0812406b51c
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42539820"
---
# <a name="nop"></a>__nop
**Sezione specifica Microsoft**  
  
 Genera codice macchina specifico della piattaforma che non esegue alcuna operazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __nop();  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__nop`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="remarks"></a>Note  
 Il `__nop` è equivalente alla funzione il `NOP` istruzioni in linguaggio macchina. Per altre informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento di Set di istruzioni," al [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__noop](../intrinsics/noop.md)