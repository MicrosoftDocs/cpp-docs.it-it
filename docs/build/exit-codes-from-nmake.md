---
title: Codici di uscita di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, exit codes
- exit codes
ms.assetid: 75f6913c-1da5-4572-a2d3-8a4e058bed15
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 13cbe4806d8b3960cbf80df41c7cce6e7657ba7e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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