---
title: Aggiunta di elementi al controllo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CListCtrl class [MFC], adding items
ms.assetid: 715994bd-340d-4ad2-9882-411654137830
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cc1d4cefd7d292333c4797afea369104733d117d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46385066"
---
# <a name="adding-items-to-the-control"></a>Aggiunta di elementi al controllo

Per aggiungere elementi al controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)), chiamare una delle tante versioni del [InsertItem](../mfc/reference/clistctrl-class.md#insertitem) funzione membro, in base alle informazioni è necessario. Una versione accetta un [LV_ITEM](/windows/desktop/api/commctrl/ns-commctrl-taglvitema) struttura preparato. Poiché il `LV_ITEM` struttura contiene molti membri, è necessario maggiore controllo sugli attributi dell'elemento controllo elenco.

Due membri importanti (per quanto riguarda la visualizzazione di report) del `LV_ITEM` struttura sono le `iItem` e `iSubItem` membri. Il `iItem` membro è l'indice in base zero dell'elemento a cui fa riferimento la struttura e il `iSubItem` membro è l'indice in base uno di un elemento secondario, oppure zero se la struttura contiene informazioni su un elemento. Con questi due membri è determinare, per ogni elemento, il tipo e valore delle informazioni dell'elemento secondario che viene visualizzate quando il controllo elenco è in visualizzazione report. Per altre informazioni, vedere [CListCtrl:: SetItem](../mfc/reference/clistctrl-class.md#setitem).

Membri aggiuntivi specificano testo, icona, lo stato dell'elemento e i dati dell'elemento. "Dati relativi agli elementi" non è un valore definito dall'applicazione associato a un elemento della visualizzazione elenco. Per altre informazioni sul `LV_ITEM` struttura, vedere [CListCtrl:: GetItem](../mfc/reference/clistctrl-class.md#getitem).

Altre versioni di `InsertItem` accettano uno o più valori separati, corrispondenti ai membri di `LV_ITEM` struttura, consente di inizializzare solo i membri che si desidera supportare. In genere, il controllo elenco gestisce l'archiviazione per gli elementi dell'elenco, ma è possibile archiviare alcune informazioni nell'applicazione, invece, utilizzando "elementi di callback". Per altre informazioni, vedere [elementi di Callback e maschera di Callback](../mfc/callback-items-and-the-callback-mask.md) in questo argomento e [elementi di Callback e maschera di Callback](/windows/desktop/Controls/using-list-view-controls) nel SDK di Windows.

Per altre informazioni, vedere [aggiunta di elementi di visualizzazione elenco e gli elementi secondari](/windows/desktop/Controls/using-list-view-controls).

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

