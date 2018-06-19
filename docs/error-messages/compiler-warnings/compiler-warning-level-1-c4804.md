---
title: Compilatore avviso (livello 1) C4804 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4804
dev_langs:
- C++
helpviewer_keywords:
- C4804
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 677899230b2475c80f9bdd461a0c79740c4d3bec
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33286981"
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