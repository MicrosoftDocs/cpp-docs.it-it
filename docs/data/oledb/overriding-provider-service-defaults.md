---
title: Override delle impostazioni predefinite di Service Provider | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- service providers [OLE DB]
- OLE DB services [OLE DB], overriding defaults
ms.assetid: 08e366c0-74d8-463b-93a6-d58a8dc195f8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 106d1991f5312065aa78330888e55383d1f9506a
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39337018"
---
# <a name="overriding-provider-service-defaults"></a>Override delle impostazioni predefinite dei servizi di un provider
Valore del Registro di sistema del provider per OLEDB_SERVICES viene restituito come valore predefinito per il [DBPROP_INIT_OLEDBSERVICES](https://msdn.microsoft.com/library/ms716898.aspx) proprietà di inizializzazione sull'oggetto origine dati.  
  
 Purché esista la voce del Registro di sistema, gli oggetti del provider vengono aggregati e l'utente può eseguire l'override impostazione predefinita del provider per i servizi attivati impostando il `DBPROP_INIT_OLEDBSERVICES` proprietà prima dell'inizializzazione. Per abilitare o disabilitare un determinato servizio, l'utente ottiene in genere il valore corrente del `DBPROP_INIT_OLEDBSERVICES` proprietà imposta o Cancella il bit relativo alla proprietà abilitare o disabilitare e reimposta la proprietà. `DBPROP_INIT_OLEDBSERVICES` può essere impostata direttamente in OLE DB o nella stringa di connessione passata ad ADO o `IDataInitialize::GetDatasource`. Nella tabella seguente sono elencati i valori corrispondenti per abilitare o disabilitare singoli servizi.  
  
|Servizi predefiniti abilitati|Valore della proprietà DBPROP_INIT_OLEDBSERVICES|Valore nella stringa di connessione|  
|------------------------------|------------------------------------------------|--------------------------------|  
|Tutti i servizi (impostazione predefinita)|`DBPROPVAL_OS_ENABLEALL`|"Servizi OLE DB = -1."|  
|Tutti tranne il pool e AutoEnlistment|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_RESOURCEPOOLING &`<br /><br /> `~DBPROPVAL_OS_TXNENLISTMENT`|"Servizi OLE DB = -4;"|  
|Tutti tranne i cursori Client|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_CLIENTCURSOR`|"Servizi OLE DB = -5;"|  
|Tutte tranne il pool, AutoEnlistment e cursore Client|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_TXNENLISTMENT &`<br /><br /> `~DBPROPVAL_OS_CLIENTCURSOR`|"Servizi OLE DB = -7;"|  
|Nessun servizio|`~DBPROPVAL_OS_ENABLEALL`|"Servizi OLE DB = 0;"|  
  
 Se la voce del Registro di sistema non esiste per il provider, il componente non verranno aggregati gli oggetti del provider e nessun servizio verrà richiamato, anche se richiesto esplicitamente dall'utente.  
  
## <a name="see-also"></a>Vedere anche  
 [Pooling delle risorse](https://msdn.microsoft.com/library/ms713655.aspx)   
 [Come i consumer utilizzano il pool di risorse](https://msdn.microsoft.com/library/ms715907.aspx)   
 [Come provider di lavorare in modo efficace con il pool di risorse](https://msdn.microsoft.com/library/ms714906.aspx)   
 [Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)