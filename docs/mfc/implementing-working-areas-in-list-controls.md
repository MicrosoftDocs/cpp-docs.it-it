---
title: Implementazione di aree di lavoro nei controlli List | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- list controls [MFC], working areas
- working areas in list control [MFC]
ms.assetid: fbbb356b-3359-4348-8603-f1cb114cadde
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fc245ef87343d9f33277e41c5c191ea713e21da0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46383417"
---
# <a name="implementing-working-areas-in-list-controls"></a>Implementazione di aree di lavoro nei controlli List

Per impostazione predefinita, un controllo elenco organizza tutti gli elementi nella griglia standard. Tuttavia, un altro metodo è supportato, aree di lavoro, che dispone gli elementi dell'elenco in gruppi rettangolari. Per un'immagine di un controllo elenco che implementa aree di lavoro, vedere utilizzando i controlli di visualizzazione elenco in Windows SDK.

> [!NOTE]
>  Aree di lavoro sono visibili solo quando il controllo elenco è in modalità icone piccole o icona. Tuttavia, eventuali aree di lavoro correnti vengono mantenute se la visualizzazione passa alla modalità report o un elenco.

Aree di lavoro sono utilizzabile per visualizzare un bordo vuoto (per la sinistra, superiore e/o a destra degli elementi) o provocare una barra di scorrimento orizzontali da visualizzare quando non esiste in genere non sarebbe uno. Un altro utilizzo comune consiste nel creare più aree di lavoro a cui gli elementi possono essere spostati o eliminati. Con questo metodo, è possibile creare le aree in una singola visualizzazione che hanno un significato diverso. L'utente è stato possibile quindi classificare gli elementi, posizionandoli in un'area diversa. Un esempio di questo sarebbe una visualizzazione di un file system che dispone di un'area per i file di lettura/scrittura e un'altra area per i file di sola lettura. Se un elemento di file sono stato spostato nell'area di sola lettura, diventa automaticamente in sola lettura. Spostamento di un file dall'area di sola lettura nell'area di lettura/scrittura renderebbe il file di lettura/scrittura.

`CListCtrl` offre diverse funzioni membro per la creazione e la gestione delle aree di lavoro nel controllo elenco. [GetWorkAreas](../mfc/reference/clistctrl-class.md#getworkareas) e [SetWorkAreas](../mfc/reference/clistctrl-class.md#setworkareas) recuperare e impostare una matrice di `CRect` oggetti (o `RECT` strutture), che archivia le aree di lavoro attualmente implementata per il controllo elenco. È inoltre [GetNumberOfWorkAreas](../mfc/reference/clistctrl-class.md#getnumberofworkareas) recupera il numero corrente delle aree di lavoro per il controllo elenco (per impostazione predefinita, zero).

## <a name="items-and-working-areas"></a>Gli elementi e aree di lavoro

Quando viene creata un'area di lavoro, gli elementi che si trovano all'interno dell'area di lavoro diventano membri della stessa. Analogamente, se un elemento viene spostato in un'area di lavoro, diventa un membro dell'area di lavoro a cui è stato spostato. Se un elemento non si trova all'interno di qualsiasi area di lavoro, viene selezionata automaticamente un membro dell'area di lavoro prima (indice 0). Se si desidera creare un elemento che verrà inserito all'interno di un'area di lavoro specifico, è necessario creare l'elemento e quindi spostarlo nell'area di lavoro con una chiamata a [SetItemPosition](../mfc/reference/clistctrl-class.md#setitemposition). Nel secondo esempio riportato di seguito illustra questa tecnica.

L'esempio seguente implementa quattro aree di lavoro (`rcWorkAreas`), di dimensioni uguali con un bordo a livello di pixel 10 intorno a ogni area di lavoro, in un controllo elenco (`m_WorkAreaListCtrl`).

[!code-cpp[NVC_MFCControlLadenDialog#20](../mfc/codesnippet/cpp/implementing-working-areas-in-list-controls_1.cpp)]

La chiamata a [ApproximateViewRect](../mfc/reference/clistctrl-class.md#approximateviewrect) è stata eseguita per ottenere una stima dell'area totale di richieste per visualizzare tutti gli elementi in un'unica area. Questa stima è quindi suddivisa in quattro aree e riempita con un bordo di larghezza di 5 pixel.

L'esempio seguente assegna gli elementi dell'elenco esistente a ogni gruppo (`rcWorkAreas`) e aggiorna la visualizzazione controlli (`m_WorkAreaListCtrl`) per completare l'effetto.

[!code-cpp[NVC_MFCControlLadenDialog#21](../mfc/codesnippet/cpp/implementing-working-areas-in-list-controls_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

