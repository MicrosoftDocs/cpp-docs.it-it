---
title: "Interfacce dell&#39;oggetto Command | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetto comando (interfacce) [C++]"
  - "oggetti comando [OLE DB]"
  - "OLE DB [C++], interfacce dell'oggetto comando"
ms.assetid: dacff5ae-252c-4f20-9ad7-4e602cc48536
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Interfacce dell&#39;oggetto Command
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'oggetto Command utilizza l'interfaccia `IAccessor` per specificare le associazioni di parametri.  Il consumer chiama `IAccessor::CreateAccessor`, passando una matrice di strutture `DBBINDING`.  `DBBINDING` contiene informazioni sulle associazioni delle colonne, ad esempio tipo e lunghezza.  Il provider riceve le strutture e determina come trasferire i dati e l'eventuale necessità di effettuare conversioni.  
  
 L'interfaccia `ICommandText` consente di specificare un comando di testo.  L'interfaccia `ICommandProperties` gestisce tutte le proprietà dei comandi.  
  
## Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)