---
title: Estrai funzione | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: e31d1249-9705-4511-acbd-9f6fe73bdf2d
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dbcd323292e301857c65d908047ab14948b86573
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="extract-function"></a>Estrai funzione
**Novità:** consente di attivare un frammento di codice nella propria funzione.

**Quando:** si dispone di un frammento di codice esistente in una funzione che deve essere chiamato da un'altra funzione.  

**Motivo:** è possibile copiare e incollare il codice, ma che potrebbe causare la duplicazione.  Una soluzione migliore consiste nell'effettuare il refactoring di frammento nella propria funzione che può essere chiamato liberamente da qualsiasi altra funzione.

**Procedura:**

1. Evidenziare il codice da estrarre:

   ![Codice evidenziato](images/extractfunction_highlight.png)

1. Successivamente, eseguire una delle operazioni seguenti:
   * **Tastiera**
     * Premere **Ctrl + R**, quindi **Ctrl + M**.  Si noti che i tasti di scelta rapida possono essere diversi a seconda del profilo selezionato.
     * Premere **Ctrl +.** Per attivare il **azioni rapide e refactoring** dal menu **Estrai funzione (sperimentale)** dal menu di scelta rapida.
   * **Mouse**
     * Selezionare **Modifica > eseguire il refactoring > Estrai funzione (sperimentale)**.
     * Pulsante destro del mouse nel codice, selezionare il **azioni rapide e refactoring** dal menu **Estrai funzione (sperimentale)** dal menu di scelta rapida.
     * Fare clic su di ![lampadina](images/bulb.png) icona che verrà visualizzata nel margine sinistro e scegliere **Estrai funzione (sperimentale)** dal menu di scelta rapida.

1. Nel **Estrai funzione o un metodo (sperimentale)** finestra, immettere il nuovo nome della funzione, selezionare in cui si desidera che il codice da inserire e fare clic su di **OK** pulsante.  

   ![Estrai funzione (funzione)](images/extractfunction_dialog.png)

1. Verrà creata la nuova funzione in cui è specificato, un prototipo di funzione nel file di intestazione corrispondente e verrà modificato il codice originale per chiamare tale funzione.

   ![Estrarre il risultato di funzione](images/extractfunction_result.png)