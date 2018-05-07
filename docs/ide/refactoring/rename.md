---
title: Rinominare | Documenti Microsoft
ms.custom: ''
ms.date: 11/16/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
ms.assetid: 64b42a88-3bd9-4399-8b96-75bceffc353b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7a064527f6afcbf91be3fb4e51180be647c1f506
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="rename"></a>Rinomina
**Cosa:** consente di rinominare gli identificatori per i simboli del codice, ad esempio campi, variabili locali, metodi, spazi dei nomi, proprietà e tipi.

**Quando:** si vuole rinominare un elemento in modo sicuro senza dover trovare tutte le istanze e copiare/incollare il nuovo nome.  

**Perché:** è probabile che copiare e incollare il nuovo nome in un intero progetto causi errori.  Questo strumento di refactoring eseguirà in modo accurato l'azione di ridenominazione.

**Come:**

1. Evidenziare o posizionare il cursore del testo all'interno dell'elemento da rinominare:

   ![Codice evidenziato](images/rename_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+R** e quindi **CTRL+R**.  Si noti che i tasti di scelta rapida possono essere diversi a seconda del profilo selezionato.
   * **Mouse**
     * Selezionare **Modifica > Refactoring > Rinomina**.
     * Fare clic con il pulsante destro del mouse sul codice e scegliere **Rinomina**.

1. Nel **rinominare** finestra visualizzata, immettere il nuovo nome per l'elemento selezionato e fare clic su di **anteprima** pulsante.  Modifica il **ambito di ricerca** se si desidera ampliare o restringere l'ambito della ridenominazione.

   ![finestra di dialogo Rinomina](images/rename_dialog.png)

   > [!TIP]
   > È possibile ignorare l'anteprima controllando il **anteprima Skip cambia se i riferimenti sono tutti confermati** opzione.

1. Quando il **Anteprima modifiche - Rinomina** verrà visualizzata la finestra, assicurarsi che la richiesta di modifiche vengono apportate in modo appropriato.  Utilizzare le caselle di controllo nella parte superiore della finestra per attivare o disattivare la ridenominazione di un elemento.

   ![Rinominare l'anteprima](images/rename_preview.png)

1. Quando tutto ciò che si verificano problemi, fare clic su di **applica** pulsante e l'elemento verrà rinominati nel codice sorgente.
