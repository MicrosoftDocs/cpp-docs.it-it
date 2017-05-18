---
title: Errore del compilatore C2246 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2246
dev_langs:
- C++
helpviewer_keywords:
- C2246
ms.assetid: 4f3e4f83-21f3-4256-af96-43e0bb060311
caps.latest.revision: 9
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
ms.openlocfilehash: cef6eeb45460e4fff1c1fe5e03d8b1e97eb95d7d
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2246"></a>Errore del compilatore C2246
'identifier': membro dati statici non valido in una classe definita localmente  
  
 Un membro di una classe, di una struttura o di un'unione con ambito locale è dichiarato come `static`.  
  
 L'esempio seguente genera l'errore C2246:  
  
```  
// C2246.cpp  
// compile with: /c  
void func( void ) {  
   class A { static int i; };   // C2246  i is local to func  
   static int j;   // OK  
};  
```
