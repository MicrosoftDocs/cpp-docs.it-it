---
title: Errore del compilatore C3734 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3734
dev_langs:
- C++
helpviewer_keywords:
- C3734
ms.assetid: 4e2afdcc-7da9-45a1-9c96-85f25e2986e8
caps.latest.revision: 11
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
ms.openlocfilehash: f63bb40c55298a5fd3b61b12aa5b3ddff2591b65
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3734"></a>Errore del compilatore C3734
'class': una classe gestita o WinRT non può essere una coclasse  
  
 Il [coclasse](../../windows/coclass.md) attributo non può essere utilizzato con gestiti o classi di WinRT.  
  
 L'esempio seguente genera l'errore C3734 e mostra come risolverlo:  
  
```  
// C3734.cpp  
// compile with: /clr /c  
[module(name="x")];  
  
[coclass]  
ref class CMyClass {   // C3734 remove the ref keyword to resolve  
};  
```  

