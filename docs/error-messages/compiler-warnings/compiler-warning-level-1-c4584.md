---
title: Compilatore avviso (livello 1) C4584 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4584
dev_langs: C++
helpviewer_keywords: C4584
ms.assetid: ad86582f-cb8c-4d21-8c4c-a6c800059e25
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1c17d8871d16cd2eec6b46e01d9c1779f3440398
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4584"></a>Avviso del compilatore (livello 1) C4584
'class1': classe di base 'class2' è già una classe di base di 'class3'  
  
 La classe definita eredita da due classi, una delle quali eredita da altra. Ad esempio:  
  
```  
// C4584.cpp  
// compile with: /W1 /LD  
class A {  
};  
  
class B : public A {  
};  
  
class C : public A, public B { // C4584  
};  
```  
  
 In questo caso, viene generato un avviso sulla classe C perché eredita sia dalla classe A e B, che eredita anche dalla classe A. Questo avviso viene utilizzato come un promemoria che è necessario qualificare l'utilizzo di membri di queste classi di base o verrà generato un errore del compilatore a causa dell'ambiguità in quale membro di classe si fa riferimento.