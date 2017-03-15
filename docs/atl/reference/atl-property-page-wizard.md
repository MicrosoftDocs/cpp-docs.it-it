---
title: "Creazione guidata pagina delle propriet&#224; ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.ppg.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Progetti ATL, aggiunta di pagine delle proprietà"
  - "Creazione guidata pagina delle proprietà ATL"
ms.assetid: 6113e325-facd-4f68-b491-144d75209922
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Creazione guidata pagina delle propriet&#224; ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per [aggiungere una pagina delle proprietà a un progetto ATL](../../atl/reference/adding-an-atl-property-page.md) o a un progetto MFC con supporto ATL.  Attraverso una pagina delle proprietà ATL è possibile fornire un'interfaccia utente per l'impostazione delle proprietà, ovvero la chiamata dei metodi, di uno o più oggetti COM.  
  
## Note  
 A partire da [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)], lo script della registrazione prodotto da questa procedura guidata registrerà i componenti COM in **HKEY\_CURRENT\_USER** invece di **HKEY\_LOCAL\_MACHINE**.  Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata ATL.  
  
## Nomi  
 È possibile specificare il nome dell'oggetto, dell'interfaccia e delle classi da aggiungere al progetto.  Ad eccezione di **Nome breve**, il testo di tutte le altre caselle può essere modificato in modo indipendente.  Se si cambia il testo in **Nome breve**, la modifica avrà effetto sui nomi specificati in tutte le altre caselle di questa schermata.  Se viene modificato il nome specificato in **Coclasse** nella sezione COM, le modifiche si rifletteranno sui nomi presenti nelle caselle **Tipo** e **ProgID**.  Grazie a questo metodo di gestione dei nomi, tutti i nomi sono facilmente identificabili nel corso dello sviluppo della pagina delle proprietà.  
  
> [!NOTE]
>  **Coclasse** è modificabile solo nei progetti senza attributi,  non in quelli con attributi.  
  
### C\+\+  
 Sono fornite informazioni per la classe C\+\+ creata per implementare l'oggetto.  
  
|||  
|-|-|  
|Termine|Definizione|  
|**Nome breve**|Consente di impostare il nome abbreviato per l'oggetto.  Attraverso questo nome vengono definiti i nomi per le caselle Classe, **Coclasse**, **File .cpp**, **File H**, **Tipo** e **ProgID**, a meno che tali campi non vengano modificati singolarmente.|  
|**File H**|Consente di impostare il nome del file di intestazione per la classe del nuovo oggetto.  Per impostazione predefinita, il nome si basa su quello specificato in **Nome breve**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata o per aggiungere la dichiarazione di classe a un file esistente.  Se viene selezionato un file esistente, questo non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.<br /><br /> Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere la dichiarazione di classe al contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.|  
|**Classe**|Consente di impostare il nome della classe che implementa l'oggetto.  Tale nome è basato sul nome specificato in **Nome breve**, preceduto da "C", il prefisso standard per un nome di classe.|  
|**File CPP**|Consente di impostare il nome del file di implementazione per la classe del nuovo oggetto.  Per impostazione predefinita, il nome si basa su quello specificato in **Nome breve**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata.  Il file non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.<br /><br /> Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere l'implementazione della classe al termine del contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.|  
|**Con attributi**|Consente di specificare se l'oggetto utilizza gli attributi.  Se si aggiunge un oggetto a un progetto ATL con attributi, l'opzione risulta selezionata e non modificabile. A un progetto creato con supporto degli attributi è quindi possibile aggiungere solo oggetti con attributi.<br /><br /> È possibile aggiungere un oggetto con attributi unicamente a un progetto ATL che utilizza gli attributi.  Se si seleziona questa opzione per un progetto ATL senza supporto degli attributi, verrà chiesto di specificare se aggiungere tale supporto al progetto.<br /><br /> Per impostazione predefinita, qualsiasi oggetto aggiunto successivamente alla selezione di questa opzione viene designato come oggetto con attributi \(casella di controllo selezionata\).  È possibile deselezionare questa casella per aggiungere un oggetto che non utilizza gli attributi.<br /><br /> Per ulteriori informazioni, vedere [Impostazioni applicazione, Creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [Meccanismi fondamentali degli attributi](../../windows/basic-mechanics-of-attributes.md).|  
  
### COM  
 È possibile specificare informazioni sulle funzionalità COM per l'oggetto.  
  
 **Coclasse**  
 Consente di impostare il nome della classe Component che contiene un elenco di interfacce supportate dall'oggetto.  
  
> [!NOTE]
>  Se viene creato il progetto utilizzando gli attributi o viene indicato in questa schermata della procedura guidata che la pagina delle proprietà utilizza gli attributi, non è possibile modificare questa opzione poiché ATL non include l'attributo `coclass`.  
  
 **Type**  
 Consente di impostare la descrizione dell'oggetto che verrà visualizzata nel Registro di sistema.  
  
 **ProgID**  
 Consente di impostare il nome che può essere utilizzato dai contenitori al posto del CLSID dell'oggetto.  
  
## Vedere anche  
 [Opzioni, Creazione guidata pagina delle proprietà ATL](../../atl/reference/options-atl-property-page-wizard.md)   
 [Stringhe, Creazione guidata pagina delle proprietà ATL](../../atl/reference/strings-atl-property-page-wizard.md)   
 [Example: Implementing a Property Page](../../atl/example-implementing-a-property-page.md)