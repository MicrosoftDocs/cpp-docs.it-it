---
title: Errore del compilatore C3367 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3367
dev_langs:
- C++
helpviewer_keywords:
- C3367
ms.assetid: e675d42b-f5b0-4d43-aab1-1f5024233102
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: d1d144399ca42ba321d8f3d11425bf2ff8e65891
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3367"></a>Errore del compilatore C3367
'static_member_function': impossibile utilizzare una funzione statica per creare un delegato non associato  
  
Quando si chiama un delegato non associato, è necessario passare un'istanza di un oggetto. Una funzione membro statico viene chiamata tramite il nome della classe, quindi è possibile creare solo un'istanza di un delegato non associato con una funzione di membro di istanza.  
  
Per ulteriori informazioni sui delegati non associati, vedere [procedura: definire e utilizzare delegati (C + + CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C3367.  
  
```cpp  
// C3367.cpp  
// compile with: /clr  
ref struct R {  
   void b() {}  
   static void f() {}  
};  
  
delegate void Del(R^);  
  
int main() {  
   Del ^ a = gcnew Del(&R::b);   // OK  
   Del ^ b = gcnew Del(&R::f);   // C3367  
}  
```
