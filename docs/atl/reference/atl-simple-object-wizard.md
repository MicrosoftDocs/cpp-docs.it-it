---
title: "Creazione guidata oggetto semplice ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.simple.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Progetti ATL, aggiunta di oggetti"
  - "Creazione guidata oggetto semplice ATL"
ms.assetid: f7f85741-9aad-4543-a917-a29b996364da
caps.latest.revision: 13
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione guidata oggetto semplice ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Mediante questa procedura guidata è possibile inserire nel progetto un oggetto COM minimo.  Utilizzare questa schermata della procedura guidata per specificare i nomi che definiscono i file e la classe C\+\+ per l'oggetto e la relativa funzionalità COM.  
  
 Utilizzare la schermata [Opzioni](../../atl/reference/options-atl-simple-object-wizard.md) della procedura guidata per specificare il modello di threading, il supporto di aggregazione e l'eventuale supporto delle interfacce duali e dell'automazione.  È inoltre possibile definire il supporto per interfaccia di informazioni sugli errori, i punti di connessione, il supporto di Internet Explorer e il marshalling con modello di threading Free.  
  
## Note  
 A partire da [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)], lo script della registrazione prodotto da questa procedura guidata registrerà i componenti COM in **HKEY\_CURRENT\_USER** invece di **HKEY\_LOCAL\_MACHINE**.  Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata ATL.  
  
## Nomi  
 È possibile specificare il nome dell'oggetto, dell'interfaccia e delle classi da aggiungere al progetto.  Ad eccezione di **Nome breve**, il testo di tutte le altre caselle può essere modificato in modo indipendente.  Se si cambia il testo in **Nome breve**, la modifica avrà effetto sui nomi specificati in tutte le altre caselle di questa schermata.  Se viene modificato il nome **Coclasse** nella sezione COM, le modifiche si rifletteranno sui nomi presenti nelle caselle **Tipo** e **ProgID**, mentre il nome specificato in**Interfaccia** non verrà modificato.  Grazie a questo comportamento di denominazione, tutti i nomi sono facilmente identificabili nel corso dello sviluppo del controllo.  
  
> [!NOTE]
>  **Coclasse** è modificabile solo nei progetti senza attributi,  non in quelli con attributi.  
  
## C\+\+  
 Sono fornite informazioni per la classe C\+\+ creata per l'oggetto.  
  
 **Nome breve**  
 Consente di impostare il nome abbreviato per l'oggetto.  Attraverso questo nome vengono definiti i nomi specificati nelle caselle `Class` e **Coclasse**, **File .cpp**, **File .h**, **Interfaccia**, **Tipo** e **ProgID**, a meno che tali campi non vengano modificati singolarmente.  
  
 **File H**  
 Consente di impostare il nome del file di intestazione per la classe del nuovo oggetto.  Per impostazione predefinita, il nome si basa su quello specificato in **Nome breve**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata o per aggiungere la dichiarazione di classe a un file esistente.  Se viene selezionato un file esistente, questo non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere la dichiarazione di classe al contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **Classe**  
 Consente di impostare il nome della classe da creare.  Tale nome è basato sul nome specificato in **Nome breve**, preceduto da "C", il prefisso standard per un nome di classe.  
  
 **File CPP**  
 Consente di impostare il nome del file di implementazione per la classe del nuovo oggetto.  Per impostazione predefinita, il nome si basa su quello specificato in **Nome breve**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata.  Il file non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere l'implementazione della classe al termine del contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **Con attributi**  
 Consente di specificare se l'oggetto utilizza gli attributi.  Se si aggiunge un oggetto a un progetto ATL con attributi, questa opzione è selezionata e non può essere modificata.  A un progetto creato con supporto degli attributi è quindi possibile aggiungere solo oggetti con attributi.  
  
 È possibile aggiungere un oggetto con attributi unicamente a un progetto ATL che utilizza gli attributi.  Se si seleziona questa opzione per un progetto ATL senza supporto degli attributi, verrà chiesto di specificare se aggiungere tale supporto al progetto.  
  
 Per impostazione predefinita, qualsiasi oggetto aggiunto successivamente alla selezione di questa opzione viene designato come oggetto con attributi \(casella di controllo selezionata\).  È possibile deselezionare questa casella per aggiungere un oggetto che non utilizza gli attributi.  
  
 Per ulteriori informazioni, vedere [Impostazioni applicazione, Creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [Meccanismi fondamentali degli attributi](../../windows/basic-mechanics-of-attributes.md).  
  
## COM  
 È possibile specificare informazioni sulle funzionalità COM per l'oggetto.  
  
 **Coclasse**  
 Consente di impostare il nome della classe Component che contiene un elenco di interfacce supportate dall'oggetto.  
  
> [!NOTE]
>  Se il progetto viene creato utilizzando gli attributi o se viene indicato in questa schermata della procedura guidata che l'oggetto utilizza gli attributi, non è possibile modificare questa opzione poiché ATL non include l'attributo `coclass`.  
  
 **Type**  
 Consente di impostare la descrizione dell'oggetto che verrà visualizzata nel Registro di sistema.  
  
 **Interfaccia**  
 Consente di impostare l'interfaccia creata per l'oggetto,  la quale contiene i metodi personalizzati.  
  
 **ProgID**  
 Consente di impostare il nome che può essere utilizzato dai contenitori al posto del CLSID dell'oggetto.  
  
## Vedere anche  
 [ATL Simple Object](../../atl/reference/adding-an-atl-simple-object.md)