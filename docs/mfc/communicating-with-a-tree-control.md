---
title: Comunicazione con un controllo albero
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], communicating with
- CTreeCtrl class [MFC], calling member functions
- communications, tree controls
- tree controls
ms.assetid: 680ad9ee-b11f-452d-93fa-501ca7d7e069
ms.openlocfilehash: f480cdad2fce53f830b8067083a8a4be4b4e4848
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619652"
---
# <a name="communicating-with-a-tree-control"></a>Comunicazione con un controllo albero

Si usano metodi diversi per chiamare le funzioni membro in un oggetto [CTreeCtrl](reference/ctreectrl-class.md) a seconda della modalità di creazione dell'oggetto:

- Se il controllo struttura ad albero si trova in una finestra di dialogo, utilizzare una variabile membro di tipo `CTreeCtrl` creata nella classe della finestra di dialogo.

- Se il controllo struttura ad albero è una finestra figlio, usare l' `CTreeCtrl` oggetto (o il puntatore) usato per costruire l'oggetto.

- Se si usa un `CTreeView` oggetto, usare la funzione [CTreeView:: GetTreeCtrl](reference/ctreeview-class.md#gettreectrl) per ottenere un riferimento al controllo albero. È possibile inizializzare un altro riferimento con questo valore o assegnare l'indirizzo del riferimento a un `CTreeCtrl` puntatore.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CTreeCtrl](using-ctreectrl.md)<br/>
[Controlli](controls-mfc.md)
