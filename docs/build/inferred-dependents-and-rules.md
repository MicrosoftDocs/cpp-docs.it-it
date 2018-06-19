---
title: Dedurre dipendenti e le regole | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- rules, inferred
- inferred dependents in NMAKE
- inferred rules in NMAKE
- dependents, inferred
ms.assetid: 9381e74a-53d9-445c-836d-0ff7ef6112d9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: aae09fd756e0eb4eab3031beb5b4cba8c4d35a40
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368044"
---
# <a name="inferred-dependents-and-rules"></a>Dipendenti dedotti e regole
NMAKE presuppone un dipendente dedotto per una destinazione se esiste una regola di inferenza è applicabile. Una regola viene applicata se:  
  
-   *toext* corrisponda a quella del database di destinazione.  
  
-   *fromext* corrispondenze l'estensione di un file con nome di base del database di destinazione e che esiste nella directory correnti o specificate.  
  
-   *fromext* è in [. SUFFISSI](../build/dot-directives.md); nessun altro *fromext* in una regola di corrispondenza è un valore più alto **. SUFFISSI** priorità.  
  
-   Nessun dipendente esplicito ha un valore più alto **. SUFFISSI** priorità.  
  
 Dipendenti dedotti possono causare effetti collaterali imprevisti. Se il blocco di descrizione del database di destinazione contiene i comandi, tali comandi anziché i comandi eseguiti NMAKE nella regola.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)