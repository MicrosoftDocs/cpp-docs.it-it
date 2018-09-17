---
title: Tools. ini e NMAKE | Microsoft Docs
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
ms.openlocfilehash: 84406886c9aa0c0053ed7c183912bf8a7f1f4771
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45723580"
---
# <a name="toolsini-and-nmake"></a>Tools.ini e NMAKE

NMAKE legge Tools. ini prima esegue la lettura di makefile, a meno che non viene utilizzato /R. Cerca Tools innanzitutto nella directory corrente e quindi nella directory specificata dalla variabile di ambiente INIT. La sezione per le impostazioni di NMAKE nel file di inizializzazione inizia con `[NMAKE]` e può contenere qualsiasi informazione di makefile. Specificare un commento su un riga separata che inizia con un simbolo di cancelletto (#).

## <a name="see-also"></a>Vedere anche

[Esecuzione di NMAKE](../build/running-nmake.md)