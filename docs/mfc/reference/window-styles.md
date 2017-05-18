---
title: Stili finestra | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- WS_MINIMIZEBOX
- WS_SIZEBOX
- WS_CLIPCHILDREN
- WS_TILED
- WS_GROUP
- WS_VSCROLL
- WS_CHILD
- WS_TABSTOP
- WS_HSCROLL
- WS_THICKFRAME
- WS_DISABLED
- WS_POPUP
- WS_ICONIC
- WS_MAXIMIZE
- WS_VISIBLE
- WS_POPUPWINDOW
- WS_TILEDWINDOW
- WS_DLGFRAME
- WS_MINIMIZE
- WS_CAPTION
- WS_OVERLAPPED
- WS_BORDER
- WS_MAXIMIZEBOX
- WS_OVERLAPPEDWINDOW
- WS_SYSMENU
- WS_CHILDWINDOW
- WS_CLIPSIBLINGS
dev_langs:
- C++
helpviewer_keywords:
- WS_THICKFRAME constant
- WS_TILEDWINDOW constant
- WS_MAXIMIZEBOX constant
- WS_DLGFRAME constant
- WS_CHILDWINDOW constant
- window styles, in MFC
- WS_CHILD constant
- WS_GROUP constant
- WS_MINIMIZE constant
- WS_CAPTION constant
- WS_MAXIMIZE constant
- WS_POPUP constant
- WS_SYSMENU constant
- WS_TILED constant
- window styles
- WS_POPUPWINDOW constant
- WS_CLIPSIBLINGS constant
- WS_BORDER constant
- WS_DISABLED constant
- WS_VSCROLL constant
- WS_OVERLAPPED constant
- WS_MINIMIZEBOX constant
- WS_VISIBLE constant
- WS_OVERLAPPEDWINDOW constant
- WS_TABSTOP constant
- WS_ICONIC constant
- WS_SIZEBOX constant
- WS_HSCROLL constant
- WS_CLIPCHILDREN constant
- styles, windows
ms.assetid: c85ffbe4-f4ff-4227-917a-48ec4a411842
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: d814e3a10132fb3fe88969ce434f8286b02afba5
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="window-styles"></a>Stili finestra
-   `WS_BORDER`Crea una finestra che ha un bordo.  
  
-   **WS_CAPTION** crea una finestra che ha una barra del titolo (implica il `WS_BORDER` stile). Non può essere utilizzato con il **WS_DLGFRAME** stile.  
  
-   **WS_CHILD** crea una finestra figlio. Non può essere utilizzato con il `WS_POPUP` stile.  
  
-   **WS_CHILDWINDOW** come il **WS_CHILD** stile.  
  
-   **WS_CLIPCHILDREN** esclude l'area occupata dalle finestre figlio quando si disegna nella finestra padre. Utilizzato quando si crea la finestra padre.  
  
-   **WS_CLIPSIBLINGS** finestre figlio clip reciproche, vale a dire quando una finestra figlio specifico riceve un messaggio di disegno, la **WS_CLIPSIBLINGS** stile Ritaglia tutte le altre finestre figlio sovrapposte l'area della finestra figlio da aggiornare. (Se **WS_CLIPSIBLINGS** non è consentito e sovrapposizione delle finestre figlio, quando si disegna all'interno dell'area client di una finestra figlio, è possibile disegnare all'interno dell'area client di una finestra figlio adiacenti.) Per l'utilizzo con il **WS_CHILD** solo di stile.  
  
-   **WS_DISABLED** crea una finestra che inizialmente è disabilitata.  
  
-   **WS_DLGFRAME** crea una finestra con un bordo doppio ma alcun titolo.  
  
-   **WS_GROUP** specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo alla successiva con i tasti di direzione. Tutti i controlli definiti con la **WS_GROUP** stile **FALSE** dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con il **WS_GROUP** stile inizia il successivo gruppo (ovvero, un gruppo termina in cui inizia il successivo).  
  
-   **WS_HSCROLL** crea una finestra che dispone di una barra di scorrimento orizzontale.  
  
-   **WS_ICONIC** crea una finestra che inizialmente è ridotta a icona. Come il **WS_MINIMIZE** stile.  
  
-   **WS_MAXIMIZE** crea una finestra di dimensioni massime.  
  
-   **WS_MAXIMIZEBOX** crea una finestra che dispone di un pulsante di ingrandimento.  
  
-   **WS_MINIMIZE** crea una finestra che inizialmente è ridotta a icona. Per l'utilizzo con il **WS_OVERLAPPED** solo di stile.  
  
-   **WS_MINIMIZEBOX** crea una finestra che dispone di un pulsante Riduci a icona.  
  
-   **WS_OVERLAPPED** crea una finestra sovrapposta. In genere, una finestra sovrapposta ha una didascalia e un bordo.  
  
-   **WS_OVERLAPPEDWINDOW** crea una finestra sovrapposta con il **WS_OVERLAPPED**, **WS_CAPTION**, **WS_SYSMENU**, **WS_THICKFRAME**, **WS_MINIMIZEBOX**, e **WS_MAXIMIZEBOX** stili.  
  
-   `WS_POPUP`Crea una finestra popup. Non può essere utilizzato con il **WS_CHILD** stile.  
  
-   **WS_POPUPWINDOW** crea una finestra popup con la `WS_BORDER`, `WS_POPUP`, e **WS_SYSMENU** stili. Il **WS_CAPTION** stile deve essere combinato con il **WS_POPUPWINDOW** stile per rendere visibile il controllo menu.  
  
-   **WS_SIZEBOX** crea una finestra che ha un bordo di ridimensionamento. Come il **WS_THICKFRAME** stile.  
  
-   **WS_SYSMENU** crea una finestra che include una casella di controllo menu nella barra del titolo. Utilizzato solo per windows con le barre del titolo.  
  
-   **WS_TABSTOP** specifica un qualsiasi numero di controlli tramite il quale l'utente può spostarsi con il tasto TAB. Il tasto TAB sposta l'utente al controllo successivo specificato per il **WS_TABSTOP** stile.  
  
-   **WS_THICKFRAME** crea una finestra con frame spesso che può essere utilizzato per ridimensionare la finestra.  
  
-   **WS_TILED** crea una finestra sovrapposta. Una finestra sovrapposta con una barra del titolo e un bordo. Come il **WS_OVERLAPPED** stile.  
  
-   **WS_TILEDWINDOW** crea una finestra sovrapposta con il **WS_OVERLAPPED**, **WS_CAPTION**, **WS_SYSMENU**, **WS_THICKFRAME**, **WS_MINIMIZEBOX**, e **WS_MAXIMIZEBOX** stili. Come il **WS_OVERLAPPEDWINDOW** stile.  
  
-   **WS_VISIBLE** crea una finestra che inizialmente è visibile.  
  
-   **WS_VSCROLL** crea una finestra che dispone di una barra di scorrimento verticale.  
  
## <a name="see-also"></a>Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CWnd:: Create](../../mfc/reference/cwnd-class.md#create)   
 [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#createex)   
 [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679)


