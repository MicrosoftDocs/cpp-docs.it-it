---
title: Errore del compilatore C2753 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2753
dev_langs:
- C++
helpviewer_keywords:
- C2753
ms.assetid: 92bfeeac-524a-4a8e-9a4f-fb8269055826
caps.latest.revision: 7
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4bac7b2942f9d72674b8092dc7bf64174dd3c349
ms.openlocfilehash: 7d77c7fa0c8035f8bb3a9ef732880bce4253c25b
ms.contentlocale: it-it
ms.lasthandoff: 04/24/2017

---
# <a name="compiler-error-c2753"></a>Errore del compilatore C2753
'*modello*': la specializzazione parziale non può corrispondere a elenco di argomenti del modello principale  
  
 Se l'elenco di argomenti di modello corrisponde l'elenco di parametri, il compilatore considera il modello stesso. Non è consentito definire due volte lo stesso modello.  
  
## <a name="example"></a>Esempio
 L'esempio seguente genera l'errore C2753 e viene illustrato un modo per risolvere questo problema:  
  
```cpp  
// C2753.cpp  
// compile with: cl /c C2753.cpp
template<class T>  
struct A {};  
  
template<class T>  
struct A<T> {};   // C2753  
// try the following line instead  
// struct A<int> {};  
  
template<class T, class U, class V, class W, class X>  
struct B {};  
```
