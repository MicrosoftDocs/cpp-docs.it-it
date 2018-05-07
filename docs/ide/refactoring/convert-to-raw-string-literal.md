---
title: Converti in valore letterale stringa non elaborata | Documenti Microsoft
ms.custom: ''
ms.date: 11/16/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
ms.assetid: fffbfee4-66ee-42ba-aeb9-df07fb702c51
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b98825719e7b3c0d8eb760a2ec50644b5eddd54e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="convert-to-raw-string-literal"></a>Converti in valore letterale stringa non elaborata
**Che cosa:** consente di trasformare qualsiasi stringa in una stringa non elaborata di C++ letterale.

**Quando:** si dispone di una stringa con caratteri di escape che non devono essere elaborati come caratteri di escape.

**Motivo:** potrebbe caratteri di escape doppia, ma spesso i lead alle stringhe confusione e illeggibile.  Utilizzando i valori letterali stringa non elaborata stringhe rende molto più facile da leggere.

**Come:**

1. Posizionare il cursore del mouse o del testo su stringa con caratteri di escape da convertire.

   ![Codice evidenziato](images/stringliteral_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+.** Per attivare il **azioni rapide e refactoring** dal menu **convertire in valore letterale non elaborato stringa** dal menu di scelta rapida.
   * **Mouse**
     * Pulsante destro del mouse nel codice, selezionare il **azioni rapide e refactoring** dal menu **convertire in valore letterale non elaborato stringa** dal menu di scelta rapida.
     * Fare clic su di ![lampadina](images/bulb.png) icona che verrà visualizzata nel margine sinistro e scegliere **convertire in valore letterale non elaborato stringa** dal menu di scelta rapida.

1. La stringa verrà immediatamente essere convertita in un valore letterale stringa non elaborato.  

   ![Risultato di stringa letterale non elaborato](images/stringliteral_result.png)