---
title: Errore del compilatore C2667 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2667
dev_langs:
- C++
helpviewer_keywords:
- C2667
ms.assetid: 3c91d9d1-18fa-4e0d-a9ba-984d38980ca3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f5458bc5dc9500ea7850833b073d40d66bfc6e2a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33232356"
---
# <a name="compiler-error-c2667"></a>Errore del compilatore C2667
'function': nessun numero overload dispone di una conversione ottimale  
  
 Una chiamata di funzione in overload è ambigua e non può essere risolto.  
  
 La conversione necessaria per corrispondere ai parametri effettivi nella chiamata di funzione a una delle funzioni in overload deve essere necessariamente migliore le conversioni necessarie per tutte le altre funzioni in overload.  
  
 Vedere della Knowledge Base Q240869 per ulteriori informazioni sull'ordinamento parziale dei modelli di funzione.