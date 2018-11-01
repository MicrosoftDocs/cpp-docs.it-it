---
title: Verifica degli errori di estrazione
ms.date: 11/04/2016
helpviewer_keywords:
- extraction errors
ms.assetid: 6a681028-adba-4557-8f7b-f137932905f8
ms.openlocfilehash: 62d9c94f366ec666acf2179803c62e4a3ccd7e6a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50629229"
---
# <a name="testing-for-extraction-errors"></a>Verifica degli errori di estrazione

Le funzioni di elaborazione degli errori di output, discusse in [Funzioni di elaborazione degli errori](../standard-library/output-file-stream-member-functions.md), si applicano anche ai flussi di input. La verifica degli errori di estrazione è importante. Si prenda in considerazione l'istruzione seguente:

```cpp
cin>> n;
```

Se `n` è un intero con segno, un valore maggiore di 32.767 (il valore massimo consentito, o MAX_INT) imposta il bit `fail` del flusso e l'oggetto `cin` diventa inutilizzabile. Tutte le estrazioni successive determinano una restituzione immediata senza alcun valore archiviato.

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)<br/>
