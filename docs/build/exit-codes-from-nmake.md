---
title: Codici di uscita di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, exit codes
- exit codes
ms.assetid: 75f6913c-1da5-4572-a2d3-8a4e058bed15
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4e71442e1e36dbd69afa65051cbf08f403bf8b31
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="exit-codes-from-nmake"></a>Codici di uscita di NMAKE
NMAKE restituisce i seguenti codici di uscita:  
  
|Codice|Significato|  
|----------|-------------|  
|0|Nessun errore (probabilmente un avviso)|  
|1|Generazione incompleto (emesso solo quando viene usato /K)|  
|2|Errore del programma, probabilmente a causa di uno dei seguenti:|  
||-Errore di sintassi di makefile|  
||-Un codice di errore o di uscita da un comando|  
||-Un'interruzione dell'utente|  
|4|Errore di sistema: memoria insufficiente|  
|255|Destinazione non è aggiornata (emesso solo quando viene usato /Q)|  
  
## <a name="see-also"></a>Vedere anche  
 [Esecuzione di NMAKE](../build/running-nmake.md)