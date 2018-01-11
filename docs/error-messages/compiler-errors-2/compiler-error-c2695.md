---
title: Errore del compilatore C2695 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2695
dev_langs: C++
helpviewer_keywords: C2695
ms.assetid: 3f6f2091-c38b-40ea-ab6c-f1846f5702d7
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1799e5efbf6428c5cc8f4247fb49259ef9da55ef
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2695"></a>Errore del compilatore C2695
'function1': funzione virtual in override differisce da 'function2' solo per la convenzione di chiamata  
  
 La firma di una funzione in una classe derivata non può eseguire l'override di una funzione in una classe base e modificare la convenzione di chiamata.  
  
 L'esempio seguente genera l'errore C2695:  
  
```  
// C2695.cpp  
class C {  
   virtual void __fastcall func();  
};  
  
class D : public C {  
   virtual void __clrcall func();   // C2695  
};  
```