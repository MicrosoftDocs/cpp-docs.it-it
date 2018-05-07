---
title: Compilatore avviso (livello 1) C4627 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4627
dev_langs:
- C++
helpviewer_keywords:
- C4627
ms.assetid: 8840f3e6-b496-423a-8635-eb55d5f854a2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dcde9e6707465fd95dbcb10e073a852624f0de0a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4627"></a>Avviso del compilatore (livello 1) C4627
'\<identificatore >': ignorato durante la ricerca dell'utilizzo di intestazione precompilata  
  
 Durante la ricerca del percorso in cui viene utilizzata un'intestazione precompilata, il compilatore ha rilevato un `#include` direttiva per il  *\<identificatore >* file di inclusione. Il compilatore ignora la `#include` direttiva, ma genera l'avviso **C4627** se l'intestazione precompilata non contiene già il  *\<identificatore >* file di inclusione.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)