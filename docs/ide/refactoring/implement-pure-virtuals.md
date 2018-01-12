---
title: Implementa elementi virtuali puri | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: ea9b4719-34a3-474a-b4ec-05b1859f80f1
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f311c2e5832754bfd785084b9aa930b5dbe43845
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implement-pure-virtuals"></a>Implementa elementi virtuali puri
**Novità:** consente di generare immediatamente il codice necessario per implementare tutti i metodi virtuali puri in una classe. 

**Quando:** che si desidera ereditare da una classe con funzioni virtuali pure.  

**Motivo:** è possibile implementare manualmente le funzioni virtuali pure tutti uno alla volta, tuttavia questa funzionalità genera automaticamente tutte le firme di metodo.

**Procedura:**

1. Posizionare il cursore di testo o del mouse sulla classe in cui si desidera implementare le funzioni virtuali pure della classe di base.

   ![Codice evidenziato](images/virtuals_highlight.png)

1. Successivamente, eseguire una delle operazioni seguenti:
   * **Tastiera**
     * Premere **Ctrl +.** Per attivare il **azioni rapide e refactoring** dal menu  **implementare tutti gli elementi virtuali puri per la classe*ClassName*' * * il menu di scelta rapida in cui  *ClassName* è il nome della classe selezionata.
   * **Mouse**
     * Mouse e scegliere il **azioni rapide e refactoring** dal menu  **implementare tutti gli elementi virtuali puri per la classe*ClassName*' * * il menu di scelta rapida in cui  *ClassName* è il nome della classe selezionata.

1. Le firme del metodo virtuale puro saranno creati automaticamente, pronto per essere implementato.

   ![Risultato implementa elementi virtuali puri](images/virtuals_result.png)
