---
title: "Stringhe modello documento, Creazione guidata aggiunta classe MFC | Microsoft Docs"
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
  - "vc.codewiz.class.mfc.simple.doctemp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata aggiunta classe MFC, stringhe controllo documenti"
ms.assetid: 14e1c834-5e79-4dbd-811f-ec8f0a9cdcb2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stringhe modello documento, Creazione guidata aggiunta classe MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa schermata della procedura guidata solo per le classi che soddisfano i seguenti criteri:  
  
-   Il progetto MFC supporta l'architettura documento\/visualizzazione.  
  
-   La classe base della nuova classe è [CFormView](../../mfc/reference/cformview-class.md).  
  
-   La casella di controllo **Genera risorse DocTemplate** è selezionata nella sezione **Nomi** della [Creazione guidata classe MFC](../../mfc/reference/mfc-add-class-wizard.md).  
  
 Vengono forniti i seguenti valori predefiniti per consentire la localizzazione, la gestione e la progettazione della visualizzazione dei form.  Poiché la maggior parte delle stringhe modello documento sono visibili e utilizzate dagli utenti del form, vengono localizzate in **Lingua risorse** nella schermata [Tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) della Creazione guidata applicazione MFC quando si crea il progetto.  
  
> [!NOTE]
>  Non viene fornito supporto per la stampa automatica per le classi derivate da `CFormView`.  
  
 Per ulteriori informazioni, vedere [Modelli di documenti e processo di creazione di documenti e visualizzazioni](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## Stringhe non localizzate  
 Si applica alle applicazioni che creano documenti utente.  Gli utenti possono aprire e salvare documenti in modo più semplice se il tipo di documento dispone di un'estensione di file e di un ID del tipo di file.  Questi elementi non sono localizzati in quanto sono utilizzati dal sistema piuttosto che dall'utente.  
  
 **Estensione di file**  
 Consente di impostare l'estensione di file associata al tipo di documento per questa applicazione form.  L'estensione di file predefinita si basa sul nome della classe.  Se ad esempio la nuova classe MFC è denominata **CWidget**, per impostazione predefinita l'estensione di file sarà WID.  L'estensione di file è utilizzata nei filtri di file e nelle finestre di dialogo **Apri** e **Salva con nome**.  
  
 Se si modifica l'estensione, viene modificata anche la casella **Nome del filtro**.  
  
> [!NOTE]
>  Se si modifica l'estensione di file predefinita, non includere il punto.  
  
 **ID del tipo di file**  
 Imposta l'etichetta per il tipo di documento nel Registro di sistema.  
  
## Stringhe localizzate  
 Consente di produrre stringhe associate ai form e ai documenti letti e utilizzati dagli utenti dell'applicazione. Tali stringhe sono localizzate.  
  
 **Nome del tipo di documento**  
 Identifica il tipo di documento in base al quale è possibile raggruppare i documenti dell'applicazione.  Per impostazione predefinita tale nome si basa sul nome della classe.  Se ad esempio la nuova classe MFC è denominata **CWidget**, per impostazione predefinita il nome del tipo di documento sarà Widget.  La modifica del nome predefinito non comporta alcuna modifica nelle altre opzioni riportate nella finestra di dialogo.  
  
 **Nome filtro**  
 Consente di impostare il nome che gli utenti possono indicare per trovare i file del tipo specificato.  Questa opzione può essere utilizzata mediante le opzioni **Tipo file** e **Salva come** delle finestre di dialogo standard di Windows **Apri** e **Salva con nome**.  Per impostazione predefinita, il nome si basa sul nome del progetto preceduto da File e seguito dall'estensione indicata in **Estensione di file**.  Se ad esempio il progetto è denominato Widget e l'estensione di file è WID, per impostazione predefinita, **Nome del filtro** sarà File Widget \(\*.wid\).  
  
 **Nuovo nome breve del file**  
 Se il progetto dispone di più modelli documento, imposta il nome che viene visualizzato nella finestra di dialogo standard di Windows `Nuovo`.  Se l'applicazione è un [server di automazione](../../mfc/automation-servers.md), questo nome viene utilizzato come nome breve dell'oggetto di automazione.  Per impostazione predefinita, tale nome si basa sul nome della classe.  
  
 **Nome lungo del tipo di file**  
 Imposta il nome del tipo di file nel Registro di sistema.  Se l'applicazione è un server di automazione, questo nome viene utilizzato come nome lungo dell'oggetto di automazione.  Per impostazione predefinita, tale nome è composto dal nome della classe seguito da .Document.  Se ad esempio la classe è denominata **CWidget**, il nome lungo del tipo di file sarà Widget.Document.  
  
 **Classe documento**  
 Consente di indicare la classe documento del progetto.  Per impostazione predefinita, si tratta della classe documento dell'applicazione principale, elencata nella schermata [Classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) della Creazione guidata applicazione MFC.  Se sono state aggiunte altre classi documento al progetto, è possibile selezionarne un'altra dall'elenco.  
  
## Vedere anche  
 [Creazione guidata aggiunta classe MFC](../../mfc/reference/mfc-add-class-wizard.md)   
 [Classe MFC](../../mfc/reference/adding-an-mfc-class.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)