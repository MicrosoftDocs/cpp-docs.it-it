---
title: Abilita | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _enable
- _enable_cpp
dev_langs:
- C++
helpviewer_keywords:
- enable intrinsic
- _enable intrinsic
- ssm instruction
ms.assetid: 8bee669b-6bd8-4e25-9383-bb7d57295b4d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ca265bc8a6adc3da747e94ca67cd57749687f21
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42541424"
---
# <a name="enable"></a>_enable
**Sezione specifica Microsoft**  
  
 Abilita gli interrupt.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _enable(void);  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_enable`|x86, ARM, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 `_enable` indica al processore di impostare il flag di interrupt. Su sistemi x86, questa funzione genera l'istruzione Set Interrupt Flag (`sti`).  
  
 Questa funzione è disponibile solo in modalità kernel. Se usato in modalità utente, viene generata un'eccezione istruzione privilegiata.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)