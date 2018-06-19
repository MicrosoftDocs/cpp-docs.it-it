---
title: Compilatore (livello 1) Avviso C4183 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4183
dev_langs:
- C++
helpviewer_keywords:
- C4183
ms.assetid: dc48312c-4b34-44dd-80ff-eb5f11d5ca47
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2a271c12facaacdd07b4a664396c36c7301ac2f4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33277472"
---
# <a name="compiler-warning-level-1-c4183"></a>Compilatore (livello 1) Avviso C4183
'identifier': tipo restituito mancante. si presuppone che sia una funzione membro restituisce 'int'  
  
 La definizione inline di una funzione membro in una classe o una struttura non dispone di un tipo restituito. Si presuppone che questa funzione membro ha un valore predefinito tipo restituito di `int`.  
  
 L'esempio seguente genera l'errore C4183:  
  
```  
// C4183.cpp  
// compile with: /W1 /c  
#pragma warning(disable : 4430)  
class MyClass1;  
class MyClass2 {  
   MyClass1() {};   // C4183  
};  
```