---
title: Compilatore avviso (livello 1) C4081 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4081
dev_langs:
- C++
helpviewer_keywords:
- C4081
ms.assetid: 6f656373-a080-4989-bbc9-e2f894b03293
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: d0da4f05d9bc7917292b6eb323bfe26ec32307f2
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4081"></a>Avviso del compilatore (livello 1) C4081
Previsto 'token1'. Trovato 'token2'  
  
 Il compilatore prevedeva un token diverso in questo contesto.  
  
## <a name="example"></a>Esempio  
  
```  
// C4081.cpp  
// compile with: /W1 /LD  
#pragma optimize) "l", on )   // C4081  
```
