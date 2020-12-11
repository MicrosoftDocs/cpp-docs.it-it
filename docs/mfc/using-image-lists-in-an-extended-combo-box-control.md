---
description: 'Altre informazioni su: uso degli elenchi di immagini in un controllo casella combinata estesa'
title: Utilizzo degli elenchi di immagini in un controllo casella combinata estesa
ms.date: 11/04/2016
helpviewer_keywords:
- image lists [MFC], combo boxes
- extended combo boxes [MFC], images
- images [MFC], combo box items
ms.assetid: dfff25fe-af70-47a2-8032-3901d1e6842d
ms.openlocfilehash: 9fb4b70f91a8ffc3d0175ec855cd005de10da280
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154370"
---
# <a name="using-image-lists-in-an-extended-combo-box-control"></a>Utilizzo degli elenchi di immagini in un controllo casella combinata estesa

La funzionalità principale dei controlli casella combinata estesa è la possibilità di associare le immagini da un elenco di immagini a singoli elementi in un controllo casella combinata. Ogni elemento è in grado di visualizzare tre diverse immagini: una per lo stato selezionato, una per lo stato non selezionato e una terza per un'immagine sovrapposta.

La procedura seguente associa un elenco di immagini a un controllo casella combinata estesa:

### <a name="to-associate-an-image-list-with-an-extended-combo-box-control"></a>Per associare un elenco di immagini a un controllo casella combinata estesa

1. Costruire un nuovo elenco di immagini (o usare un oggetto elenco immagini esistente), usando il costruttore [CImageList](../mfc/reference/cimagelist-class.md) e archiviando il puntatore risultante.

1. Inizializzare il nuovo oggetto elenco immagini chiamando [CImageList:: create](../mfc/reference/cimagelist-class.md#create). Il codice seguente è un esempio di questa chiamata.

   [!code-cpp[NVC_MFCControlLadenDialog#10](../mfc/codesnippet/cpp/using-image-lists-in-an-extended-combo-box-control_1.cpp)]

1. Aggiungere immagini facoltative per ogni possibile stato: selezionato o non selezionato e una sovrimpressione. Il codice seguente aggiunge tre immagini predefinite.

   [!code-cpp[NVC_MFCControlLadenDialog#11](../mfc/codesnippet/cpp/using-image-lists-in-an-extended-combo-box-control_2.cpp)]

1. Associare l'elenco di immagini al controllo con una chiamata a [CComboBoxEx:: Seimagine](../mfc/reference/ccomboboxex-class.md#setimagelist).

Una volta che l'elenco di immagini è stato associato al controllo, è possibile specificare singolarmente le immagini che utilizzeranno ogni elemento per i tre stati possibili. Per ulteriori informazioni, vedere [impostazione delle immagini per un singolo elemento](../mfc/setting-the-images-for-an-individual-item.md).

## <a name="see-also"></a>Vedi anche

[Utilizzo di CComboBoxEx](../mfc/using-ccomboboxex.md)<br/>
[Controlli](../mfc/controls-mfc.md)
