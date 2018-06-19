---
title: Errore del compilatore C3804 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3804
dev_langs:
- C++
helpviewer_keywords:
- C3804
ms.assetid: 7c4cda28-ec96-4d04-937b-36dbd9944722
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b0bd4d5921037094b3050e7a3c003b507a9cae4c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33267157"
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