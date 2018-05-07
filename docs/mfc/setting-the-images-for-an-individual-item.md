---
title: Impostazione delle immagini per un singolo elemento | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- extended combo boxes [MFC], images
- images [MFC], combo box items
ms.assetid: bde83db8-23a7-4e35-837a-c86447d2c0af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b7f3dbdf4d386e40802d74459dd2854035b5b7c8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="setting-the-images-for-an-individual-item"></a>Impostazione delle immagini per un singolo elemento
I diversi tipi di immagini utilizzato dall'elemento della casella combinata estesa vengono determinati in base ai valori di `iImage`, **iSelectedImage**, e **iOverlay** i membri del [COMBOBOXEXITEM ](http://msdn.microsoft.com/library/windows/desktop/bb775746) struttura. Ogni valore è l'indice di un'immagine nell'elenco di immagini associato del controllo. Per impostazione predefinita, questi membri impostati su 0, il controllo non visualizza alcuna immagine per l'elemento. Se si desidera utilizzare le immagini di un elemento specifico, è possibile modificare la struttura di conseguenza, quando si inserisce l'elemento casella combinata o modificando un elemento casella combinata.  
  
## <a name="setting-the-image-for-a-new-item"></a>L'impostazione dell'immagine per un nuovo elemento  
 Se si inserisce un nuovo elemento, inizializzare il `iImage`, **iSelectedImage**, e **iOverlay** i membri con i valori appropriati della struttura e quindi inserire l'elemento con una chiamata a [ CComboBoxEx:: InsertItem](../mfc/reference/ccomboboxex-class.md#insertitem).  
  
 L'esempio seguente inserisce un nuovo elemento della casella combinata estesa (`cbi`) nel controllo casella combinata estesa (`m_comboEx`), fornendo gli indici per tutte e tre stati dell'immagine:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#12](../mfc/codesnippet/cpp/setting-the-images-for-an-individual-item_1.cpp)]  
  
## <a name="setting-the-image-for-an-existing-item"></a>L'impostazione dell'immagine per un elemento esistente  
 Se si modifica un elemento esistente, è necessario utilizzare il **mask** membro di un **COMBOBOXEXITEM** struttura.  
  
#### <a name="to-modify-an-existing-item-to-use-images"></a>Per modificare un elemento esistente per l'utilizzo di immagini  
  
1.  Dichiarare un **COMBOBOXEXITEM** struttura e impostare il **mask** membro dati per i valori che si desidera modificare.  
  
2.  Utilizzare questa struttura, effettuare una chiamata a [CComboBoxEx:: GetItem](../mfc/reference/ccomboboxex-class.md#getitem).  
  
3.  Modificare il **mask**, `iImage`, e **iSelectedImage** membri della struttura restituita appena, usando i valori appropriati.  
  
4.  Effettuare una chiamata a [CComboBoxEx:: SetItem](../mfc/reference/ccomboboxex-class.md#setitem), passando la struttura modificata.  
  
 Nell'esempio seguente viene illustrata questa procedura scambiando le immagini selezionate e del terzo elemento casella combinata estesa:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#13](../mfc/codesnippet/cpp/setting-the-images-for-an-individual-item_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controlli](../mfc/controls-mfc.md)

