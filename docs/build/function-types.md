---
title: Tipi di funzione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 7e33d5f4-dabb-406d-afb3-13777b995028
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 322bd45abbfe217671fd39f0617987fde21445db
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="function-types"></a>Tipi di funzioni
Sono disponibili essenzialmente due tipi di funzioni. Una funzione che richiede uno stack frame viene chiamata una funzione di frame. Una funzione foglia viene chiamata una funzione che non richiede uno stack frame.  
  
 Una funzione di frame è una funzione che alloca spazio dello stack, chiama altre funzioni, consente di salvare i registri non volatili o utilizza la gestione delle eccezioni. Richiede inoltre una voce della tabella (funzione). Una funzione frame richiede un prologo e un epilogo. Una funzione frame può allocare dinamicamente spazio dello stack e può utilizzare un puntatore ai frame. Una funzione di frame ha le funzionalità complete di questa chiamata standard a sua disposizione.  
  
 Se una funzione di frame non chiama un'altra funzione, non è necessario per l'allineamento dello stack (a cui fa riferimento nella sezione [allocazione nello Stack](../build/stack-allocation.md)).  
  
 Una funzione foglia è quello che non richiede una voce della tabella (funzione). È possibile apportare modifiche per i registri non volatili, tra cui RSP, il che significa che non può chiamare le funzioni o allocare lo spazio dello stack. È possibile lasciare lo stack non allineate durante l'esecuzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dello stack](../build/stack-usage.md)
