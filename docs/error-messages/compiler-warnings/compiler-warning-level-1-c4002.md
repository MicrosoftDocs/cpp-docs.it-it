---
title: Compilatore avviso (livello 1) C4002 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4002
dev_langs:
- C++
helpviewer_keywords:
- C4002
ms.assetid: 6bda1dfe-e2e4-4771-9794-5a404c466dd5
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c11b40f29ccbd0e58afdce08463a87dc71181d6a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4002"></a>Avviso del compilatore (livello 1) C4002
troppi parametri effettivi per la macro 'identifier'  
  
 Il numero di parametri effettivi nella macro supera il numero di parametri formali nella definizione della stessa. Il preprocessore raccoglie i parametri supplementari, ma li ignora durante l'espansione della macro.  
  
 L'errore C4002 può verificarsi quando si usa [Variadic Macros](../../preprocessor/variadic-macros.md)in modo non corretto.  
  
 L'esempio seguente genera l'errore C4002:  
  
```  
// C4002.cpp  
// compile with: /W1  
#define test(a) (a)  
  
int main() {  
   int a = 1;  
   int b = 2;  
   a = test(a,b);   // C4002  
   // try..  
   a = test(a);  
}  
```  
  
 Questo errore può verificarsi anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: non sono più accettate virgole aggiuntive nella macro.  
  
 Il compilatore non accetta più virgole aggiuntive in una macro. Affinché il codice sia valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, rimuovere le virgole aggiuntive.  
  
```  
// C4002b.cpp  
// compile with: /W1  
#define F(x,y)  
int main()  
{  
   F(2,,,,,,3,,,,,,)   // C4002  
   // Try the following line instead:  
   // F(2,3)  
}  
```