---
title: Aggiunta di elementi al controllo
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], adding items
ms.assetid: 715994bd-340d-4ad2-9882-411654137830
ms.openlocfilehash: 5cc1c7a921cf6d6ba2c0f968012b48bfcaef0658
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623370"
---
# <a name="adding-items-to-the-control"></a>Aggiunta di elementi al controllo

Per aggiungere elementi al controllo elenco ([CListCtrl](reference/clistctrl-class.md)), chiamare una delle diverse versioni della funzione membro [InsertItem](reference/clistctrl-class.md#insertitem) , a seconda delle informazioni disponibili. Una versione accetta una struttura [LVITEM](/windows/win32/api/commctrl/ns-commctrl-lvitemw) preparata. Poiché la `LVITEM` struttura contiene numerosi membri, si ha un maggiore controllo sugli attributi dell'elemento del controllo elenco.

Due membri importanti (in relazione alla visualizzazione report) della `LVITEM` struttura sono i `iItem` `iSubItem` membri e. Il `iItem` membro è l'indice in base zero dell'elemento a cui fa riferimento la struttura e il `iSubItem` membro è l'indice in base uno di un elemento secondario oppure zero se la struttura contiene informazioni su un elemento. Con questi due membri è possibile determinare, per elemento, il tipo e il valore delle informazioni sull'elemento secondario visualizzato quando il controllo elenco è in visualizzazione report. Per ulteriori informazioni, vedere [CListCtrl:: SetItem](reference/clistctrl-class.md#setitem).

I membri aggiuntivi specificano il testo, l'icona, lo stato e i dati dell'elemento. "Dati elemento" è un valore definito dall'applicazione associato a un elemento della visualizzazione elenco. Per ulteriori informazioni sulla `LVITEM` struttura, vedere [CListCtrl:: GetItem](reference/clistctrl-class.md#getitem).

Le altre versioni di `InsertItem` accettano uno o più valori distinti, corrispondenti ai membri della `LVITEM` struttura, consentendo di inizializzare solo i membri che si desidera supportare. In genere, il controllo elenco gestisce l'archiviazione per gli elementi dell'elenco, ma è possibile archiviare alcune delle informazioni nell'applicazione usando "elementi di callback". Per altre informazioni, vedere [elementi di callback e maschera di callback](callback-items-and-the-callback-mask.md) in questo argomento ed [elementi di callback e maschera di callback](/windows/win32/Controls/using-list-view-controls) nel Windows SDK.

Per ulteriori informazioni, vedere [aggiunta di elementi e sottoelementi della visualizzazione elenco](/windows/win32/Controls/using-list-view-controls).

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](using-clistctrl.md)<br/>
[Controlli](controls-mfc.md)
