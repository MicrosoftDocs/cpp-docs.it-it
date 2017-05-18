---
title: Compilatore avviso (livello 1) C4620 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4620
dev_langs:
- C++
helpviewer_keywords:
- C4620
ms.assetid: fed29934-b797-47e8-bbea-c7e5f8dd6e93
caps.latest.revision: 6
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
ms.openlocfilehash: 78ce1f937cca112f011aee7266b8bd6339820c23
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4620"></a>Avviso del compilatore (livello 1) C4620
nessuna forma suffissa trovata di 'operator ++' per il tipo 'type'. Verrà utilizzata la forma prefissa  
  
 Non è stato definito alcun operatore di incremento suffisso per il tipo specificato. Il compilatore ha usato l'operatore prefisso di overload.  
  
 Questo avviso può essere evitato definendo un operatore `++` suffisso. Creare una versione a due argomenti dell'operatore `++` come mostrato di seguito:  
  
```  
// C4620.cpp  
// compile with: /W1  
class A  
{  
public:  
   A(int nData) : m_nData(nData)  
   {  
   }  
  
   A operator++()  
   {  
      m_nData -= 1;  
      return *this;  
   }  
  
   // A operator++(int)  
   // {  
   //    A tmp = *this;  
   //    m_nData -= 1;  
   //    return tmp;  
   // }  
  
private:  
   int m_nData;  
};  
  
int main()  
{  
   A a(10);  
   ++a;  
   a++;   // C4620  
}  
```
