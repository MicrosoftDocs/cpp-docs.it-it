---
title: Crea dichiarazione / definizione | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 6b1cdcb2-765e-4b93-8cef-92b861f64eba
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 889c8acf5e0ef0ed6a7ac90088a6188658d49d75
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="create-declaration--definition"></a>Crea dichiarazione/definizione
**Novità:** consente di generare immediatamente la dichiarazione o definizione di una funzione.

**Quando:** una funzione che richiede un xsl, o viceversa.  

**Motivo:** è possibile creare manualmente la dichiarazione/definizione, ma questo verrà creata automaticamente, la creazione del file di intestazione/codice, se necessario.

**Procedura:**

1. La funzione per cui si desidera creare la dichiarazione o definizione, posizionare il cursore di testo o il mouse.

   ![Codice evidenziato](images/createdefinition_highlight.png)

1. Successivamente, eseguire una delle operazioni seguenti:
   * **Tastiera**
     * Premere **Ctrl +.** Per attivare il **azioni rapide e refactoring** dal menu **Crea dichiarazione / definizione** dal menu di scelta rapida.
   * **Mouse**
     * Mouse e scegliere il **azioni rapide e refactoring** dal menu **Crea dichiarazione / definizione** dal menu di scelta rapida.

1. Dichiarazione/definizione della funzione verrà creato nel file di origine o di intestazione, che viene visualizzata in una finestra di anteprima popup.  Se il file di intestazione o di origine non esiste, viene anche essere creato e inserito nel progetto.

   ![Crea dichiarazione / definizione dare come risultato](images/createdefinition_result.png)
