---
title: Avviso del compilatore C4693 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4693
dev_langs:
- C++
helpviewer_keywords:
- C4693
ms.assetid: 72d8db01-5e6f-4794-8731-76107e8f064a
caps.latest.revision: 7
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
ms.openlocfilehash: 85a0e3e4a5e6df7dee5d0d69a1a6b486a8eb1283
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-c4693"></a>Avviso del compilatore C4693
'class': una classe astratta sealed non può avere membri di istanza 'Test'  
  
 Se un tipo è contrassegnato [sealed](../../windows/sealed-cpp-component-extensions.md) e [astratta](../../windows/abstract-cpp-component-extensions.md), può avere solo membri statici.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4693.  
  
```  
// C4693.cpp  
// compile with: /clr /c  
public ref class Public_Ref_Class sealed abstract {  
public:  
   void Test() {}   // C4693  
   static void Test2() {}   // OK  
};  
```
