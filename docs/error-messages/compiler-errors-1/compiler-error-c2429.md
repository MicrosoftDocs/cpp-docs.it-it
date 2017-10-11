---
title: C2429 errore del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2429
dev_langs:
- C++
helpviewer_keywords:
- C2429
ms.assetid: 57ff6df9-5cf1-49f3-8bd8-4e550dfd65a0
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 18fd64199ff043b660bb205199b982ee2843cdcd
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2429"></a>C2429 errore del compilatore
'*funzionalità del linguaggio*'richiede flag del compilatore'*l'opzione del compilatore*'  
  
La funzionalità del linguaggio richiede un'opzione del compilatore specifici per il supporto.  
  
L'errore C2429: flag del compilatore richiede la funzionalità del linguaggio 'annidato-namespace-definition' ' / std:c + + più recente ' viene generato se si tenta di definire un *dello spazio dei nomi composto*, uno spazio dei nomi che contiene uno o più nomi di ambito annidato spazio dei nomi , a partire da Visual Studio 2015 Update 3. Composta dello spazio dei nomi definizioni non sono consentite in C++ prima di C++ 17. Il compilatore supporta le definizioni di spazi dei nomi composti quando il [/std:c + + più recente](../../build/reference/std-specify-language-standard-version.md) è specificata l'opzione del compilatore:  
```cpp  
// C2429a.cpp  
namespace a::b { int i; } // C2429 starting in Visual C++ 2015 Update 3.  
                          // Use /std:c++latest to fix, or do this:  
// namespace a { namespace b { int i; }}  
  
int main() {  
   a::b::i = 2;  
}  
```  
