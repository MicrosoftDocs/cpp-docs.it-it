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
ms.openlocfilehash: 1c70c76292b62560b1d9895aca2851b4cf56802b
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48861798"
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