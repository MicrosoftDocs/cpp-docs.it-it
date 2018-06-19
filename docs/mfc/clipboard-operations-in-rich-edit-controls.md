---
title: Operazioni sugli Appunti nei Rich Edit (controlli) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- pasting Clipboard data
- CRichEditCtrl class [MFC], paste operation
- cut operation in CRichEditCtrl class [MFC]
- CRichEditCtrl class [MFC], Clipboard operations
- copy operations in rich edit controls
- Clipboard, operations in CRichEditCtrl
- rich edit controls [MFC], Clipboard operations
ms.assetid: 15ce66bc-2636-4a35-a2ae-d52285dc1af6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e831a76a491d1025ae45117d40362a85523742da
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33341284"
---
# <a name="clipboard-operations-in-rich-edit-controls"></a>Operazioni sugli Appunti nei controlli Rich Edit
L'applicazione è possibile incollare il contenuto degli Appunti in un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) utilizzando il migliore formato degli Appunti disponibile o un formato degli Appunti specifico. È anche possibile determinare se un controllo Rich Edit è in grado di incollare un formato degli Appunti.  
  
 È possibile copiare o tagliare il contenuto della selezione corrente tramite il [copia](../mfc/reference/cricheditctrl-class.md#copy) o [Taglia](../mfc/reference/cricheditctrl-class.md#cut) funzione membro. Analogamente, è possibile incollare il contenuto degli Appunti in un controllo rich edit utilizzando la [incollare](../mfc/reference/cricheditctrl-class.md#paste) funzione membro. Il controllo incolla il primo formato disponibile che riconosce, che presumibilmente è il formato più descrittivo.  
  
 Per incollare un formato degli Appunti specifico, è possibile utilizzare il [PasteSpecial](../mfc/reference/cricheditctrl-class.md#pastespecial) funzione membro. Questa funzione è utile per le applicazioni con un comando Incolla speciale che consente all'utente di selezionare il formato degli Appunti. È possibile utilizzare il [CanPaste](../mfc/reference/cricheditctrl-class.md#canpaste) funzione membro per determinare se un determinato formato viene riconosciuto dal controllo.  
  
 È inoltre possibile utilizzare `CanPaste` per determinare se un formato degli Appunti disponibile viene riconosciuto da un controllo Rich Edit. Questa funzione è utile nel gestore di `OnInitMenuPopup`. In un'applicazione è possibile abilitare o rendere non disponibile il comando Incolla a che il controllo possa inserire o meno qualsiasi formato disponibile.  
  
 I controlli Rich Edit registrano due formati degli Appunti: il formato Rich Text Format e un formato denominato RichEdit testo e oggetti. Un'applicazione può registrare questi formati utilizzando il [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) funzione, che specifica il **CF_RETEXTOBJ** e **CF_RTF** valori.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

