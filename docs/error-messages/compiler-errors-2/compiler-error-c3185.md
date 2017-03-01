---
title: Errore del compilatore C3185 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3185
dev_langs:
- C++
helpviewer_keywords:
- C3185
ms.assetid: 5bf96279-043c-4981-9d02-b4550071b192
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 8772b939def79269dd46375c1e8db5d5dacc5f74
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3185"></a>Errore del compilatore C3185
'typeid' utilizzato nel tipo gestito o WinRT 'type'; utilizzare 'operator'  
  
 Non è possibile applicare il [typeid](../../cpp/typeid-operator.md) operatore in un oggetto gestito o WinRT digitare; utilizzare [typeid](../../windows/typeid-cpp-component-extensions.md) invece.  
  
 L'esempio seguente genera l'errore C3185 e mostra come risolverlo:  
  
```  
// C3185a.cpp  
// compile with: /clr  
ref class Base {};  
ref class Derived : public Base {};  
  
int main() {  
   Derived ^ pd = gcnew Derived;  
   Base ^pb = pd;  
   const type_info & t1 = typeid(pb);   // C3185  
   System::Type ^ MyType = Base::typeid;   // OK  
};  
```  

