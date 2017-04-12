---
title: Errore del compilatore C3380 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3380
dev_langs:
- C++
helpviewer_keywords:
- C3380
ms.assetid: 86f1f4ec-4ad8-4a1a-9b6c-2d9b6129df6b
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: fbc75caa22d3c46b5a7a487662119a43b27eaf2b
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3380"></a>Errore del compilatore C3380
'class': identificatore di accesso assembly non valido. Consentiti solo 'public' o 'private'  
  
 Quando applicato a una classe o struttura gestita, il [pubblica](../../cpp/public-cpp.md) e [privata](../../cpp/private-cpp.md) parole chiave indicano se la classe verrà esposta tramite i metadati dell'assembly. Solo `public` o `private` può essere applicato a una classe in un programma compilato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Il `ref` e `value` parole chiave, se utilizzato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md), indicano che una classe è gestita (vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md)).  
  
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

