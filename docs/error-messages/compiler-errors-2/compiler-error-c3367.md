---
title: Errore del compilatore C3367 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3367
dev_langs: C++
helpviewer_keywords: C3367
ms.assetid: e675d42b-f5b0-4d43-aab1-1f5024233102
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e341266c37411d96a4cf313e6a101e48aeb2a85d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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