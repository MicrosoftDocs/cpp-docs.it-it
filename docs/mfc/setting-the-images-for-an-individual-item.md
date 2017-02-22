---
title: "Impostazione delle immagini per un singolo elemento | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "caselle combinate estese, immagini"
  - "immagini [C++], elementi di casella combinata"
ms.assetid: bde83db8-23a7-4e35-837a-c86447d2c0af
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Impostazione delle immagini per un singolo elemento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I diversi tipi di immagini utilizzate dall'elemento casella combinata estesa sono determinati dai valori in `iImage`, **iSelectedImage** e membri di **iOverlay** della struttura di [COMBOBOXEXITEM](http://msdn.microsoft.com/library/windows/desktop/bb775746).  Ogni valore è l'indice di un'immagine nell'elenco immagini collegato del controllo.  Per impostazione predefinita, questi membri vengono impostate su 0, e il controllo non è visualizzata un'immagine per l'elemento.  Se si desidera utilizzare immagini per un elemento specifico, è possibile modificare la struttura, uno quando si inserisce l'elemento casella combinata o modifica un elemento della casella combinata esistente.  
  
## Impostare l'immagine per un nuovo elemento  
 Se si incolla un nuovo elemento, inizializzare `iImage`, **iSelectedImage** e i membri della struttura di **iOverlay** con i valori appropriati e quindi inserire l'elemento con una chiamata a [CComboBoxEx::InsertItem](../Topic/CComboBoxEx::InsertItem.md).  
  
 Nell'esempio seguente viene inserito un nuovo elemento della casella combinata estesa \(`cbi`\) nel controllo casella combinata estesa \(`m_comboEx`\), fornendo gli indici per i tre stati di immagine:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#12](../mfc/codesnippet/CPP/setting-the-images-for-an-individual-item_1.cpp)]  
  
## Impostare l'immagine per un elemento esistente  
 Se si modifica un elemento esistente, è necessario utilizzare il membro di **maschera** di una struttura di **COMBOBOXEXITEM**.  
  
#### Per modificare un elemento esistente per utilizzare immagini  
  
1.  Dichiarare una struttura di **COMBOBOXEXITEM** e impostare il membro dati di **maschera** i valori che si desidera modificare.  
  
2.  Utilizzando questa struttura, effettuare una chiamata a [CComboBoxEx::GetItem](../Topic/CComboBoxEx::GetItem.md).  
  
3.  Modificare **maschera**, `iImage` e i membri di **iSelectedImage** struttura appena restituita, utilizzando i valori appropriati.  
  
4.  Fare una chiamata a [CComboBoxEx::SetItem](../Topic/CComboBoxEx::SetItem.md), passando nella struttura modificata.  
  
 Nell'esempio seguente viene illustrata questa procedura scambiando le immagini selezionate e unchecked del terzo elemento casella combinata estesa:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#13](../mfc/codesnippet/CPP/setting-the-images-for-an-individual-item_2.cpp)]  
  
## Vedere anche  
 [Utilizzo di CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controlli](../mfc/controls-mfc.md)