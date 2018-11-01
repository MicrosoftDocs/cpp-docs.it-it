---
title: Impostazione delle immagini per un singolo elemento
ms.date: 11/04/2016
helpviewer_keywords:
- extended combo boxes [MFC], images
- images [MFC], combo box items
ms.assetid: bde83db8-23a7-4e35-837a-c86447d2c0af
ms.openlocfilehash: 61e152534dbea09fbca0af819b0847e82a1c4146
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50512073"
---
# <a name="setting-the-images-for-an-individual-item"></a>Impostazione delle immagini per un singolo elemento

I diversi tipi di immagini utilizzate dall'elemento della casella combinata estesi vengono determinati in base ai valori di *iImage*, *iSelectedImage*, e *iOverlay* i membri del [ COMBOBOXEXITEM](/windows/desktop/api/commctrl/ns-commctrl-tagcomboboxexitema) struttura. Ogni valore è l'indice di un'immagine nell'elenco delle immagini associate del controllo. Per impostazione predefinita, questi membri sono impostati su 0, causando il controllo da non visualizzare alcuna immagine dell'elemento. Se si desidera usare le immagini di un elemento specifico, è possibile modificare la struttura di conseguenza, quando si inserisce l'elemento della casella combinata o modificando un elemento di casella combinata esistente.

## <a name="setting-the-image-for-a-new-item"></a>L'impostazione dell'immagine per un nuovo elemento

Se si inserisce un nuovo elemento, inizializzare il *iImage*, *iSelectedImage*, e *iOverlay* strutturare i membri con i valori appropriati e quindi inserire l'elemento con una chiamata a [CComboBoxEx:: InsertItem](../mfc/reference/ccomboboxex-class.md#insertitem).

L'esempio seguente inserisce un nuovo elemento della casella combinata estesa (`cbi`) nel controllo casella combinata estesa (`m_comboEx`), fornendo gli indici per tutte e tre gli stati di immagine:

[!code-cpp[NVC_MFCControlLadenDialog#12](../mfc/codesnippet/cpp/setting-the-images-for-an-individual-item_1.cpp)]

## <a name="setting-the-image-for-an-existing-item"></a>L'impostazione dell'immagine per un elemento esistente

Se si modifica un elemento esistente, è necessario lavorare con i *maschera* membro di un **COMBOBOXEXITEM** struttura.

#### <a name="to-modify-an-existing-item-to-use-images"></a>Per modificare un elemento esistente per usare le immagini

1. Dichiarare un **COMBOBOXEXITEM** struttura e impostare le *maschera* membro dati per i valori si è interessati in caso di modifica.

1. Con questa struttura, effettuare una chiamata a [CComboBoxEx:: GetItem](../mfc/reference/ccomboboxex-class.md#getitem).

1. Modificare il *maschera*, *iImage*, e *iSelectedImage* membri di struttura appena restituita, usando i valori appropriati.

1. Effettuare una chiamata a [CComboBoxEx:: SetItem](../mfc/reference/ccomboboxex-class.md#setitem), passando la struttura modificata.

Nell'esempio seguente viene illustrata questa procedura scambiando le immagini selezionate e del terzo elemento casella combinata estesa:

[!code-cpp[NVC_MFCControlLadenDialog#13](../mfc/codesnippet/cpp/setting-the-images-for-an-individual-item_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Uso di CComboBoxEx](../mfc/using-ccomboboxex.md)<br/>
[Controlli](../mfc/controls-mfc.md)

