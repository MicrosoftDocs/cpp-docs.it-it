---
title: Utilizzo degli elenchi di immagini in un controllo casella combinata estesa
ms.date: 11/04/2016
helpviewer_keywords:
- image lists [MFC], combo boxes
- extended combo boxes [MFC], images
- images [MFC], combo box items
ms.assetid: dfff25fe-af70-47a2-8032-3901d1e6842d
ms.openlocfilehash: 6e4d983d53e49fc8d9c80c206f1a23078eb82f61
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57266991"
---
# <a name="using-image-lists-in-an-extended-combo-box-control"></a>Utilizzo degli elenchi di immagini in un controllo casella combinata estesa

La funzionalità principale di controlli casella combinata estesa è la possibilità di associare le immagini da un elenco di immagini a singoli elementi in un controllo casella combinata. Ogni elemento è in grado di visualizzare tre immagini diverse: una per il relativo stato selezionato, uno per lo stato per e un terzo per l'immagine sovrapposta.

La procedura seguente consente di associare un elenco di immagini con un controllo casella combinata estesa:

### <a name="to-associate-an-image-list-with-an-extended-combo-box-control"></a>Per associare un elenco di immagini a un controllo casella combinata estesa

1. Creare un nuovo elenco di immagini (o usare un oggetto elenco immagini esistente), usando il [CImageList](../mfc/reference/cimagelist-class.md) costruttore e memorizza il puntatore risultante.

1. Inizializzare il nuovo oggetto elenco immagini tramite una chiamata [CImageList:: Create](../mfc/reference/cimagelist-class.md#create). Il codice seguente è un esempio di questa chiamata.

   [!code-cpp[NVC_MFCControlLadenDialog#10](../mfc/codesnippet/cpp/using-image-lists-in-an-extended-combo-box-control_1.cpp)]

1. Aggiungere immagini facoltative per ogni possibile stato: selezionato o non selezionato e un overlay. Il codice seguente aggiunge tre immagini predefinite.

   [!code-cpp[NVC_MFCControlLadenDialog#11](../mfc/codesnippet/cpp/using-image-lists-in-an-extended-combo-box-control_2.cpp)]

1. Associare l'elenco di immagini con il controllo con una chiamata a [CComboBoxEx:: SetImageList](../mfc/reference/ccomboboxex-class.md#setimagelist).

Una volta l'elenco di immagini associato al controllo, è possibile specificare singolarmente le immagini di che ogni elemento verrà utilizzato per i tre stati possibili. Per altre informazioni, vedere [impostazione delle immagini per un singolo elemento](../mfc/setting-the-images-for-an-individual-item.md).

## <a name="see-also"></a>Vedere anche

[Uso di CComboBoxEx](../mfc/using-ccomboboxex.md)<br/>
[Controlli](../mfc/controls-mfc.md)
