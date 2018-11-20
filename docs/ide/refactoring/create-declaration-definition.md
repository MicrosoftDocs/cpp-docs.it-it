---
title: Crea dichiarazione/definizione
ms.date: 10/19/2018
ms.assetid: 6b1cdcb2-765e-4b93-8cef-92b861f64eba
ms.openlocfilehash: 59ae3ebc23303554a35eea17c7e28850a4a1499a
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51693126"
---
# <a name="create-declaration--definition"></a>Crea dichiarazione/definizione

**Che cosa:** consente di generare immediatamente la dichiarazione o definizione di una funzione.

**Quando:** si ha una funzione che richiede una dichiarazione o viceversa.

**Motivo:** è possibile creare manualmente la dichiarazione o definizione, ma in questo modo la creazione avviene automaticamente e il file di intestazione/codice viene creato se necessario.

**Come:**

1. Posizionare il cursore del testo o del mouse sulla funzione per cui si vuole creare la dichiarazione o definizione.

   ![Codice evidenziato](images/createdefinition_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Crea dichiarazione/definizione** dal menu di scelta rapida.
   * **Mouse**
     * Fare clic con il pulsante destro del mouse e selezionare **Azioni rapide e refactoring** e quindi **Crea dichiarazione/definizione** dal menu di scelta rapida.

1. La dichiarazione o definizione della funzione verrà creata nel file di origine o di intestazione, che viene visualizzato in una finestra popup di anteprima.  Se il file di intestazione o di origine non esiste, viene creato e inserito nel progetto.

   ![Risultato di Crea dichiarazione/definizione](images/createdefinition_result.png)
