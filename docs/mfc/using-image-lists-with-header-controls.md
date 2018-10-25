---
title: Utilizzo di elenchi immagini con controlli Header | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- header controls [MFC], image lists
- CHeaderCtrl class [MFC], image lists
- image lists [MFC], header controls
ms.assetid: d5e9b310-6278-406c-909c-eefa09549a47
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b12f3ff78f88029067d3b77296979a173dad494d
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50079649"
---
# <a name="using-image-lists-with-header-controls"></a>Utilizzo di elenchi di immagini con controlli Header

Gli elementi di intestazione hanno la possibilità di visualizzare un'immagine all'interno di un elemento di intestazione. Questa immagine, archiviata in un elenco di immagini associato, è 16 x 16 pixel e ha le stesse caratteristiche come le immagini icona utilizzate in un controllo visualizzazione elenco. Per implementare correttamente questo comportamento, è necessario innanzitutto creare e inizializzare l'elenco di immagini associare l'elenco di controllo header e quindi modificare gli attributi dell'elemento dell'intestazione che visualizzerà l'immagine.

La procedura seguente illustra nel dettaglio, utilizzando un puntatore a un controllo header (`m_pHdrCtrl`) e un puntatore a un elenco di immagini (`m_pHdrImages`).

### <a name="to-display-an-image-in-a-header-item"></a>Per visualizzare un'immagine in un elemento di intestazione

1. Creare un nuovo elenco di immagini (o usare un oggetto elenco immagini) usando il [CImageList](../mfc/reference/cimagelist-class.md) costruttore, memorizzando il puntatore risultante.

1. Inizializzare il nuovo oggetto elenco immagini tramite una chiamata [CImageList:: Create](../mfc/reference/cimagelist-class.md#create). Il codice seguente è un esempio di questa chiamata.

   [!code-cpp[NVC_MFCControlLadenDialog#15](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_1.cpp)]

1. Aggiungere le immagini per ogni elemento dell'intestazione. Il codice seguente aggiunge due immagini predefinite.

   [!code-cpp[NVC_MFCControlLadenDialog#16](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_2.cpp)]

1. Associare l'elenco di immagini con il controllo di intestazione con una chiamata a [CHeaderCtrl:: SetImageList](../mfc/reference/cheaderctrl-class.md#setimagelist).

1. Modificare l'elemento dell'intestazione per visualizzare un'immagine dall'elenco di immagini associato. L'esempio seguente assegna la prima immagine, dalla `m_phdrImages`, al primo elemento di intestazione, `m_pHdrCtrl`.

   [!code-cpp[NVC_MFCControlLadenDialog#17](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_3.cpp)]

Per informazioni dettagliate sui valori di parametro utilizzato, consultare il pertinenti [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md).

> [!NOTE]
>  È possibile avere più controlli usando lo stesso elenco di immagini. Ad esempio, in un controllo visualizzazione elenco standard, potrebbe esserci un elenco di immagini (delle immagini di 16 x 16 pixel) usato da entrambi la visualizzazione dell'icona piccola di un controllo visualizzazione elenco e gli elementi dell'intestazione del controllo visualizzazione elenco.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)

