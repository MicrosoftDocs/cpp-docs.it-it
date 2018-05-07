---
title: Errore del compilatore C3380 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3380
dev_langs:
- C++
helpviewer_keywords:
- C3380
ms.assetid: 86f1f4ec-4ad8-4a1a-9b6c-2d9b6129df6b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 315031946f9a89f53097e4c2371286fba213f698
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3380"></a>Errore del compilatore C3380
'class': identificatore di accesso assembly non valido. Consentiti solo 'public' o 'private'  
  
 Quando vengono applicate a una classe o struttura gestita, le parole chiave [public](../../cpp/public-cpp.md) e [private](../../cpp/private-cpp.md) indicano se la classe verrà esposta tramite i metadati dell'assembly. Solo `public` o `private` può essere applicata a una classe in un programma compilato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Il `ref` e `value` parole chiave, se utilizzata con [/clr](../../build/reference/clr-common-language-runtime-compilation.md), indicano che una classe è gestita (vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md)).  
  
 L'esempio seguente genera l'errore C3380:  
  
```  
// C3380_2.cpp  
// compile with: /clr  
protected ref class A {   // C3380  
// try the following line instead  
// ref class A {  
public:  
   static int i = 9;  
};  
  
int main() {  
   A^ myA = gcnew A;  
   System::Console::WriteLine(myA->i);  
}  
```  
