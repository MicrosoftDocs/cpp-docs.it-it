---
title: Errore del compilatore C3309 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3309
dev_langs:
- C++
helpviewer_keywords:
- C3309
ms.assetid: 75ee16e3-7d4e-4c41-b3cb-64e9849c3aab
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 528ee8dd3925ee989003db8a484041bb2a3a03dd
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3309"></a>Errore del compilatore C3309
'macro_name': il nome del modulo non può essere una macro o una parola chiave  
  
 Il valore passato alla proprietà del nome dell'attributo del modulo non può essere un simbolo che viene espanso dal preprocessore, ma deve essere un valore letterale stringa.  
  
 L'esempio seguente genera l'errore C3309:  
  
```  
// C3309.cpp  
#define NAME MyModule  
[module(name="NAME")];   // C3309  
// Try the following line instead  
// [module(name="MyModule")];  
[coclass]  
class MyClass {  
public:  
   void MyFunc();  
};  
  
int main() {  
}  
```
