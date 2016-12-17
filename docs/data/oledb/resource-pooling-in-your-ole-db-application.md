---
title: "Pooling di risorse in un&#39;applicazione OLE DB | Microsoft Docs"
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
  - "provider OLE DB, pool di risorse"
  - "OLE DB (servizi) [OLE DB], pool di risorse"
  - "OLE DB, pool di risorse"
  - "pool di risorse [OLE DB], servizi"
ms.assetid: 2ead1bcf-bbd4-43ea-a307-bb694b992fc1
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Pooling di risorse in un&#39;applicazione OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per utilizzare il pooling nell'applicazione, è necessario verificare che i servizi OLE DB vengano richiamati ottenendo l'origine dati tramite **IDataInitialize** o **IDBPromptInitialize**.  Se si utilizza direttamente `CoCreateInstance` per richiamare il provider in base al relativo CLSID, non verrà richiamato alcun servizio OLE DB.  
  
 I servizi OLE DB mantengono i pool delle origini dati connesse fino a quando viene mantenuto un riferimento a **IDataInitialize** o **IDBPromptInitialize** o fino a quando rimane attiva una connessione.  Anche i pool vengono mantenuti automaticamente all'interno di un ambiente di servizi COM\+ 1.0 o di Internet Information Services.  Se nell'applicazione viene utilizzato il pooling all'esterno dell'ambiente di servizi COM\+ 1.0 o di Internet Information Services, sarà opportuno mantenere un riferimento a **IDataInitialize** o **IDBPromptInitialize** oppure mantenere attiva almeno una connessione.  Per garantire che il pool non venga eliminato quando l'ultima connessione viene rilasciata dall'applicazione, mantenere il riferimento o mantenere attiva la connessione per l'intera durata dell'applicazione.  
  
 I servizi OLE DB identificano il pool da cui verrà creata la connessione al momento della chiamata di `Initialize`.  Dopo che una connessione è stata creata da un pool, non potrà essere spostata a un pool differente.  Evitare pertanto eventuali operazioni nell'applicazione che possano modificare le informazioni di inizializzazione, ad esempio non chiamare `UnInitialize` o `QueryInterface` per un'interfaccia specifica del provider prima di chiamare `Initialize`.  Non verrà inoltre eseguito il pooling delle connessioni stabilite con un valore di prompt diverso da **DBPROMPT\_NOPROMPT**.  È tuttavia possibile utilizzare la stringa di inizializzazione recuperata da una connessione stabilita tramite prompt per stabilire ulteriori connessioni con pooling alla stessa origine dati.  
  
 Per alcuni provider è necessario stabilire una connessione separata per ciascuna sessione.  Queste connessioni supplementari devono essere inserite separatamente nella transazione distribuita, se ne è presente una.  Con i servizi OLE DB verrà inserita nella cache e riutilizzata una sola sessione per origine dati. Se tuttavia l'applicazione richiede più sessioni contemporaneamente da una sola origine dati, è possibile che il provider stabilisca ulteriori connessioni e ulteriori integrazioni di transazioni di cui non è stato eseguito il pooling.  La creazione di un'origine dati separata per ciascuna sessione in un ambiente con pooling garantisce risultati migliori rispetto alla creazione di più sessioni da una singola origine dati.  
  
 Dal momento, infine, che con ADO l'utilizzo dei servizi OLE DB è automatico, se si utilizza ADO per stabilire le connessioni, il pooling e l'inserimento verranno eseguiti automaticamente.  
  
## Vedere anche  
 [Servizi e pooling di risorse OLE DB](../../data/oledb/ole-db-resource-pooling-and-services.md)