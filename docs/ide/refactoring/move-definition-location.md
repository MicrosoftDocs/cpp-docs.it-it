---
title: Percorso definizione spostamento | Microsoft Docs
ms.custom: ''
ms.date: 11/16/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
ms.assetid: c6d507ac-c61e-4da2-95c8-d504b42e2520
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 44211105429e33c136999a7877ac6ee42af29f17
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33327840"
---
# <a name="move-definition-location"></a>Percorso definizione spostamento
**Cosa:** consente di spostare immediatamente la definizione di una funzione nel file di intestazione corrispondente.

**Quando:** si desidera spostare una funzione in un file di intestazione.  

**Perché:** la funzione può essere spostata manualmente, ma questa funzionalità la sposterà automaticamente, creando il file di intestazione, se necessario.

**Come:**

1. Posizionare il cursore del testo o del mouse sulla funzione da spostare.

   ![Codice evidenziato](images/movedefinition_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Percorso definizione spostamento** dal menu di scelta rapida.
   * **Mouse**
     * Fare clic con il pulsante destro del mouse, selezionare il menu **Azioni rapide e refactoring** e selezionare **Percorso definizione spostamento** dal menu di scelta rapida.

1. La funzione verrà spostata nel file di intestazione corrispondente, che verrà visualizzato in una finestra di anteprima popup.  Se il file di intestazione non esiste, viene creato e inserito nel progetto.

   ![Risultato di Crea dichiarazione/definizione](images/movedefinition_result.png)
