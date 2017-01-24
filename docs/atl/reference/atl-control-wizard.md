---
title: "Creazione guidata controllo ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.control.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata controllo ATL"
  - "Progetti ATL, aggiunta di controlli"
  - "comandi [] ATL, aggiunta ai progetti"
ms.assetid: 991f8e72-ffbc-4382-a4ce-e255acfba5b6
caps.latest.revision: 17
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione guidata controllo ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inserisce un controllo ATL in un progetto ATL o in un progetto MFC con supporto ATL.  È possibile utilizzare questa procedura guidata per inserire uno dei tre tipi di controlli seguenti:  
  
-   Controllo standard  
  
-   Controllo composito  
  
-   Un controllo DHTML  
  
 È inoltre possibile specificare un controllo minimo, che rimuove le interfacce dell'elenco [Interfacce](../../atl/reference/interfaces-atl-control-wizard.md), fornite come predefinite per i controlli da aprire nella maggior parte dei contenitori.  È possibile impostare le interfacce che si desidera vengano supportate dal controllo nella schermata **Interfacce** della procedura guidata.  
  
## Note  
 Lo script della registrazione prodotto da questa procedura guidata registrerà i componenti COM in HKEY\_CURRENT\_USER  invece che in HKEY\_LOCAL\_MACHINE.  Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata ATL.  
  
## Nomi  
 È possibile specificare il nome dell'oggetto, dell'interfaccia e delle classi da aggiungere al progetto.  Ad eccezione di **Nome breve**, il testo di tutte le altre caselle può essere modificato in modo indipendente.  Se si cambia il testo in **Nome breve**, la modifica avrà effetto sui nomi specificati in tutte le altre caselle di questa schermata.  Se viene modificato il nome **Coclasse** nella sezione COM, le modifiche si rifletteranno sui nomi presenti nella casella **Tipo**, mentre il nome specificato in **Interfaccia** e **ProgID** non verrà modificato.  Grazie a questo comportamento di denominazione, tutti i nomi sono facilmente identificabili nel corso dello sviluppo del controllo.  
  
> [!NOTE]
>  **Coclasse** è modificabile solo nei controlli senza attributi,  non in caso di presenza di attributi, non è possibile modificare **Coclass**.  
  
### C\+\+  
 Sono fornite informazioni per la classe C\+\+ creata per implementare l'oggetto.  
  
 **Nome breve**  
 Consente di impostare il nome abbreviato per l'oggetto.  Attraverso questo nome vengono definiti i nomi per classe e **Coclasse**, del file \(.CPP and .H\), dell'interfaccia e del **Tipo**, a meno che tali campi non vengano modificati singolarmente.  
  
 **Classe**  
 Consente di impostare il nome della classe che implementa l'oggetto.  Tale nome è basato sul nome specificato in **Nome breve**, preceduto da "C", il prefisso standard per un nome di classe.  
  
 **File H**  
 Consente di impostare il nome del file di intestazione per la classe del nuovo oggetto.  Per impostazione predefinita, il nome si basa su quello specificato in **Nome breve**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata o per aggiungere la dichiarazione di classe a un file esistente.  Se viene selezionato un file esistente, questo non verrà salvato nella posizione selezionata finché non si sceglie **Fine**.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere la dichiarazione di classe al contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **File CPP**  
 Consente di impostare il nome del file di implementazione per la classe del nuovo oggetto.  Per impostazione predefinita, il nome si basa su quello specificato in **Nome breve**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata.  Il file non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere l'implementazione della classe al termine del contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **Con attributi**  
 Consente di specificare se l'oggetto utilizza gli attributi.  Se si aggiunge un oggetto a un progetto ATL con attributi, questa opzione è selezionata e non può essere modificata.  A un progetto creato con supporto degli attributi è quindi possibile aggiungere solo oggetti con attributi.  
  
 È possibile aggiungere un oggetto con attributi unicamente a un progetto ATL che utilizza gli attributi.  Se si seleziona questa opzione per un progetto ATL senza supporto degli attributi, verrà chiesto di specificare se aggiungere tale supporto al progetto.  
  
 Per impostazione predefinita, qualsiasi oggetto aggiunto successivamente alla selezione di questa opzione viene designato come oggetto con attributi \(casella di controllo selezionata\).  È possibile deselezionare questa casella per aggiungere un oggetto che non utilizza gli attributi.  
  
 Per ulteriori informazioni, vedere [Impostazioni applicazione, Creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [Meccanismi fondamentali degli attributi](../../windows/basic-mechanics-of-attributes.md).  
  
### COM  
 È possibile specificare informazioni sulle funzionalità COM per l'oggetto.  
  
 **Coclasse**  
 Consente di impostare il nome della classe Component che contiene un elenco di interfacce supportate dall'oggetto.  
  
> [!NOTE]
>  Se si crea il progetto utilizzando gli attributi o se si indica in questa schermata della procedura guidata che il controllo utilizza gli attributi, non è possibile modificare questa opzione poiché ATL non include l'attributo **coclass**.  
  
 **Interfaccia**  
 Consente di impostare il nome dell'interfaccia per l'oggetto.  Per impostazione predefinita, un nome di interfaccia è preceduto da "I".  
  
 **Type**  
 Consente di impostare la descrizione dell'oggetto che verrà visualizzata nel Registro di sistema.  
  
 **ProgID**  
 Consente di impostare il nome che può essere utilizzato dai contenitori al posto del CLSID dell'oggetto.  Automaticamente questo campo non viene popolato.  Se non si popola manualmente questo campo, è possibile che il controllo non sia disponibile agli altri strumenti.  Ad esempio, controlli ActiveX generati senza un `ProgID` non sono disponibili nella finestra di dialogo **Inserisci controllo ActiveX**.  Per ulteriori informazioni sulla finestra di dialogo, vedere [Finestra di dialogo Inserisci controllo ActiveX](../../mfc/insert-activex-control-dialog-box.md).  
  
## Vedere anche  
 [ATL Control](../../atl/reference/adding-an-atl-control.md)   
 [Adding Functionality to the Composite Control](../../atl/adding-functionality-to-the-composite-control.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)