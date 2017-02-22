---
title: "Stili finestra | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "WS_MINIMIZEBOX"
  - "WS_SIZEBOX"
  - "WS_CLIPCHILDREN"
  - "WS_TILED"
  - "WS_GROUP"
  - "WS_VSCROLL"
  - "WS_CHILD"
  - "WS_TABSTOP"
  - "WS_HSCROLL"
  - "WS_THICKFRAME"
  - "WS_DISABLED"
  - "WS_POPUP"
  - "WS_ICONIC"
  - "WS_MAXIMIZE"
  - "WS_VISIBLE"
  - "WS_POPUPWINDOW"
  - "WS_TILEDWINDOW"
  - "WS_DLGFRAME"
  - "WS_MINIMIZE"
  - "WS_CAPTION"
  - "WS_OVERLAPPED"
  - "WS_BORDER"
  - "WS_MAXIMIZEBOX"
  - "WS_OVERLAPPEDWINDOW"
  - "WS_SYSMENU"
  - "WS_CHILDWINDOW"
  - "WS_CLIPSIBLINGS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stili, finestre"
  - "stili finestra"
  - "stili finestra, in MFC"
  - "WS_BORDER (costante)"
  - "WS_CAPTION (costante)"
  - "WS_CHILD (costante)"
  - "WS_CHILDWINDOW (costante)"
  - "WS_CLIPCHILDREN (costante)"
  - "WS_CLIPSIBLINGS (costante)"
  - "WS_DISABLED (costante)"
  - "WS_DLGFRAME (costante)"
  - "WS_GROUP (costante)"
  - "WS_HSCROLL (costante)"
  - "WS_ICONIC (costante)"
  - "WS_MAXIMIZE (costante)"
  - "WS_MAXIMIZEBOX (costante)"
  - "WS_MINIMIZE (costante)"
  - "WS_MINIMIZEBOX (costante)"
  - "WS_OVERLAPPED (costante)"
  - "WS_OVERLAPPEDWINDOW (costante)"
  - "WS_POPUP (costante)"
  - "WS_POPUPWINDOW (costante)"
  - "WS_SIZEBOX (costante)"
  - "WS_SYSMENU (costante)"
  - "WS_TABSTOP (costante)"
  - "WS_THICKFRAME (costante)"
  - "WS_TILED (costante)"
  - "WS_TILEDWINDOW (costante)"
  - "WS_VISIBLE (costante)"
  - "WS_VSCROLL (costante)"
ms.assetid: c85ffbe4-f4ff-4227-917a-48ec4a411842
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Stili finestra
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

-   `WS_BORDER` Crea una finestra dotata di bordo.  
  
-   **WS\_CAPTION** Crea una finestra con una barra del titolo \(implica lo stile `WS_BORDER`\).  Non può essere utilizzata con lo stile **WS\_DLGFRAME**.  
  
-   **WS\_CHILD** Crea una finestra figlio.  Non può essere utilizzato con lo stile `WS_POPUP`.  
  
-   **WS\_CHILDWINDOW** Identico allo stile **WS\_CHILD**.  
  
-   **WS\_CLIPCHILDREN** Esclude l'area occupata dalle finestre figlio quando si disegna nella finestra padre.  Utilizzato quando si crea la finestra padre.  
  
-   **WS\_CLIPSIBLINGS** Ritaglia le finestre figlio in relazione le une alle altre. Ciò significa che, quando una determinata finestra figlio riceve un messaggio di disegno, lo stile **WS\_CLIPSIBLINGS** ritaglia tutte le altre finestre figlio sovrapposte fuori dall'area della finestra figlio da aggiornare. \(Se **WS\_CLIPSIBLINGS** non è specificato e le finestre figlio si sovrappongono, quando si disegna nell'area client di una finestra figlio, è anche possibile disegnare nell'area client di una finestra figlio adiacente\). Da utilizzare solo con lo stile **WS\_CHILD**.  
  
-   **WS\_DISABLED** Crea una finestra che inizialmente è disabilitata.  
  
-   **WS\_DLGFRAME** Crea una finestra con un doppio bordo ma nessun titolo.  
  
-   **WS\_GROUP** Specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo al successivo con i tasti di direzione.  Tutti i controlli definiti con lo stile **WS\_GROUP FALSE** appartengono allo stesso gruppo dopo il primo controllo.  Il controllo successivo con lo stile **WS\_GROUP** avvia il gruppo successivo \(ovvero, un gruppo termina dove inizia il successivo\).  
  
-   **WS\_HSCROLL** Crea una finestra con una barra di scorrimento orizzontale.  
  
-   **WS\_ICONIC** Crea una finestra che inizialmente è ridotta a icona.  Uguale allo stile **WS\_MINIMIZE**.  
  
-   **WS\_MAXIMIZE** Crea una finestra di dimensioni massime.  
  
-   **WS\_MAXIMIZEBOX** Crea una finestra con il pulsante di ingrandimento.  
  
-   **WS\_MINIMIZE** Crea una finestra che inizialmente è ridotto a icona.  Da utilizzare solo con lo stile **WS\_OVERLAPPED**.  
  
-   **WS\_MINIMIZEBOX** Crea una finestra con il pulsante di riduzione a icona.  
  
-   **WS\_OVERLAPPED** Crea una finestra sovrapposta.  Una finestra sovrapposta dispone in genere di una didascalia e di un bordo.  
  
-   **WS\_OVERLAPPEDWINDOW** Crea una finestra sovrapposta con gli stili **WS\_OVERLAPPED**, **WS\_CAPTION**, **WS\_SYSMENU**, **WS\_THICKFRAME**, **WS\_MINIMIZEBOX** e **WS\_MAXIMIZEBOX**.  
  
-   `WS_POPUP` Crea una finestra popup.  Non può essere utilizzata con lo stile **WS\_CHILD**.  
  
-   **WS\_POPUPWINDOW** Crea una finestra popup con gli stili `WS_BORDER`, `WS_POPUP` e **WS\_SYSMENU**.  Lo stile **WS\_CAPTION** deve essere combinato con lo stile **WS\_POPUPWINDOW** per rendere visibile il menu di sistema.  
  
-   **WS\_SIZEBOX** Crea una finestra dotata di bordo di ridimensionamento.  Uguale allo stile **WS\_THICKFRAME**.  
  
-   **WS\_SYSMENU** Crea una finestra contenente una casella menu di controllo nella barra del titolo.  Utilizzato solo per le finestre con barre del titolo.  
  
-   **WS\_TABSTOP** Specifica uno di un numero illimitato di controlli da cui l'utente può spostarsi utilizzando il tasto TAB.  Il tasto TAB permette all'utente di spostarsi sul controllo successivo specificato dallo stile **WS\_TABSTOP**.  
  
-   **WS\_THICKFRAME** Crea una finestra con frame con bordo spesso che è possibile utilizzare per ridimensionare la finestra.  
  
-   **WS\_TILED** Crea una finestra sovrapposta.  Una finestra sovrapposta dispone di una barra del titolo e di un bordo.  Uguale allo stile **WS\_OVERLAPPED** .  
  
-   **WS\_TILEDWINDOW** Crea una finestra sovrapposta con gli stili **WS\_OVERLAPPED**, **WS\_CAPTION**, **WS\_SYSMENU**, **WS\_THICKFRAME**, **WS\_MINIMIZEBOX** e **WS\_MAXIMIZEBOX**.  Uguale allo stile **WS\_OVERLAPPEDWINDOW**.  
  
-   **WS\_VISIBLE** Crea una finestra che inizialmente è visibile.  
  
-   **WS\_VSCROLL** Crea una finestra con una barra di scorrimento verticale.  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CWnd::Create](../Topic/CWnd::Create.md)   
 [CWnd::CreateEx](../Topic/CWnd::CreateEx.md)   
 [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679)