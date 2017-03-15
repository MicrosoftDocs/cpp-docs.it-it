---
title: "Aggiunta di un provider OLE DB ATL | Microsoft Docs"
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
  - "provider ATL OLE DB"
  - "ATL (progetti), aggiunta di provider OLE DB ATL"
  - "OLE DB, aggiunta di provider ATL OLE DB ai progetti"
ms.assetid: 26fba1e3-880f-4bc6-90e5-2096a48a3a6c
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Aggiunta di un provider OLE DB ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per aggiungere a un progetto un provider OLEDB ATL,  che è costituito da un'origine dati, una sessione, un comando e classi di rowset.  Il progetto deve essere stato creato come applicazione COM ATL.  
  
### Per aggiungere un provider OLE DB ATL al progetto  
  
1.  In Visualizzazione classi fare clic con il pulsante destro del mouse sul progetto.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
2.  Nella cartella Visual C\+\+ fare doppio clic sull'icona **Provider OLE DB ATL** oppure selezionarla e scegliere **Apri**.  
  
     Verrà visualizzata la Creazione guidata provider OLE DB ATL.  
  
3.  Definire le impostazioni come descritto in [Creazione guidata provider OLE DB ATL](../../atl/reference/atl-ole-db-provider-wizard.md).  
  
4.  Scegliere **Fine** per uscire dalla procedura guidata. Il nuovo codice del provider OLE DB verrà inserito nel progetto.  
  
## Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)