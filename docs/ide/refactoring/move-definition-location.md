---
description: 'Altre informazioni su: sposta definizione percorso'
title: Percorso definizione spostamento
ms.date: 11/16/2016
ms.assetid: c6d507ac-c61e-4da2-95c8-d504b42e2520
ms.openlocfilehash: 5c0ae4ed5e14a50f4d54226fb298c34099c8aec7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318715"
---
# <a name="move-definition-location"></a>Percorso definizione spostamento

**Cosa:** consente di spostare immediatamente la definizione di una funzione nel file di intestazione corrispondente.

**Quando:** si desidera spostare una funzione in un file di intestazione.

**Perché:** la funzione può essere spostata manualmente, ma questa funzionalità la sposterà automaticamente, creando il file di intestazione, se necessario.

**Come**

1. Posizionare il cursore del testo o del mouse sulla funzione da spostare.

   ![Codice evidenziato](images/movedefinition_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL +.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Percorso definizione spostamento** dal menu di scelta rapida.
   * **Mouse**
     * Fare clic con il pulsante destro del mouse, selezionare il menu **Azioni rapide e refactoring** e selezionare **Percorso definizione spostamento** dal menu di scelta rapida.

1. La funzione verrà spostata nel file di intestazione corrispondente, che verrà visualizzato in una finestra di anteprima popup.  Se il file di intestazione non esiste, viene creato e inserito nel progetto.

   ![Risultato di Crea dichiarazione/definizione](images/movedefinition_result.png)
