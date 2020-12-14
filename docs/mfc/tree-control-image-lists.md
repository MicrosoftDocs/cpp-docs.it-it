---
description: 'Altre informazioni su: elenchi di immagini del controllo Tree'
title: Elenchi di immagini del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- images [MFC], lists in tree controls
- tree controls [MFC], image lists
- CTreeCtrl class [MFC], image lists
ms.assetid: f560c4f2-20d2-4d28-ac33-4017e65fb0a6
ms.openlocfilehash: ce76cca5642208d4158b36c45c150202270258e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264154"
---
# <a name="tree-control-image-lists"></a>Elenchi di immagini del controllo Tree

A ogni elemento in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) può essere associata una coppia di immagini bitmap. Le immagini vengono visualizzate sul lato sinistro dell'etichetta di un elemento. Quando l'elemento è selezionato, viene visualizzata un'immagine e l'altra viene visualizzata quando l'elemento non è selezionato. Ad esempio, un elemento potrebbe visualizzare una cartella aperta quando è selezionata e una cartella chiusa quando non è selezionata.

Per usare le immagini degli elementi, è necessario creare un elenco di immagini costruendo un oggetto [CImageList](../mfc/reference/cimagelist-class.md) e usando la funzione [CImageList:: create](../mfc/reference/cimagelist-class.md#create) per creare l'elenco di immagini associato. Aggiungere quindi le bitmap desiderate all'elenco e associare l'elenco al controllo albero usando la funzione membro [Seimagine](../mfc/reference/ctreectrl-class.md#setimagelist) . Per impostazione predefinita, tutti gli elementi visualizzano la prima immagine nell'elenco di immagini per gli stati selezionati e non selezionati. È possibile modificare il comportamento predefinito per un particolare elemento specificando gli indici delle immagini selezionate e non selezionate quando si aggiunge l'elemento al controllo albero utilizzando la funzione membro [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) . È possibile modificare gli indici dopo l'aggiunta di un elemento utilizzando la funzione membro [SetItemImage](../mfc/reference/ctreectrl-class.md#setitemimage) .

Gli elenchi di immagini di un controllo struttura ad albero possono contenere anche immagini sovrapposte, progettate per essere sovrapposte alle immagini di elementi. Un valore diverso da zero nei bit da 8 a 11 dello stato di un elemento del controllo Tree specifica l'indice in base 1 di un'immagine sovrapposta (0 indica nessuna immagine sovrapposta). Poiché viene usato un indice a 4 bit, in base uno, le immagini sovrapposte devono essere tra le prime 15 immagini negli elenchi di immagini. Per ulteriori informazioni sugli stati degli elementi del controllo Tree, vedere [Cenni preliminari sugli stati degli elementi del controllo Tree](../mfc/tree-control-item-states-overview.md) più indietro in questo argomento.

Se viene specificato un elenco di immagini di stato, un controllo struttura ad albero riserva spazio a sinistra dell'icona di ogni elemento per un'immagine di stato. Un'applicazione può utilizzare le immagini di stato, ad esempio caselle di controllo selezionate e deselezionate, per indicare gli Stati degli elementi definiti dall'applicazione. Un valore diverso da zero in bits da 12 a 15 specifica l'indice in base uno di un'immagine di stato (0 indica nessuna immagine di stato).

Specificando il valore **I_IMAGECALLBACK** anziché l'indice di un'immagine, è possibile ritardare la specifica dell'immagine selezionata o non selezionata fino a quando l'elemento sta per essere ridisegnato. **I_IMAGECALLBACK** indica al controllo albero di eseguire una query sull'applicazione per l'indice inviando il messaggio di notifica [TVN_GETDISPINFO](/windows/win32/Controls/tvn-getdispinfo) .

La funzione membro [Getimagine](../mfc/reference/ctreectrl-class.md#getimagelist) recupera l'handle dell'elenco immagini di un controllo albero. Questa funzione è utile se è necessario aggiungere altre immagini all'elenco. Per ulteriori informazioni sugli elenchi di immagini, [vedere Utilizzo di CImageList](../mfc/using-cimagelist.md), [CImageList](../mfc/reference/cimagelist-class.md) in riferimenti a *MFC* ed elenchi di [Immagini](/windows/win32/controls/image-lists) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
