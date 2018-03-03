---
title: Compilatore avviso (livello 3) C4538 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4538
dev_langs:
- C++
helpviewer_keywords:
- C4538
ms.assetid: 747e3d51-b6d0-41c1-a726-7af3253b59d7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2c2f8dc77248f90d8578560770d0021a04113931
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4538"></a>Avviso del compilatore (livello 3) C4538
'type': qualificatori const/volatile per questo tipo non sono supportati.  
  
 Una parola chiave qualificatore è stata applicata a una matrice in modo non corretto. Per altre informazioni, vedere [matrice](../../windows/arrays-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C4538:  
  
```  
// C4538.cpp  
// compile with: /clr /W3 /LD  
const array<int> ^f1();   // C4538  
array<const int> ^f2();   // OK  
```