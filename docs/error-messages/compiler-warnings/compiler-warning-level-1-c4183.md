---
title: Compilatore (livello 1) Avviso C4183 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4183
dev_langs:
- C++
helpviewer_keywords:
- C4183
ms.assetid: dc48312c-4b34-44dd-80ff-eb5f11d5ca47
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ec9462132c0640dc088dc89b36dd78dbfd057864
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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