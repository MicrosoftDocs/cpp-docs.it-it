---
title: Creazione di un controllo Rebar
ms.date: 11/04/2016
helpviewer_keywords:
- rebar controls [MFC], creating
- CReBarCtrl class [MFC], creating
ms.assetid: 0a012e08-772b-4f6a-af86-7cb651d11d3e
ms.openlocfilehash: 3cc4795a0d4500a53c775ba6f44c3dce520e5110
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644678"
---
# <a name="creating-a-rebar-control"></a>Creazione di un controllo Rebar

[CReBarCtrl](../mfc/reference/crebarctrl-class.md) gli oggetti devono essere creati prima che l'oggetto padre sia visibile. In questo modo si riducono le possibilità che si verifichino problemi di disegno.

Ad esempio, i controlli Rebar (utilizzati negli oggetti della finestra cornice) vengono comunemente utilizzati come finestre padre per i controlli della barra degli strumenti. Di conseguenza, il padre del controllo Rebar è l'oggetto finestra cornice. Poiché l'oggetto finestra cornice è il padre, la funzione membro `OnCreate` (del padre) è una posizione ideale per creare il controllo Rebar.

Per utilizzare un oggetto `CReBarCtrl`, in genere vengono effettuate le seguenti operazioni:

### <a name="to-use-a-crebarctrl-object"></a>Per utilizzare un oggetto CReBarCtrl

1. Costruire il [CReBarCtrl](../mfc/reference/crebarctrl-class.md) oggetto.

1. Chiamare [Create](../mfc/reference/crebarctrl-class.md#create) per creare il controllo comune rebar di Windows e associarlo al `CReBarCtrl` oggetto, che specifica tutti gli stili desiderati.

1. Caricare una bitmap, con una chiamata a [LoadBitmap](../mfc/reference/cbitmap-class.md#loadbitmap), da utilizzare come sfondo dell'oggetto controllo rebar.

1. Creare e inizializzare tutti gli oggetti della finestra figlio (barre degli strumenti, controlli della finestra di dialogo e così via) che saranno contenuti nell'oggetto controllo Rebar.

1. Inizializzare un **REBARBANDINFO** struttura con le informazioni necessarie per la banda sta essere inserito.

1. Chiamare [InsertBand](../mfc/reference/crebarctrl-class.md#insertband) per inserire le finestre figlio esistenti (ad esempio `m_wndReToolBar`) nel nuovo controllo rebar. Per altre informazioni sull'inserimento di bande in un controllo rebar esistente, vedere [i controlli Rebar e bande](../mfc/rebar-controls-and-bands.md).

## <a name="see-also"></a>Vedere anche

[Uso di CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

