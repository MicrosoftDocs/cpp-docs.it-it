---
title: Errore del compilatore C2503 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2503
dev_langs: C++
helpviewer_keywords: C2503
ms.assetid: da86cc89-fd04-400b-aa8d-a5ffaf7e3918
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1eb2f8d30d7e61dbc6fe0b4a0872046c38dbe549
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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