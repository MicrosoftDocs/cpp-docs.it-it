---
title: "Stili finestra estesi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "WS_EX_TOOLWINDOW"
  - "WS_EX_LEFTSCROLLBAR"
  - "WS_EX_RTLREADING"
  - "WS_EX_WINDOWEDGE"
  - "WS_EX_CLIENTEDGE"
  - "WS_EX_STATICEDGE"
  - "WS_EX_LTRREADING"
  - "WS_EX_DLGMODALFRAME"
  - "WS_EX_RIGHTSCROLLBAR"
  - "WS_EX_CONTROLPARENT"
  - "WS_EX_ACCEPTFILES"
  - "WS_EX_TRANSPARENT"
  - "WS_EX_RIGHT"
  - "WS_EX_APPWINDOW"
  - "WS_EX_TOPMOST"
  - "WS_EX_CONTEXTHELP"
  - "WS_EX_MDICHILD"
  - "WS_EX_LEFT"
  - "WS_EX_OVERLAPPEDWINDOW"
  - "WS_EX_PALETTEWINDOW"
  - "WS_EX_NOPARENTNOTIFY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stili della finestra estesi"
  - "stili, finestre"
  - "WS_EX_ACCEPTFILES (costante)"
  - "WS_EX_APPWINDOW (costante)"
  - "WS_EX_CLIENTEDGE (costante)"
  - "WS_EX_CONTEXTHELP (costante)"
  - "WS_EX_CONTROLPARENT (costante)"
  - "WS_EX_DLGMODALFRAME (costante)"
  - "WS_EX_LEFT (costante)"
  - "WS_EX_LEFTSCROLLBAR (costante)"
  - "WS_EX_LTRREADING (costante)"
  - "WS_EX_MDICHILD (costante)"
  - "WS_EX_NOPARENTNOTIFY (costante)"
  - "WS_EX_OVERLAPPEDWINDOW (costante)"
  - "WS_EX_PALETTEWINDOW (costante)"
  - "WS_EX_RIGHT (costante)"
  - "WS_EX_RIGHTSCROLLBAR (costante)"
  - "WS_EX_RTLREADING (costante)"
  - "WS_EX_STATICEDGE (costante)"
  - "WS_EX_TOOLWINDOW (costante)"
  - "WS_EX_TOPMOST (costante)"
  - "WS_EX_TRANSPARENT (costante)"
  - "WS_EX_WINDOWEDGE (costante)"
ms.assetid: d18e6c69-0a01-49ed-b58a-55b3802b47c1
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# Stili finestra estesi
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

-   **WS\_EX\_ACCEPTFILES** Specifica che una finestra creata con questo stile accetta il trascinamento di file.  
  
-   **WS\_EX\_APPWINDOW** Forza una finestra di primo livello sulla barra delle applicazioni quando la finestra è visibile.  
  
-   **WS\_EX\_CLIENTEDGE** Specifica che una finestra ha un aspetto tridimensionale, ovvero un margine che dispone di un bordo infossato.  
  
-   **WS\_EX\_CONTEXTHELP** Include un punto interrogativo nella barra del titolo della finestra.  Quando l'utente fa click sul punto interrogativo, il cursore cambia in un punto interrogativo con un puntatore.  Successivamente se l'utente fa click su una finestra figlia, essa riceve un messaggio **WM\_HELP**.  
  
-   **WS\_EX\_CONTROLPARENT** Consente all'utente di spostarsi tra le finestre figlie della finestra utilizzando il tasto TAB.  
  
-   **WS\_EX\_DLGMODALFRAME** Definisce una finestra con un bordo doppio che può eventualmente essere creata con una barra del titolo quando si specifica il flag di stile **WS\_CAPTION** nel parametro `dwStyle`.  
  
-   **WS\_EX\_LAYERED** La finestra è una [finestra sovrapposta](http://msdn.microsoft.com/library/ms632599\(v=vs.85\).aspx#layered").  Questo stile non può essere utilizzato se la finestra ha uno [stile della classe](http://msdn.microsoft.com/library/ms633574\(v=vs.85\).aspx#class_styles") **CS\_OWNDC** o **CS\_CLASSDC**.  Tuttavia, [!INCLUDE[win8_first](../../mfc/reference/includes/win8_first_md.md)] supporta lo stile **WS\_EX\_LAYERED** per le finestre figlie, laddove le versioni precedenti di Windows lo supportano solo per le finestre di primo livello.  
  
-   **WS\_EX\_LEFT** Fornisce una finestra delle proprietà generiche allineata a sinistra.  Questa è l'impostazione predefinita.  
  
-   **WS\_EX\_LEFTSCROLLBAR** Posiziona una barra di scorrimento verticale a sinistra dell'area del client.  
  
-   **WS\_EX\_LTRREADING** Visualizza il testo della finestra utilizzando le proprietà dell'ordine di lettura da sinistra verso destra.  Questa è l'impostazione predefinita.  
  
-   **WS\_EX\_MDICHILD** Crea una finestra figlia di MDI.  
  
-   **WS\_EX\_NOPARENTNOTIFY** Specifica che una finestra figlia creata con questo stile non invierà il messaggio `WM_PARENTNOTIFY` alla finestra padre quando la finestra figlia viene creata o distrutta.  
  
-   **WS\_EX\_OVERLAPPEDWINDOW** Combina gli stili **WS\_EX\_CLIENTEDGE** e **WS\_EX\_WINDOWEDGE**.  
  
-   **WS\_EX\_PALETTEWINDOW** Combina gli stili **WS\_EX\_WINDOWEDGE** e **WS\_EX\_TOPMOST**.  
  
-   **WS\_EX\_RIGHT** Fornisce una finestra delle proprietà generiche allineata a destra.  Ciò dipende dalla classe della finestra.  
  
-   **WS\_EX\_RIGHTSCROLLBAR** Specificata una barra di scorrimento verticale \(se presente\) a destra dell'area del client.  Questa è l'impostazione predefinita.  
  
-   **WS\_EX\_RTLREADING** Visualizza il testo della finestra utilizzando le proprietà dell'ordine di lettura da destra verso sinistra.  
  
-   **WS\_EX\_STATICEDGE** Crea una finestra con uno stile dei bordi tridimensionale destinato a essere utilizzato per gli elementi che non accettano input dell'utente.  
  
-   **WS\_EX\_TOOLWINDOW** Crea una finestra degli strumenti, cioè una finestra progettata per essere utilizzata come barra degli strumenti mobile.  Una finestra degli strumenti dispone di una barra del titolo più piccola di una normale e il titolo della finestra è scritto con un carattere più piccolo.  Non viene visualizzata alcuna finestra degli strumenti nella barra delle applicazioni o nella finestra visualizzata quando l'utente preme ALT\+TAB.  
  
-   **WS\_EX\_TOPMOST** Specifica che una finestra creata con questo stile dovrebbe essere posizionata in tutte le finestre di livello intermedio e che essa dovrebbe rimanerci anche se la finestra viene disattivata.  Un'applicazione può utilizzare la funzione membro `SetWindowPos` per aggiungere o rimuovere questo attributo.  
  
-   **WS\_EX\_TRANSPARENT** Specifica che una finestra creata con questo stile sarà trasparente.  Cioè, tutte le finestre che si trovano al di sotto della finestra non vengono oscurate dalla essa.  Una finestra creata con questo stile riceve messaggi `WM_PAINT` solo dopo che sono state aggiornate tutte le finestre di pari livello al di sotto di essa.  
  
-   **WS\_EX\_WINDOWEDGE** Specifica che una finestra dispone di un margine con un bordo rialzato.  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CWnd::CreateEx](../Topic/CWnd::CreateEx.md)   
 [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680)