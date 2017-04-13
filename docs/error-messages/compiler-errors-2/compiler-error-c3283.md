---
title: Errore del compilatore C3283 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3283
dev_langs:
- C++
helpviewer_keywords:
- C3283
ms.assetid: c51d912c-cde3-4928-904e-26734c8954ce
caps.latest.revision: 6
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
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 19cb583eedb95295ed2a2bc33d4d390e4cd3cf79
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3283"></a>Errore del compilatore C3283
'type': un'interfaccia non può avere un costruttore di istanza  
  
 Un tipo CLR [interfaccia](../../windows/interface-class-cpp-component-extensions.md) non può avere un costruttore di istanza.  È consentito un costruttore statico.  
  
 L'esempio seguente genera l'errore C3283:  
  
```  
// C3283.cpp  
// compile with: /clr  
interface class I {  
   I();   // C3283  
};  
```  
  
 Possibile soluzione:  
  
```  
// C3283b.cpp  
// compile with: /clr /c  
interface class I {  
   static I(){}  
};  
```
