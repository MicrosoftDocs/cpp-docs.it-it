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
ms.openlocfilehash: b15f5034604f9d6b67574288140b79b144692478
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84615354"
---
# <a name="output-device-context-classes"></a>Classi Output (contesto del dispositivo)

Queste classi incapsulano i diversi tipi di contesti di dispositivo disponibili in Windows.

La maggior parte delle classi seguenti incapsula un handle per un contesto di dispositivo Windows. Un contesto di dispositivo è un oggetto di Windows che contiene informazioni sugli attributi di disegno di un dispositivo, ad esempio uno schermo o una stampante. Tutte le chiamate di disegno vengono eseguite tramite un oggetto del contesto di dispositivo. Classi aggiuntive derivate da `CDC` incapsulare funzionalità di contesto di dispositivo specializzate, incluso il supporto per i metafile di Windows.

[CDC](reference/cdc-class.md)<br/>
Classe di base per i contesti di dispositivo. Usato direttamente per accedere all'intero schermo e per accedere ai contesti non visualizzati, ad esempio le stampanti.

[CPaintDC](reference/cpaintdc-class.md)<br/>
Contesto di visualizzazione utilizzato nelle `OnPaint` funzioni membro di Windows. Chiama automaticamente `BeginPaint` alla costruzione e `EndPaint` alla distruzione.

[CClientDC](reference/cclientdc-class.md)<br/>
Contesto di visualizzazione per le aree client di Windows. Utilizzato, ad esempio, per creare una risposta immediata agli eventi del mouse.

[CWindowDC](reference/cwindowdc-class.md)<br/>
Contesto di visualizzazione per intere finestre, incluse le aree client e non client.

[CMetaFileDC](reference/cmetafiledc-class.md)<br/>
Contesto di dispositivo per i file di Windows. Un metafile di Windows contiene una sequenza di comandi GDI (Graphics Device Interface) che è possibile riprodurre per creare un'immagine. Le chiamate effettuate alle funzioni membro di un oggetto `CMetaFileDC` vengono registrate in un metafile.

## <a name="related-classes"></a>Classi correlate

[CPoint](../atl-mfc-shared/reference/cpoint-class.md)<br/>
Contiene coppie di coordinate (x, y).

[CSize](../atl-mfc-shared/reference/csize-class.md)<br/>
Contiene distanze, posizioni relative o valori accoppiati.

[CRect](../atl-mfc-shared/reference/crect-class.md)<br/>
Contiene le coordinate delle aree rettangolari.

[CRgn](reference/crgn-class.md)<br/>
Incapsula un'area GDI per la modifica di un'area ellittica, poligonale o irregolare all'interno di una finestra. Utilizzato insieme alle funzioni membro di ritaglio nella classe `CDC` .

[CRectTracker](reference/crecttracker-class.md)<br/>
Visualizza e gestisce l'interfaccia utente per il ridimensionamento e lo trasferimento di oggetti rettangolari.

[CColorDialog](reference/ccolordialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la selezione di un colore.

[CFontDialog](reference/cfontdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la selezione di un tipo di carattere.

[CPrintDialog](reference/cprintdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la stampa di un file.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)
