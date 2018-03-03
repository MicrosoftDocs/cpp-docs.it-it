---
title: Tools.ini e NMAKE | Documenti Microsoft
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
- NMAKE program, reading files
- Tools.ini and NMake
ms.assetid: ebd5eab6-ddf4-430e-bf4a-1db5bb84e344
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0e4516c3206a08c2b9ee32aea4bbb669ce4cdf0d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="toolsini-and-nmake"></a>Tools.ini e NMAKE
NMAKE legge Tools prima di leggere makefile, a meno che non viene utilizzato /R. Cercato prima nella directory corrente e quindi nella directory specificata dalla variabile di ambiente INIT. La sezione per le impostazioni di NMAKE nel file di inizializzazione inizia con `[NMAKE]` e può contenere qualsiasi informazione sul makefile. Specificare un commento su una riga separata che inizia con un simbolo di cancelletto (#).  
  
## <a name="see-also"></a>Vedere anche  
 [Esecuzione di NMAKE](../build/running-nmake.md)