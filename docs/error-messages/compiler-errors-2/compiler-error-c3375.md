---
title: Errore del compilatore C3375 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3375
dev_langs:
- C++
helpviewer_keywords:
- C3375
ms.assetid: f1df78c6-e6ca-48f3-8b29-4e1710002bf3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 11805b7ef714c65ff9816828aeea10baa2217ff6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33256470"
---
# <a name="compiler-error-c3375"></a>Errore del compilatore C3375
'function': funzione di delegato ambigua  
  
 La creazione di un'istanza di un delegato potrebbe essere avvenuta in una funzione membro statica o come delegato non associato in una funzione di istanza, pertanto il compilatore ha generato questo errore.  
  
 Per ulteriori informazioni, vedere [delegato (estensioni del componente C++)](../../windows/delegate-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 Il seguente codice di esempio genera l'errore C3375.  
  
```  
// C3375.cpp  
// compile with: /clr  
ref struct R {  
   static void f(R^) {}  
   void f() {}  
};  
  
delegate void Del(R^);  
  
int main() {  
   Del ^ a = gcnew Del(&R::f);   // C3375  
}  
```