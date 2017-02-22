---
title: "File del provider generati tramite procedura guidata | Microsoft Docs"
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
  - "provider OLE DB, file generati dalla procedura guidata"
ms.assetid: 6e1ac94b-eb90-4abf-82b3-06944b947ebc
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# File del provider generati tramite procedura guidata
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Con la Creazione guidata provider OLE DB ATL vengono generati i file elencati di seguito.  Sebbene negli argomenti che seguono venga utilizzato il nome breve "MyProvider", i nomi file reali dipenderanno dal nome immesso durante la creazione del provider.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|MyProviderRS.cpp|Contiene il metodo `Execute` per il supporto comandi e la mappa delle colonne del provider.|  
|MyProviderDS.h|Implementa l'oggetto DataSource.  Questo file di intestazione contiene la mappa delle proprietà dell'origine dati.|  
|MyProviderRS.h|Implementa gli oggetti Command e Rowset.  Questo file di intestazione contiene la mappa delle proprietà del rowset e dei comandi.|  
|MyProviderSess.h|Implementa l'oggetto Session.  Questo file di intestazione contiene la mappa delle proprietà della sessione.|  
|MyProvider.rgs|Contiene gli oggetti registrati generati dalla Creazione guidata provider OLE DB ATL.|  
  
## Vedere anche  
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)