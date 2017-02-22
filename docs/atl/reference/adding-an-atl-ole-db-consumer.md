---
title: "Aggiunta di un consumer OLE DB ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL OLE DB (consumer)"
  - "ATL (progetti), aggiunta di consumer OLE DB ATL"
  - "OLE DB, aggiunta di consumer ATL OLE DB ai progetti"
ms.assetid: f940a513-4e42-4148-b521-dd0d7dc89fa2
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Aggiunta di un consumer OLE DB ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per aggiungere un consumer OLE DB ATL a un progetto.  Il consumer è costituito da una classe di accesso OLE DB e dalle associazioni dati necessarie per accedere a un'origine dati.  È necessario che il progetto sia stato creato come applicazione COM ATL o come applicazione MFC o Win32 con supporto ATL, il quale viene aggiunto automaticamente dalla Creazione guidata consumer OLE DB ATL.  
  
 **Note** è possibile aggiungere un consumer OLE DB a un progetto MFC.  In questo caso, la Creazione guidata consumer OLE DB ATL aggiunge il supporto COM necessario per il progetto.  Per poter eseguire questa operazione, è necessario che durante la creazione del progetto MFC sia stata selezionata la casella di controllo **Controlli ActiveX** nella schermata **Funzionalità avanzate** della creazione guidata \(la casella di controllo è selezionata per impostazione predefinita\).  Se si seleziona questa opzione, **CoInitialize** e **CoUninitialize** verranno chiamati automaticamente dall'applicazione.  Se non si seleziona la casella di controllo **Controlli ActiveX** durante la creazione del progetto MFC, sarà necessario chiamare **CoInitialize** e **CoUninitialize** nel codice principale.  
  
### Per aggiungere un consumer OLE DB ATL al progetto  
  
1.  In Visualizzazione classi fare clic con il pulsante destro del mouse sul progetto.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
2.  Nella cartella Visual C\+\+ fare doppio clic sull'icona **Consumer OLE DB ATL** oppure selezionarla e scegliere **Apri**.  
  
     Verrà visualizzata la Creazione guidata consumer OLEDB ATL.  
  
3.  Definire le impostazioni come descritto in [Creazione guidata consumer OLEDB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md).  
  
4.  Scegliere **Fine** per uscire dalla procedura guidata.  Il codice del consumer OLE DB appena creato verrà inserito nel progetto.  
  
## Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)