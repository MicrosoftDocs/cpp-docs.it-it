---
title: Tools.ini e NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, reading files
- Tools.ini and NMake
ms.assetid: ebd5eab6-ddf4-430e-bf4a-1db5bb84e344
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 860a334274a3a1a4ac9e11c3e7b5e9a0f136ecc0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="toolsini-and-nmake"></a>Tools.ini e NMAKE
NMAKE legge Tools prima di leggere makefile, a meno che non viene utilizzato /R. Cercato prima nella directory corrente e quindi nella directory specificata dalla variabile di ambiente INIT. La sezione per le impostazioni di NMAKE nel file di inizializzazione inizia con `[NMAKE]` e può contenere qualsiasi informazione sul makefile. Specificare un commento su una riga separata che inizia con un simbolo di cancelletto (#).  
  
## <a name="see-also"></a>Vedere anche  
 [Esecuzione di NMAKE](../build/running-nmake.md)