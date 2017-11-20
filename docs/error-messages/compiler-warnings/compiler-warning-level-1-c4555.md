---
title: Compilatore avviso (livello 1) C4555 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4555
dev_langs: C++
helpviewer_keywords: C4555
ms.assetid: 50b286c1-f7bf-4292-b1fa-baaac9538611
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7db66570d2d913762067d33f186d94a4967160db
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4555"></a>Avviso del compilatore (livello 1) C4555
l'espressione non ha effetto. Prevista espressione con effetto collaterale  
  
 Questo avviso informa l'utente quando un'espressione non ha alcun effetto.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
 Ad esempio:  
  
```  
// C4555.cpp  
// compile with: /W1  
#pragma warning(default:4555)  
  
void func1()  
{  
   1;   // C4555  
}  
  
void func2()  
{  
   int x;  
   x;   // C4555  
}  
  
int main()  
{  
}  
```