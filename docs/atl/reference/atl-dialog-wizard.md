---
title: "Creazione guidata finestra di dialogo ATL | Microsoft Docs"
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
  - "vc.codewiz.class.atl.dlg.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata finestra di dialogo ATL"
  - "Progetti ATL, aggiunta di risorse finestra di dialogo"
ms.assetid: b0b9ace5-83c9-40d3-82c3-eb6293f10583
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione guidata finestra di dialogo ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzando questa procedura guidata è possibile inserire nel progetto un oggetto finestra di dialogo ATL, derivato da [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md).  Una finestra di dialogo derivata da `CAxDialogImpl` può contenere controlli ActiveX.  
  
 Viene creata una risorsa finestra di dialogo con pulsanti **OK** e **Annulla** predefiniti.  Per modificare questa risorsa e aggiungere controlli ActiveX è possibile utilizzare l'[Editor finestre](../../mfc/dialog-editor.md) in Visualizzazione risorse.  
  
 Nel file di intestazione vengono inseriti una [mappa messaggi](../../atl/message-maps-atl.md) e dichiarazioni per la gestione di eventi Click predefiniti.  Per ulteriori informazioni sulle finestre di dialogo ATL, vedere [Implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md).  
  
 **Nome breve**  
 Consente di impostare il nome breve per l'oggetto finestra di dialogo ATL.  Il nome specificato determina il nome della classe e i nomi dei file CPP e H, a meno che questi campi non vengano modificati singolarmente.  
  
 `Class`  
 Consente di impostare il nome della classe da creare.  Tale nome è basato sul nome specificato in **Nome breve**, preceduto da "C", il prefisso standard per un nome di classe.  
  
 **File H**  
 Consente di impostare il nome del file di intestazione per la classe del nuovo oggetto.  Per impostazione predefinita, questo nome si basa su quello specificato in **Nome breve**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata o per aggiungere la dichiarazione di classe a un file esistente.  Se si sceglie un file esistente, questo non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere la dichiarazione di classe al contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **File CPP**  
 Consente di impostare il nome del file di implementazione per la classe del nuovo oggetto.  Per impostazione predefinita, questo nome si basa su quello specificato in **Nome breve**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata.  Il file non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere l'implementazione della classe al termine del contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
## Vedere anche  
 [ATL Dialog Box](../../atl/reference/adding-an-atl-dialog-box.md)