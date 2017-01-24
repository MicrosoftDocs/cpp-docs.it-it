---
title: "Aggiunta guidata classe da controllo ActiveX | Microsoft Docs"
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
  - "vc.codewiz.class.axcontrol"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata controllo ActiveX MFC"
  - "Aggiunta guidata classe da controllo ActiveX [C++]"
ms.assetid: 668d801c-5fb6-4176-9191-5c38995a4713
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta guidata classe da controllo ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa procedura guidata per aggiungere una classe MFC da un controllo ActiveX disponibile.  Verrà creata una classe per ogni interfaccia aggiunta dal controllo ActiveX selezionato.  
  
 **Aggiungi classe da**  
 Specifica il percorso della libreria dei tipi, da cui viene creata la classe.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Registro di sistema**|La libreria dei tipi è registrata nel sistema.  Le librerie dei tipi registrate sono elencate in **Controlli ActiveX disponibili**.|  
|**File**|La libreria dei tipi non è necessariamente registrata nel sistema, ma è contenuta in un file.  È necessario indicare il percorso del file nella casella **Percorso**.|  
  
 **Controlli ActiveX disponibili**  
 Elenco dei controlli ActiveX registrati nel sistema.  Selezionare un controllo ActiveX da questo elenco per visualizzarne le interfacce nell'elenco **Interfacce**.  Per ulteriori informazioni sulla registrazione di controlli ActiveX, vedere [Controlli ActiveX MFC: distribuzione dei controlli ActiveX](../mfc/mfc-activex-controls-distributing-activex-controls.md).  
  
 Se si seleziona **File** in **Aggiungi classe da**, non sarà possibile modificare la casella.  
  
 **Location**  
 Percorso del controllo ActiveX.  Se si seleziona **File** in **Aggiungi classe da**, sarà possibile indicare il percorso del file contenente la libreria dei tipi.  Per cercare il percorso del file, fare clic sul pulsante con i puntini di sospensione.  
  
 Se si seleziona **Registro di sistema** in **Aggiungi classe da**, non sarà possibile modificare la casella.  
  
 **Interfacce**  
 Interfacce del controllo ActiveX selezionato nella casella **Controlli ActiveX disponibili** o della libreria dei tipi presente nel file specificato nella casella **Percorso**.  
  
|Pulsante di trasferimento|Descrizione|  
|-------------------------------|-----------------|  
|**\>**|Aggiunge l'interfaccia selezionata nell'elenco **Interfacce**.  Non disponibile se non è selezionata alcuna interfaccia.|  
|**\>\>**|Aggiunge tutte le interfacce del controllo ActiveX selezionato nella casella **Controlli ActiveX disponibili** o della libreria dei tipi presente nel file specificato nella casella **Percorso**.|  
|**\<**|Rimuove la classe selezionata nell'elenco **Classi generate**.  Non disponibile se non è selezionata alcuna classe nell'elenco **Classi generate**.|  
|**\<\<**|Rimuove tutte le classi dell'elenco **Classi generate**.  Non disponibile se l'elenco **Classi generate** è vuoto.|  
  
 **Classi generate**  
 Specifica i nomi delle classi da generare dalle interfacce aggiunte mediante il pulsante **\>** o **\>\>**.  Fare clic su questa casella per selezionare una classe, quindi utilizzare le frecce Su e Giù per scorrere l'elenco e visualizzare il nome di ogni classe nella casella `Classe`, nonché, nella casella **File .h**, il nome del file generato nella procedura guidata quando si sceglie **Fine**.  In questa casella è possibile selezionare una sola classe per volta.  
  
 Per rimuovere una classe, selezionarla dall'elenco e fare clic su **Rimuovi**.  Per rimuovere tutte le classi dalla casella **Classi generate** non è necessario selezionarle, ma è sufficiente fare clic su **Rimuovi tutte**.  
  
 `Class`  
 Nome della classe selezionata nella casella **Classi generate** aggiunta dalla procedura guidata quando si sceglie **Fine**.  È possibile modificare il nome in questa casella.  
  
 **File H**  
 Consente di impostare il nome del file di intestazione per la classe del nuovo oggetto.  Per impostazione predefinita, questo nome si basa su quello specificato in **Classi generate**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata o per aggiungere la dichiarazione di classe a un file esistente.  Se si sceglie un file esistente, questo non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere la dichiarazione di classe al contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **File CPP**  
 Consente di impostare il nome del file di implementazione per la classe del nuovo oggetto.  Per impostazione predefinita, questo nome si basa su quello specificato in **Classi generate**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata.  Il file non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere l'implementazione della classe al termine del contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
## Vedere anche  
 [Aggiunta di una classe da un controllo ActiveX](../ide/adding-a-class-from-an-activex-control-visual-cpp.md)   
 [Client di automazione: utilizzo delle librerie dei tipi](../mfc/automation-clients-using-type-libraries.md)