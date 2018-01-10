---
title: Errore del compilatore C3060 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3060
dev_langs: C++
helpviewer_keywords: C3060
ms.assetid: 6282bb92-0546-4b59-9435-d3840bf93bdb
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e6462f0d9c0b1e3d25b50000c63e10c88895cc0d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3060"></a>Errore del compilatore C3060
'member': una funzione Friend non può essere definita all'interno di una classe con un nome completo (può solo essere dichiarata)  
  
 Una funzione Friend è stata definita usando un nome completo, ma questo non è consentito.  
  
 L'esempio seguente genera l'errore C3060:  
  
```  
// C3060.cpp  
class A {  
public:  
   void func();  
};  
  
class C {  
public:  
   friend void A::func() { }   // C3060  
   // Try the following line and the out of class definition:  
   // friend void A::func();  
};  
  
// void A::func(){}  
```