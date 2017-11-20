---
title: Compilatore avviso (livello 1) C4804 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4804
dev_langs: C++
helpviewer_keywords: C4804
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 95a96844406bb803c46bd4f1b0162be711105394
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4804"></a>Avviso del compilatore (livello 1) C4804
'operation': utilizzo non affidabile del tipo 'bool' nell'operazione  
  
 Questo avviso viene generato quando utilizza un `bool` variabile o un valore in modo imprevisto. Ad esempio, C4804 viene generato se si utilizzano l'operatore unario negativo (**-**) o l'operatore di complemento (`~`). Il compilatore valuta l'espressione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4804:  
  
```  
// C4804.cpp  
// compile with: /W1  
  
int main()  
{  
   bool i = true;  
   if (-i)   // C4804, remove the '-' to resolve  
   {  
      i = false;  
   }  
}  
```