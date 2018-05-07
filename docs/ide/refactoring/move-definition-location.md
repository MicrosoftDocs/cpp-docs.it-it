---
title: Percorso definizione spostamento | Documenti Microsoft
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
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="move-definition-location"></a>Percorso definizione spostamento
**Che cosa:** consente di spostare immediatamente una definizione di funzione per il file di intestazione corrispondente.

**Quando:** una funzione che si desidera spostare in un file di intestazione.  

**Motivo:** è possibile spostare manualmente la funzione, ma questa funzionalità verrà spostata automaticamente, la creazione del file di intestazione se necessario.

**Come:**

1. Posizionare il cursore di testo o il mouse tramite la funzione per cui si desidera spostare.

   ![Codice evidenziato](images/movedefinition_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+.** Per attivare il **azioni rapide e refactoring** dal menu **spostare percorso definizione** dal menu di scelta rapida.
   * **Mouse**
     * Mouse e scegliere il **azioni rapide e refactoring** dal menu **spostare percorso definizione** dal menu di scelta rapida.

1. La funzione verrà spostata al file di intestazione corrispondente, verrà visualizzato in una finestra di anteprima popup.  Se il file di intestazione non esiste, viene anche essere creato e inserito nel progetto.

   ![Crea dichiarazione / definizione dare come risultato](images/movedefinition_result.png)
