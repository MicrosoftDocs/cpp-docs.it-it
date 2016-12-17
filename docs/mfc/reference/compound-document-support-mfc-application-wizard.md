---
title: "Supporto documenti compositi, Creazione guidata applicazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.exe.compdoc"
dev_langs: 
  - "C++"
ms.assetid: 42e1af83-12c4-438d-92eb-13835afdb148
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto documenti compositi, Creazione guidata applicazione MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questa schermata della Creazione guidata applicazione MFC è possibile indicare il livello di supporto per documenti compositi e attivi fornito dall'applicazione.  Per supportare documenti compositi e modelli di documento, è necessario che l'applicazione supporti l'architettura documento\/visualizzazione.  
  
 Per impostazione predefinita, l'applicazione non è dotata di supporto per i documenti compositi.  Se si accetta questa impostazione, l'applicazione non sarà quindi in grado di supportare documenti attivi o file compositi.  
  
 **Supporto documenti compositi**  
 Determina se l'applicazione fornisce il supporto come contenitore, come server o entrambi.  Per ulteriori informazioni su questa area, vedere:  
  
-   [Contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md)  
  
-   [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md)  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**None**|Indica che non viene fornito alcun supporto per il collegamento e l'incorporamento di oggetti \(OLE, Object Linking and Embedding\).  Per impostazione predefinita, viene creata un'applicazione non dotata di supporto per ActiveX.|  
|**Contenitore**|Contiene oggetti collegati e incorporati.|  
|**Server ridotto**|Indica che l'applicazione è in grado di creare e gestire oggetti documento composito.  I server ridotti non possono essere eseguiti come applicazioni autonome e supportano unicamente elementi incorporati.|  
|**Server completo**|Indica che l'applicazione è in grado di creare e gestire oggetti documento composito.  I server completi possono essere eseguiti come applicazioni autonome e supportano gli elementi sia collegati sia incorporati.|  
|**Contenitore\/server completo**|Indica che l'applicazione può essere costituita sia da un contenitore che da un server.  Un contenitore rappresenta un'applicazione che può integrare elementi incorporati o collegati all'interno dei propri documenti.  Un server rappresenta invece un'applicazione che può creare elementi di automazione utilizzabili dalle applicazioni contenitore.|  
  
 **Opzioni aggiuntive**  
 Indica se l'applicazione supporta i documenti attivi.  Per ulteriori informazioni su questa funzionalità, vedere [Documenti attivi](../../mfc/active-documents.md).  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Server documenti attivi**|Indica che l'applicazione è in grado di creare e gestire documenti attivi.  Se si seleziona questa opzione, è necessario specificare un'estensione di file per il server di documenti attivi nella casella **Estensione di file** della schermata [Stringhe modello documento](../../mfc/reference/document-template-strings-mfc-application-wizard.md) della procedura guidata.  Per ulteriori informazioni, vedere [Server di documenti attivi](../../mfc/active-document-servers.md).|  
|**Contenitore documenti attivi**|Indica che l'applicazione può contenere documenti attivi all'interno del frame.  I documenti attivi comprendono, ad esempio, documenti di Internet Explorer o di Office, quali i file di Microsoft Word o i fogli di lavoro di Excel.  Per ulteriori informazioni, vedere [Active Document Containment](../../mfc/active-document-containment.md).|  
|**Supporto per file compositi**|I documenti dell'applicazione contenitore non vengono serializzati utilizzando il formato dei file compositi.  Questa opzione imposta il caricamento in memoria di un intero file contenente oggetti.  Non è possibile effettuare salvataggi incrementali per i singoli oggetti.  Al momento del salvataggio di un oggetto che è stato modificato, vengono salvati tutti gli oggetti inclusi nel file.|  
  
## Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)