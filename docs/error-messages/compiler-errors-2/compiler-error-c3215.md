---
title: Errore del compilatore C3215 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3215
dev_langs:
- C++
helpviewer_keywords:
- C3215
ms.assetid: d0d16007-8885-42e0-b086-2d3a61f348c5
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: e4a649c01762b8a113e928bb63ffe293f86d21c3
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3215"></a>Errore del compilatore C3215
'type1': parametro di tipo generico già vincolato da 'type2'  
  
 Un vincolo è stato specificato più volte.  
  
 Per altre informazioni sui generics, vedere [Generics](../../windows/generics-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3215:  
  
```  
// C3215.cpp  
// compile with: /clr  
interface struct A {};  
  
generic <class T>  
where T : A,A  
ref class C {};   // C3215  
```  
  
 Possibile soluzione:  
  
```  
// C3215b.cpp  
// compile with: /clr /c  
interface struct A {};  
  
generic <class T>  
where T : A  
ref class C {};  
```
