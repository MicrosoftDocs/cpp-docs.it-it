---
title: Compilatore avviso (livello 2) C4356 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4356
dev_langs:
- C++
helpviewer_keywords:
- C4356
ms.assetid: 3af3defe-de33-43b6-bd6c-2c2e09e34f3f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 154fb1580bef8a28e66f918e9a34aec44718d10d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33291596"
---
# <a name="compiler-warning-level-2-c4356"></a>Avviso del compilatore (livello 2) C4356
'member': membro dati statici non possa essere inizializzato tramite classi derivate  
  
 L'inizializzazione di un membro dati statico è corretto. Il compilatore ha accettato l'inizializzazione. Per evitare l'avviso, inizializzare il membro tramite la classe base.  
  
 Utilizzare il [avviso](../../preprocessor/warning.md) pragma per non visualizzare questo avviso.  
  
 L'esempio seguente genera l'errore C4356:  
  
```  
// C4356.cpp  
// compile with: /W2 /EHsc  
#include <iostream>  
  
template <class T>  
class C {  
   static int n;  
};  
  
class D : C<int> {};  
  
int D::n = 0; // C4356  
// try the following line instead  
// int C<int>::n = 0;  
  
class A {  
public:  
   static int n;  
};  
  
class B : public A {};  
  
int B::n = 10;   // C4356  
// try the following line instead  
// int A::n = 99;  
  
int main() {  
   using namespace std;  
   cout << B::n << endl;  
}  
```