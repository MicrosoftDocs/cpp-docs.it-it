---
title: Tools.ini e NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, reading files
- Tools.ini and NMake
ms.assetid: ebd5eab6-ddf4-430e-bf4a-1db5bb84e344
ms.openlocfilehash: c50fef5d2fd36b8fb9327cad25bc5b2ab4ba61e2
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57419884"
---
# <a name="toolsini-and-nmake"></a>Tools.ini e NMAKE

NMAKE legge Tools. ini prima esegue la lettura di makefile, a meno che non viene utilizzato /R. Cerca Tools innanzitutto nella directory corrente e quindi nella directory specificata dalla variabile di ambiente INIT. La sezione per le impostazioni di NMAKE nel file di inizializzazione inizia con `[NMAKE]` e può contenere qualsiasi informazione di makefile. Specificare un commento su un riga separata che inizia con un simbolo di cancelletto (#).

## <a name="see-also"></a>Vedere anche

[Esecuzione di NMAKE](../build/running-nmake.md)
