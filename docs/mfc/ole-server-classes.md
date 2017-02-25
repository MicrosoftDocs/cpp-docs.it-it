---
title: "Classi server OLE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM (componenti), classi"
  - "classi component"
  - "applicazioni server OLE, Classi server"
  - "documenti server OLE"
ms.assetid: 8e9b67a2-c0ff-479c-a8d6-19b36c5e6fc6
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi server OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi utilizzate dalle applicazioni server.  I documenti server sono derivati da `COleServerDoc` anziché da **CDocument**.  Si noti che in quanto `COleServerDoc` è derivato da `COleLinkingDoc`, documenti server possono anche essere contenitori che supportano l'accesso.  
  
 La classe di `COleServerItem` rappresenta un documento o una parte di documento che è possibile incorporare in un altro documento o essere collegato.  
  
 `COleIPFrameWnd` e `COleResizeBar` supportano la modifica sul posto mentre l'oggetto si trova in un contenitore e creazione di supportare di `COleTemplateServer` del documento\/visualizzazione abbina in modo da oggetti OLE da altre applicazioni possono essere modificati.  
  
 [COleServerDoc](../mfc/reference/coleserverdoc-class.md)  
 Utilizzata come classe base per il documento di applicazione server classe.  gli oggetti di`COleServerDoc` forniscono il supporto di massa di server con le interazioni con oggetti di `COleServerItem`.  La funzionalità di modifica visiva viene fornita utilizzando l'architettura documento\/visualizzazione della libreria di classi.  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Classe base astratta t `COleClientItem` e di `COleServerItem`.  Gli oggetti di classi derivate da `CDocItem` rappresentano parti dei documenti.  
  
 [COleServerItem](../mfc/reference/coleserveritem-class.md)  
 Utilizzato per rappresentare l'interfaccia OLE agli elementi di `COleServerDoc`.  È in genere un oggetto di `COleServerDoc`, che rappresenta la parte incorporata di un documento.  In server che i collegamenti di supporto a parti dei documenti, possono verificarsi di molti oggetti di `COleServerItem`, ognuno dei quali rappresenta un collegamento a una parte del documento.  
  
 [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)  
 Fornisce la finestra cornice per una visualizzazione quando un documento server in corso la modifica sul posto.  
  
 [COleResizeBar](../mfc/reference/coleresizebar-class.md)  
 Fornisce l'interfaccia utente standard per il ridimensionamento sul posto.  Gli oggetti della classe sono utilizzati sempre insieme a oggetti di `COleIPFrameWnd`.  
  
 [COleTemplateServer](../mfc/reference/coletemplateserver-class.md)  
 Utilizzato per creare documenti utilizzando l'architettura documento\/visualizzazione del framework.  Delegati di un oggetto di `COleTemplateServer` più del lavoro a un oggetto collegato di `CDocTemplate`.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 Un'eccezione derivazione da un errore nell'elaborazione OLE.  Questa classe viene utilizzata dai contenitori che dal server.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)