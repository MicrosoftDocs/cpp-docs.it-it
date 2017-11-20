---
title: Compilatore avviso (livello 1) C4674 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4674
dev_langs: C++
helpviewer_keywords: C4674
ms.assetid: 638dae0b-b82c-4865-9599-72630827ca09
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 43d34279ded00851962008837d0bf6cd76eaff7c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4674"></a>Avviso del compilatore (livello 1) C4674
'method' deve essere dichiarato 'static' e avere esattamente un parametro  
  
La firma di un operatore di conversione non era corretta. Il metodo non è considerato una conversione definita dall'utente. Per ulteriori informazioni sulla definizione degli operatori, vedere [operatori definiti dall'utente (C + + CLI)](../../dotnet/user-defined-operators-cpp-cli.md) e [conversioni definite dall'utente (C + + CLI)](../../dotnet/user-defined-conversions-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4674.  
  
```  
// C4674.cpp  
// compile with: /clr /WX /W1 /LD  
ref class G {  
   int op_Implicit(int i) {   // C4674  
      return 0;  
   }  
};  
```  
