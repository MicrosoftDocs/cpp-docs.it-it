---
title: Errore del compilatore C3394 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3394
dev_langs:
- C++
helpviewer_keywords:
- C3394
ms.assetid: 4e025d79-27ba-43c8-b0d9-839ecef98126
caps.latest.revision: 5
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 1b7edcf8c8e084c64721d76dee12ef7eede47dc4
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3394"></a>Errore del compilatore C3394
errore di sintassi nella clausola constraint: trovato 'identifier', previsto un tipo  
  
 Un vincolo non è stato creato nel formato corretto.  Per ulteriori informazioni, vedere [vincoli sui parametri di tipo generico (C + + CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3394:  
  
```  
// C3394.cpp  
// compile with: /clr /c  
ref class MyClass {};  
ref class R {  
   generic<typename T>  
   where T : static   // C3394  
   // try the following line instead  
   // where T : MyClass  
   void f() {}  
};  
```
