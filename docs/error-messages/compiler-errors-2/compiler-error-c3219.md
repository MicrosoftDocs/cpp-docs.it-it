---
title: Errore del compilatore C3219 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3219
dev_langs:
- C++
helpviewer_keywords:
- C3219
ms.assetid: 9c9757b0-1256-4cdf-9d8c-a3a72f300ce5
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ea908b51246cf77d8813ce2d80499174564f7787
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3219"></a>Errore del compilatore C3219
'param': un parametro generico non può essere vincolato da non interfacce multiple: 'class'  
  
 Vincolare un parametro generico per due o più classi gestite non è consentito.  
  
 L'esempio seguente genera l'errore C3219:  
  
```  
// C3219.cpp  
// compile with: /clr  
ref class A {};  
ref class B {};  
  
generic <class T>  
where T : A, B  
ref class E {};   // C3219  
```  
  
 L'esempio seguente illustra una possibile soluzione:  
  
```  
// C3219b.cpp  
// compile with: /clr /c  
ref class A {};  
  
interface struct C {};  
  
generic <class T>  
where T : A  
ref class E {};  
```
