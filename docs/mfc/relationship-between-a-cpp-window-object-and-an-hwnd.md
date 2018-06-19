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
ms.openlocfilehash: b51daa375c3c920443316b6e10b6415ee018fdb4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385778"
---
# <a name="relationship-between-a-c-window-object-and-an-hwnd"></a>Relazione tra un oggetto finestra C++ e HWND
La finestra *oggetto* è un oggetto di C++ `CWnd` classe (o una classe derivata) che viene creata direttamente. Viene fornito e passa in risposta alle chiamate di costruttore e distruttore del programma. Le finestre *finestra*, d'altra parte, è un handle opaco a una struttura dati interna di Windows che corrisponde a una finestra e utilizza risorse di sistema, se presente. Una finestra di Windows è identificata da un handle di finestra"" (`HWND`) e viene creato dopo il `CWnd` oggetto creato da una chiamata al **crea** funzione membro di classe `CWnd`. La finestra può essere eliminata da una chiamata del programma o da un'azione dell'utente. L'handle di finestra viene archiviato nell'oggetto finestra `m_hWnd` variabile membro. Nella figura seguente viene illustrata la relazione tra l'oggetto finestra C++ e la finestra di Windows. Creazione di finestre è descritto in [creazione Windows](../mfc/creating-windows.md). Eliminazione definitiva di windows è descritta nella [distruzione di oggetti finestra](../mfc/destroying-window-objects.md).  
  
 ![CWnd oggetto finestra e finestra risulta](../mfc/media/vc37fj1.gif "vc37fj1")  
Oggetto finestra e finestra di Windows  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)

