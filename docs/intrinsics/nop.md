---
title: funzione NOP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __nop
dev_langs: C++
helpviewer_keywords:
- nop instruction
- __nop intrinsic
ms.assetid: 7a2a938b-87e0-476d-a348-03ea7635b6b9
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: aecf1c0ad205d2cbf0685797cc9527f1fc4684d0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|`__nop`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="remarks"></a>Note  
 Il `__nop` è equivalente alla funzione di `NOP` istruzioni in linguaggio macchina. Per ulteriori informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento al Set (istruzione)," al [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) sito.  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__noop](../intrinsics/noop.md)