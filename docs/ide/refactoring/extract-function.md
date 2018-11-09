---
title: Estrai funzione
ms.date: 11/16/2016
ms.assetid: e31d1249-9705-4511-acbd-9f6fe73bdf2d
ms.openlocfilehash: 41a488b067bce750224f3785e311f91d43dc31ca
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50571028"
---
# <a name="extract-function"></a>Estrai funzione
**Cosa:** consente di trasformare un frammento di codice in una funzione.

**Quando:** c'è un frammento di codice esistente in una funzione che deve essere chiamata da un'altra funzione.

**Perché:** è possibile copiare e incollare il codice, ma ciò potrebbe causare la duplicazione.  Una soluzione migliore consiste nell'effettuare il refactoring del frammento nella relativa funzione, che può essere chiamato liberamente da qualsiasi altra funzione.

**Come:**

1. Evidenziare il codice da estrarre:

   ![Codice evidenziato](images/extractfunction_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+R** e quindi **CTRL+M**.  Si noti che i tasti di scelta rapida possono essere diversi a seconda del profilo selezionato.
     * Premere **CTRL+.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Estrai funzione (sperimentale)** dal menu di scelta rapida.
   * **Mouse**
     * Selezionare **Modifica > Effettua refactoring > Estrai funzione (sperimentale)**.
     * Fare clic con il pulsante destro sul codice, selezionare il menu **Azioni rapide e refactoring** e selezionare **Estrai funzione (sperimentale)** dal menu di scelta rapida.
     * Fare clic sull'icona ![lampadina](images/bulb.png) visualizzata nel margine sinistro e scegliere **Estrai funzione (sperimentale)** dal menu di scelta rapida.

1. Nella finestra **Estrai funzione/metodo (sperimentale)** immettere il nuovo nome della funzione, selezionare il punto in cui inserire il codice e fare clic sul pulsante **OK**.

   ![Finestra di dialogo Estrai funzione](images/extractfunction_dialog.png)

1. La nuova funzione verrà creata nel punto specificato, un prototipo di funzione nel file di intestazione corrispondente e il codice originale verrà modificato per chiamare tale funzione.

   ![Risultato di Estrai funzione](images/extractfunction_result.png)
