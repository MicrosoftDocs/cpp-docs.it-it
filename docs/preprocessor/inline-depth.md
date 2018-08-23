---
title: inline_depth | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- inline_depth_CPP
- vc-pragma.inline_depth
dev_langs:
- C++
helpviewer_keywords:
- pragmas, inline_depth
- inline_depth pragma
ms.assetid: 2bba60fe-43ea-4d09-90f7-aafaba3bad07
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8a6c8d05d326e11ecfef4df8d22cbf2b8d92bd77
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42540209"
---
# <a name="inlinedepth"></a>inline_depth
Specifica l'euristica inline ricerca profondità, in modo che nessuna funzione verrà resa inline se è a una profondità (nel grafico delle chiamate) maggiore *n*.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma inline_depth( [n] )  
```  
  
## <a name="remarks"></a>Note  
 
Questo pragma controlla l'incorporamento di funzioni contrassegnate [inline](../cpp/inline-functions-cpp.md) e [inline](../cpp/inline-functions-cpp.md) o rese inline automaticamente il `/Ob2` opzione.  
  
*n* può essere un valore compreso tra 0 e 255, dove 255 indica una profondità illimitata nel grafico delle chiamate e zero inibisce l'espansione inline.  Quando *n* viene omesso, viene usato il valore predefinito (254).  
  
Il **inline_depth** pragma controlla il numero di volte in cui una serie di chiamate di funzione può essere espanso. Se ad esempio il livello di profondità inline è quattro e se A chiama B e B quindi chiama C, tutte le tre chiamate verranno espanse in modalità inline. Tuttavia, se l'espansione inline più vicina è due, vengono espanse solo A e B, mentre C rimane una chiamata di funzione.  
  
Per utilizzare questo pragma, è necessario impostare il `/Ob` opzione del compilatore su 1 o 2. Il livello di profondità impostata utilizzando il pragma viene applicato alla prima chiamata di funzione dopo il pragma.  
  
Il livello di profondità inline può essere ridotto durante l'espansione, ma non aumentato. Se il livello di profondità inline è sei e durante l'espansione nel preprocessore viene rilevato un **inline_depth** pragma con un valore pari a otto, la profondità rimane sei.  
  
Il **inline_depth** pragma non ha alcun effetto sulle funzioni contrassegnate con `__forceinline`.  
  
> [!NOTE]
> Le funzioni ricorsive possono essere sostituite inline a un livello di profondità massima di 16 chiamate.  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive pragma e parola chiave pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
[inline_recursion](../preprocessor/inline-recursion.md)