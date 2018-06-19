---
title: Errore del compilatore C3224 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3224
dev_langs:
- C++
helpviewer_keywords:
- C3224
ms.assetid: 129be22f-8f3e-4fc6-9ccd-d27d8ef91251
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b64ed3eb8c9954a28aba9168d914e1651d95bbda
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33247084"
---
# <a name="compiler-error-c3224"></a>Errore del compilatore C3224
'type': nessuna classe generica in overload accetta 'number' argomenti di tipo generico  
  
 Il compilatore non è riuscito a trovare un overload appropriato.  
  
 L'esempio seguente genera l'errore C3224:  
  
```  
// C3224.cs  
// compile with: /target:library  
public class C<T> {}  
public class C<T,U> {}  
```  
  
 E quindi,  
  
```  
// C3224b.cpp  
// compile with: /clr  
#using "C3224.dll"  
int main() {  
   C<int,int,int>^ c = gcnew C<int,int,int>();   // C3224  
   C<int,int>^ c2 = gcnew C<int,int>();   // OK  
}  
```