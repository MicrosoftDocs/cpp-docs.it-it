---
title: Classi Output (contesto del dispositivo)
ms.date: 11/04/2016
f1_keywords:
- vc.classes.output
helpviewer_keywords:
- device contexts [MFC], classes
- screen output classes [MFC]
- printing classes [MFC]
- window drawing classes [MFC]
- painting classes [MFC]
- output classes [MFC]
ms.assetid: 35fd6435-a38e-42c6-a3fa-cd6f39370fc3
ms.openlocfilehash: 6bddebb17663e8d22a4bf784d2a9d08a2f912e59
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50651828"
---
# <a name="output-device-context-classes"></a>Classi Output (contesto del dispositivo)

Queste classi includono i diversi tipi di contesti di dispositivo disponibili in Windows.

La maggior parte delle classi seguenti incapsulano un handle per un contesto di periferica Windows. Un contesto di dispositivo è un oggetto di Windows che contiene informazioni sugli attributi disegni di un dispositivo, ad esempio una visualizzazione o una stampante. Tutte le chiamate di disegnare vengono effettuate tramite un oggetto di contesto di dispositivo. Altre classi derivate da `CDC` incapsulano funzionalità specializzate del contesto di dispositivo, incluso il supporto per i metafile di Windows.

[CDC](../mfc/reference/cdc-class.md)<br/>
Classe di base per i contesti di dispositivo. Utilizzati direttamente per l'accesso a schermo intero e l'accesso a contesti nondisplay, ad esempio le stampanti.

[CPaintDC](../mfc/reference/cpaintdc-class.md)<br/>
Un contesto di visualizzazione utilizzato in `OnPaint` funzioni membro di windows. Chiama automaticamente `BeginPaint` in fase di costruzione e `EndPaint` durante la distruzione.

[CClientDC](../mfc/reference/cclientdc-class.md)<br/>
Un contesto di visualizzazione per le aree di client di windows. Usato, ad esempio, da disegnare in una risposta immediata agli eventi del mouse.

[CWindowDC](../mfc/reference/cwindowdc-class.md)<br/>
Un contesto di visualizzazione per intero windows, tra cui aree client e client.

[CMetaFileDC](../mfc/reference/cmetafiledc-class.md)<br/>
Un contesto di dispositivo metafile di Windows. Un metafile di Windows contiene una sequenza di comandi grafica device interface (GDI) che possono essere riprodotte per creare un'immagine. Le chiamate effettuate alle funzioni membro di un `CMetaFileDC` vengono registrate in un metafile.

## <a name="related-classes"></a>Classi correlate

[CPoint](../atl-mfc-shared/reference/cpoint-class.md)<br/>
Contiene coppie di coordinate (x, y).

[CSize](../atl-mfc-shared/reference/csize-class.md)<br/>
Contiene distanze, posizioni relative o valori accoppiati.

[CRect](../atl-mfc-shared/reference/crect-class.md)<br/>
Contiene le coordinate delle aree rettangolari.

[CRgn](../mfc/reference/crgn-class.md)<br/>
Incapsula un'area GDI per la modifica di un'area ellittica, poligonale o irregolare all'interno di una finestra. Usato in combinazione con le funzioni membro di ritaglio in classe `CDC`.

[CRectTracker](../mfc/reference/crecttracker-class.md)<br/>
Visualizza e gestisce l'interfaccia utente per il ridimensionamento e spostamento di oggetti rettangolari.

[CColorDialog](../mfc/reference/ccolordialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la selezione di un colore.

[CFontDialog](../mfc/reference/cfontdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la selezione di un tipo di carattere.

[CPrintDialog](../mfc/reference/cprintdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la stampa di un file.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

