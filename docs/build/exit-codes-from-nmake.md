---
title: Codici di uscita di NMAKE | Microsoft Docs
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
ms.openlocfilehash: 3b5a593e38efb5230630ed01e65f4bfb1f2ba92a
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45722618"
---
# <a name="exit-codes-from-nmake"></a>Codici di uscita di NMAKE

NMAKE restituisce i codici di uscita seguente:

|Codice|Significato|
|----------|-------------|
|0|Nessun errore (probabilmente un avviso)|
|1|Compilazione incompleta (rilasciato solo quando viene usato /K)|
|2|Errore del programma, probabilmente a causa di uno dei seguenti:|
||-Errore di sintassi di makefile|
||-Un errore o codice di uscita da un comando|
||-Un'interruzione dell'utente|
|4|Errore di sistema: memoria insufficiente|
|255|Destinazione non è aggiornata (rilasciato solo quando viene usato /Q)|

## <a name="see-also"></a>Vedere anche

[Esecuzione di NMAKE](../build/running-nmake.md)