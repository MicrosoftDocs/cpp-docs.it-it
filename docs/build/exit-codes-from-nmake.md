---
title: Codici di uscita di NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, exit codes
- exit codes
ms.assetid: 75f6913c-1da5-4572-a2d3-8a4e058bed15
ms.openlocfilehash: 07a104d90d91a027864022d4c82412318eb5fe3d
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57413238"
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
