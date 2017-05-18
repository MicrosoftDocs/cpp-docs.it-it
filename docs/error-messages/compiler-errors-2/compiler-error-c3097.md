---
title: Errore del compilatore C3097 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3097
dev_langs:
- C++
helpviewer_keywords:
- C3097
ms.assetid: b24bd8f8-e04f-4fbb-be57-4feb9165572e
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
ms.openlocfilehash: e54d954d07fb3f69d5e06f3372d22460b744cb18
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3097"></a>Errore del compilatore C3097
'attribute': l'attributo deve avere ambito 'assembly:' o 'module:'  
  
 Un attributo globale è stato usato in modo errato.  
  
 Per ulteriori informazioni, vedere [attributi definiti dall'utente](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3097.  
  
```  
// C3097.cpp  
// compile with: /clr /c  
using namespace System;   
  
[AttributeUsage(AttributeTargets::All, AllowMultiple = true)]  
public ref class Attr : public Attribute {  
public:  
   Attr(int t) : m_t(t) {}  
   int m_t;  
};  
  
[Attr(10)];   // C3097  
[assembly:Attr(10)];   // OK  
  
[Attr(10)]   // OK  
public ref class MyClass {};  
```
