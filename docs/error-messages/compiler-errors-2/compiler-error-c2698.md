---
title: Errore del compilatore C2698 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2698
dev_langs:
- C++
helpviewer_keywords:
- C2698
ms.assetid: 3ebfe395-c20b-4c56-9980-ca9ed8653382
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7c466e39702f1e408ad96d79c16c4a5953fa373f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33233817"
---
# <a name="compiler-error-c2698"></a>Errore del compilatore C2698
la dichiarazione using per ' dichiarazione 1' non può coesistere con la dichiarazione using per ' dichiarazione 2'  
  
 Dopo aver creato un [dichiarazione using](../../cpp/using-declaration.md) per un membro dati, qualsiasi mediante dichiarazione nello stesso ambito che utilizza lo stesso nome non è consentita, come solo le funzioni possono essere sottoposti a overload.  
  
 L'esempio seguente genera l'errore C2698:  
  
```  
// C2698.cpp  
struct A {  
   int x;  
};  
  
struct B {  
   int x;  
};  
  
struct C : A, B {  
   using A::x;  
   using B::x;   // C2698  
}  
```