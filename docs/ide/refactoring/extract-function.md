---
description: 'Altre informazioni su: Estrai funzione'
title: Estrai funzione
ms.date: 11/16/2016
ms.assetid: e31d1249-9705-4511-acbd-9f6fe73bdf2d
ms.openlocfilehash: 4ae5e858c658d14e72db8740232b74935c655292
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259760"
---
# <a name="extract-function"></a>Estrai funzione

**Cosa:** consente di trasformare un frammento di codice in una funzione.

**Quando:** c'è un frammento di codice esistente in una funzione che deve essere chiamata da un'altra funzione.

**Perché:** è possibile copiare e incollare il codice, ma ciò potrebbe causare la duplicazione.  Una soluzione migliore consiste nell'effettuare il refactoring del frammento nella relativa funzione, che può essere chiamato liberamente da qualsiasi altra funzione.

**Come**

1. Evidenziare il codice da estrarre:

   ![Codice evidenziato](images/extractfunction_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+R** e quindi **CTRL+M**.  Si noti che i tasti di scelta rapida possono essere diversi a seconda del profilo selezionato.
     * Premere **CTRL +.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Estrai funzione (sperimentale)** dal menu di scelta rapida.
   * **Mouse**
     * Selezionare **Modifica > Effettua refactoring > Estrai funzione (sperimentale)**.
     * Fare clic con il pulsante destro sul codice, selezionare il menu **Azioni rapide e refactoring** e selezionare **Estrai funzione (sperimentale)** dal menu di scelta rapida.
     * Fare clic sull'icona ![lampadina](images/bulb.png) visualizzata nel margine sinistro e scegliere **Estrai funzione (sperimentale)** dal menu di scelta rapida.

1. Nella finestra **Estrai funzione/metodo (sperimentale)** immettere il nuovo nome della funzione, selezionare il punto in cui inserire il codice e fare clic sul pulsante **OK**.

   ![Finestra di dialogo Estrai funzione](images/extractfunction_dialog.png)

1. La nuova funzione verrà creata nel punto specificato, un prototipo di funzione nel file di intestazione corrispondente e il codice originale verrà modificato per chiamare tale funzione.

   ![Risultato di Estrai funzione](images/extractfunction_result.png)
