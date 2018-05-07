---
title: Errore del compilatore C2078 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2078
dev_langs:
- C++
helpviewer_keywords:
- C2078
ms.assetid: 9bead850-4123-46cf-a634-5c77ba974b2b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ab44fd94f34f80623b58dea01eee4e0143b6dbc4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2078"></a>Errore del compilatore C2078
troppi inizializzatori  
  
 Il numero di inizializzatori supera il numero di oggetti da inizializzare.  
  
 Il compilatore può dedurre la corretta assegnazione degli inizializzatori agli oggetti e agli oggetti interni quando le parentesi graffe interne vengono elise dall'elenco di inizializzatori. L'uso totale delle parentesi graffe elimina anche l'ambiguità e restituisce la corretta assegnazione. L'uso parziale di parentesi graffe può generare l'errore C2078 a causa dell'ambiguità nell'assegnazione di inizializzatori di oggetti.  
  
 L'esempio seguente genera l'errore C2078 e mostra come risolverlo:  
  
```  
// C2078.cpp  
// Compile by using: cl /c /W4 C2078.cpp  
struct S {  
   struct {  
      int x, y;  
   } z[2];  
};  
  
int main() {  
   int d[2] = {1, 2, 3};   // C2078  
   int e[2] = {1, 2};      // OK  
  
   char a[] = {"a", "b"};  // C2078  
   char *b[] = {"a", "b"}; // OK  
   char c[] = {'a', 'b'};  // OK  
  
   S s1{1, 2, 3, 4};       // OK  
   S s2{{1, 2}, {3, 4}};   // C2078  
   S s3{{1, 2, 3, 4}};     // OK  
   S s4{{{1, 2}, {3, 4}}}; // OK  
}  
  
```