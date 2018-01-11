---
title: Compilatore avviso (livello 1) C4551 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4551
dev_langs: C++
helpviewer_keywords: C4551
ms.assetid: 458b59bd-e2d7-425f-9ba6-268ff200424f
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 27cd7064e6c6523acad7520cc2211ecf096793a8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4551"></a>Avviso del compilatore (livello 1) C4551
elenco di argomenti di funzione chiamata mancante  
  
 Una chiamata di funzione deve includere le parentesi di aperte e chiusura dopo il nome della funzione anche se la funzione non accetta parametri.  
  
 L'esempio seguente genera l'errore C4551:  
  
```  
// C4551.cpp  
// compile with: /W1  
void function1() {  
}  
  
int main() {  
   function1;   // C4551  
   function1();   // OK  
}  
```