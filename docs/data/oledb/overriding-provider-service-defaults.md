---
title: "Override delle impostazioni predefinite dei servizi di un provider | Microsoft Docs"
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
  - "OLE DB (servizi) [OLE DB], override dei valori predefiniti"
  - "provider di servizi [OLE DB]"
ms.assetid: 08e366c0-74d8-463b-93a6-d58a8dc195f8
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Override delle impostazioni predefinite dei servizi di un provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il valore del Registro di sistema **OLEDB\_SERVICES** del provider viene restituito come valore predefinito della proprietà di inizializzazione [DBPROP\_INIT\_OLEDBSERVICES](https://msdn.microsoft.com/en-us/library/ms716898.aspx) per l'oggetto origine dati.  
  
 Se la voce del Registro di sistema è presente, gli oggetti del provider verranno aggregati e sarà possibile eseguire l'override dell'impostazione predefinita del provider per i servizi attivati, definendo la proprietà **DBPROP\_INIT\_OLEDBSERVICES** prima dell'inizializzazione.  Per abilitare o disabilitare un particolare servizio, in genere è necessario ottenere il valore corrente della proprietà **DBPROP\_INIT\_OLEDBSERVICES**, impostare o azzerare il bit relativo alla proprietà da abilitare o disabilitare e reimpostare la proprietà.  È possibile impostare **DBPROP\_INIT\_OLEDBSERVICES** direttamente in OLE DB oppure nella stringa di connessione passata a ADO o a **IDataInitialize::GetDatasource**.  I valori per l'abilitazione e la disabilitazione dei singoli servizi sono elencati nella tabella riportata di seguito:  
  
|Servizi predefiniti attivati|Valore della proprietà DBPROP\_INIT\_OLEDBSERVICES|Valore nella stringa di connessione|  
|----------------------------------|--------------------------------------------------------|-----------------------------------------|  
|Tutti i servizi \(impostazione predefinita\)|**DBPROPVAL\_OS\_ENABLEALL**|"OLE DB Services \= \-1;"|  
|Tutti tranne Pooling e AutoEnlistment|**DBPROPVAL\_OS\_ENABLEALL &**<br /><br /> **~DBPROPVAL\_OS\_RESOURCEPOOLING &**<br /><br /> **~DBPROPVAL\_OS\_TXNENLISTMENT**|"OLE DB Services \= \-4;"|  
|Tutti tranne Client Cursor|**DBPROPVAL\_OS\_ENABLEALL** &<br /><br /> ~**DBPROPVAL\_OS\_CLIENTCURSOR**|"OLE DB Services \= \-5;"|  
|Tutti tranne Pooling, AutoEnlistment e Client Cursor|**DBPROPVAL\_OS\_ENABLEALL &**<br /><br /> **~DBPROPVAL\_OS\_TXNENLISTMENT &**<br /><br /> **~DBPROPVAL\_OS\_CLIENTCURSOR**|"OLE DB Services \= \-7;"|  
|Nessun servizio|~**DBPROPVAL\_OS\_ENABLEALL**|"OLE DB Services \= 0;"|  
  
 Se nel Registro di sistema non è presente la voce relativa al provider, gli oggetti del provider non verranno aggregati e non verrà richiamato alcun servizio, anche se richiesto esplicitamente dall'utente.  
  
## Vedere anche  
 [Resource Pooling](https://msdn.microsoft.com/en-us/library/ms713655.aspx)   
 [How Consumers Use Resource Pooling](https://msdn.microsoft.com/en-us/library/ms715907.aspx)   
 [How Providers Work Effectively with Resource Pooling](https://msdn.microsoft.com/en-us/library/ms714906.aspx)   
 [Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)