---
title: Errore del compilatore C2274 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2274
dev_langs:
- C++
helpviewer_keywords:
- C2274
ms.assetid: 8e874903-f499-45ef-8291-f821eee4cc1c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dfd9bda3f3b0ab267ec008443dd865334e1b765e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33173025"
---
# <a name="compiler-error-c2274"></a>Errore del compilatore C2274
'type': non valido a destra di '.' (operatore)  
  
 Un tipo viene visualizzato come operando destro di un operatore di accesso ai membri (.).  
  
 Questo errore può dipendere dal tentativo di accesso a una conversione di tipo definito dall'utente. Utilizzare la parola chiave `operator` tra la durata e `type`.  
  
 L'esempio seguente genera l'errore C2286:  
  
```  
// C2274.cpp  
struct MyClass {  
   operator int() {  
      return 0;  
   }  
};  
  
int main() {  
   MyClass ClassName;  
   int i = ClassName.int();   // C2274  
   int j = ClassName.operator int();   // OK  
}  
```