---
title: Errore del compilatore C2723 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2723
dev_langs: C++
helpviewer_keywords: C2723
ms.assetid: 86925601-2297-4cfd-94e2-2caf27c474c4
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 587dd742a089a0eddc416e59563cd1e0707e662b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2723"></a>Errore del compilatore C2723
'function': identificatore 'specifier' non valido nella definizione di funzione  
  
 L'identificatore non può essere visualizzato con una definizione di funzione di fuori di una dichiarazione di classe. L'identificatore `virtual` può essere specificato solo in una dichiarazione di funzione membro all'interno di una dichiarazione di classe.  
  
 L'esempio seguente genera l'errore C2723 e mostra come risolverlo:  
  
```  
// C2723.cpp  
struct X {  
   virtual void f();  
   virtual void g();  
};  
  
virtual void X::f() {}   // C2723  
  
// try the following line instead  
void X::g() {}  
```