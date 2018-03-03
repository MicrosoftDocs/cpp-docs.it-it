---
title: Compilatore (livello 1) Avviso C4103 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4103
dev_langs:
- C++
helpviewer_keywords:
- C4103
ms.assetid: 9021b514-375e-4d62-b261-ccb06f299e8e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 115c88a43f38065541fe925b023d61679c06be53
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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