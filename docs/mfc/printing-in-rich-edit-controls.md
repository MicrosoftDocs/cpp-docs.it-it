---
title: Stampa in controlli Rich Edit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- printing [MFC], CRichEditCtrl
- rich edit controls [MFC], printing
- CRichEditCtrl class [MFC], printing
ms.assetid: dbda0e40-018f-424e-b5d8-7b489aaf27af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 23b958e6c770260082af069544480102f6d79926
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33347663"
---
# <a name="printing-in-rich-edit-controls"></a>Stampa in controlli Rich Edit
È possibile indicare un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per eseguire il rendering dell'output per un dispositivo specifico, ad esempio una stampante. È inoltre possibile specificare il dispositivo di output per il quale un controllo rich edit formatta il testo.  
  
 Per formattare una parte del contenuto di un controllo rich edit per un dispositivo specifico, è possibile utilizzare il [FormatRange](../mfc/reference/cricheditctrl-class.md#formatrange) funzione membro. Il [FORMATRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787911) struttura utilizzata con questa funzione consente di specificare l'intervallo di testo per la formattazione e il contesto di dispositivo (DC) per il dispositivo di destinazione.  
  
 Dopo la formattazione di testo per un dispositivo di output, è possibile inviare l'output al dispositivo tramite il [DisplayBand](../mfc/reference/cricheditctrl-class.md#displayband) funzione membro. Mediante l'utilizzo ripetuto `FormatRange` e `DisplayBand`, un'applicazione che stampa il contenuto di un controllo rich edit può implementare bande. (Rappresentazione per bande è suddivisione dell'output in parti più piccole a scopo di stampa).  
  
 È possibile utilizzare il [funzione membro SetTargetDevice](../mfc/reference/cricheditctrl-class.md#settargetdevice) funzione membro per specificare il dispositivo di destinazione per il quale un controllo rich edit formatta il testo. Questa funzione è utile per WYSIWYG (le informazioni disponibili si ottiene) formattazione, in cui un'applicazione posiziona l'uso delle metriche del tipo di carattere della stampante predefinita anziché la schermata di testo.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

