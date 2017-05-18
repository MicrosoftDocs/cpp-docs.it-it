---
title: Errore del compilatore C3226 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3226
dev_langs:
- C++
helpviewer_keywords:
- C3226
ms.assetid: 636106ca-6f4e-4303-a6a0-8803221ec67d
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 6ddc0ed06febb7c2e82339dc340afa5d00aed01a
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3226"></a>Errore del compilatore C3226
Dichiarazione di modello non consentita all'interno di una dichiarazione generica  
  
 Usare una dichiarazione generica all'interno di una classe generica.  
  
 L'esempio seguente genera l'errore C3226:  
  
```  
// C3226.cpp  
// compile with: /clr  
generic <class T>  
ref class C {  
   template <class T1>   // C3226  
   ref struct S1 {};  
};  
```  
  
 L'esempio seguente illustra una possibile soluzione:  
  
```  
// C3226b.cpp  
// compile with: /clr /c  
generic <class T>  
ref class C {  
   generic <class T1>  
   ref struct S1 {};  
};  
```
