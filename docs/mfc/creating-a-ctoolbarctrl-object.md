---
title: Creazione di un oggetto CToolBarCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CToolBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- toolbar controls [MFC], creating
- CToolBarCtrl class [MFC], creating toolbars
ms.assetid: a4f6bf0c-0195-4dbf-a09e-aee503e19dc3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6c5e2ee8c0e2239de86252b3d0fb8ec0ab7cc182
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-a-ctoolbarctrl-object"></a>Creazione di un oggetto CToolBarCtrl
[CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) gli oggetti contengono diverse strutture di dati interni, ovvero un elenco delle immagini bitmap, un elenco di stringhe di etichetta pulsante e un elenco di `TBBUTTON` strutture, ovvero che associare un'immagine e/o di stringa con la posizione, lo stile, lo stato, e ID di comando del pulsante. Ognuno degli elementi di queste strutture di dati viene definito un indice in base zero. Prima di poter usare un `CToolBarCtrl` dell'oggetto, è necessario impostare queste strutture di dati. Per un elenco delle strutture di dati, vedere [controlli barra degli strumenti](controls-mfc.md) in Windows SDK. L'elenco di stringhe è utilizzabile solo per le etichette di pulsante; è possibile recuperare le stringhe dalla barra degli strumenti.  
  
 Per utilizzare un oggetto `CToolBarCtrl`, in genere vengono effettuate le seguenti operazioni:  
  
### <a name="to-use-a-ctoolbarctrl-object"></a>Per utilizzare un oggetto CToolBarCtrl  
  
1.  Costruire il [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto.  
  
2.  Chiamare [crea](../mfc/reference/ctoolbarctrl-class.md#create) per creare il controllo comune barra degli strumenti di Windows e associarlo al `CToolBarCtrl` oggetto. Se si desidera immagini bitmap per i pulsanti, aggiungere la bitmap di pulsanti alla barra degli strumenti chiamando [AddBitmap](../mfc/reference/ctoolbarctrl-class.md#addbitmap). Se si desidera etichette di stringa per i pulsanti, aggiungere le stringhe alla barra degli strumenti chiamando [AddString](../mfc/reference/ctoolbarctrl-class.md#addstring) e/o [AddStrings](../mfc/reference/ctoolbarctrl-class.md#addstrings). Dopo la chiamata `AddString` e/o `AddStrings`, è necessario chiamare [AutoSize](../mfc/reference/ctoolbarctrl-class.md#autosize) per ottenere la stringa o vengano visualizzate le stringhe.  
  
3.  Aggiungere le strutture di pulsanti alla barra degli strumenti chiamando [AddButtons](../mfc/reference/ctoolbarctrl-class.md#addbuttons).  
  
4.  Se si desidera descrizioni comandi, gestire **TTN_NEEDTEXT** i messaggi nella finestra proprietaria della barra degli strumenti, come descritto in [strumento di gestione delle notifiche](../mfc/handling-tool-tip-notifications.md).  
  
5.  Se si desidera che l'utente la possibilità di personalizzare la barra degli strumenti, gestire i messaggi di notifica di personalizzazione nella finestra proprietaria come descritto in [la gestione delle notifiche di personalizzazione](../mfc/handling-customization-notifications.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

