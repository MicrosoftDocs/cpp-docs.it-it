---
title: Utilizzo di elenchi di immagini con controlli Header
ms.date: 11/04/2016
helpviewer_keywords:
- header controls [MFC], image lists
- CHeaderCtrl class [MFC], image lists
- image lists [MFC], header controls
ms.assetid: d5e9b310-6278-406c-909c-eefa09549a47
ms.openlocfilehash: 8002c16d1cdf5e0683b642001409b6da9c260660
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366463"
---
# <a name="using-image-lists-with-header-controls"></a>Utilizzo di elenchi di immagini con controlli Header

Gli elementi di intestazione hanno la possibilità di visualizzare un'immagine all'interno di un elemento di intestazione. Questa immagine, archiviata in un elenco immagini associato, è 16 x 16 pixel e ha le stesse caratteristiche delle immagini icona utilizzate in un controllo visualizzazione elenco. Per implementare correttamente questo comportamento, è innanzitutto necessario creare e inizializzare l'elenco immagini, associare l'elenco al controllo intestazione e quindi modificare gli attributi dell'elemento di intestazione che visualizzerà l'immagine.

Nella procedura seguente vengono illustrati i dettagli, utilizzando`m_pHdrCtrl`un puntatore a un`m_pHdrImages`controllo intestazione ( ) e un puntatore a un elenco immagini ( ).

### <a name="to-display-an-image-in-a-header-item"></a>Per visualizzare un'immagine in un elemento di intestazioneTo display an image in a header item

1. Costruire un nuovo elenco immagini (o utilizzare un oggetto elenco immagini esistente) utilizzando il [CImageList](../mfc/reference/cimagelist-class.md) costruttore, archiviando il puntatore risultante.

1. Inizializzare il nuovo oggetto elenco immagini chiamando [CImageList::Create](../mfc/reference/cimagelist-class.md#create). Il codice seguente è un esempio di questa chiamata.

   [!code-cpp[NVC_MFCControlLadenDialog#15](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_1.cpp)]

1. Aggiungere le immagini per ogni elemento di intestazione. Il codice seguente aggiunge due immagini predefinite.

   [!code-cpp[NVC_MFCControlLadenDialog#16](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_2.cpp)]

1. Associare l'elenco immagini al controllo intestazione con una chiamata a [CHeaderCtrl::SetImageList](../mfc/reference/cheaderctrl-class.md#setimagelist).

1. Modificare l'elemento di intestazione per visualizzare un'immagine dall'elenco immagini associato. Nell'esempio seguente la prima `m_phdrImages`immagine, from , `m_pHdrCtrl`viene assegnata alla prima voce di intestazione, .

   [!code-cpp[NVC_MFCControlLadenDialog#17](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_3.cpp)]

Per informazioni dettagliate sui valori dei parametri utilizzati, consultare il [corrispondente CHeaderCtrl](../mfc/reference/cheaderctrl-class.md).

> [!NOTE]
> È possibile avere più controlli utilizzando lo stesso elenco immagini. Ad esempio, in un controllo visualizzazione elenco standard, potrebbe essere presente un elenco immagini (di immagini da 16 x 16 pixel) utilizzato sia dalla visualizzazione icone piccola di un controllo visualizzazione elenco che dalle voci di intestazione del controllo visualizzazione elenco.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)
