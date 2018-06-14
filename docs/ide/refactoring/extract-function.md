---
title: Estrai funzione | Microsoft Docs
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
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33333157"
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

   ![Funzione Estrai funzione](images/extractfunction_dialog.png)

1. La nuova funzione verrà creata nel punto specificato, un prototipo di funzione nel file di intestazione corrispondente e il codice originale verrà modificato per chiamare tale funzione.

   ![Risultato di Estrai funzione](images/extractfunction_result.png)