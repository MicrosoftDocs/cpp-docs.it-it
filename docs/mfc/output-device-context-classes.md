---
title: Output (contesto del dispositivo) classi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.output
dev_langs:
- C++
helpviewer_keywords:
- device contexts [MFC], classes
- screen output classes [MFC]
- printing classes [MFC]
- window drawing classes [MFC]
- painting classes [MFC]
- output classes [MFC]
ms.assetid: 35fd6435-a38e-42c6-a3fa-cd6f39370fc3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 85571e2173d9dc4e900d63e982a91571fafc103e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="output-device-context-classes"></a>Classi Output (contesto del dispositivo)
Tali classi includono i diversi tipi di contesti di dispositivo disponibili in Windows.  
  
 La maggior parte delle classi seguenti incapsulano un handle a un contesto di dispositivo Windows. Un contesto di dispositivo è un oggetto di Windows che contiene informazioni sugli attributi di disegnati di un dispositivo, ad esempio una visualizzazione o una stampante. Tutte le chiamate di disegnare vengono effettuate tramite un oggetto di contesto di dispositivo. Altre classi derivate da `CDC` incapsulano funzionalità specializzate del contesto di dispositivo, incluso il supporto per i metafile di Windows.  
  
 [CDC](../mfc/reference/cdc-class.md)  
 La classe base per contesti di dispositivo. Utilizzati direttamente per l'accesso a vista intera e per l'accesso ai contesti nondisplay, ad esempio le stampanti.  
  
 [CPaintDC](../mfc/reference/cpaintdc-class.md)  
 Utilizzato un contesto di visualizzazione `OnPaint` funzioni membro di windows. Chiama automaticamente `BeginPaint` in fase di costruzione e `EndPaint` durante la distruzione.  
  
 [CClientDC](../mfc/reference/cclientdc-class.md)  
 Un contesto di visualizzazione per le aree di client di windows. Utilizzato, ad esempio, da disegnare in una risposta immediata agli eventi del mouse.  
  
 [Oggetti CWindowDC](../mfc/reference/cwindowdc-class.md)  
 Un contesto di visualizzazione per l'intera windows, incluse le aree client e client.  
  
 [CMetaFileDC](../mfc/reference/cmetafiledc-class.md)  
 Specifica un contesto di dispositivo metafile di Windows. Un metafile di Windows contiene una sequenza di comandi graphics device interface (GDI) che possono essere riprodotte per creare un'immagine. Chiamate a funzioni membro di un `CMetaFileDC` vengono registrate in un metafile.  
  
## <a name="related-classes"></a>Classi correlate  
 [CPoint](../atl-mfc-shared/reference/cpoint-class.md)  
 Contiene coppie di coordinate (x, y).  
  
 [CSize](../atl-mfc-shared/reference/csize-class.md)  
 Contiene distanze, posizioni relative o valori accoppiati.  
  
 [CRect](../atl-mfc-shared/reference/crect-class.md)  
 Contiene le coordinate delle aree rettangolari.  
  
 [CRgn](../mfc/reference/crgn-class.md)  
 Incapsula un'area GDI per la modifica di un'area ellittica poligonale o irregolare all'interno di una finestra. Usato in combinazione con le funzioni membro di ritaglio in classe `CDC`.  
  
 [CRectTracker](../mfc/reference/crecttracker-class.md)  
 Visualizza e gestisce l'interfaccia utente per il ridimensionamento e spostamento di oggetti rettangolari.  
  
 [CColorDialog](../mfc/reference/ccolordialog-class.md)  
 Fornisce una finestra di dialogo standard per la selezione di un colore.  
  
 [CFontDialog](../mfc/reference/cfontdialog-class.md)  
 Fornisce una finestra di dialogo standard per la selezione di un tipo di carattere.  
  
 [CPrintDialog](../mfc/reference/cprintdialog-class.md)  
 Fornisce una finestra di dialogo standard per la stampa di un file.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

