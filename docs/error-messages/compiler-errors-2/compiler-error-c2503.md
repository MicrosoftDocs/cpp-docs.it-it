---
title: Errore del compilatore C2503 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2503
dev_langs:
- C++
helpviewer_keywords:
- C2503
ms.assetid: da86cc89-fd04-400b-aa8d-a5ffaf7e3918
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: db11113b7f6061a7e3464cc69ae1f397fc7a4753
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33198872"
---
# <a name="compiler-error-c2503"></a>Errore del compilatore C2503
'class': le classi base non possono contenere matrici di dimensioni zero  
  
 Una classe di base o una struttura contiene una matrice con dimensione zero. Una matrice in una classe deve contenere almeno un elemento.  
  
 L'esempio seguente genera l'errore C2503:  
  
```  
// C2503.cpp  
// compile with: /c  
class A {  
   public:  
   int array [];  
};  
  
class B : A {};    // C2503  
  
class C {  
public:  
   int array [10];  
};  
  
class D : C {};  
```