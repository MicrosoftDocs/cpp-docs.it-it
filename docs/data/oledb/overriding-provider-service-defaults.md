---
title: Override delle impostazioni predefinite dei servizi di un provider
ms.date: 10/29/2018
helpviewer_keywords:
- service providers [OLE DB]
- OLE DB services [OLE DB], overriding defaults
ms.assetid: 08e366c0-74d8-463b-93a6-d58a8dc195f8
ms.openlocfilehash: 08011f65ca220885e124e5ad6072244e4ad6e80d
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59033956"
---
# <a name="overriding-provider-service-defaults"></a>Override delle impostazioni predefinite dei servizi di un provider

Valore del Registro di sistema del provider per OLEDB_SERVICES viene restituito come valore predefinito per il [DBPROP_INIT_OLEDBSERVICES](/previous-versions/windows/desktop/ms716898(v=vs.85)) proprietà di inizializzazione sull'oggetto origine dati.

Purché esista la voce del Registro di sistema, vengono aggregati gli oggetti del provider. L'utente può eseguire l'override impostazione predefinita del provider per i servizi attivati impostando la proprietà DBPROP_INIT_OLEDBSERVICES prima dell'inizializzazione. Per abilitare o disabilitare un determinato servizio, l'utente ottiene il valore corrente della proprietà DBPROP_INIT_OLEDBSERVICES imposta o Cancella il bit relativo alla proprietà abilitare o disabilitare e reimposta la proprietà. È possibile impostare DBPROP_INIT_OLEDBSERVICES direttamente in OLE DB o nella stringa di connessione passata ad ADO o `IDataInitialize::GetDatasource`. Nella tabella seguente sono elencati i valori corrispondenti per abilitare o disabilitare singoli servizi.

|Servizi predefiniti abilitati|Valore della proprietà DBPROP_INIT_OLEDBSERVICES|Valore nella stringa di connessione|
|------------------------------|------------------------------------------------|--------------------------------|
|Tutti i servizi (impostazione predefinita)|DBPROPVAL_OS_ENABLEALL|"OLE DB Services = -1;"|
|Tutti tranne il pool e AutoEnlistment|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_RESOURCEPOOLING &`<br /><br /> `~DBPROPVAL_OS_TXNENLISTMENT`|"Servizi OLE DB = -4;"|
|Tutti tranne i cursori Client|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_CLIENTCURSOR`|"Servizi OLE DB = -5;"|
|Tutte tranne il pool, AutoEnlistment e cursore Client|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_TXNENLISTMENT &`<br /><br /> `~DBPROPVAL_OS_CLIENTCURSOR`|"OLE DB Services = -7;"|
|Nessun servizio|`~DBPROPVAL_OS_ENABLEALL`|"Servizi OLE DB = 0;"|

Se la voce del Registro di sistema non esiste per il provider, non verranno raccolte le Gestioni componenti quali gli oggetti del provider. Nessun servizio verrà attivato, anche se richiesto esplicitamente dall'utente.

## <a name="see-also"></a>Vedere anche

[Pooling delle risorse](/previous-versions/windows/desktop/ms713655(v=vs.85))<br/>
[Come i consumer utilizzano il pool di risorse](/previous-versions/windows/desktop/ms715907(v=vs.85))<br/>
[Come provider di lavorare in modo efficace con il pool di risorse](/previous-versions/windows/desktop/ms714906(v=vs.85))<br/>
[Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)<br/>