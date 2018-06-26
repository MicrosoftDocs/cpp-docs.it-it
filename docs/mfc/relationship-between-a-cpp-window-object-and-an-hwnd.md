---
title: Relazione tra un oggetto finestra C++ e HWND | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- HWND
dev_langs:
- C++
helpviewer_keywords:
- Windows window [MFC]
- window objects [MFC], HWND and
- HWND [MFC]
- CWnd class [MFC], HWND
- HWND, window objects [MFC]
ms.assetid: f2e76340-6691-4ee6-9424-0345634a9469
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3864de8b3133fd2284b3ce57b75b30d8f41c26a7
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928528"
---
# <a name="relationship-between-a-c-window-object-and-an-hwnd"></a>Relazione tra un oggetto finestra C++ e HWND
La finestra *oggetto* è un oggetto di C++ `CWnd` classe (o una classe derivata) che viene creata direttamente. Fornito e viene inviata in risposta alle chiamate di costruttore e distruttore del programma. Le finestre *finestra*, invece, è un handle opaco a una struttura dati interna di Windows che corrisponde a una finestra e utilizza le risorse di sistema quando è presente. Una finestra di Windows è identificata da un handle di finestra"" (`HWND`) e viene creato dopo il `CWnd` oggetto creato da una chiamata ai `Create` funzione membro di classe `CWnd`. La finestra può essere eliminata da una chiamata del programma o da un'azione dell'utente. L'handle di finestra viene archiviato nell'oggetto finestra *m_hWnd* variabile membro. Nella figura seguente viene illustrata la relazione tra l'oggetto finestra C++ e la finestra di Windows. Creazione di finestre verrà discusso [creazione di finestre](../mfc/creating-windows.md). Eliminazione definitiva di finestre verrà discusso [eliminazione definitiva di oggetti finestra](../mfc/destroying-window-objects.md).  
  
 ![CWnd oggetto finestra e finestra risulta](../mfc/media/vc37fj1.gif "vc37fj1")  
Oggetto finestra e finestra di Windows  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)

