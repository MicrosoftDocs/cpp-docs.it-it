---
title: Creazione di un controllo Rebar
ms.date: 11/04/2016
helpviewer_keywords:
- rebar controls [MFC], creating
- CReBarCtrl class [MFC], creating
ms.assetid: 0a012e08-772b-4f6a-af86-7cb651d11d3e
ms.openlocfilehash: 6828fa3b47eaa1e29579b09611d85cd68702c332
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617131"
---
# <a name="creating-a-rebar-control"></a>Creazione di un controllo Rebar

Prima che l'oggetto padre sia visibile, è necessario creare gli oggetti [CReBarCtrl](reference/crebarctrl-class.md) . In questo modo si riducono le possibilità che si verifichino problemi di disegno.

Ad esempio, i controlli Rebar (utilizzati negli oggetti della finestra cornice) vengono comunemente utilizzati come finestre padre per i controlli della barra degli strumenti. Di conseguenza, il padre del controllo Rebar è l'oggetto finestra cornice. Poiché l'oggetto finestra cornice è il padre, la funzione membro `OnCreate` (del padre) è una posizione ideale per creare il controllo Rebar.

Per utilizzare un oggetto `CReBarCtrl`, in genere vengono effettuate le seguenti operazioni:

### <a name="to-use-a-crebarctrl-object"></a>Per utilizzare un oggetto CReBarCtrl

1. Costruire l'oggetto [CReBarCtrl](reference/crebarctrl-class.md) .

1. Chiamare [create](reference/crebarctrl-class.md#create) per creare il controllo comune del rebar di Windows e collegarlo all' `CReBarCtrl` oggetto, specificando gli stili desiderati.

1. Caricare una bitmap, con una chiamata a [CBitmap:: LoadBitmap](reference/cbitmap-class.md#loadbitmap), da utilizzare come sfondo dell'oggetto controllo Rebar.

1. Creare e inizializzare tutti gli oggetti della finestra figlio (barre degli strumenti, controlli della finestra di dialogo e così via) che saranno contenuti nell'oggetto controllo Rebar.

1. Inizializzare una struttura **REBARBANDINFO** con le informazioni necessarie per la banda da inserire.

1. Chiamare [InsertBand](reference/crebarctrl-class.md#insertband) per inserire le finestre figlio esistenti, ad esempio, `m_wndReToolBar` nel nuovo controllo Rebar. Per ulteriori informazioni sull'inserimento di bande in un controllo Rebar esistente, vedere [controlli Rebar e bande](rebar-controls-and-bands.md).

## <a name="see-also"></a>Vedere anche

[Uso di CReBarCtrl](using-crebarctrl.md)<br/>
[Controlli](controls-mfc.md)
