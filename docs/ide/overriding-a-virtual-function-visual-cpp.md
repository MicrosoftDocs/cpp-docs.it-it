---
title: Eseguire l'override di una funzione virtuale
ms.date: 11/12/2018
f1_keywords:
- vc.codewiz.virtualfunc.override
helpviewer_keywords:
- virtual functions, overriding
- base classes, overriding virtual functions defined in
- Properties window, overriding virtual functions in
ms.assetid: 2d8c76f2-7a6b-4c9c-8de5-4282ce7755b6
ms.openlocfilehash: 9bb3fd34bbfa14cce1595ed586c4e1b66518e7b7
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51694023"
---
# <a name="override-a-virtual-function"></a>Eseguire l'override di una funzione virtuale

È possibile eseguire l'override delle funzioni virtuali definite in una classe di base dalla [finestra Proprietà](/visualstudio/ide/reference/properties-window) di Visual Studio.

**Per eseguire l'override di una funzione virtuale nella finestra Proprietà:**

1. In Visualizzazione classi selezionare la classe.

1. Nella finestra Proprietà selezionare il pulsante **Override**.

   > [!NOTE]
   > Il pulsante **Override** è disponibile quando si seleziona il nome della classe in Visualizzazione classi o quando si effettua una selezione all'interno della finestra di origine.

   Nella colonna di sinistra sono elencate le funzioni virtuali. La presenza del nome di una funzione virtuale anche nella colonna di destra indica che è già stato implementato un override.

1. Se la funzione non ha nessun override, selezionare la cella nella colonna a destra nella finestra Proprietà per visualizzare il nome suggerito per l'override della funzione come \<aggiungi>*FuncName*.

1. Selezionare il nome suggerito per aggiungere il codice stub per la funzione.

1. Per modificare una funzione in override, fare doppio clic sul nome della funzione in Visualizzazione classi e modificare il codice nella finestra di origine.

Per rimuovere un override, selezionare il nome della funzione di override nella colonna a destra e selezionare \<elimina>*FuncName*. Il codice della funzione viene impostato come commento.
