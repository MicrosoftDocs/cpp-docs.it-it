---
title: Dedurre dipendenti e le regole | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- rules, inferred
- inferred dependents in NMAKE
- inferred rules in NMAKE
- dependents, inferred
ms.assetid: 9381e74a-53d9-445c-836d-0ff7ef6112d9
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 68b61a6aad55ef1f6b8b5807d857a4d7239ebb51
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="inferred-dependents-and-rules"></a>Dipendenti dedotti e regole
NMAKE presuppone un dipendente dedotto per una destinazione se esiste una regola di inferenza è applicabile. Una regola viene applicata se:  
  
-   *toext* corrisponde all'estensione della destinazione.  
  
-   *fromext* corrispondenze l'estensione di un file con nome di base del database di destinazione e che si trova nella directory correnti o specificate.  
  
-   *fromext* in [. SUFFISSI](../build/dot-directives.md); nessun altro *fromext* in una regola di corrispondenza è un valore più alto **. SUFFISSI** priorità.  
  
-   Nessun dipendente esplicito ha un valore più alto **. SUFFISSI** priorità.  
  
 Dipendenti dedotti possono causare effetti collaterali imprevisti. Se il blocco di descrizione del database di destinazione contiene i comandi, tali comandi anziché i comandi eseguiti NMAKE nella regola.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)