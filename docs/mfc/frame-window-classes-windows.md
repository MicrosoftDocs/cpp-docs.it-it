---
description: 'Altre informazioni su: classi della finestra cornice (Windows)'
title: Classi di finestre cornice (Windows)
ms.date: 11/04/2016
f1_keywords:
- vc.classes.frame
helpviewer_keywords:
- frame window classes [MFC], reference
ms.assetid: 6342ec5f-f922-4da8-a78e-2f5f994c7142
ms.openlocfilehash: dcd7dea1fd138fbe2ebf3f82013b00cff5ff1f52
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339709"
---
# <a name="frame-window-classes-windows"></a>Classi di finestre cornice (Windows)

Le finestre cornice sono finestre che incorniciano un'applicazione o una parte di un'applicazione. Le finestre cornice contengono in genere altre finestre, ad esempio le visualizzazioni, le barre degli strumenti e le barre di stato. Nel caso di `CMDIFrameWnd` , possono contenere `CMDIChildWnd` oggetti indirettamente.

[CFrameWnd](reference/cframewnd-class.md)<br/>
Classe base per la finestra cornice principale di un'applicazione SDI. Anche la classe di base per tutte le altre classi della finestra cornice.

[CMDIFrameWnd](reference/cmdiframewnd-class.md)<br/>
Classe base per la finestra cornice principale di un'applicazione MDI.

[CMDIChildWnd](reference/cmdichildwnd-class.md)<br/>
Classe base per le finestre cornice del documento di un'applicazione MDI.

[CMiniFrameWnd](reference/cminiframewnd-class.md)<br/>
Una finestra cornice di mezza altezza viene in genere visualizzata intorno alle barre degli strumenti mobili.

[COleIPFrameWnd](reference/coleipframewnd-class.md)<br/>
Fornisce la finestra cornice per una visualizzazione quando un documento server viene modificato sul posto.

## <a name="related-class"></a>Classe correlata

La classe `CMenu` fornisce un'interfaccia tramite la quale accedere ai menu dell'applicazione. È utile per la manipolazione dinamica dei menu in fase di esecuzione. ad esempio, quando si aggiungono o si eliminano voci di menu in base al contesto. Sebbene i menu siano spesso usati con le finestre cornice, possono essere usati anche con finestre di dialogo e altre finestre non figlio.

[CMenu](reference/cmenu-class.md)<br/>
Incapsula un `HMENU` handle per la barra dei menu e i menu di scelta rapida dell'applicazione.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
