---
title: inline_depth | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- inline_depth_CPP
- vc-pragma.inline_depth
dev_langs: C++
helpviewer_keywords:
- pragmas, inline_depth
- inline_depth pragma
ms.assetid: 2bba60fe-43ea-4d09-90f7-aafaba3bad07
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f105512910658603139105ecf1cf1d5b7030ad00
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="inlinedepth"></a>inline_depth
Specifica il livello di profondità della ricerca euristica inline, ovvero nessuna funzione verrà resa inline se si trova a un livello di profondità (nel grafico delle chiamate) maggiore di `n`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma inline_depth( [n] )  
```  
  
## <a name="remarks"></a>Note  
 Questo pragma controlla l'incorporamento di funzioni contrassegnate [inline](../cpp/inline-functions-cpp.md) e [inline](../cpp/inline-functions-cpp.md) o rese inline automaticamente tramite l'opzione /Ob2.  
  
 `n` può essere un valore compreso tra 0 e 255, dove 255 indica una profondità illimitata nel grafico delle chiamate e zero inibisce l'espansione inline.  Se `n` non è specificato, viene utilizzato il valore predefinito 254.  
  
 Il **inline_depth** pragma controlla il numero di volte in cui una serie di chiamate di funzione può essere espanso. Se ad esempio il livello di profondità inline è quattro e se A chiama B e B quindi chiama C, tutte le tre chiamate verranno espanse in modalità inline. Tuttavia, se l'espansione inline più vicina è due, vengono espanse solo A e B, mentre C rimane una chiamata di funzione.  
  
 Per utilizzare questo pragma, è necessario impostare l'opzione del compilatore /Ob su 1 o 2. Il livello di profondità impostata utilizzando il pragma viene applicato alla prima chiamata di funzione dopo il pragma.  
  
 Il livello di profondità inline può essere ridotto durante l'espansione, ma non aumentato. Se il livello di profondità inline è sei e durante l'espansione nel preprocessore viene rilevato un **inline_depth** pragma con un valore pari a otto, la profondità rimane sei.  
  
 Il **inline_depth** pragma non avrà effetto sulle funzioni contrassegnate con `__forceinline`.  
  
> [!NOTE]
>  Le funzioni ricorsive possono essere sostituite inline a un livello di profondità massima di 16 chiamate.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
 [inline_recursion](../preprocessor/inline-recursion.md)