---
title: _CRTDBG_MAP_ALLOC | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CRTDBG_MAP_ALLOC
- _CRTDBG_MAP_ALLOC
dev_langs:
- C++
helpviewer_keywords:
- _CRTDBG_MAP_ALLOC macro
- memory allocation, in debug builds
- CRTDBG_MAP_ALLOC macro
ms.assetid: 435242b8-caea-4063-b765-4a608200312b
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
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 709ba57e3cca392d2440c7ad528125dc31070cac

---
# <a name="crtdbgmapalloc"></a>_CRTDBG_MAP_ALLOC
Quando il flag **_CRTDBG_MAP_ALLOC** viene definito nella versione di debug di un'applicazione, la versione di base delle funzioni di heap viene mappata direttamente alle corrispondenti versioni di debug. Il flag viene utilizzato in Crtdbg.h per eseguire il mapping. Questo flag è disponibile solo se è stato definito il flag [_DEBUG](../c-runtime-library/debug.md) nell'applicazione.  
  
 Per altre informazioni su come usare la versione di debug rispetto alla versione di base di una funzione di heap, vedere [Using the Debug Version Versus the Base Version](/visualstudio/debugger/debug-versions-of-heap-allocation-functions) (Uso della versione di debug rispetto alla versione di base).  
  
## <a name="see-also"></a>Vedere anche  
 [flag di controllo](../c-runtime-library/control-flags.md)


<!--HONumber=Feb17_HO4-->


