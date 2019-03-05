---
title: Relazione tra un oggetto finestra C++ e HWND
ms.date: 11/19/2018
f1_keywords:
- HWND
helpviewer_keywords:
- Windows window [MFC]
- window objects [MFC], HWND and
- HWND [MFC]
- CWnd class [MFC], HWND
- HWND, window objects [MFC]
ms.assetid: f2e76340-6691-4ee6-9424-0345634a9469
ms.openlocfilehash: 8cf8856be7166768c507932184e257cf69b0eb35
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57305198"
---
# <a name="relationship-between-a-c-window-object-and-an-hwnd"></a>Relazione tra un oggetto finestra C++ e HWND

La finestra *oggetti* è un oggetto di C++ `CWnd` classe (o una classe derivata) che il programma crea direttamente. Viene fornito e passa in risposta alle chiamate di costruttore e distruttore del programma. Il Windows *finestra*, d'altra parte, è un handle opaco a una struttura dati interna di Windows che corrisponde a una finestra e utilizza le risorse di sistema quando è presente. Una finestra di Windows è identificata da un handle di finestra"" (`HWND`) e viene creato dopo il `CWnd` oggetto creato da una chiamata ai `Create` funzione membro di classe `CWnd`. La finestra può essere eliminata da una chiamata del programma o da un'azione dell'utente. L'handle di finestra viene archiviato nell'oggetto window *m_hWnd* variabile membro. Nella figura seguente mostra la relazione tra l'oggetto finestra C++ e la finestra di Windows. Creazione di finestre viene illustrata in [creazione Windows](../mfc/creating-windows.md). Eliminazione definitiva di finestre verrà discusso [eliminazione definitiva di oggetti finestra](../mfc/destroying-window-objects.md).

![CWnd oggetto finestra e finestra risultante](../mfc/media/vc37fj1.gif "CWnd oggetto finestra e finestra risultante") <br/>
Oggetto finestra e finestra di Windows

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](../mfc/window-objects.md)
