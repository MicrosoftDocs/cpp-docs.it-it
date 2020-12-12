---
description: 'Altre informazioni su: Rinomina'
title: Rinominare
ms.date: 11/16/2016
ms.assetid: 64b42a88-3bd9-4399-8b96-75bceffc353b
ms.openlocfilehash: 21bd5b817e51c29f4103b3ea105217ae743bdb4f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318728"
---
# <a name="rename"></a>Rinominare

**Cosa:** consente di rinominare gli identificatori per i simboli del codice, ad esempio campi, variabili locali, metodi, spazi dei nomi, proprietà e tipi.

**Quando:** si vuole rinominare un elemento in modo sicuro senza dover trovare tutte le istanze e copiare/incollare il nuovo nome.

**Perché:** è probabile che copiare e incollare il nuovo nome in un intero progetto causi errori.  Questo strumento di refactoring eseguirà in modo accurato l'azione di ridenominazione.

**Come**

1. Evidenziare o posizionare il cursore del testo all'interno dell'elemento da rinominare:

   ![Codice evidenziato](images/rename_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+R** e quindi **CTRL+R**.  Si noti che i tasti di scelta rapida possono essere diversi a seconda del profilo selezionato.
   * **Mouse**
     * Selezionare **Modifica > Refactoring > Rinomina**.
     * Fare clic con il pulsante destro del mouse sul codice e scegliere **Rinomina**.

1. Nella finestra **Rinomina** visualizzata immettere il nuovo nome per l'elemento selezionato e fare clic sul pulsante **Anteprima**.  Modificare l'**Ambito di ricerca** se si intende ampliare o restringere l'ambito della ridenominazione.

   ![Finestra di dialogo Rinomina](images/rename_dialog.png)

   > [!TIP]
   > È possibile ignorare l'anteprima selezionando l'opzione **Ignora anteprima modifiche se tutti i riferimenti sono confermati**.

1. Quando viene visualizzata la finestra **Anteprima modifiche - Rinomina**, verificare che le modifiche richieste vengano eseguite in modo appropriato.  Usare le caselle di controllo nella parte superiore della finestra per attivare o disattivare la ridenominazione di un elemento.

   ![Anteprima della ridenominazione](images/rename_preview.png)

1. Quando si è soddisfatti del risultato, fare clic sul pulsante **Applica** e l'elemento verrà rinominato nel codice sorgente.
