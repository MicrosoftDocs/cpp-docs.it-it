---
title: Modifica firma | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 8daaa060-7305-4035-99d2-8b460b4f4454
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5280b4940c2a52fc6e72b397300040ca4c1ac92e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="change-signature"></a>Modifica firma
**Novità:** consente di modificare i parametri della funzione.

**Quando:** che si desidera modificare l'ordine, aggiungere, rimuovere o modificare i parametri della funzione utilizzati in diverse località.  

**Motivo:** è Impossibile manualmente modificare questi parametri, quindi trovare tutte le chiamate a tale funzione e modificarle uno alla volta, ma che potrebbe causare errori.  Questo strumento refactoring eseguirà automaticamente l'attività.

**Procedura:**

1. Posizionare il cursore di testo o del mouse all'interno del nome del metodo per modificare o uno dei relativi utilizzi:

   ![Codice evidenziato](images/changesignature_highlight.png)

1. Successivamente, eseguire una delle operazioni seguenti:
   * **Tastiera**
     * Premere **Ctrl + R**, quindi **Ctrl + O**.  Si noti che i tasti di scelta rapida possono essere diversi a seconda del profilo selezionato.
     * Premere **Ctrl +.** Per attivare il **azioni rapide e refactoring** dal menu **modifica della firma** dal menu di scelta rapida.
   * **Mouse**
     * Selezionare **Modifica > eseguire il refactoring > Riordina parametri**.
     * Pulsante destro del mouse nel codice, selezionare il **azioni rapide e refactoring** dal menu **modifica della firma** dal menu di scelta rapida.

1. Nel **modificare firma** finestra di dialogo visualizzata, è possibile utilizzare i pulsanti a destra per modificare la firma del metodo:

   ![Finestra di dialogo Cambia firma](images/changesignature_dialog.png)

   | Button | Descrizione
   | ------ | ---
   | **Su/giù**    | Spostare il parametro selezionato su e giù nell'elenco
   | **Aggiungi**        | Aggiungere un nuovo parametro all'elenco
   | **Rimuovi**     | Rimuovere il parametro selezionato dall'elenco
   | **Modificare**     | Modificare il parametro selezionato impostando il tipo, nome e se è facoltativo e il relativo valore inserito sarebbe
   | **Ripristinare**     | Ripristinare il parametro selezionato lo stato originale
   | **Ripristina tutti** | Ripristinare tutti i parametri per lo stato originale

   > [!TIP]
   > Utilizzare il **Ignora Anteprima modifiche riferimento se tutti i riferimenti sono confermati** casella di controllo per apportare le modifiche immediatamente, senza la finestra di anteprima si estraggono per primo.

   Quando si aggiunge o modifica di un parametro, verrà visualizzato il **Aggiungi parametro** o **Modifica parametro** finestra.

   ![Aggiungi/Modifica parametro](images/changesignature_addmodify.png)

   In questo caso, è possibile eseguire le operazioni seguenti:

   | Voce | Descrizione
   | ----- | ---
   | **Type**               | Il tipo del parametro (int, double, float, ecc.)
   | **Name**               | Il nome del parametro
   | **Parametro facoltativo** | Rende il parametro specificato, facoltativamente
   | **Valore inserito**     | Il valore inserito in tutte le chiamate alla funzione in cui non è specificato il parametro (valido solo per **Aggiungi**)
   | **Valore predefinito**      | Il valore utilizzato dalla funzione se il chiamante non specifica uno (valido solo per **parametri facoltativi**)

1. Utilizzare il **ambito di ricerca** elenco a discesa selezionare se le modifiche verranno applicate al progetto o l'intera soluzione.

1. Al termine, premere il **OK** pulsante per apportare le modifiche.  Verificare che la richiesta di modifiche vengono apportate in modo appropriato.  Utilizzare le caselle di controllo nella parte superiore della finestra per attivare o disattivare la ridenominazione di un elemento.

   ![Modificare l'anteprima di firma](images/changesignature_preview.png)

1. Quando tutto ciò che si verificano problemi, fare clic su di **applica** pulsante e la funzione verrà modificati nel codice sorgente.

   ![Risultato della modifica della firma](images/changesignature_result.png)