---
title: MMWORD | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- MMWORD
dev_langs:
- C++
helpviewer_keywords:
- MMWORD directive
ms.assetid: b4c5a104-9078-4fb4-afc3-d1e63abe562a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0570a55dc11994e12acedb85d3ae8015abefb54c
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="mmword"></a>MMWORD
Utilizzato per gli operandi multimediali a 64 bit con istruzioni MMX e SSE (XMM).  
  
## <a name="syntax"></a>Sintassi  
  
```  
MMWORD  
```  
  
## <a name="remarks"></a>Note  
 `MMWORD` è un tipo.  Prima di MMWORD viene aggiunto a MASM, una funzionalità equivalente avrebbe con:  
  
```  
mov mm0, qword ptr [ebx]  
```  
  
 Mentre entrambe le istruzioni sono valide per gli operandi a 64 bit, `QWORD` è il tipo per interi senza segno a 64 bit e `MMWORD` è il tipo per un valore dei dati multimediali a 64 bit.  
  
 `MMWORD` rappresenta lo stesso tipo [m64](../../cpp/m64.md).  
  
## <a name="example"></a>Esempio  
  
```  
movq     mm0, mmword ptr [ebx]  
```