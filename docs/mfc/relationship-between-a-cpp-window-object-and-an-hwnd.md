---
title: Relazione tra un oggetto finestra C++ e HWND | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: HWND
dev_langs: C++
helpviewer_keywords:
- Windows window [MFC]
- window objects [MFC], HWND and
- HWND [MFC]
- CWnd class [MFC], HWND
- HWND, window objects [MFC]
ms.assetid: f2e76340-6691-4ee6-9424-0345634a9469
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b441077de3a81de569627b6d7acf7cee8ca17b33
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="relationship-between-a-c-window-object-and-an-hwnd"></a>Relazione tra un oggetto finestra C++ e HWND
La finestra *oggetto* è un oggetto di C++ `CWnd` classe (o una classe derivata) che viene creata direttamente. Viene fornito e passa in risposta alle chiamate di costruttore e distruttore del programma. Le finestre *finestra*, d'altra parte, è un handle opaco a una struttura dati interna di Windows che corrisponde a una finestra e utilizza risorse di sistema, se presente. Una finestra di Windows è identificata da un handle di finestra"" (`HWND`) e viene creato dopo il `CWnd` oggetto creato da una chiamata al **crea** funzione membro di classe `CWnd`. La finestra può essere eliminata da una chiamata del programma o da un'azione dell'utente. L'handle di finestra viene archiviato nell'oggetto finestra `m_hWnd` variabile membro. Nella figura seguente viene illustrata la relazione tra l'oggetto finestra C++ e la finestra di Windows. Creazione di finestre è descritto in [creazione Windows](../mfc/creating-windows.md). Eliminazione definitiva di windows è descritta nella [distruzione di oggetti finestra](../mfc/destroying-window-objects.md).  
  
 ![CWnd oggetto finestra e finestra risulta](../mfc/media/vc37fj1.gif "vc37fj1")  
Oggetto finestra e finestra di Windows  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)

