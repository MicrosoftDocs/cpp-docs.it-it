---
title: Compilatore avviso (livello 4) C4690 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4690
dev_langs:
- C++
helpviewer_keywords:
- C4690
ms.assetid: 080a0ea1-458b-477b-a37a-4a34c94709ff
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
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 8791cb8b8c484dfe085d967eab4469bd47d8cb53
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-4-c4690"></a>Avviso del compilatore (livello 4) C4690
[ emitidl( pop ) ]: più estrazioni che inserimenti  
  
 Il [emitidl](../../windows/emitidl.md) attributo è stato estratto ancora una volta che è stato inserito.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4690.  
  
```  
// C4690.cpp  
// compile with: /c /W4  
[emitidl(pop)];   // C4690  
class x {};  
```
