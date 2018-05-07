---
title: 'Menu e risorse: unione di Menu | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- status bars [MFC], OLE document applications
- visual editing [MFC], application menus and resources
- coordinating menu layouts [MFC]
- OLE containers [MFC], menus and resources
- toolbars [MFC], OLE document applications
- merging toolbar and status bar [MFC]
- menus [MFC], OLE document applications
ms.assetid: 80b6bb17-d830-4122-83f0-651fc112d4d1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 252619872fc53e06629a4cbded7e3640131dc94a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="menus-and-resources-menu-merging"></a>Menu e risorse: unione di menu
In questo articolo illustra in dettaglio i passaggi necessari per le applicazioni documento OLE gestire la modifica visiva e di attivazione sul posto in modo corretto. Attivazione sul posto pone un problema di contenitore e server applicazioni (componente). L'utente rimane nella stessa finestra del frame, nell'ambito del documento contenitore, ma è effettivamente in esecuzione un'altra applicazione (server). Questo richiede il coordinamento tra le risorse delle applicazioni di contenitore e server.  
  
 Gli argomenti trattati in questo articolo includono:  
  
- [Layout di menu](#_core_menu_layouts)  
  
- [Barre degli strumenti e le barre di stato](#_core_toolbars_and_status_bars)  
  
##  <a name="_core_menu_layouts"></a> Layout di menu  
 Il primo passaggio è per il coordinamento dei layout dei menu. Per ulteriori informazioni, vedere il **Menu creazione** sezione [considerazioni sulla programmazione Menu](https://msdn.microsoft.com/library/ms647557.aspx) in Windows SDK.  
  
 Applicazioni contenitore è necessario creare un nuovo menu per essere utilizzato solo quando gli elementi incorporati vengono attivati sul posto. Come minimo, deve includere questo menu seguenti, nell'ordine elencato:  
  
1.  Dal menu file identico a quello utilizzato quando i file sono aperti. (In genere altre voci di menu vengono posizionate prima della successiva).  
  
2.  Due separatori consecutivi.  
  
3.  Menu finestra identico a quello utilizzato quando i file sono aperti (solo se l'applicazione contenitore in un'applicazione MDI). Alcune applicazioni possono presentare altri menu, ad esempio un menu di opzioni, che appartengono a questo gruppo, che rimane nel menu quando un elemento incorporato viene attivato sul posto.  
  
    > [!NOTE]
    >  Potrebbero essere presenti altri menu che influenzano la vista del documento contenitore, ad esempio Zoom. Questi menu del contenitore vengono visualizzate tra i due separatori in questa risorsa di menu.  
  
 Applicazioni server, componente, è consigliabile creare anche un nuovo menu in modo specifico per l'attivazione sul posto. Dovrebbe essere simile il menu utilizzato quando i file sono aperti, ma privo di voci di menu, ad esempio File e finestra che modificano il documento server anziché i dati. In genere, questo menu include gli elementi seguenti:  
  
1.  Menu Modifica identico a quello utilizzato quando sono file aperti.  
  
2.  Separatore.  
  
3.  Menu, ad esempio menu nell'applicazione di esempio Scribble penna di modifica dell'oggetto.  
  
4.  Separatore.  
  
5.  Dal menu?.  
  
 Per un esempio, esaminare il layout di alcuni menu sul posto di esempio per un contenitore e un server. I dettagli di ogni voce di menu sono stati rimossi per semplificare l'esempio. Menu sul posto del contenitore sono disponibili le seguenti voci:  
  
```  
IDR_CONTAINERTYPE_CNTR_IP MENU PRELOAD DISCARDABLE   
BEGIN  
    POPUP "&File C1"  
    MENUITEM SEPARATOR  
    POPUP "&Zoom C2"  
    MENUITEM SEPARATOR  
    POPUP "&Options C3"  
    POPUP "&Window C3"  
END  
```  
  
 I separatori consecutivi indicano dove la prima parte del menu del server. Esaminare ora menu sul posto del server:  
  
```  
IDR_SERVERTYPE_SRVR_IP MENU PRELOAD DISCARDABLE   
BEGIN  
    POPUP "&Edit S1"  
    MENUITEM SEPARATOR  
    POPUP "&Format S2"  
    MENUITEM SEPARATOR  
    POPUP "&Help S3"  
END  
```  
  
 I separatori di seguito indicano in cui il secondo gruppo di voci di menu contenitore. La struttura di menu quando un oggetto di questo server è attivato sul posto all'interno di questo contenitore è simile al seguente:  
  
```  
BEGIN  
    POPUP "&File C1"  
    POPUP "&Edit S1"  
    POPUP "&Zoom C2"  
    POPUP "&Format S2"  
    POPUP "&Options C3  
    POPUP "&Window C3"  
    POPUP "&Help S3"  
END  
```  
  
 Come si può notare, i separatori sono stati sostituiti con i diversi gruppi di ogni menu dell'applicazione.  
  
 Tabelle di tasti di scelta rapida associate al menu sul posto dovrebbero anche essere fornite dall'applicazione server. Il contenitore esse verrà incorporate nelle tabelle di tasti di scelta rapida.  
  
 Quando un elemento incorporato viene attivato sul posto, il framework carica di menu. Quindi richiesto all'applicazione server per il relativo menu per l'attivazione sul posto e lo inserisce in cui i separatori sono. Si tratta come combinano i menu. I menu ottenuti dal contenitore per l'uso il posizionamento di file e finestra e i menu ottenuti dal server per l'uso dell'elemento.  
  
##  <a name="_core_toolbars_and_status_bars"></a> Barre degli strumenti e le barre di stato  
 Applicazioni server devono creare una nuova barra degli strumenti e archiviare la bitmap in un file separato. Le applicazioni di creazione guidata applicazione archiviano questa bitmap in un file denominato ITOOLBAR. BMP. Quando l'elemento del server viene attivato sul posto e deve contenere gli stessi elementi come la barra degli strumenti normale, ma rimuovere le icone che rappresentano gli elementi nel menu File e finestra, la nuova barra degli strumenti sostituisce barra degli strumenti dell'applicazione contenitore.  
  
 Questa barra degli strumenti è caricato il `COleIPFrameWnd`-derivata creato dalla creazione guidata applicazione. La barra di stato viene gestita dall'applicazione contenitore. Per ulteriori informazioni sull'implementazione di finestre cornice sul posto, vedere [server: implementazione di un Server](../mfc/servers-implementing-a-server.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)   
 [attivazione](../mfc/activation-cpp.md)   
 [Server](../mfc/servers.md)   
 [Contenitori](../mfc/containers.md)

