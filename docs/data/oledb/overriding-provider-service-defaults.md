---
title: Override delle impostazioni predefinite dei servizi di un provider
ms.date: 10/29/2018
helpviewer_keywords:
- service providers [OLE DB]
- OLE DB services [OLE DB], overriding defaults
ms.assetid: 08e366c0-74d8-463b-93a6-d58a8dc195f8
ms.openlocfilehash: 4cf3ad1064627f64315822a5045642aa50330d10
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209808"
---
# <a name="overriding-provider-service-defaults"></a>Override delle impostazioni predefinite dei servizi di un provider

Il valore del registro di sistema del provider per OLEDB_SERVICES viene restituito come valore predefinito per la proprietà di inizializzazione [DBPROP_INIT_OLEDBSERVICES](/previous-versions/windows/desktop/ms716898(v=vs.85)) nell'oggetto origine dati.

Fino a quando la voce del registro di sistema esiste, vengono aggregati gli oggetti del provider. L'utente può eseguire l'override dell'impostazione predefinita del provider per i servizi abilitati impostando la proprietà DBPROP_INIT_OLEDBSERVICES prima dell'inizializzazione. Per abilitare o disabilitare un particolare servizio, l'utente ottiene il valore corrente della proprietà DBPROP_INIT_OLEDBSERVICES, imposta o cancella il bit per la proprietà specifica da abilitare o disabilitare e reimposta la proprietà. DBPROP_INIT_OLEDBSERVICES possibile impostare direttamente in OLE DB o nella stringa di connessione passata a ADO o `IDataInitialize::GetDatasource`. Nella tabella seguente sono elencati i valori corrispondenti per abilitare o disabilitare i singoli servizi.

|Servizi predefiniti abilitati|Valore della proprietà DBPROP_INIT_OLEDBSERVICES|Valore nella stringa di connessione|
|------------------------------|------------------------------------------------|--------------------------------|
|Tutti i servizi (impostazione predefinita)|DBPROPVAL_OS_ENABLEALL|"OLE DB Services =-1;"|
|Tutti tranne il pool e l'integrazione|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_RESOURCEPOOLING &`<br /><br /> `~DBPROPVAL_OS_TXNENLISTMENT`|"OLE DB Services =-4;"|
|All eccetto il cursore client|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_CLIENTCURSOR`|"OLE DB Services =-5;"|
|Tutti tranne il pool, l'integrazione e il cursore client|`DBPROPVAL_OS_ENABLEALL &`<br /><br /> `~DBPROPVAL_OS_TXNENLISTMENT &`<br /><br /> `~DBPROPVAL_OS_CLIENTCURSOR`|"OLE DB Services =-7;"|
|Nessun servizio|`~DBPROPVAL_OS_ENABLEALL`|"OLE DB Services = 0;"|

Se la voce del registro di sistema non esiste per il provider, i responsabili dei componenti non raccoglieranno gli oggetti del provider. Non verranno attivati servizi, anche se richiesti esplicitamente dall'utente.

## <a name="see-also"></a>Vedere anche

[Pool di risorse](/previous-versions/windows/desktop/ms713655(v=vs.85))<br/>
[Modalità di utilizzo del pool di risorse da parte dei consumer](/previous-versions/windows/desktop/ms715907(v=vs.85))<br/>
[Funzionamento efficace dei provider con il pooling delle risorse](/previous-versions/windows/desktop/ms714906(v=vs.85))<br/>
[Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)<br/>
