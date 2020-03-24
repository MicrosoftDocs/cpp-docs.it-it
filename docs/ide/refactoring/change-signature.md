---
title: Modifica firma
ms.date: 11/16/2016
ms.assetid: 8daaa060-7305-4035-99d2-8b460b4f4454
ms.openlocfilehash: 1599a7900e33db61994ea75581f9d87b1aee83f9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80171905"
---
# <a name="change-signature"></a>Modifica firma

**Che cosa:** consente di modificare i parametri di una funzione.

**Quando:** si vuole riordinare, aggiungere, rimuovere o modificare i parametri di una funzione attualmente in uso in varie posizioni.

**Motivo:** è possibile modificare manualmente questi parametri e poi cercare tutte le chiamate alla funzione e modificarle una alla volta, ma si tratta di un processo soggetto a errori.  Questo strumento di refactoring eseguirà l'attività automaticamente.

**Modalità:**

1. Posizionare il cursore del testo o del mouse all'interno del nome del metodo da modificare o di uno dei relativi utilizzi:

   ![Codice evidenziato](images/changesignature_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+R** e quindi **CTRL+O**.  Si noti che i tasti di scelta rapida possono essere diversi a seconda del profilo selezionato.
     * Premere **CTRL+.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Modifica firma** menu di scelta rapida.
   * **Mouse**
     * Selezionare **Modifica > Refactoring > Riordina parametri**.
     * Fare clic con il pulsante destro del mouse sul codice, selezionare il menu **Azioni rapide e refactoring** e selezionare **Modifica firma** dal menu di scelta rapida.

1. Nella finestra di dialogo **Modifica firma** visualizzata è possibile usare i pulsanti a destra per modificare la firma del metodo:

   ![Finestra di dialogo Cambia firma](images/changesignature_dialog.png)

   | Pulsante | Descrizione
   | ------ | ---
   | **Su/Giù**    | Consente di spostare il parametro selezionato verso l'alto e verso il basso nell'elenco
   | **Aggiungere**        | Consente di aggiungere un nuovo parametro all'elenco
   | **Rimuovi**     | Consente di rimuovere il parametro selezionato dall'elenco
   | **Modificare**     | Consente di modificare il parametro selezionato cambiandone il tipo, il nome e indicando se è facoltativo e quale deve essere il relativo valore inserito
   | **Ripristina**     | Consente di ripristinare lo stato originale del parametro selezionato
   | **Revert All** (Ripristina tutto) | Consente di ripristinare lo stato originale di tutti i parametri

   > [!TIP]
   > Usare la casella di controllo **Ignora le modifiche dei riferimenti all'anteprima se tutti i riferimenti sono confermati** per apportare immediatamente le modifiche, senza prima visualizzare la finestra di anteprima.

   Quando si aggiunge o si modifica un parametro viene visualizzata la finestra **Aggiungi parametro** o **Modifica parametro**.

   ![Aggiungi/Modifica parametro](images/changesignature_addmodify.png)

   Qui è possibile effettuare le seguenti operazioni:

   | Voce | Descrizione
   | ----- | ---
   | **Tipo**               | Tipo del parametro (int, double, float e così via)
   | **Nome**               | Nome del parametro
   | **Parametro facoltativo** | Rende il parametro specificato facoltativamente
   | **Valore inserito**     | Il valore inserito in tutte le chiamate alla funzione in cui non è specificato il parametro (valido solo per **Aggiungi**)
   | **Valore predefinito**      | Il valore usato dalla funzione se il chiamante non ne specifica uno (valido solo per **Parametro facoltativo**)

1. Usare l'elenco a discesa **Ambito di ricerca** per stabilire se le modifiche verranno applicate al progetto o all'intera soluzione.

1. Al termine, fare clic sul pulsante **OK** per apportare le modifiche.  Verificare che le modifiche richieste vengano apportate in modo appropriato.  Usare le caselle di controllo nella parte superiore della finestra per attivare o disattivare la ridenominazione di un elemento.

   ![Anteprima della modifica della firma](images/changesignature_preview.png)

1. Quando si è soddisfatti del risultato, fare clic sul pulsante **Applica** e la funzione verrà modificata nel codice sorgente.

   ![Risultato della modifica della firma](images/changesignature_result.png)
