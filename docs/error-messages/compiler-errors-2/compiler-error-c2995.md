---
title: Errore del compilatore C2995 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2995
dev_langs:
- C++
helpviewer_keywords:
- C2995
ms.assetid: a57cdfe0-b40b-4a67-a95c-1a49ace4842b
caps.latest.revision: 8
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
ms.openlocfilehash: fc7d2a2d62e76bb42b2b1dc631b86959bc5c4b1d
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2995"></a>Errore del compilatore C2995
'function': modello di funzione già definito  
  
 Verificare che ci sia una sola definizione per ogni funzione membro di una classe basata su modelli.  
  
 L'esempio seguente genera l'errore C2995:  
  
```  
// C2995.cpp  
// compile with: /c  
template <class T>  
void Test(T x){}  
  
template <class T> void Test(T x){}   // C2995  
template <class T> void Test2(T x){}   // OK  
```
