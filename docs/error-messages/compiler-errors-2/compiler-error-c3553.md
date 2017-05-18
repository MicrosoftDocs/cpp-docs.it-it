---
title: Errore del compilatore C3553 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3553
dev_langs:
- C++
helpviewer_keywords:
- C3553
ms.assetid: 7f84bf37-6419-4ad3-ab30-64266100b930
caps.latest.revision: 4
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
ms.openlocfilehash: f8a90bdb8c350d5a6e007ad75945793141fe2500
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3553"></a>Errore del compilatore C3553
con decltype è prevista un'espressione e non un tipo  
  
 La parola chiave `decltype()` richiede un'espressione come argomento, non il nome di un tipo. Ad esempio, l'ultima istruzione nel frammento di codice seguente genera l'errore C3553.  
  
 `int x = 0;`  
  
 `decltype(x+1);`  
  
 `decltype(int); // C3553`
