---
title: Compilatore avviso (livello 4) C4389 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: c4389
dev_langs: C++
helpviewer_keywords: C4389
ms.assetid: fc0e3a8e-f766-437c-b7f1-e61abb2a8765
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2d64841bc9b4d3c8631bbbbca9391605a10e60a9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4389"></a>Avviso del compilatore (livello 4) C4389
'operator': mancata corrispondenza signed e unsigned  
  
 Un'operazione coinvolti variabili signed e unsigned. Ciò potrebbe causare una perdita di dati.  
  
 L'esempio seguente genera l'errore C4389:  
  
```  
// C4389.cpp  
// compile with: /W4  
#pragma warning(default: 4389)  
  
int main()  
{  
   int a = 9;  
   unsigned int b = 10;  
   if (a == b)   // C4389  
      return 0;  
   else  
      return 0;  
};  
```