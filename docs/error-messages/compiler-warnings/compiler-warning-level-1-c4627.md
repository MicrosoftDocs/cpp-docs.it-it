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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 66d199b8dede21f94a963113341eb6426f66a807
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4627"></a>Avviso del compilatore (livello 1) C4627
'\<identificatore >': ignorato durante la ricerca dell'utilizzo di intestazione precompilata  
  
 Durante la ricerca del percorso in cui viene utilizzata un'intestazione precompilata, il compilatore ha rilevato un `#include` direttiva per il  *\<identificatore >* file di inclusione. Il compilatore ignora la `#include` direttiva, ma genera l'avviso **C4627** se l'intestazione precompilata non contiene già il  *\<identificatore >* file di inclusione.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)