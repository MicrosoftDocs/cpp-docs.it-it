---
title: Percorso definizione spostamento | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: c6d507ac-c61e-4da2-95c8-d504b42e2520
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 838f3d01f5e6d8612948304b80b79cf9c7cb4720
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="move-definition-location"></a>Percorso definizione spostamento
**Novità:** consente di spostare immediatamente una definizione di funzione per il file di intestazione corrispondente.

**Quando:** una funzione che si desidera spostare in un file di intestazione.  

**Motivo:** è stato possibile spostare manualmente la funzione, ma questa funzionalità verrà spostata automaticamente, la creazione del file di intestazione, se necessario.

**Procedura:**

1. Posizionare il cursore di testo o il mouse tramite la funzione per cui si desidera spostare.

   ![Codice evidenziato](images/movedefinition_highlight.png)

1. Successivamente, eseguire una delle operazioni seguenti:
   * **Tastiera**
     * Premere **Ctrl +.** Per attivare il **azioni rapide e refactoring** dal menu **spostare percorso definizione** dal menu di scelta rapida.
   * **Mouse**
     * Mouse e scegliere il **azioni rapide e refactoring** dal menu **spostare percorso definizione** dal menu di scelta rapida.

1. La funzione verrà spostata al file di intestazione corrispondente, verrà visualizzato in una finestra di anteprima popup.  Se il file di intestazione non esiste, viene anche essere creato e inserito nel progetto.

   ![Crea dichiarazione / definizione dare come risultato](images/movedefinition_result.png)
