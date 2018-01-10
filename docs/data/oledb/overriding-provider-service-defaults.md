---
title: Override delle impostazioni predefinite del servizio Provider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- service providers [OLE DB]
- OLE DB services [OLE DB], overriding defaults
ms.assetid: 08e366c0-74d8-463b-93a6-d58a8dc195f8
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9185f1eb3640a4baeb8f7cc1d7b20169c980a8e1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="overriding-provider-service-defaults"></a>Override delle impostazioni predefinite dei servizi di un provider
Il valore del Registro di sistema del provider per **OLEDB_SERVICES** viene restituito come valore predefinito per il [DBPROP_INIT_OLEDBSERVICES](https://msdn.microsoft.com/en-us/library/ms716898.aspx) proprietà di inizializzazione sull'oggetto origine dati.  
  
 Finché esiste la voce del Registro di sistema, gli oggetti del provider viene aggregata e l'utente può eseguire l'override impostazione predefinita del provider per i servizi abilitati impostando il **DBPROP_INIT_OLEDBSERVICES** proprietà prima dell'inizializzazione. Per abilitare o disabilitare un determinato servizio, l'utente ottiene in genere il valore corrente di **DBPROP_INIT_OLEDBSERVICES** proprietà imposta o Cancella il bit relativo alla proprietà essere abilitato o disabilitato e reimposta la proprietà. **DBPROP_INIT_OLEDBSERVICES** può essere impostata direttamente in OLE DB o nella stringa di connessione passata a ADO o **IDataInitialize:: GetDatasource**. Nella tabella seguente sono elencati i valori corrispondenti per abilitare o disabilitare singoli servizi.  
  
|Servizi predefiniti attivati|Valore della proprietà DBPROP_INIT_OLEDBSERVICES|Valore nella stringa di connessione|  
|------------------------------|------------------------------------------------|--------------------------------|  
|Tutti i servizi (impostazione predefinita)|**DBPROPVAL_OS_ENABLEALL**|"Servizi OLE DB = -1."|  
|Tutti tranne Pooling e AutoEnlistment|**DBPROPVAL_OS_ENABLEALL &**<br /><br /> **~ DBPROPVAL_OS_RESOURCEPOOLING &**<br /><br /> **~ DBPROPVAL_OS_TXNENLISTMENT**|"Servizi OLE DB = -4;"|  
|Tutti tranne Client Cursor|**DBPROPVAL_OS_ENABLEALL** &<br /><br /> ~**DBPROPVAL_OS_CLIENTCURSOR**|"Servizi OLE DB = -5;"|  
|Tutti tranne Pooling, AutoEnlistment e posizione del cursore Client|**DBPROPVAL_OS_ENABLEALL &**<br /><br /> **~ DBPROPVAL_OS_TXNENLISTMENT &**<br /><br /> **~ DBPROPVAL_OS_CLIENTCURSOR**|"Servizi OLE DB = -7;"|  
|Nessun servizio|~**DBPROPVAL_OS_ENABLEALL**|"Servizi OLE DB = 0;"|  
  
 Se la voce del Registro di sistema non esiste per il provider, il componente non verranno aggregati gli oggetti del provider e verrà richiamato alcun servizio, anche se richiesto esplicitamente dall'utente.  
  
## <a name="see-also"></a>Vedere anche  
 [Pooling delle risorse](https://msdn.microsoft.com/en-us/library/ms713655.aspx)   
 [Come i consumer utilizzano il pool di risorse](https://msdn.microsoft.com/en-us/library/ms715907.aspx)   
 [Come provider di gestire in modo efficiente il pool di risorse](https://msdn.microsoft.com/en-us/library/ms714906.aspx)   
 [Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)