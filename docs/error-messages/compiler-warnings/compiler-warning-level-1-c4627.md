---
title: Compilatore avviso (livello 1) C4627 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4627
dev_langs:
- C++
helpviewer_keywords:
- C4627
ms.assetid: 8840f3e6-b496-423a-8635-eb55d5f854a2
caps.latest.revision: 3
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
ms.openlocfilehash: a435eef7397eb98ca500be1c99e92efcb55c8be6
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4627"></a>Avviso del compilatore (livello 1) C4627
'\<identificatore >': ignorato durante la ricerca dell'utilizzo di intestazione precompilata  
  
 Durante la ricerca del percorso in cui viene utilizzata un'intestazione precompilata, il compilatore ha rilevato un `#include` direttiva per il *\<identificatore >* file di inclusione. Il compilatore ignora la `#include` direttiva, ma genera l'avviso **C4627** se l'intestazione precompilata non contiene già il *\<identificatore >* file di inclusione.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)
