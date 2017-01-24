---
title: "Stringhe modello documento, Creazione guidata applicazione MFC | Microsoft Docs"
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
  - "vc.appwiz.mfc.exe.doctemp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata applicazione MFC, stringhe modello di documento"
ms.assetid: 8109f662-3182-4682-977a-2503321c678a
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stringhe modello documento, Creazione guidata applicazione MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questa schermata della Creazione guidata applicazione MFC è possibile fornire o definire con maggiore precisione le opzioni riportate di seguito in modo da semplificare la gestione e la localizzazione dei documenti.  Le stringhe modello documento sono disponibili per le applicazioni per cui è stata impostata l'opzione **Supporto architettura documento\/visualizzazione** nella schermata [Tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md).  Non sono invece disponibili per le finestre di dialogo.  Poiché la maggior parte delle stringhe del modello di documento può essere visualizzata e utilizzata dagli utenti dell'applicazione, tali stringhe vengono localizzate in base all'opzione **Lingua risorse** specificata nella pagina **Tipo di applicazione** della procedura guidata.  
  
 **Stringhe non localizzate**  
 Si applica alle applicazioni che creano documenti utente.  Gli utenti possono aprire, stampare e salvare documenti in modo più semplice se si forniscono un'estensione di file e un ID del tipo di file.  Questi elementi non sono localizzati in quanto sono utilizzati dal sistema piuttosto che dall'utente.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Estensione di file**|Imposta l'estensione di file associata ai documenti salvati dall'utente quando utilizza l'applicazione.  Per un progetto denominato Widget, ad esempio, può essere impostata l'estensione di file WGT. Quando si immette l'estensione, non deve essere incluso il punto.<br /><br /> Se si fornisce un'estensione di file, è possibile stampare i documenti dell'applicazione da Esplora risorse senza avviare l'applicazione stessa, trascinando l'icona del documento sull'icona di una stampante.<br /><br /> Se non si specifica un'estensione, l'utente deve specificare un'estensione al momento del salvataggio dei file.  La procedura guidata non fornisce un'estensione di file predefinita.|  
|**ID del tipo di file**|Imposta l'etichetta per il tipo di documento nel Registro di sistema.|  
  
 **Stringhe localizzate**  
 Produce stringhe associate all'applicazione e al documento che vengono lette e utilizzate dagli utenti dell'applicazione e che vengono pertanto localizzate.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Lingua**|Indica la lingua in cui vengono visualizzate le stringhe per tutte le caselle incluse in **Stringhe localizzate**.  Per modificare il valore di questa casella, selezionare la lingua appropriata dall'elenco **Lingua risorse** riportato nella schermata [Tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) della Creazione guidata applicazione MFC.|  
|**Didascalia del frame principale**|Imposta il testo visualizzato nella parte superiore del frame principale dell'applicazione.  Per impostazione predefinita, corrisponde al nome del progetto.|  
|**Nome del tipo di documento**|Identifica il tipo di documento in base al quale è possibile raggruppare i documenti dell'applicazione.  Per impostazione predefinita, corrisponde al nome del progetto.  La modifica del nome predefinito non comporta alcuna modifica nelle altre opzioni riportate nella finestra di dialogo.|  
|**Nome filtro**|Imposta il nome che può essere specificato dagli utenti per trovare i file del tipo utilizzato.  Questa opzione può essere utilizzata mediante le opzioni **Tipo file** e **Salva come** delle finestre di dialogo standard di Windows **Apri** e **Salva con nome**.  Per impostazione predefinita, corrisponde al nome del progetto preceduto da File e seguito dall'estensione specificata in **Estensione file**.  Se il progetto è denominato Widget e l'estensione di file è WGT, ad esempio, l'impostazione predefinita dell'opzione **Nome filtro** sarà File Widget \(\*.wgt\).|  
|**Nuovo nome breve del file**|Imposta il nome visualizzato nella finestra di dialogo standard di Windows `New` se sono disponibili più modelli di documento nuovi.  Se l'applicazione è un [server di automazione](../../mfc/automation-servers.md), questo nome viene utilizzato come nome breve dell'oggetto di automazione.  Per impostazione predefinita, corrisponde al nome del progetto.|  
|**Nome lungo del tipo di file**|Imposta il nome del tipo di file nel Registro di sistema.  Se l'applicazione è un server di automazione, questo nome viene utilizzato come nome lungo dell'oggetto di automazione.  Per impostazione predefinita, corrisponde al nome del progetto seguito da .Document.|  
  
## Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)