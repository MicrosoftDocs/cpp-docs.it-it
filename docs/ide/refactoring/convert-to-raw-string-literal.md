---
title: Converti in valore letterale stringa non elaborata
ms.date: 11/16/2016
ms.assetid: fffbfee4-66ee-42ba-aeb9-df07fb702c51
ms.openlocfilehash: 508ab52dc1ca41a97dd8c24df5c5d45c379ea265
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50509513"
---
# <a name="convert-to-raw-string-literal"></a>Converti in valore letterale stringa non elaborata
**Cosa:** consente di trasformare qualsiasi stringa in un valore letterale stringa non elaborata di C++.

**Quando:** si ha una stringa con caratteri di escape che non devono essere elaborati come caratteri di escape.

**Perché:** si potrebbero usare caratteri di escape doppi, ma questo spesso causa confusione e stringhe illeggibili.  I valori letterali stringa non elaborata rendono le stringhe molto più facili da leggere.

**Come:**

1. Posizionare il cursore del mouse o del testo sulla stringa con caratteri di escape da convertire.

   ![Codice evidenziato](images/stringliteral_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Converti in valore letterale stringa non elaborata** dal menu di scelta rapida.
   * **Mouse**
     * Fare clic con il pulsante destro del mouse, selezionare **Azioni rapide e refactoring** e selezionare **Converti in valore letterale stringa non elaborata** dal menu di scelta rapida.
     * Fare clic sull'icona ![lampadina](images/bulb.png) visualizzata nel margine sinistro e scegliere **Converti in valore letterale stringa non elaborata** dal menu di scelta rapida.

1. La stringa verrà immediatamente convertita in un valore letterale stringa non elaborata.

   ![Risultato di Valore letterale stringa non elaborata](images/stringliteral_result.png)