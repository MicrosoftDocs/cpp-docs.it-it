---
description: 'Altre informazioni su: diagnostica stampata dalla funzione Assert'
title: Diagnostica visualizzata dalla funzione di asserzione
ms.date: 11/04/2016
ms.assetid: 78b64200-520d-40da-9a61-71553f411d4f
ms.openlocfilehash: cab4f6dfd2cab7d4b46486a103b39abb6ca17005
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186792"
---
# <a name="diagnostic-printed-by-the-assert-function"></a>Diagnostica visualizzata dalla funzione di asserzione

**ANSI 4.2** Diagnostica stampata dalla funzione **assert** e relativo comportamento di terminazione

La funzione **assert** stampa un messaggio di diagnostica e chiama la routine **abort** se l'espressione è false (0). Il messaggio di diagnostica presenta la forma seguente:

> **Asserzione non riuscita**: <em>expression</em>**, file** <em>filename</em>**, line** *linenumber*

in cui *filename* è il nome del file di origine e *linenumber* è il numero di riga dell'asserzione non riuscita nel file di origine. Se l'*espressione* è true (diversa da zero), non viene intrapresa alcuna azione.

## <a name="see-also"></a>Vedi anche

[Funzioni della libreria](../c-language/library-functions.md)
