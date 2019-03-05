---
title: Elenchi di immagini del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- images [MFC], lists in tree controls
- tree controls [MFC], image lists
- CTreeCtrl class [MFC], image lists
ms.assetid: f560c4f2-20d2-4d28-ac33-4017e65fb0a6
ms.openlocfilehash: f4dc4f0d7b2cfb78b07b23802054f119da9cbbc3
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57290677"
---
# <a name="tree-control-image-lists"></a>Elenchi di immagini del controllo Tree

Ogni elemento in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) può avere una coppia di immagini bitmap associata. Le immagini vengono visualizzate a sinistra dell'etichetta di un elemento. Quando l'elemento è selezionato, e l'altra viene visualizzata quando l'elemento non è selezionata, viene visualizzata un'immagine. Ad esempio, un elemento potrebbe visualizzare una cartella aperta quando viene selezionato e una cartella chiusa quando non è selezionata.

Per usare le immagini degli elementi, è necessario creare un elenco di immagini mediante la costruzione di un [CImageList](../mfc/reference/cimagelist-class.md) oggetto e utilizzando il [CImageList:: Create](../mfc/reference/cimagelist-class.md#create) funzione per creare l'elenco di immagini associato. Quindi aggiungere le bitmap desiderate nell'elenco e associare l'elenco con il controllo struttura ad albero usando il [SetImageList](../mfc/reference/ctreectrl-class.md#setimagelist) funzione membro. Per impostazione predefinita, tutti gli elementi visualizzano la prima immagine nell'elenco di immagini per entrambi gli stati selezionati e per. È possibile modificare il comportamento predefinito per un particolare elemento specificando gli indici delle immagini selezionate e per quando si aggiunge l'elemento per il controllo struttura ad albero usando il [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) funzione membro. È possibile modificare gli indici dopo l'aggiunta di un elemento usando il [funzione membro SetItemImage](../mfc/reference/ctreectrl-class.md#setitemimage) funzione membro.

Elenchi di immagini di un controllo albero possono contenere anche immagini sovrapposte, sono progettate per le immagini degli elementi sovrapposti. Un valore diverso da zero in bit 8 a 11 dello stato dell'elemento di un controllo albero specifica l'indice in base uno di un'immagine sovrapposta (0 indica nessuna immagine sovrapposta). Poiché viene utilizzato un indice 4 bit, in base uno, immagini sovrapposte devono essere tra i primi 15 immagini negli elenchi di immagini. Per altre informazioni sugli stati di elemento di controllo struttura ad albero, vedere [panoramica degli stati degli elementi di controllo albero](../mfc/tree-control-item-states-overview.md) più indietro in questo argomento.

Se viene specificato un elenco di immagini di stato, un controllo albero riserva spazio a sinistra dell'icona di ciascun elemento per un'immagine di stato. Un'applicazione può usare immagini di stato, ad esempio caselle di controllo selezionate e deselezionate, per indicare gli stati degli elementi definiti dall'applicazione. Un valore diverso da zero in 12 a 15 bit specifica l'indice in base uno di un'immagine di stato (0 non indica nessuna immagine di stato).

Specificando il **I_IMAGECALLBACK** valore anziché l'indice di un'immagine, è possibile ritardare la specifica l'immagine selezionata o per fino a quando l'elemento sta per essere ridisegnata. **I_IMAGECALLBACK** si indica al controllo albero per l'applicazione per l'indice di query mediante l'invio di [TVN_GETDISPINFO](/windows/desktop/Controls/tvn-getdispinfo) messaggio di notifica.

Il [funzione membro GetImageList](../mfc/reference/ctreectrl-class.md#getimagelist) funzione membro recupera l'handle dell'elenco di immagini di un controllo struttura ad albero. Questa funzione è utile se è necessario aggiungere altre immagini all'elenco. Per altre informazioni sugli elenchi di immagini, vedere [utilizzo di CImageList](../mfc/using-cimagelist.md), [CImageList](../mfc/reference/cimagelist-class.md) nel *riferimenti alla libreria MFC*, e [elenchi di immagini](/windows/desktop/controls/image-lists) di Windows SDK.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
