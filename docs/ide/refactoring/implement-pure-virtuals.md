---
title: Implementa elementi virtuali puri | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: ea9b4719-34a3-474a-b4ec-05b1859f80f1
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f311c2e5832754bfd785084b9aa930b5dbe43845
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="implement-pure-virtuals"></a>Implementa elementi virtuali puri
**Che cosa:** consente di generare immediatamente il codice necessario per implementare tutti i metodi virtuali puri in una classe. 

**Quando:** si desidera ereditare da una classe con funzioni virtuali pure.  

**Motivo:** è possibile implementare manualmente le funzioni virtuali pure tutti uno alla volta, tuttavia questa funzionalità genera automaticamente tutte le firme di metodo.

**Come:**

1. Posizionare il cursore di testo o del mouse sulla classe in cui si desidera implementare le funzioni virtuali pure della classe di base.

   ![Codice evidenziato](images/virtuals_highlight.png)

1. Eseguire quindi una delle operazioni seguenti:
   * **Tastiera**
     * Premere **CTRL+.** Per attivare il **azioni rapide e refactoring** dal menu **implementano tutti elementi virtuali puri per la classe*ClassName*'** dal menu di scelta rapida, in cui  *ClassName* è il nome della classe selezionata.
   * **Mouse**
     * Mouse e scegliere il **azioni rapide e refactoring** dal menu **implementano tutti elementi virtuali puri per la classe*ClassName*'** dal menu di scelta rapida, dove  *ClassName* è il nome della classe selezionata.

1. Le firme del metodo virtuale puro saranno creati automaticamente, pronto per essere implementato.

   ![Risultato implementa elementi virtuali puri](images/virtuals_result.png)
