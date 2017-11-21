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
ms.openlocfilehash: 1ae253ade1093d447616a39e788a80b843290f6a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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