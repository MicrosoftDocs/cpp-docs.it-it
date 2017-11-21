---
title: Rinominare | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 64b42a88-3bd9-4399-8b96-75bceffc353b
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: d8e4152a1c920a243be9d4aa23712420893e29f5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="rename"></a>Rinomina
**Novità:** consente di rinominare gli identificatori per i simboli del codice, ad esempio campi, le variabili locali, metodi, gli spazi dei nomi, proprietà e tipi.

**Quando:** che si desidera rinominare un elemento senza la necessità di trovare tutte le istanze, copia e Incolla il nuovo nome.  

**Motivo:** copiando e incollando il nuovo nome in un intero progetto potrebbe causare errori.  Questo strumento refactoring in modo accurato eseguirà l'azione di ridenominazione.

**Procedura:**

1. Evidenziare o posizionare il cursore di testo all'interno dell'elemento da rinominare:

   ![Codice evidenziato](images/rename_highlight.png)

1. Successivamente, eseguire una delle operazioni seguenti:
   * **Tastiera**
     * Premere **Ctrl + R**, quindi **Ctrl + R**.  Si noti che i tasti di scelta rapida possono essere diversi a seconda del profilo selezionato.
   * **Mouse**
     * Selezionare **Modifica > eseguire il refactoring > rinominare**.
     * Il codice e scegliere **rinominare**.

1. Nel **rinominare** finestra visualizzata, immettere il nuovo nome per l'elemento selezionato e fare clic su di **anteprima** pulsante.  Modifica il **ambito di ricerca** se si desidera ampliare o restringere l'ambito della ridenominazione.

   ![finestra di dialogo Rinomina](images/rename_dialog.png)

   > [!TIP]
   > È possibile ignorare l'anteprima controllando il **anteprima Skip cambia se i riferimenti sono tutti confermati** opzione.

1. Quando il **Anteprima modifiche - Rinomina** verrà visualizzata la finestra, assicurarsi che la richiesta di modifiche vengono apportate in modo appropriato.  Utilizzare le caselle di controllo nella parte superiore della finestra per attivare o disattivare la ridenominazione di un elemento.

   ![Rinominare l'anteprima](images/rename_preview.png)

1. Quando tutto ciò che si verificano problemi, fare clic su di **applica** pulsante e l'elemento verrà rinominati nel codice sorgente.
