---
title: "Abilitazione e disabilitazione dei servizi per un provider | Microsoft Docs"
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
  - "OLE DB (servizi) [OLE DB], abilitazione e disabilitazione"
  - "provider di servizi [OLE DB]"
ms.assetid: 3deac1bb-f660-407a-92ef-95e139e280c0
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Abilitazione e disabilitazione dei servizi per un provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I singoli servizi OLE DB possono essere abilitati o disabilitati per impostazione predefinita per tutte le applicazioni che accedono a un dato provider.  A tale scopo è necessario aggiungere una voce **OLEDB\_SERVICES** del Registro di sistema nella sezione del CLSID del provider, specificando un valore `DWORD` che indichi i servizi da abilitare o disabilitare, come illustrato nella tabella seguente:  
  
|Servizi predefiniti attivati|Valore parola chiave|  
|----------------------------------|--------------------------|  
|Tutti i servizi \(impostazione predefinita\)|0xffffffff|  
|Tutti tranne Pooling e AutoEnlistment|0xfffffffe|  
|Tutti tranne Client Cursor|0xfffffffb|  
|Tutti tranne Pooling, AutoEnlistment e Client Cursor|0xfffffff0|  
|Nessun servizio|0x00000000|  
|Nessuna aggregazione, tutti i servizi disabilitati|\<chiave mancante\>|  
  
## Vedere anche  
 [Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)