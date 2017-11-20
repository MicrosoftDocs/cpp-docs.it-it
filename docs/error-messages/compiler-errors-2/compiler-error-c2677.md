---
title: Errore del compilatore C2677 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2677
dev_langs: C++
helpviewer_keywords: C2677
ms.assetid: 76bc0b65-f52a-45a6-b6d6-0555f89da9a8
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4362fdb85c6700c9f9592b9bbf626738e6c4d4b5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2677"></a>Errore del compilatore C2677
'operator' binario: è stato trovato alcun operatore globale che accetta il tipo 'type' (o nessuna conversione accettabile)  
  
 Per usare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.  
  
 L'esempio seguente genera l'errore C2677:  
  
```  
// C2677.cpp  
class C {  
public:  
   C(){}  
} c;  
  
class D {  
public:  
   D(){}  
   operator int(){return 0;}  
} d;  
  
int main() {  
   int i = 1 >> c;   // C2677  
   int j = 1 >> d;   // OK operator int() defined  
}  
```