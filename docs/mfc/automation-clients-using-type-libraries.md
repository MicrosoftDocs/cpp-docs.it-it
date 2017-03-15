---
title: "Client di automazione: utilizzo delle librerie dei tipi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MkTypLib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file .odl"
  - "client di automazione, librerie dei tipi"
  - "classi [C++], invio"
  - "client, automazione"
  - "classe di invio"
  - "MkTypLib (strumento)"
  - "ODL (Object Description Language)"
  - "ODL (file)"
  - "librerie dei tipi, client di automazione"
ms.assetid: d405bc47-118d-4786-b371-920d035b2047
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Client di automazione: utilizzo delle librerie dei tipi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I client di automazione devono disporre di informazioni sulle proprietà e i metodi degli oggetti server se i client devono modificare gli oggetti del server.  Le proprietà con tipi di dati; metodi dei valori restituiti e spesso accettano parametri.  Il client richiede informazioni sui tipi di dati di tutte queste da associare in modo statico al tipo di oggetto server.  
  
 Queste informazioni sul tipo può essere impostata in diversi modi.  La modalità consigliata consiste nel creare una libreria dei tipi.  
  
 Per informazioni su [MkTypLib](http://msdn.microsoft.com/library/windows/desktop/aa366797), vedere [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Visual C\+\+ può leggere un file di libreria dei tipi e creare una classe di invio derivata da [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md).  Un oggetto di tale classe dispone di proprietà e operazioni che comportano quelle dell'oggetto server.  L'applicazione chiama questa proprietà e le operazioni oggetto e funzionalità ereditata da `COleDispatchDriver` risolve tali chiamate di sistema OLE, che a sua volta le instradi all'oggetto server.  
  
 Visual C\+\+ gestisce automaticamente questo file della libreria dei tipi automaticamente se si intende incorporare l'automazione dopo aver creato il progetto.  Come parte di ogni compilazione, il file .tlb verrà compilato con MkTypLib.  
  
### Per creare una classe di invio da un file della libreria dei tipi \(TLB\)  
  
1.  In Visualizzazione classi o in Esplora soluzioni, fare clic con il pulsante destro del mouse sul progetto e scegliere **Aggiungi** quindi fare clic **Add Class** dal menu di scelta rapida.  
  
2.  Nella finestra di dialogo **Add Class**, selezionare la cartella di **Visual C\+\+\/MFC** nel riquadro sinistro.  Selezionare l'icona di **Classe MFC da libreria di tipi** nel riquadro di destra e scegliere **Apri**.  
  
3.  Nella finestra di dialogo **Aggiunta guidata classe da libreria dei tipi**, selezionare una libreria dei tipi dall'elenco a discesa **Librerie di tipo disponibili**.  La casella di **Interfacce** per visualizzare le interfacce disponibili per la libreria dei tipi selezionata.  
  
    > [!NOTE]
    >  È possibile selezionare le interfacce da più librerie dei tipi.  
  
     Per selezionare le interfacce, farle doppio clic oppure fare clic sul pulsante di **Aggiungi**.  Al termine di questa operazione, i nomi delle classi send verranno visualizzati nella casella di **Classi generate**.  È possibile modificare i nomi della classe nella casella di `Class`.  
  
     La casella di **File** visualizzare il file in cui la classe viene dichiarata. è possibile modificare questo nome file anche\).  È inoltre possibile utilizzare il pulsante sfoglia per selezionare altri file, se si desidera disporre dell'intestazione e le informazioni sull'implementazione scritte nei file esistenti o in una directory diversa dalla directory del progetto.  
  
    > [!NOTE]
    >  Tutte le classi di invio per le interfacce selezionate verranno inserite nel file specificato di seguito.  Se si desidera che le interfacce per indicare nelle intestazioni separate, è necessario eseguire questa procedura guidata per ogni file di intestazione che si desidera creare.  
  
    > [!NOTE]
    >  Alcune informazioni della libreria dei tipi possono essere memorizzate in file con estensioni di file DLL, di .OCX, o di .OLB.  
  
4.  Scegliere **Fine**.  
  
     La procedura guidata viene quindi scritto il codice per le classi di invio utilizzando la classe e i nomi file specificati.  
  
## Vedere anche  
 [Client di automazione](../mfc/automation-clients.md)