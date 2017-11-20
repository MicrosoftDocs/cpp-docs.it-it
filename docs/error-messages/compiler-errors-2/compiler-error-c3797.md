---
title: Errore del compilatore C3797 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3797
dev_langs: C++
helpviewer_keywords: C3797
ms.assetid: ab27ff34-8c1d-4297-b004-9e39bd3a4f25
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f03b677eac09b7935778590be605897e5eca1524
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3797"></a>Errore del compilatore C3797
'override': dichiarazione di evento non può avere l'identificatore di override (da posizionare invece con i metodi add/remove/raise di evento)  
  
 È possibile eseguire l'override di un evento semplice (un evento senza metodi di accesso definiti in modo esplicito) con un altro evento semplice. L'evento di override deve definire il comportamento con le funzioni di accesso.  
  
 Per ulteriori informazioni, vedere [evento](../../windows/event-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3797.  
  
```  
// C3797.cpp  
// compile with: /clr /c  
delegate void MyDel();  
  
ref class Class1 {  
public:  
   virtual event MyDel ^ E;  
};  
  
ref class Class2 : public Class1 {  
public:  
   virtual event MyDel ^ E override;   // C3797  
};  
  
// OK  
ref class Class3 : public Class1 {  
public:  
   virtual event MyDel ^ E {  
      void add(MyDel ^ d) override {}  
      void remove(MyDel ^ d) override {}  
   }  
};  
```