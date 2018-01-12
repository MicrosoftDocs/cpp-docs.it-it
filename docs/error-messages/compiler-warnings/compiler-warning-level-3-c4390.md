---
title: Compilatore avviso (livello 3) C4390 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4390
dev_langs: C++
helpviewer_keywords: C4390
ms.assetid: c95c2f1b-9bce-4b1f-a80c-565d4cde0b1e
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8d042a9d89ca30be5971f31360f7958e9fb96cf2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4390"></a>Avviso del compilatore (livello 3) C4390
';':; trovata istruzione controllata vuota è questo lo scopo?  
  
 È stato trovato un punto e virgola dopo un'istruzione di controllo che non contiene istruzioni.  
  
 Se si verificano C4390 a causa di una macro, è necessario utilizzare il [avviso](../../preprocessor/warning.md) pragma per disabilitare C4390 nel modulo che contiene la macro.  
  
 L'esempio seguente genera l'errore C4390:  
  
```  
// C4390.cpp  
// compile with: /W3  
int main() {  
   int i = 0;  
   if (i);   // C4390  
      i++;  
}  
```