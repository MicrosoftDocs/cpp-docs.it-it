---
title: Errore del compilatore C2766 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2766
dev_langs:
- C++
helpviewer_keywords:
- C2766
ms.assetid: 8032f4ca-6827-4f04-9c61-c44643c85cc4
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a74f3808f566c4977d2cffccc0030770e7ae0577
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2766"></a>Errore del compilatore C2766
specializzazione esplicita. 'specializzazione' è già stata definita.  
  
 Le specializzazioni esplicite duplicate non sono consentite. Per ulteriori informazioni, vedere [specializzazione esplicita di modelli di funzione](../../cpp/explicit-specialization-of-function-templates.md).  
  
 L'esempio seguente genera l'errore C2766:  
  
```  
// C2766.cpp  
// compile with: /c  
template<class T>   
struct A {};  
  
template<>   
struct A<int> {};  
  
template<>   
struct A<int> {};   // C2766  
// try the following line instead  
// struct A<char> {};  
```
