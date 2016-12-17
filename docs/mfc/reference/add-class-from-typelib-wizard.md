---
title: "Aggiunta guidata classe da libreria dei tipi | Microsoft Docs"
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
  - "vc.codewiz.class.typelib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Aggiunta guidata classe da libreria dei tipi [C++]"
  - "COM (interfacce), aggiunta di classi"
ms.assetid: 96152afd-9374-4649-a6ab-b0fa2a5592a3
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta guidata classe da libreria dei tipi
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per aggiungere una classe MFC da una libreria dei tipi disponibile.  Verrà creata una classe per ogni interfaccia aggiunta dalla libreria dei tipi selezionata.  
  
 **Aggiungi da**  
 Specifica il percorso della libreria dei tipi, da cui viene creata la classe.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Registro di sistema**|La libreria dei tipi è registrata nel sistema.  Le librerie dei tipi registrate sono elencate in **Librerie dei tipi disponibili**.|  
|**File**|La libreria dei tipi non è necessariamente registrata nel sistema, ma è contenuta in un file.  È necessario indicare il percorso del file nella casella **Percorso**.|  
  
 **Librerie dei tipi disponibili**  
 Consente di visualizzare un elenco delle librerie dei tipi attualmente registrate nel sistema.  Selezionare una libreria dei tipi da questo elenco per visualizzarne le interfacce nell'elenco **Interfacce**.  
  
 Per ulteriori informazioni sulla registrazione delle librerie dei tipi, vedere Inside Distributed COM: Type Libraries and Language Integration in MSDN Library \(informazioni in lingua inglese\).  
  
 **Posizione**  
 Consente di specificare il percorso della libreria dei tipi.  Se si seleziona **File** in **Aggiungi classe da**, sarà possibile indicare il percorso del file contenente la libreria dei tipi.  Per cercare il percorso del file, fare clic sul pulsante con i puntini di sospensione.  
  
 **Interfacce**  
 Consente di visualizzare un elenco delle interfacce della libreria dei tipi attualmente selezionata nell'elenco **Librerie dei tipi disponibili**.  
  
|Pulsante di trasferimento|Descrizione|  
|-------------------------------|-----------------|  
|**\>**|Aggiunge l'interfaccia selezionata nell'elenco **Interfacce**.  Se non è selezionata alcuna interfaccia, l'opzione non è disponibile.|  
|**\>\>**|Utilizzare questa opzione per aggiungere tutte le interfacce della libreria dei tipi attualmente selezionata nell'elenco **Librerie dei tipi disponibili**.|  
|**\<**|Rimuove la classe selezionata nell'elenco **Classi generate**.  Se non è selezionata alcuna interfaccia, l'opzione non è disponibile.|  
|**\<\<**|Rimuove tutte le classi dell'elenco **Classi generate**.  Se l'elenco **Classi generate** è vuoto, l'opzione non è disponibile.|  
  
 **Classi generate**  
 Specifica i nomi della classe da generare interfacce aggiunte mediante il pulsante di **\>\>** o di **\>**.  Fare clic su questa casella per selezionare una classe, quindi utilizzare i tasti Su e Giù per scorrere l'elenco e visualizzare nella casella `Class` il nome di ogni classe e nella casella **File** il nome del file generato dalla procedura guidata quando si sceglie **Fine**.  In questa casella è possibile selezionare una sola classe per volta.  
  
 È possibile rimuovere una classe o in questo elenco e facendo clic su **\<**.  Non è necessario selezionare una classe nella casella le classi generate per rimuovere tutte le classi; facendo clic su **\<\<**, rimuovere tutte le classi nella casella di **Classi generate** .  
  
 `Class`  
 Nome della classe selezionata nella casella **Classi generate** aggiunta dalla procedura guidata quando si sceglie **Fine**.  È possibile modificare il nome in questa casella.  
  
 **File**  
 Consente di impostare il nome del file di intestazione per la nuova classe.  Per impostazione predefinita, questo nome si basa su quello specificato in **Classi generate**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata o per aggiungere la dichiarazione di classe a un file esistente.  Se si sceglie un file esistente, questo non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere la dichiarazione di classe al contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
## Vedere anche  
 [Classe MFC da una libreria dei tipi](../../mfc/reference/adding-an-mfc-class-from-a-type-library.md)   
 [Client di automazione: utilizzo delle librerie dei tipi](../../mfc/automation-clients-using-type-libraries.md)