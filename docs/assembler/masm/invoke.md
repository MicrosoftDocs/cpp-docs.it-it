---
title: INVOKE | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- Invoke
dev_langs:
- C++
helpviewer_keywords:
- INVOKE directive
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4876fa0a6e63addf529e7c458e052aff77ebc6a1
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="invoke"></a>INVOKE
Chiama la routine in corrispondenza dell'indirizzo specificato da *espressione*, passando gli argomenti nello stack o nei registri in base alle convenzioni di chiamata standard del tipo di linguaggio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
INVOKE   
expression [[, arguments]]  
```  
  
## <a name="remarks"></a>Note  
 Ogni argomento passato alla routine può essere un'espressione, una coppia di registro o un'espressione di indirizzo (preceduto da un'espressione da `ADDR`).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)