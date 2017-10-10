---
title: Errore del compilatore C2754 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2754
dev_langs:
- C++
helpviewer_keywords:
- C2754
ms.assetid: 1cab66c5-da9d-4b81-b7fb-9cdc48ff1ccc
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 5d6b6b3089f0fc345442777d1d254aeb20c08cb9
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2754"></a>Errore del compilatore C2754
'specializzazione': una specializzazione parziale non può avere un parametro di modello non di tipo dipendente  
  
 È stato effettuato un tentativo di specializzare parzialmente una classe modello che dispone di un parametro di modello non di tipo dipendente. ma questa operazione non è consentita.  
  
 L'esempio seguente genera l'errore C2754:  
  
```  
// C2754.cpp  
// compile with: /c  
  
template<class T, T t>  
struct A {};  
  
template<class T, int N>  
struct B {};  
  
template<class T> struct A<T,5> {};   // C2754  
template<> struct A<int,5> {};   // OK  
template<class T> struct B<T,5> {};   // OK  
```
