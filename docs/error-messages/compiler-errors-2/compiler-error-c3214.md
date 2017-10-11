---
title: Errore del compilatore C3214 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3214
dev_langs:
- C++
helpviewer_keywords:
- C3214
ms.assetid: 49ee4a9a-2549-4adb-9d3a-38e154303c2e
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 6d280f500368ac7ac6ad0a987b987e1f9e57b6a5
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3214"></a>Errore del compilatore C3214
'type': argomento di tipo non valido per il parametro generico 'param' del 'generic_type' generico. Vincolo 'constraint' non soddisfatto  
  
 Il tipo è stato specificato per la creazione di un'istanza di una classe generica che non soddisfa il vincolo della classe generica.  
  
 L'esempio seguente genera l'errore C3214:  
  
```  
// C3214.cpp  
// compile with: /clr  
interface struct A {};  
  
generic <class T>   
where T : A  
ref class C {};  
  
ref class X : public A {};  
  
int main() {  
   C<int>^ c = new C<int>;   // C3214  
   C<X ^> ^ c2 = new C<X^>;   // OK  
}  
```
