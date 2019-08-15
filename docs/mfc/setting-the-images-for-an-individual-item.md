---
title: Impostazione delle immagini per un singolo elemento
ms.date: 11/04/2016
helpviewer_keywords:
- extended combo boxes [MFC], images
- images [MFC], combo box items
ms.assetid: bde83db8-23a7-4e35-837a-c86447d2c0af
ms.openlocfilehash: 177c06acfe665a43921b19407d9d357d4545e748
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69511284"
---
# <a name="setting-the-images-for-an-individual-item"></a>Impostazione delle immagini per un singolo elemento

I diversi tipi di immagini utilizzate dall'elemento della casella combinata estesa sono determinati dai valori nei membri *IImage*, *iSelectedImage*e *iOverlay* della struttura [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) . Ogni valore è l'indice di un'immagine nell'elenco di immagini associato del controllo. Per impostazione predefinita, questi membri vengono impostati su 0, facendo in modo che il controllo non visualizzi alcuna immagine per l'elemento. Se si desidera utilizzare immagini per un elemento specifico, è possibile modificare la struttura di conseguenza, quando si inserisce l'elemento della casella combinata o si modifica un elemento della casella combinata esistente.

## <a name="setting-the-image-for-a-new-item"></a>Impostazione dell'immagine per un nuovo elemento

Se si inserisce un nuovo elemento, inizializzare i membri della struttura *IImage*, *iSelectedImage*e *iOverlay* con i valori appropriati e quindi inserire l'elemento con una chiamata a [CComboBoxEx:: InsertItem](../mfc/reference/ccomboboxex-class.md#insertitem).

Nell'esempio seguente viene inserito un nuovo elemento della casella combinata`cbi`estesa () nel controllo casella combinata estesa`m_comboEx`(), fornendo gli indici per tutti e tre gli Stati dell'immagine:

[!code-cpp[NVC_MFCControlLadenDialog#12](../mfc/codesnippet/cpp/setting-the-images-for-an-individual-item_1.cpp)]

## <a name="setting-the-image-for-an-existing-item"></a>Impostazione dell'immagine per un elemento esistente

Se si modifica un elemento esistente, è necessario usare il membro *mask* di una struttura **COMBOBOXEXITEM** .

#### <a name="to-modify-an-existing-item-to-use-images"></a>Per modificare un elemento esistente per l'utilizzo di immagini

1. Dichiarare una struttura **COMBOBOXEXITEM** e impostare il membro dati *mask* sui valori che si desidera modificare.

1. Utilizzando questa struttura, effettuare una chiamata a [CComboBoxEx:: GetItem](../mfc/reference/ccomboboxex-class.md#getitem).

1. Modificare i membri *mask*, *IImage*e *iSelectedImage* della struttura appena restituita, usando i valori appropriati.

1. Effettuare una chiamata a [CComboBoxEx:: SetItem](../mfc/reference/ccomboboxex-class.md#setitem), passando la struttura modificata.

Nell'esempio seguente viene illustrata questa procedura scambiando le immagini selezionate e non selezionate della terza voce della casella combinata estesa:

[!code-cpp[NVC_MFCControlLadenDialog#13](../mfc/codesnippet/cpp/setting-the-images-for-an-individual-item_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Uso di CComboBoxEx](../mfc/using-ccomboboxex.md)<br/>
[Controlli](../mfc/controls-mfc.md)
