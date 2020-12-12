---
description: 'Altre informazioni su: implementare virtuali puri'
title: Implementa elementi virtuali puri
ms.date: 11/16/2016
ms.assetid: ea9b4719-34a3-474a-b4ec-05b1859f80f1
ms.openlocfilehash: b35ebba556ed9bae6ded649caca000b7d3554480
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318754"
---
# <a name="implement-pure-virtuals"></a>Implementa elementi virtuali puri

**Cosa:** consente di generare immediatamente il codice necessario per implementare tutti i metodi virtuali puri in una classe.

**Quando:** si vuole ereditare da una classe con funzioni virtuali pure.

**Perché:** è possibile implementare manualmente tutte le funzioni virtuali una alla volta, tuttavia questa funzionalità genera automaticamente tutte le firme dei metodi.

**Come**

1. Posizionare il cursore di testo o del mouse sulla classe in cui si vuole implementare le funzioni virtuali pure della classe di base.

   ![Codice evidenziato](images/virtuals_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL +.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Implementa tutti gli elementi virtuali puri per la classe "*Nomeclasse*"** dal menu di scelta rapida, in cui *Nomeclasse* è il nome della classe selezionata.
   * **Mouse**
     * Fare clic con il pulsante destro del mouse, selezionare il menu **Azioni rapide e refactoring** e selezionare **Implementa tutti gli elementi virtuali puri per la classe "*Nomeclasse*"** dal menu di scelta rapida, in cui *Nomeclasse* è il nome della classe selezionata.

1. Le firme dei metodi virtuali puri vengono create automaticamente, pronte per l'implementazione.

   ![Risultato di Implementa elementi virtuali puri](images/virtuals_result.png)
