---
title: Riferimenti ai modelli del provider OLE DB
ms.date: 11/04/2016
f1_keywords:
- vc.templates.ole
helpviewer_keywords:
- OLE DB provider templates
ms.assetid: 518358f0-bab1-4de9-bce9-4062cc87c11f
ms.openlocfilehash: e1d6be9687085361edd9141d8fb471e21b6f6376
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038677"
---
# <a name="ole-db-provider-templates-reference"></a>Riferimenti ai modelli del provider OLE DB

Le classi e interfacce per i modelli di Provider OLE DB possono essere raggruppate nelle categorie seguenti. Il materiale di riferimento include anche informazioni sul [macro per i modelli di Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md).

Le classi usano la convenzione di denominazione seguente: una classe denominata con il modello `IWidgetImpl` fornisce un'implementazione dell'interfaccia `IWidget`.

## <a name="session-classes"></a>Classi di sessione

[IDBCreateSessionImpl](../../data/oledb/idbcreatesessionimpl-class.md)<br/>
Crea una nuova sessione dall'oggetto origine dati e restituisce l'interfaccia richiesta nella sessione appena creata. Interfaccia obbligatoria per gli oggetti origine dati.

[ISessionPropertiesImpl](../../data/oledb/isessionpropertiesimpl-class.md)<br/>
Implementa le proprietà della sessione chiamando una funzione statica definita dal mapping di set di proprietà. Il mapping di set di proprietà deve essere specificato nella classe di sessione. Interfaccia obbligatoria sulle sessioni.

## <a name="rowset-classes"></a>Classi rowset

[CRowsetImpl](../../data/oledb/crowsetimpl-class.md)

Fornisce un'implementazione di set di righe OLE DB standard senza richiedere l'ereditarietà multipla del numero di interfacce di implementazione. L'unico metodo per cui è necessario fornire l'implementazione è `Execute`.

[CSimpleRow](../../data/oledb/csimplerow-class.md)<br/>
Fornisce un'implementazione predefinita per l'handle di riga, che viene utilizzata per il `IRowsetImpl` classe. Un handle di riga è logicamente un tag univoco per una riga di risultati. `IRowsetImpl` Crea un nuovo `CSimpleRow` per ogni riga richiesti `IRowsetImpl::GetNextRows`.

[IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)<br/>
OLE DB richiede ai provider di implementare un' `HACCESSOR`, ovvero un tag a una matrice di `DBBINDING` strutture. Fornisce `HACCESSOR`che fanno gli indirizzi del `BindType` strutture. Obbligatorio sul set di righe e i comandi.

[IColumnsInfoImpl](../../data/oledb/icolumnsinfoimpl-class.md)<br/>
Delegati a una funzione statica definite dalla mappa della colonna provider. Interfaccia obbligatoria nel set di righe e i comandi.

[IConvertTypeImpl](../../data/oledb/iconverttypeimpl-class.md)<br/>
Fornisce informazioni sulla disponibilità di conversioni di tipi in un comando o in un set di righe. Obbligatorio in comandi, i set di righe e i set di righe di indice. Implementa il `IConvertType` interfaccia mediante la delega all'oggetto di conversione fornita da OLE DB.

[IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)<br/>
Implementa il `IDBSchemaRowset` interfaccia e la funzione di creazione di modelli `CreateSchemaRowset`.

[IOpenRowsetImpl](../../data/oledb/iopenrowsetimpl-class.md)<br/>
Apre e restituisce un set di righe che include tutte le righe da una singola tabella di base o un indice. Interfaccia obbligatoria per un oggetto di sessione.

[IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)<br/>
Implementa OLE DB [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)) interfaccia, che consente l'aggiornamento dei valori delle colonne in righe esistenti, l'eliminazione delle righe e inserendo nuove righe.

[IRowsetCreatorImpl](../../data/oledb/irowsetcreatorimpl-class.md)<br/>
Questa classe eredita da [IObjectWithSite](/windows/desktop/api/ocidl/nn-ocidl-iobjectwithsite) ed esegue l'override [IObjectWithSite::SetSite](/windows/desktop/api/ocidl/nf-ocidl-iobjectwithsite-setsite). `IRowsetCreatorImpl` esegue le stesse funzioni `IObjectWithSite` ma consente anche le proprietà OLE DB `DBPROPCANSCROLLBACKWARDS` e `DBPROPCANFETCHBACKWARDS`.

[IRowsetIdentityImpl](../../data/oledb/irowsetidentityimpl-class.md)<br/>
Implementa il `IRowsetIdentity` interfaccia, che consente di confrontare se due righe di dati sono identiche o meno.

[IRowsetImpl](../../data/oledb/irowsetimpl-class.md)<br/>
Fornisce un'implementazione del `IRowset` interfaccia, ovvero l'interfaccia di base del set di righe.

[IRowsetInfoImpl](../../data/oledb/irowsetinfoimpl-class.md)<br/>
Implementa le proprietà del set di righe usando la proprietà set di mapping definito nella classe del comando. Interfaccia obbligatoria nel set di righe.

[IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md)<br/>
Implementa OLE DB [IRowsetLocate](/previous-versions/windows/desktop/ms721190(v=vs.85)) interfaccia, che recupera righe arbitrarie da un set di righe. Per supportare i segnalibri di OLE DB in un set di righe, verificare il set di righe ereditano da questa classe.

[IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)<br/>
Implementa funzioni per comunicare ai listener nel punto di connessione di broadcast `IID_IRowsetNotify` delle modifiche al contenuto del set di righe. Implementano i consumer che gestiscono le notifiche [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)) e registrarlo nel punto di connessione.

[IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)<br/>
Implementa OLE DB [IRowsetUpdate](/previous-versions/windows/desktop/ms714401(v=vs.85)) interfaccia, che consente agli utenti di ritardare la trasmissione delle modifiche apportate con [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)) per l'origine dati e annullare le modifiche prima della trasmissione.

## <a name="command-classes"></a>Classi di comandi

[ICommandImpl](../../data/oledb/icommandimpl-class.md)<br/>
Fornisce un'implementazione dell'interfaccia `ICommand`. Questa interfaccia non è visibile, ma viene gestita da `ICommandTextImpl`. Un'interfaccia obbligatoria per l'oggetto comando.

[ICommandPropertiesImpl](../../data/oledb/icommandpropertiesimpl-class.md)<br/>
Questa implementazione del `ICommandProperties` viene fornita da una funzione statica definita dall'interfaccia di `BEGIN_PROPSET_MAP` (macro). Obbligatorio in comandi.

[ICommandTextImpl](../../data/oledb/icommandtextimpl-class.md)<br/>
Imposta, archivia e restituisce il testo del comando. Obbligatorio in comandi.

[IDBCreateCommandImpl](../../data/oledb/idbcreatecommandimpl-class.md)<br/>
Crea un nuovo comando dall'oggetto sessione e restituisce l'interfaccia richiesta per il comando appena creato. Interfaccia facoltativa per gli oggetti di sessione.

Altre classi di comando sono `IColumnsInfoImpl` e `IAccessorImpl`, come descritto nella sezione classi Rowset precedente.

## <a name="data-source-classes"></a>Classi di origini dati

[IDBInitializeImpl](../../data/oledb/idbinitializeimpl-class.md)<br/>
Crea ed elimina la connessione con il consumer. Interfaccia obbligatoria in oggetti origine dei dati e interfaccia facoltativa negli enumeratori.

[IDBPropertiesImpl](../../data/oledb/idbpropertiesimpl-class.md)<br/>
`IDBProperties` è un'interfaccia obbligatoria per gli oggetti origine dati e un'interfaccia facoltativa per gli enumeratori. Tuttavia, se espone un enumeratore `IDBInitialize`, deve esporre `IDBProperties` (proprietà dell'origine dati).

[IGetDataSourceImpl](../../data/oledb/igetdatasourceimpl-class.md)<br/>
Ottiene un puntatore a interfaccia per l'oggetto origine dati. Interfaccia obbligatoria nella sessione.

## <a name="other-classes"></a>Altre classi

[CUtlProps](../../data/oledb/cutlprops-class.md)<br/>
Implementa le proprietà per un'ampia gamma di interfacce della proprietà OLE DB (ad esempio, `IDBProperties`, `ISessionProperties`, e `IRowsetInfo`).

[IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)

Implementa OLE DB [IErrorRecords](/previous-versions/windows/desktop/ms718112(v=vs.85)) interfaccia, l'aggiunta di record a e il recupero dei record da un membro dati.

## <a name="see-also"></a>Vedere anche

[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Modelli OLE DB](../../data/oledb/ole-db-templates.md)