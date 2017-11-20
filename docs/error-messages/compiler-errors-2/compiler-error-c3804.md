---
title: Errore del compilatore C3804 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3804
dev_langs: C++
helpviewer_keywords: C3804
ms.assetid: 7c4cda28-ec96-4d04-937b-36dbd9944722
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 06c9292c2da106c4a4eaeb6de07c923c973e4ce7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3804"></a>Errore del compilatore C3804
'property_accessor': i metodi della funzione di accesso di una proprietà devono essere tutti statici o tutti non statici  
  
 Quando si definisce una proprietà non semplice, le funzioni di accesso possono essere statico o istanza, ma non entrambi.  
  
 Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md) .  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3804.  
  
```  
// C3804.cpp  
// compile with: /c /clr  
ref struct A {  
  
   property int i {  
      static int get() {}  
      void set(int i) {}  
   }   // C3804 error  
  
   // OK  
   property int j {  
      int get() { return 0; }  
      void set(int i) {}  
   }  
  
   property int k {  
      static int get() { return 0; }  
      static void set(int i) {}  
   }  
};  
```