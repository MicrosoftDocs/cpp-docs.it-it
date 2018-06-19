---
title: Errore del compilatore C3900 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3900
dev_langs:
- C++
helpviewer_keywords:
- C3900
ms.assetid: a94cc561-8fa8-4344-9e01-e81ff462fae5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc940d174edc337422818bc233c1ef9952b66276
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33269080"
---
# <a name="compiler-error-c3900"></a>Errore del compilatore C3900
'member': non è consentita nell'ambito corrente  
  
 Blocchi di proprietà possono contenere dichiarazioni di funzione e definizioni di funzione inline solo. Nessun membro le funzioni è consentito nei blocchi di proprietà. Non sono consentite funzioni typedef, operatori o friend. Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).  
  
 Le definizioni di evento possono contenere solo funzioni e metodi di accesso.  
  
 L'esempio seguente genera l'errore C3900:  
  
```  
// C3900.cpp  
// compile with: /clr  
ref class X {  
   property int P {  
      void set(int);   // OK  
      int i;   // C3900 variable declaration  
   };  
};  
```  
  
 L'esempio seguente genera l'errore C3900:  
  
```  
// C3900b.cpp  
// compile with: /clr  
using namespace System;  
delegate void H();  
ref class X {  
   event H^ E {  
      int m;   // C3900  
  
      // OK  
      void Test() {}  
  
      void add( H^ h ) {}  
      void remove( H^ h ) {}  
      void raise( ) {}  
   }  
};  
```