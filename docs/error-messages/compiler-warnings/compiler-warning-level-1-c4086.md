---
title: Compilatore avviso (livello 1) C4086 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4086
dev_langs:
- C++
helpviewer_keywords:
- C4086
ms.assetid: 9248831b-22bf-47af-8684-bfadb17e94fc
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
ms.openlocfilehash: 74cfa800d95b7cfe9f592d47c9afdd34c9d7363d
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4086"></a>Avviso del compilatore (livello 1) C4086
parametri pragma previsti: '1', '2', '4', '8' o '16'  
  
 Il parametro pragma non contiene il valore richiesto (1, 2, 4, 8 o 16).  
  
## <a name="example"></a>Esempio  
  
```  
// C4086.cpp  
// compile with: /W1 /LD  
#pragma pack( 3 ) // C4086  
```
