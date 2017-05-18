---
title: Errore del compilatore C2013 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2013
dev_langs:
- C++
helpviewer_keywords:
- C2013
ms.assetid: 6b5c955c-53da-48ee-8533-64ef5b905173
caps.latest.revision: 7
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
ms.openlocfilehash: 78c41fa998b7ef229ccdaccd6cfa0336af7a8632
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2013"></a>Errore del compilatore C2013
'>' mancante  
  
 In una direttiva `#include` manca una parentesi uncinata chiusa. Aggiungere la parentesi quadra di chiusura per risolvere l'errore.  
  
 L'esempio seguente genera l'errore C2013:  
  
```  
// C2013.cpp  
#include <stdio.h    // C2013  
```  
  
 Possibile soluzione:  
  
```  
// C2013b.cpp  
// compile with: /c  
#include <stdio.h>  
```
