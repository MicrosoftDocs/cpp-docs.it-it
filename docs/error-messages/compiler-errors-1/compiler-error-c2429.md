---
title: C2429 errore del compilatore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: eb0c1bf407d1478451c246cf615d031ef6c45bf9
ms.openlocfilehash: 7d2c27ccdba28720596984c46c9d24f9d29c7b15
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2429"></a>C2429 errore del compilatore
'*funzionalità del linguaggio*'richiede flag del compilatore'*l'opzione del compilatore*'  
  
La funzionalità del linguaggio richiede un'opzione del compilatore specifici per il supporto.  
  
L'errore C2429: flag del compilatore richiede la funzionalità del linguaggio 'annidati-namespace-definition' ' / std:c + + più recente ' viene generato se si tenta di definire un *spazi dei nomi composti*, uno spazio dei nomi che contiene uno o più nomi di ambito annidato dello spazio dei nomi, a partire da Visual Studio 2015 Update 3. Composta dello spazio dei nomi non sono consentite definizioni in C++ prima C++&17;. Il compilatore supporta le definizioni di spazi dei nomi composti quando il [/std:c + + più recente](../../build/reference/std-specify-language-standard-version.md) è specificata l'opzione del compilatore:  
```cpp  
// C2429a.cpp  
namespace a::b { int i; } // C2429 starting in Visual C++ 2015 Update 3.  
                          // Use /std:c++latest to fix, or do this:  
// namespace a { namespace b { int i; }}  
  
int main() {  
   a::b::i = 2;  
}  
```  
