---
title: MMWORD | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- MMWORD
dev_langs:
- C++
helpviewer_keywords:
- MMWORD directive
ms.assetid: b4c5a104-9078-4fb4-afc3-d1e63abe562a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e97b1e58116d633519b1a780928e05862ac1771d
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
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