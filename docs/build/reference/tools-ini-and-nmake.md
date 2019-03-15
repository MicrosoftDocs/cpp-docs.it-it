---
title: Tools.ini e NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, reading files
- Tools.ini and NMake
ms.assetid: ebd5eab6-ddf4-430e-bf4a-1db5bb84e344
ms.openlocfilehash: 38eebb3aaf07438da85b0cfe6bd3f26fb5d6db29
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826860"
---
# <a name="toolsini-and-nmake"></a>Tools.ini e NMAKE

NMAKE legge Tools. ini prima esegue la lettura di makefile, a meno che non viene utilizzato /R. Cerca Tools innanzitutto nella directory corrente e quindi nella directory specificata dalla variabile di ambiente INIT. La sezione per le impostazioni di NMAKE nel file di inizializzazione inizia con `[NMAKE]` e può contenere qualsiasi informazione di makefile. Specificare un commento su un riga separata che inizia con un simbolo di cancelletto (#).

## <a name="see-also"></a>Vedere anche

[Esecuzione di NMAKE](running-nmake.md)
