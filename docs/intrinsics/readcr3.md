---
title: __readcr3 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __readcr3
dev_langs: C++
helpviewer_keywords: __readcr3 intrinsic
ms.assetid: e24392c3-cad7-4788-8f31-94bf2e9e0053
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a4769a6391724e8881182b1c9a78191a2f0ca089
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="readcr3"></a>__readcr3
**Sezione specifica Microsoft**  
  
 Legge il registro CR3 e restituisce il relativo valore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned __int64 __readcr3(void);  
```  
  
## <a name="return-value"></a>Valore restituito  
 Il valore del registro CR3.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__readcr3`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)