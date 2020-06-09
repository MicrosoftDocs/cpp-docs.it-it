---
title: Implementazione di aree di lavoro nei controlli List
ms.date: 11/04/2016
helpviewer_keywords:
- list controls [MFC], working areas
- working areas in list control [MFC]
ms.assetid: fbbb356b-3359-4348-8603-f1cb114cadde
ms.openlocfilehash: abbf9dd823e13fab252b7af8f32338b0d801079b
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626379"
---
# <a name="implementing-working-areas-in-list-controls"></a>Implementazione di aree di lavoro nei controlli List

Per impostazione predefinita, un controllo elenco dispone tutti gli elementi in una griglia standard. Tuttavia, un altro metodo è supportato, aree di lavoro, che dispone gli elementi dell'elenco in gruppi rettangolari. Per un'immagine di un controllo elenco che implementa le aree di lavoro, vedere Utilizzo dei controlli elenco-visualizzazione nel Windows SDK.

> [!NOTE]
> Le aree di lavoro sono visibili solo quando il controllo elenco è in modalità icona o piccola. Tuttavia, tutte le aree di lavoro correnti vengono mantenute se la visualizzazione passa alla modalità report o elenco.

È possibile utilizzare le aree di lavoro per visualizzare un bordo vuoto (a sinistra, in alto e/o a destra degli elementi) o per visualizzare una barra di scorrimento orizzontale quando normalmente non ne è presente una. Un altro utilizzo comune consiste nel creare più aree di lavoro in cui gli elementi possono essere spostati o eliminati. Con questo metodo, è possibile creare aree in una singola visualizzazione con significati diversi. L'utente può quindi categorizzare gli elementi inserendoli in un'area diversa. Un esempio è costituito da una visualizzazione di un file system che ha un'area per i file di lettura/scrittura e un'altra area per i file di sola lettura. Se un elemento di file è stato spostato nell'area di sola lettura, diventa automaticamente di sola lettura. Se si trasferisce un file dall'area di sola lettura all'area di lettura/scrittura, il file verrà reso di lettura/scrittura.

`CListCtrl`fornisce diverse funzioni membro per la creazione e la gestione delle aree di lavoro nel controllo elenco. [GetWorkAreas](reference/clistctrl-class.md#getworkareas) e [SetWorkAreas](reference/clistctrl-class.md#setworkareas) recuperano e impostano una matrice di `CRect` oggetti (o `RECT` strutture), in cui sono archiviate le aree di lavoro attualmente implementate per il controllo elenco. Inoltre, [GetNumberOfWorkAreas](reference/clistctrl-class.md#getnumberofworkareas) Recupera il numero corrente di aree di lavoro per il controllo elenco (per impostazione predefinita, zero).

## <a name="items-and-working-areas"></a>Elementi e aree di lavoro

Quando viene creata un'area di lavoro, gli elementi che si trovano all'interno dell'area di lavoro diventano membri di esso. Analogamente, se un elemento viene spostato in un'area di lavoro, diventa un membro dell'area di lavoro in cui è stato spostato. Se un elemento non si trova all'interno di un'area di lavoro, diventa automaticamente membro della prima area di lavoro (indice 0). Se si desidera creare un elemento e posizionarlo all'interno di un'area di lavoro specifica, sarà necessario creare l'elemento e spostarlo nell'area di lavoro desiderata con una chiamata a [SetItemPosition](reference/clistctrl-class.md#setitemposition). Nel secondo esempio riportato di seguito viene illustrata questa tecnica.

Nell'esempio seguente vengono implementate quattro aree `rcWorkAreas` di lavoro () di uguale dimensione con un bordo a 10 pixel intorno a ogni area di lavoro, in un controllo elenco ( `m_WorkAreaListCtrl` ).

[!code-cpp[NVC_MFCControlLadenDialog#20](codesnippet/cpp/implementing-working-areas-in-list-controls_1.cpp)]

La chiamata a [ApproximateViewRect](reference/clistctrl-class.md#approximateviewrect) è stata eseguita per ottenere una stima dell'area totale necessaria per visualizzare tutti gli elementi in un'area. Questa stima viene quindi divisa in quattro aree e riempita con un bordo di 5 pixel.

Nell'esempio successivo vengono assegnati gli elementi elenco esistenti a ogni gruppo ( `rcWorkAreas` ) e viene aggiornata la visualizzazione controlli ( `m_WorkAreaListCtrl` ) per completare l'effetto.

[!code-cpp[NVC_MFCControlLadenDialog#21](codesnippet/cpp/implementing-working-areas-in-list-controls_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](using-clistctrl.md)<br/>
[Controlli](controls-mfc.md)
