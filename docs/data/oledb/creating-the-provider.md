---
title: "Creazione di un provider | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "provider OLE DB, creazione"
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Creazione di un provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

#### Per creare un provider OLE DB mediante la Creazione guidata provider OLE DB ATL  
  
1.  Fare clic con il pulsante destro del mouse sul progetto.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
3.  Nella finestra di dialogo **Aggiungi classe** fare clic sull'icona **Provider OLE DB ATL** e quindi scegliere **Apri**.  
  
4.  Nella Creazione guidata provider OLE DB ATL immettere un nome breve per il provider nella casella **Nome breve**.  Negli argomenti che seguono viene utilizzato il nome breve "MyProvider", ma è possibile utilizzare un altro nome.  Le altre caselle del nome verranno compilate in base al nome immesso.  
  
5.  Se necessario, è possibile modificare tali nomi.  Oltre al nome dell'oggetto e al nome file è possibile modificare quanto segue:  
  
    -   **Coclasse**: il nome utilizzato da COM per creare il provider.  
  
    -   **ProgID**: l'identificatore a livello di codice, ovvero una stringa di testo che è possibile utilizzare in alternativa a un GUID.  
  
    -   **Versione**: utilizzata con il ProgID e la coclasse per generare un ID a livello di codice dipendente dalla versione.  
  
6.  Scegliere **Fine**.  
  
## Vedere anche  
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)