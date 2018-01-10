---
title: Converti in valore letterale stringa non elaborata | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: fffbfee4-66ee-42ba-aeb9-df07fb702c51
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 12aa512270ecce4564561634f99be9cbf155448a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="convert-to-raw-string-literal"></a>Converti in valore letterale stringa non elaborata
**Novità:** consente di attivare qualsiasi stringa in una stringa non elaborata di C++ letterale.

**Quando:** si dispone di una stringa con caratteri di escape che non devono essere elaborati come caratteri di escape.

**Motivo:** è possibile di caratteri di escape doppia, ma comporta spesso stringhe confusione e illeggibile.  Utilizzando i valori letterali stringa non elaborata stringhe rende molto più facile da leggere.

**Procedura:**

1. Posizionare il cursore del mouse o del testo su stringa con caratteri di escape da convertire.

   ![Codice evidenziato](images/stringliteral_highlight.png)

1. Successivamente, eseguire una delle operazioni seguenti:
   * **Tastiera**
     * Premere **Ctrl +.** Per attivare il **azioni rapide e refactoring** dal menu **convertire in valore letterale non elaborato stringa** dal menu di scelta rapida.
   * **Mouse**
     * Pulsante destro del mouse nel codice, selezionare il **azioni rapide e refactoring** dal menu **convertire in valore letterale non elaborato stringa** dal menu di scelta rapida.
     * Fare clic su di ![lampadina](images/bulb.png) icona che verrà visualizzata nel margine sinistro e scegliere **convertire in valore letterale non elaborato stringa** dal menu di scelta rapida.

1. La stringa verrà immediatamente essere convertita in un valore letterale stringa non elaborato.  

   ![Risultato di stringa letterale non elaborato](images/stringliteral_result.png)