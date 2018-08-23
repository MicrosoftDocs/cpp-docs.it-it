---
title: __halt | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __halt
- __halt_cpp
dev_langs:
- C++
helpviewer_keywords:
- __halt intrinsic
- HLT instruction
ms.assetid: a074f44a-101c-45a5-8a5e-cfd223c34002
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 007b3be0fc26d9a011d961540f9dc4057498b137
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42541604"
---
# <a name="halt"></a>__halt
**Sezione specifica Microsoft**  
  
 Interrompe il microprocessore fino a quando non si verifica un interrupt abilitato, un interrupt non mascherabile (NMI) o la reimpostazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __halt( void );  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__halt`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il `__halt` è equivalente alla funzione il `HLT` istruzioni in linguaggio macchina ed è disponibile solo in modalità kernel. Per altre informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento di Set di istruzioni," al [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)