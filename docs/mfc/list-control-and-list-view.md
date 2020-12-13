---
description: 'Altre informazioni su: controllo elenco e visualizzazione elenco'
title: Controllo List e visualizzazione elenco
ms.date: 11/04/2016
helpviewer_keywords:
- CListView class [MFC], and CListCtrl
- views [MFC], list and list control
- CListCtrl class [MFC], and CListView
- list views [MFC]
- list controls [MFC], List view
ms.assetid: 7aee1c48-b158-4399-be0b-be366993665e
ms.openlocfilehash: 582957cb59bc28797849d45f56fc2be95b8cc2b3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336809"
---
# <a name="list-control-and-list-view"></a>Controllo List e visualizzazione elenco

Per praticità, MFC incapsula il controllo elenco in due modi. È possibile utilizzare i controlli elenco:

- Direttamente, incorporando un oggetto [CListCtrl](reference/clistctrl-class.md) in una classe di finestre di dialogo.

- Indirettamente, usando la classe [CListView](reference/clistview-class.md).

`CListView` semplifica l'integrazione di un controllo elenco con l'architettura documento/visualizzazione MFC, incapsulando il controllo in modo molto simile a [CEditView](reference/ceditview-class.md) incapsula un controllo di modifica: il controllo riempie l'intera superficie di attacco di una visualizzazione MFC. La visualizzazione *è* il controllo, eseguito il cast a `CListView` .

Un `CListView` oggetto eredita da [CCtrlView](reference/cctrlview-class.md) e dalle relative classi base e aggiunge una funzione membro per recuperare il controllo elenco sottostante. Usare Visualizza membri per lavorare con la vista come una vista. Usare la funzione membro [GetListCtrl](reference/clistview-class.md#getlistctrl) per accedere alle funzioni membro del controllo elenco. Usare i membri seguenti per:

- Aggiungere, eliminare o modificare "Items" nell'elenco.

- Imposta o ottiene gli attributi del controllo elenco.

Per ottenere un riferimento all' `CListCtrl` oggetto sottostante `CListView` , chiamare `GetListCtrl` dalla classe di visualizzazione elenco:

[!code-cpp[NVC_MFCListView#4](../atl/reference/codesnippet/cpp/list-control-and-list-view_1.cpp)]

In questo argomento vengono descritte entrambe le modalità di utilizzo del controllo elenco.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CListCtrl](using-clistctrl.md)<br/>
[Controlli](controls-mfc.md)
