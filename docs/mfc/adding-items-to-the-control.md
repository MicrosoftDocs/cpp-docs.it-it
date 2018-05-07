---
title: Aggiunta di elementi al controllo | Documenti Microsoft
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
ms.openlocfilehash: eab0c7cb1aebf1675d078aa99941edfd9afdc5a8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="adding-items-to-the-control"></a>Aggiunta di elementi al controllo
Per aggiungere elementi al controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)), una delle diverse versioni di chiamare il [InsertItem](../mfc/reference/clistctrl-class.md#insertitem) funzione membro, a seconda di quali informazioni si dispone. Una versione accetta un [LV_ITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) struttura preparato. Poiché il `LV_ITEM` struttura contiene molti membri, è necessario un controllo maggiore sugli attributi dell'elemento del controllo elenco.  
  
 Due membri importanti (per quanto riguarda la visualizzazione dei rapporti) del `LV_ITEM` struttura sono il `iItem` e `iSubItem` membri. Il `iItem` membro è l'indice in base zero dell'elemento a cui fa riferimento la struttura e `iSubItem` membro è l'indice in base uno di un elemento secondario, oppure zero se la struttura contiene informazioni su un elemento. Con questi due membri è determinare, per ogni elemento, il tipo e valore delle informazioni dell'elemento secondario che viene visualizzate quando il controllo elenco è in visualizzazione report. Per ulteriori informazioni, vedere [CListCtrl:: SetItem](../mfc/reference/clistctrl-class.md#setitem).  
  
 Membri aggiuntivi specificano l'elemento testo, icona, stato e i dati degli elementi. "Elemento dati" è un valore definito dall'applicazione associato a un elemento della visualizzazione elenco. Per ulteriori informazioni sul `LV_ITEM` struttura, vedere [CListCtrl:: GetItem](../mfc/reference/clistctrl-class.md#getitem).  
  
 Altre versioni di `InsertItem` accettare uno o più valori separati, corrispondenti ai membri di `LV_ITEM` struttura, che consente di inizializzare solo i membri che si desidera supportare. In genere, il controllo elenco gestisce l'archiviazione per gli elementi dell'elenco, ma è possibile archiviare alcune delle informazioni nell'applicazione, invece, utilizzare "callback". Per ulteriori informazioni, vedere [elementi di Callback e maschera di Callback](../mfc/callback-items-and-the-callback-mask.md) in questo argomento e [elementi di Callback e maschera di Callback](http://msdn.microsoft.com/library/windows/desktop/bb774736) in Windows SDK.  
  
 Per ulteriori informazioni, vedere [aggiunta di elementi di visualizzazione elenco e gli elementi secondari](http://msdn.microsoft.com/library/windows/desktop/bb774736).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

