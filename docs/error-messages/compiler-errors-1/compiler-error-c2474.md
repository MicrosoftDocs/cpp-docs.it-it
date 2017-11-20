---
title: Errore del compilatore C2474 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2474
dev_langs: C++
helpviewer_keywords: C2474
ms.assetid: 64e6c61e-6e77-480e-bcf0-b30a2fc482ac
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 0630072032d69b5f936174945e366b20556a32d9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2474"></a>Errore del compilatore C2474
'keyword': manca un punto e virgola adiacente, potrebbe trattarsi di una parola chiave o di un identificatore.  
  
 Il compilatore prevedeva un punto e virgola e non è riuscito a interpretare il codice. Per correggere questo errore, aggiungere il punto e virgola.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2474.  
  
```  
// C2474.cpp  
// compile with: /clr /c  
  
ref class A {  
   ref class B {}  
   property int i;   // C2474 error  
};  
  
// OK  
ref class B {  
   ref class D {};  
   property int i;  
};  
  
ref class E {  
   ref class F {} property;   
   int i;  
};  
```