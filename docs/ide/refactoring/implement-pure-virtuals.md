---
title: Implementa elementi virtuali puri | Microsoft Docs
ms.custom: ''
ms.date: 11/16/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
ms.assetid: ea9b4719-34a3-474a-b4ec-05b1859f80f1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 234ae9a67bcbc60ea156fbacb5169d0bd1573a91
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46442760"
---
# <a name="implement-pure-virtuals"></a>Implementa elementi virtuali puri
**Cosa:** consente di generare immediatamente il codice necessario per implementare tutti i metodi virtuali puri in una classe.

**Quando:** si vuole ereditare da una classe con funzioni virtuali pure.

**Perché:** è possibile implementare manualmente tutte le funzioni virtuali una alla volta, tuttavia questa funzionalità genera automaticamente tutte le firme dei metodi.

**Come:**

1. Posizionare il cursore di testo o del mouse sulla classe in cui si vuole implementare le funzioni virtuali pure della classe di base.

   ![Codice evidenziato](images/virtuals_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+.** per attivare il menu **Azioni rapide e refactoring** e selezionare **Implementa tutti gli elementi virtuali puri per la classe "*Nomeclasse*"** dal menu di scelta rapida, in cui *Nomeclasse* è il nome della classe selezionata.
   * **Mouse**
     * Fare clic con il pulsante destro del mouse, selezionare il menu **Azioni rapide e refactoring** e selezionare **Implementa tutti gli elementi virtuali puri per la classe "*Nomeclasse*"** dal menu di scelta rapida, in cui *Nomeclasse* è il nome della classe selezionata.

1. Le firme dei metodi virtuali puri vengono create automaticamente, pronte per l'implementazione.

   ![Risultato di Implementa elementi virtuali puri](images/virtuals_result.png)
