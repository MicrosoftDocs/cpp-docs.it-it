---
description: "Altre informazioni su: eseguire l'override di una funzione virtuale"
title: Eseguire l'override di una funzione virtuale
ms.date: 11/12/2018
f1_keywords:
- vc.codewiz.virtualfunc.override
helpviewer_keywords:
- virtual functions, overriding
- base classes, overriding virtual functions defined in
- Properties window, overriding virtual functions in
ms.assetid: 2d8c76f2-7a6b-4c9c-8de5-4282ce7755b6
ms.openlocfilehash: d4c800006d5227ed5397c17284c03968a24a3964
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335907"
---
# <a name="override-a-virtual-function"></a>Eseguire l'override di una funzione virtuale

È possibile eseguire l'override delle funzioni virtuali definite in una classe di base dalla [finestra Proprietà](/visualstudio/ide/reference/properties-window) di Visual Studio.

**Per eseguire l'override di una funzione virtuale nel Finestra Proprietà:**

1. In Visualizzazione classi selezionare la classe.

1. Nella finestra Proprietà selezionare il pulsante **Override**.

   > [!NOTE]
   > Il pulsante **Override** è disponibile quando si seleziona il nome della classe in Visualizzazione classi o quando si effettua una selezione all'interno della finestra di origine.

   Nella colonna di sinistra sono elencate le funzioni virtuali. La presenza del nome di una funzione virtuale anche nella colonna di destra indica che è già stato implementato un override.

1. Se la funzione non ha override, selezionare la cella nella colonna destra della Finestra Proprietà per visualizzare il nome suggerito della funzione override come \<add> *funcname*.

1. Selezionare il nome suggerito per aggiungere il codice stub per la funzione.

1. Per modificare una funzione in override, fare doppio clic sul nome della funzione in Visualizzazione classi e modificare il codice nella finestra di origine.

Per rimuovere una sostituzione, selezionare il nome della funzione di sostituzione nella colonna a destra e selezionare \<delete> *funcname*. Il codice della funzione viene impostato come commento.
