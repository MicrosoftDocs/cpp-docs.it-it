---
title: Errore del compilatore C2667 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2667
dev_langs:
- C++
helpviewer_keywords:
- C2667
ms.assetid: 3c91d9d1-18fa-4e0d-a9ba-984d38980ca3
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c00e469b2c89c0fa7c3966ec31410324bf6c2ff1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2667"></a>Errore del compilatore C2667
'function': nessun numero overload dispone di una conversione ottimale  
  
 Una chiamata di funzione in overload è ambigua e non può essere risolto.  
  
 La conversione necessaria per corrispondere ai parametri effettivi nella chiamata di funzione a una delle funzioni in overload deve essere necessariamente migliore le conversioni necessarie per tutte le altre funzioni in overload.  
  
 Vedere della Knowledge Base Q240869 per ulteriori informazioni sull'ordinamento parziale dei modelli di funzione.