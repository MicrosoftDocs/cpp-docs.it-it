---
title: Errore del compilatore C2584 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2584
dev_langs: C++
helpviewer_keywords: C2584
ms.assetid: 836e2c0a-86c0-4742-b432-beb0191ad20e
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1ff3567f3f4981ecb86926ad76b0d23627da1fb2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2584"></a>Errore del compilatore C2584
'Class': diretta di base 'Base2' non è accessibile. già base di 'Base1'  
  
 `Class`già deriva direttamente da `Base1`. `Base2`deriva da `Base1`. `Class`non può derivare da `Base2` perché ciò implica l'eredità (indirettamente) da `Base1` nuovamente, che non è valido perché `Base1` è già una classe base diretta.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2584.  
  
```  
// C2584.cpp  
// compile with: /c  
struct A1 {  
   virtual int MyFunction();  
};  
  
struct A2 {  
    virtual int MyFunction();  
};  
  
struct B1: public virtual A1, virtual A2 {  
    virtual int MyFunction();  
};  
  
struct B2: public virtual A2, virtual A1 {  
    virtual int MyFunction();  
};  
  
struct C: virtual B1, B2 {  
    virtual int MyFunction();  
};  
  
struct Z : virtual B2, virtual C {   // C2584  
// try the following line insted  
// struct Z : virtual C {  
    virtual int MyFunction();  
};  
```