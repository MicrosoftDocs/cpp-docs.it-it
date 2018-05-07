---
title: Errore del compilatore C2351 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2351
dev_langs:
- C++
helpviewer_keywords:
- C2351
ms.assetid: 5439ccf6-66f6-4859-964c-c73f5eddfc1b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1660e5dfc4f17f7617c82eb3e633f345e2774495
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2351"></a>Errore del compilatore C2351
sintassi di inizializzazione costruttore C++ obsoleta  
  
 In un elenco di inizializzazione di nuovo stile per un costruttore, è necessario denominare in modo esplicito ogni classe di base diretta, anche se è la classe di base solo.  
  
 L'esempio seguente genera l'errore C2351:  
  
```  
// C2351.cpp  
// compile with: /c  
class B {  
public:   
   B() : () {}   // C2351  
   B() {}   // OK  
};  
```