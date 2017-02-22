---
title: "Server: implementazione di finestre cornice sul posto | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre cornice, implementazione"
  - "finestre cornice, sul posto"
  - "finestre cornice sul posto"
  - "applicazioni server OLE, finestre cornice"
  - "server, finestre cornice sul posto"
ms.assetid: 09bde4d8-15e2-4fba-8d14-9b954d926b92
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Server: implementazione di finestre cornice sul posto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrata la procedura per implementare le finestre cornici sul posto in un'applicazione server di modifica visiva se non si intende utilizzare la creazione guidata dell'applicazione per creare un'applicazione server.  Anziché utilizzare la procedura descritta in questo articolo, è possibile utilizzare una classe esistente della finestra cornice sul posto sia da un'applicazione generata mediante la creazione guidata dell'applicazione sia da un esempio fornito con Visual C\+\+.  
  
#### Per dichiarare una classe della finestra cornice sul posto  
  
1.  Derivare una classe della finestra cornice sul posto da `COleIPFrameWnd`.  
  
    -   Utilizzare la macro `DECLARE_DYNCREATE` nel file di intestazione della classe.  
  
    -   Utilizzare la macro `IMPLEMENT_DYNCREATE` nel file \(con estensione cpp\) di implementazione della classe.  In questo modo gli oggetti di questa classe possono essere creati dal framework.  
  
2.  Dichiarare un membro `COleResizeBar` nella classe della finestra cornice.  Ciò è necessario se si vuole supportare il ridimensionamento sul posto nelle applicazioni server.  
  
     Dichiarare un gestore messaggi `OnCreate` \(mediante la finestra **Proprietà**\) e chiamare **Create** per il membro `COleResizeBar`, se è stato definito.  
  
3.  Se si dispone di una barra degli strumenti, dichiarare un membro `CToolBar` nella classe della finestra cornice.  
  
     Eseguire l'override della funzione membro `OnCreateControlBars` per creare una barra degli strumenti quando il server è attivo sul posto.  Di seguito è riportato un esempio.  
  
     [!code-cpp[NVC_MFCOleServer#1](../mfc/codesnippet/CPP/servers-implementing-in-place-frame-windows_1.cpp)]  
  
     Vedere la discussione di questo codice riportata dopo il passaggio 5.  
  
4.  Includere il file di intestazione per questa classe della finestra cornice sul posto nel file con estensione cpp principale.  
  
5.  In `InitInstance` per la classe dell'applicazione, chiamare la funzione `SetServerInfo` dell'oggetto modello di documento per specificare le risorse e la finestra cornice sul posto da utilizzare nella modifica aperta e sul posto.  
  
 La serie di chiamate di funzione nell'istruzione **if** crea la barra degli strumenti dalle risorse fornite dal server.  A questo punto, la barra degli strumenti fa parte della gerarchia della finestra del contenitore.  Poiché questa barra degli strumenti è derivata da `CToolBar`, passerà i messaggi al proprietario, la finestra cornice dell'applicazione del contenitore, a meno che non si modifichi il proprietario.  Per questo motivo la chiamata a `SetOwner` è necessaria.  Questa chiamata modifica la finestra a cui vengono inviati i comandi con la finestra cornice sul posto del server, causando il passaggio dei messaggi al server.  In questo modo il server può reagire alle operazioni sulla barra degli strumenti che fornisce.  
  
 L'ID del bitmap della barra degli strumenti deve corrispondere a quello delle altre risorse sul posto definite nell'applicazione server.  Vedere [Menu e risorse: aggiunte di server](../mfc/menus-and-resources-server-additions.md) per i dettagli.  
  
 Per ulteriori informazioni, vedere [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md), [COleResizeBar](../mfc/reference/coleresizebar-class.md) e [CDocTemplate::SetServerInfo](../Topic/CDocTemplate::SetServerInfo.md) nei *Riferimenti alla libreria di classi*.  
  
## Vedere anche  
 [Server](../mfc/servers.md)   
 [Server: implementazione di un server](../mfc/servers-implementing-a-server.md)   
 [Server: implementazione di documenti server](../mfc/servers-implementing-server-documents.md)   
 [Server: elementi server](../mfc/servers-server-items.md)