---
title: Crea dichiarazione / definizione | Documenti Microsoft
ms.custom: ''
ms.date: 11/16/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
ms.assetid: 6b1cdcb2-765e-4b93-8cef-92b861f64eba
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 60d583ec47a3f9c5b61599a5945e3cfa0d375b1d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="create-declaration--definition"></a>Crea dichiarazione/definizione
**Che cosa:** consente di generare immediatamente la dichiarazione o definizione di una funzione.

**Quando:** si dispone di una funzione che richiede un xsl, o viceversa.  

**Motivo:** è possibile creare manualmente la dichiarazione/definizione, ma questo verrà creata automaticamente, la creazione del file di intestazione/codice se necessario.

**Come:**

1. La funzione per cui si desidera creare la dichiarazione o definizione, posizionare il cursore di testo o il mouse.

   ![Codice evidenziato](images/createdefinition_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+.** Per attivare il **azioni rapide e refactoring** dal menu **Crea dichiarazione / definizione** dal menu di scelta rapida.
   * **Mouse**
     * Mouse e scegliere il **azioni rapide e refactoring** dal menu **Crea dichiarazione / definizione** dal menu di scelta rapida.

1. Dichiarazione/definizione della funzione verrà creato nel file di origine o di intestazione, che viene visualizzata in una finestra di anteprima popup.  Se il file di intestazione o di origine non esiste, viene anche essere creato e inserito nel progetto.

   ![Crea dichiarazione / definizione dare come risultato](images/createdefinition_result.png)
