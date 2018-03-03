---
title: Errore del compilatore C2897 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2897
dev_langs:
- C++
helpviewer_keywords:
- C2897
ms.assetid: a88349e2-823f-42a0-8660-0653b677afa4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 64d99fb6854a9cf1c1acee88c0d8bddadc30557c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2897"></a>Errore del compilatore C2897
un distruttore/finalizzatore non può essere un modello di funzione  
  
 I distruttori o i finalizzatori non possono essere sottoposti a overload non è consentito dichiarare un distruttore come modello (che verrà definiti un set di distruttori).  
  
 L'esempio seguente genera l'errore C2897:  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2897.  
  
```  
// C2897.cpp  
// compile with: /c  
class X {  
public:  
   template<typename T> ~X() {}   // C2897  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2897.  
  
```  
// C2897_b.cpp  
// compile with: /c /clr  
ref struct R2 {  
protected:  
   template<typename T> !R2(){}   // C2897 error  
};  
```