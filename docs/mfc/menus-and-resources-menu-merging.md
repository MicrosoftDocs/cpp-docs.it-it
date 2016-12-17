---
title: "Menu e risorse: unione di menu | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "coordinamento dei layout dei menu"
  - "menu [C++], applicazioni documento OLE"
  - "unione della barra degli strumenti e della barra di stato"
  - "contenitori OLE, menu e risorse"
  - "barre di stato, applicazioni documento OLE"
  - "barre degli strumenti [C++], applicazioni documento OLE"
  - "modifica visiva, risorse e menu di applicazione"
ms.assetid: 80b6bb17-d830-4122-83f0-651fc112d4d1
caps.latest.revision: 9
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Menu e risorse: unione di menu
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo vengono illustrate le operazioni necessarie per le applicazioni OLE documento gestione della modifica visiva e l'attivazione sul posto correttamente.  L'attivazione sul posto vengono poste serie problematiche una sfida per le applicazioni server che contenitore \(component\).  L'utente rimane nella stessa finestra cornice \(nel contesto del documento contenitore\) ma in realtà esegue un'altra applicazione \(il server\).  Ciò richiede la coordinazione tra le risorse del contenitore e le applicazioni server.  
  
 Gli argomenti trattati in questo articolo sono:  
  
-   [Layout del menu](#_core_menu_layouts)  
  
-   [Barre degli strumenti e barre di stato](#_core_toolbars_and_status_bars)  
  
##  <a name="_core_menu_layouts"></a> Layout del menu  
 Il primo passaggio consiste di coordinare i layout di menu.  Per ulteriori informazioni, vedere la sezione di **Creazione menu** in [Considerazioni sulla programmazione di menu](https://msdn.microsoft.com/en-us/library/ms647557.aspx) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Le applicazioni contenitori devono creare un nuovo menu da utilizzare solo quando gli elementi incorporati vengono attivati sul posto.  Come minimo, questo menu è costituito di seguito, nell'ordine indicato:  
  
1.  Menu File identico a quello utilizzato quando i file vengono aperti. \(In genere nessun'altra voce di menu è posizionato prima dell'elemento successivo.\)  
  
2.  Separatore due consecutivi.  
  
3.  Finestra identica a quella utilizzata quando i file vengono aperti \(solo se l'applicazione contenitore in un'applicazione MDI\).  Alcune applicazioni possono disporre gli altri menu, ad esempio un menu di opzioni, appartenenti a questo gruppo, che rimane nel menu quando un elemento incorporato viene attivato sul posto.  
  
    > [!NOTE]
    >  Può contenere altri menu che influiscono sulla visualizzazione del documento contenitore, ad esempio zoom.  Questi menu contenitore viene visualizzato tra i due cifre in questa risorsa menu.  
  
 Le applicazioni \(componenti server\) devono inoltre possibile creare un nuovo menu in modo specifico per l'attivazione sul posto.  Deve essere simile al menu utilizzato quando i file vengono aperti, ma senza voci di menu, ad esempio il file e finestra che modificano il documento server invece di dati.  In genere, questo menu è costituito dai seguenti:  
  
1.  Menu Modifica identico a quello utilizzato quando i file vengono aperti.  
  
2.  Separatore.  
  
3.  Menu modifica dell'oggetto, ad esempio il menu della penna nell'esempio scribble.  
  
4.  Separatore.  
  
5.  Menu?.  
  
 Per un esempio, consultare il layout di un menu sul posto di esempio per un contenitore e un server.  I dettagli di ogni voce di menu sono stati rimossi per eseguire il più chiara di esempio.  Il menu sul posto contenitore ha le voci seguenti:  
  
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
  
 I separatori consecutivi indicano dove la prima parte del menu del server deve essere inserito.  Ora consultare il menu sul posto del server:  
  
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
  
 I divisori di seguito indicano dove il secondo gruppo di voci di menu contenitore deve essere inserito.  La struttura risultante del menu quando un oggetto dal server si trova sul posto attivato nell'aspetto di tale contenitore al seguente:  
  
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
  
 Come si può notare, separatori sono stati sostituiti con i gruppi diversi di menu di ogni applicazione.  
  
 Le tabelle dei tasti di scelta rapida associati al menu sul posto devono essere fornite dall'applicazione server.  Il contenitore di incorporerà nelle rispettive tabelle dei tasti di scelta rapida.  
  
 Quando un elemento incorporato viene attivato sul posto, il framework carica il menu sul posto.  Chiede quindi l'applicazione server per il relativo menu l'attivazione sul posto e la inserisce in cui i separatori vengono.  In questo modo i menu combinati.  Ottenere i menu del contenitore per l'esecuzione sulla posizione della finestra e di file e ottenere i menu del server da eseguire nell'elemento.  
  
##  <a name="_core_toolbars_and_status_bars"></a> Barre degli strumenti e barre di stato  
 Le applicazioni server è necessario creare una nuova barra degli strumenti e archiviare la bitmap in un file separato.  Le applicazioni generate mediante la creazione guidata applicazione archiviano questa bitmap in un file denominato ITOOLBAR.BMP.  La nuova barra degli strumenti sostituisce la barra degli strumenti dell'applicazione contenitore quando l'elemento del server viene attivato il posto e deve contenere gli stessi elementi della barra degli strumenti standard, ma rimuove le icone che rappresentano elementi nelle finestre e dei file.  
  
 Questa barra degli strumenti viene caricata nel `COleIPFrameWnd`\- classe derivata, creata automaticamente dalla creazione guidata applicazioni.  La barra di stato viene gestita dall'applicazione contenitore.  Per ulteriori informazioni sull'implementazione delle finestre cornici sul posto, vedere [Server: Implementazione di un server](../mfc/servers-implementing-a-server.md).  
  
## Vedere anche  
 [Menu e risorse \(OLE\)](../mfc/menus-and-resources-ole.md)   
 [Attivazione](../mfc/activation-cpp.md)   
 [Server](../mfc/servers.md)   
 [Contenitori](../mfc/containers.md)