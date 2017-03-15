---
title: Errore del compilatore C3168 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3168
dev_langs:
- C++
helpviewer_keywords:
- C3168
ms.assetid: 4c36fcfb-c351-48ff-b4eb-78d2aa1b4d55
caps.latest.revision: 10
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
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: da24e70142fa8b54b88e1d721cad01865f306202
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3168"></a>Errore del compilatore C3168
'tipo': tipo di enumerazione sottostante non valido  
  
Il tipo sottostante specificato per il `enum` tipo non valido. Il tipo sottostante deve essere un tipo C++ integrale o un tipo CLR corrispondente.  
  
Nell'esempio seguente viene generato l'errore C3168:  
  
```  
// C3168.cpp  
// compile with: /clr /c  
ref class G{};  
  
enum class E : G { e };   // C3168  
enum class F { f };   // OK  
```  

