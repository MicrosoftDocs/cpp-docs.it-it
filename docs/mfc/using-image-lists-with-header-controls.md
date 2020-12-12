---
description: 'Altre informazioni su: uso di elenchi di immagini con controlli Header'
title: Utilizzo di elenchi di immagini con controlli Header
ms.date: 11/04/2016
helpviewer_keywords:
- header controls [MFC], image lists
- CHeaderCtrl class [MFC], image lists
- image lists [MFC], header controls
ms.assetid: d5e9b310-6278-406c-909c-eefa09549a47
ms.openlocfilehash: 549f54c9fae7e0e0a63c726f4b75d2adeb38eef8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322731"
---
# <a name="using-image-lists-with-header-controls"></a>Utilizzo di elenchi di immagini con controlli Header

Gli elementi di intestazione sono in grado di visualizzare un'immagine all'interno di un elemento di intestazione. Questa immagine, archiviata in un elenco di immagini associato, è 16 x 16 pixel e presenta le stesse caratteristiche delle immagini icona usate in un controllo di visualizzazione elenco. Per implementare correttamente questo comportamento, è necessario innanzitutto creare e inizializzare l'elenco di immagini, associare l'elenco al controllo intestazione e quindi modificare gli attributi dell'elemento intestazione che visualizzerà l'immagine.

Nella procedura riportata di seguito vengono illustrati i dettagli, utilizzando un puntatore a un controllo intestazione ( `m_pHdrCtrl` ) e un puntatore a un elenco immagini ( `m_pHdrImages` ).

### <a name="to-display-an-image-in-a-header-item"></a>Per visualizzare un'immagine in un elemento di intestazione

1. Costruire un nuovo elenco di immagini (o usare un oggetto elenco immagini esistente) usando il costruttore [CImageList](../mfc/reference/cimagelist-class.md) , archiviando il puntatore risultante.

1. Inizializzare il nuovo oggetto elenco immagini chiamando [CImageList:: create](../mfc/reference/cimagelist-class.md#create). Il codice seguente è un esempio di questa chiamata.

   [!code-cpp[NVC_MFCControlLadenDialog#15](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_1.cpp)]

1. Aggiungere le immagini per ogni elemento di intestazione. Il codice seguente aggiunge due immagini predefinite.

   [!code-cpp[NVC_MFCControlLadenDialog#16](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_2.cpp)]

1. Associare l'elenco di immagini al controllo intestazione con una chiamata a [CHeaderCtrl:: Seimagine](../mfc/reference/cheaderctrl-class.md#setimagelist).

1. Modificare l'elemento dell'intestazione per visualizzare un'immagine dall'elenco di immagini associato. Nell'esempio seguente viene assegnata la prima immagine, da `m_phdrImages` , alla prima voce di intestazione `m_pHdrCtrl` .

   [!code-cpp[NVC_MFCControlLadenDialog#17](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_3.cpp)]

Per informazioni dettagliate sui valori dei parametri usati, consultare i [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)pertinenti.

> [!NOTE]
> È possibile avere più controlli che usano lo stesso elenco di immagini. Ad esempio, in un controllo di visualizzazione elenco standard, potrebbe essere presente un elenco di immagini (di 16 immagini da 16 x 16 pixel) utilizzato dalla visualizzazione icona piccola di un controllo di visualizzazione elenco e dagli elementi di intestazione del controllo visualizzazione elenco.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)
