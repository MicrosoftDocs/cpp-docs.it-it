---
title: Compilatore (livello 1) Avviso C4103 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4103
dev_langs:
- C++
helpviewer_keywords:
- C4103
ms.assetid: 9021b514-375e-4d62-b261-ccb06f299e8e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f072db4a260d2c83d1dd4b373630cd6e585efc2b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4103"></a>Compilatore (livello 1) Avviso C4103
'nomefile': l'allineamento è cambiato dopo l'inclusione dell'intestazione, potrebbe essere causato dalla mancanza #pragma pack (POP)  
  
 Compressione influisce sul layout delle classi, e in genere, se la compressione delle modifiche nei file di intestazione, si possono verificare problemi.  
  
 Utilizzare #pragma [pack](../../preprocessor/pack.md)(pop) prima di chiudere il file di intestazione per risolvere il problema.  
  
 L'esempio seguente genera l'errore C4103:  
  
```  
// C4103.h  
#pragma pack(push, 4)  
  
// defintions and declarations  
  
// uncomment the following line to resolve  
// #pragma pack(pop)  
```  
  
 E quindi,  
  
```  
// C4103.cpp  
// compile with: /LD /W1  
#include "c4103.h"   // C4103  
```