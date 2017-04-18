---
title: Compilatore avviso (livello 4) C4960 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4960
dev_langs:
- C++
helpviewer_keywords:
- C4960
ms.assetid: 3b4ed286-9e8d-46f1-af0c-00ba669693a9
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
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: c61350cebf8601d706e7efec9273c967008bd6fd
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-4-c4960"></a>Avviso del compilatore (livello 4) C4960
'function' è troppo grande per il profiling  
  
 Quando si utilizza [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un modulo di input con una funzione che includeva oltre 65.535 istruzioni. Questa funzione di grandi dimensioni non è disponibile per le ottimizzazioni PGO.  
  
 Per risolvere il problema, ridurre le dimensioni della funzione.
