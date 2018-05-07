---
title: Estrai funzione | Documenti Microsoft
ms.custom: ''
ms.date: 11/16/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
ms.assetid: e31d1249-9705-4511-acbd-9f6fe73bdf2d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7fc4d48c972bca9352f326085574e4cf4df83aea
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="extract-function"></a>Estrai funzione
**Che cosa:** consente di attivare un frammento di codice nella propria funzione.

**Quando:** si dispone di un frammento di codice esistente in una funzione che deve essere chiamata da un'altra funzione.  

**Perché:** è possibile copiare e incollare il codice, ma ciò potrebbe causare la duplicazione.  Una soluzione migliore consiste nell'effettuare il refactoring di frammento nella propria funzione che può essere chiamato liberamente da qualsiasi altra funzione.

**Come:**

1. Evidenziare il codice da estrarre:

   ![Codice evidenziato](images/extractfunction_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+R** e quindi **CTRL+M**.  Si noti che i tasti di scelta rapida possono essere diversi a seconda del profilo selezionato.
     * Premere **CTRL+.** Per attivare il **azioni rapide e refactoring** dal menu **Estrai funzione (sperimentale)** dal menu di scelta rapida.
   * **Mouse**
     * Selezionare **Modifica > eseguire il refactoring > Estrai funzione (sperimentale)**.
     * Pulsante destro del mouse nel codice, selezionare il **azioni rapide e refactoring** dal menu **Estrai funzione (sperimentale)** dal menu di scelta rapida.
     * Fare clic su di ![lampadina](images/bulb.png) icona che verrà visualizzata nel margine sinistro e scegliere **Estrai funzione (sperimentale)** dal menu di scelta rapida.

1. Nel **Estrai funzione o un metodo (sperimentale)** finestra, immettere il nuovo nome della funzione, selezionare in cui si desidera che il codice da inserire e fare clic su di **OK** pulsante.  

   ![Estrai funzione (funzione)](images/extractfunction_dialog.png)

1. Verrà creata la nuova funzione in cui è specificato, un prototipo di funzione nel file di intestazione corrispondente e verrà modificato il codice originale per chiamare tale funzione.

   ![Estrarre il risultato di funzione](images/extractfunction_result.png)