---
description: 'Altre informazioni su: conversione in valore letterale stringa non elaborata'
title: Converti in valore letterale stringa non elaborata
ms.date: 11/16/2016
ms.assetid: fffbfee4-66ee-42ba-aeb9-df07fb702c51
ms.openlocfilehash: f83cb955bc2b30957306e1467a2d353377d5f33a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185557"
---
# <a name="convert-to-raw-string-literal"></a>Converti in valore letterale stringa non elaborata

**Cosa:** consente di trasformare qualsiasi stringa in un valore letterale stringa non elaborata di C++.

**Quando:** si ha una stringa con caratteri di escape che non devono essere elaborati come caratteri di escape.

**Perché:** si potrebbero usare caratteri di escape doppi, ma questo spesso causa confusione e stringhe illeggibili.  I valori letterali stringa non elaborata rendono le stringhe molto più facili da leggere.

**Come**

1. Posizionare il cursore del mouse o del testo sulla stringa con caratteri di escape da convertire.

   ![Codice evidenziato](images/stringliteral_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL +.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Converti in valore letterale stringa non elaborata** dal menu di scelta rapida.
   * **Mouse**
     * Fare clic con il pulsante destro del mouse, selezionare **Azioni rapide e refactoring** e selezionare **Converti in valore letterale stringa non elaborata** dal menu di scelta rapida.
     * Fare clic sull'icona ![lampadina](images/bulb.png) visualizzata nel margine sinistro e scegliere **Converti in valore letterale stringa non elaborata** dal menu di scelta rapida.

1. La stringa verrà immediatamente convertita in un valore letterale stringa non elaborata.

   ![Risultato di Valore letterale stringa non elaborata](images/stringliteral_result.png)
