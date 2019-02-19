---
title: Diagnostica visualizzata dalla funzione di asserzione
ms.date: 11/04/2016
ms.assetid: 78b64200-520d-40da-9a61-71553f411d4f
ms.openlocfilehash: 666ba22d642b772fe8ad336f57ab1bdd82bd2e18
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56151000"
---
# <a name="diagnostic-printed-by-the-assert-function"></a>Diagnostica visualizzata dalla funzione di asserzione

**ANSI 4.2** Diagnostica stampata dalla funzione **assert** e relativo comportamento di terminazione

La funzione **assert** stampa un messaggio di diagnostica e chiama la routine **abort** se l'espressione è false (0). Il messaggio di diagnostica presenta la forma seguente:

> **Asserzione non riuscita**: <em>expression</em>**, file** <em>filename</em>**, line** *linenumber*

in cui *filename* è il nome del file di origine e *linenumber* è il numero di riga dell'asserzione non riuscita nel file di origine. Se l'*espressione* è true (diversa da zero), non viene intrapresa alcuna azione.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)
