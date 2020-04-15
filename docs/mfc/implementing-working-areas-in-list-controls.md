---
title: Implementazione di aree di lavoro nei controlli List
ms.date: 11/04/2016
helpviewer_keywords:
- list controls [MFC], working areas
- working areas in list control [MFC]
ms.assetid: fbbb356b-3359-4348-8603-f1cb114cadde
ms.openlocfilehash: 91577203163247bd230fecb083cf1c50e2875b98
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377216"
---
# <a name="implementing-working-areas-in-list-controls"></a>Implementazione di aree di lavoro nei controlli List

Per impostazione predefinita, un controllo elenco dispone tutti gli elementi in una griglia standard. Tuttavia, è supportato un altro metodo, aree di lavoro, che dispone gli elementi dell'elenco in gruppi rettangolari. Per un'immagine di un controllo elenco che implementa le aree di lavoro, vedere Utilizzo dei controlli Di visualizzazione elenco in Windows SDK.

> [!NOTE]
> Le aree di lavoro sono visibili solo quando il controllo elenco è in modalità icona o piccola icona. Tuttavia, tutte le aree di lavoro correnti vengono mantenute se la visualizzazione passa alla modalità report o elenco.

Le aree di lavoro possono essere utilizzate per visualizzare un bordo vuoto (a sinistra, in alto e/o a destra degli elementi) o per visualizzare una barra di scorrimento orizzontale quando normalmente non ne esiste una. Un altro utilizzo comune consiste nel creare più aree di lavoro in cui gli elementi possono essere spostati o rilasciati. Con questo metodo, è possibile creare aree in una singola visualizzazione che hanno significati diversi. L'utente potrebbe quindi classificare gli elementi posizionandoli in un'area diversa. Un esempio potrebbe essere una vista di un file system che dispone di un'area per i file di lettura/scrittura e un'altra area per i file di sola lettura. Se un elemento di file viene spostato nell'area di sola lettura, diventa automaticamente di sola lettura. Lo spostamento di un file dall'area di sola lettura nell'area di lettura/scrittura renderebbe il file di lettura/scrittura.

`CListCtrl`fornisce diverse funzioni membro per la creazione e la gestione delle aree di lavoro nel controllo elenco. [GetWorkAreas](../mfc/reference/clistctrl-class.md#getworkareas) e [SetWorkAreas](../mfc/reference/clistctrl-class.md#setworkareas) recuperano `CRect` e impostano una matrice di oggetti (o `RECT` strutture), che archiviano le aree di lavoro attualmente implementate per il controllo elenco. Inoltre, [GetNumberOfWorkAreas](../mfc/reference/clistctrl-class.md#getnumberofworkareas) recupera il numero corrente di aree di lavoro per il controllo elenco (per impostazione predefinita, zero).

## <a name="items-and-working-areas"></a>Articoli e aree di lavoro

Quando viene creata un'area di lavoro, gli elementi che si trovano all'interno dell'area di lavoro ne diventano membri. Analogamente, se un elemento viene spostato in un'area di lavoro, diventa un membro dell'area di lavoro in cui è stato spostato. Se un elemento non si trova all'interno di alcuna area di lavoro, diventa automaticamente un membro della prima area di lavoro (indice 0). Se si desidera creare un elemento e posizionarlo all'interno di un'area di lavoro specifica, sarà necessario creare l'elemento e spostarlo nell'area di lavoro desiderata con una chiamata a [SetItemPosition](../mfc/reference/clistctrl-class.md#setitemposition). Nel secondo esempio riportato di seguito viene illustrata questa tecnica.

Nell'esempio seguente vengono`rcWorkAreas`implementate quattro aree di lavoro ( ), di uguale dimensione`m_WorkAreaListCtrl`con un bordo largo 10 pixel intorno a ogni area di lavoro, in un controllo elenco ( ).

[!code-cpp[NVC_MFCControlLadenDialog#20](../mfc/codesnippet/cpp/implementing-working-areas-in-list-controls_1.cpp)]

La chiamata a [ApproximateViewRect](../mfc/reference/clistctrl-class.md#approximateviewrect) è stata effettuata per ottenere una stima dell'area totale necessaria per visualizzare tutti gli elementi in un'area. Questa stima viene quindi suddivisa in quattro regioni e riempita con un bordo largo 5 pixel.

Nell'esempio successivo vengono assegnate le`rcWorkAreas`voci di elenco esistenti a`m_WorkAreaListCtrl`ogni gruppo ( ) e viene aggiornata la visualizzazione controlli ( ) per completare l'effetto.

[!code-cpp[NVC_MFCControlLadenDialog#21](../mfc/codesnippet/cpp/implementing-working-areas-in-list-controls_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
