---
title: Riferimenti ai modelli del provider OLE DB
ms.date: 11/04/2016
helpviewer_keywords:
- OLE DB provider templates
ms.assetid: 518358f0-bab1-4de9-bce9-4062cc87c11f
ms.openlocfilehash: 567d4131229ee25d0d69ff4456398e05af387f0e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210041"
---
# <a name="ole-db-provider-templates-reference"></a>Riferimenti ai modelli del provider OLE DB

Le classi e le interfacce per i modelli di provider di OLE DB possono essere raggruppate nelle categorie seguenti. Il materiale di riferimento include anche informazioni sulle [macro per i modelli di Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md).

Le classi usano la convenzione di denominazione seguente: una classe denominata con il criterio `IWidgetImpl` fornirebbe un'implementazione dell'interfaccia `IWidget`.

## <a name="session-classes"></a>Classi di sessione

[IDBCreateSessionImpl](../../data/oledb/idbcreatesessionimpl-class.md)<br/>
Crea una nuova sessione dall'oggetto origine dati e restituisce l'interfaccia richiesta nella sessione appena creata. Interfaccia obbligatoria sugli oggetti origine dati.

[ISessionPropertiesImpl](../../data/oledb/isessionpropertiesimpl-class.md)<br/>
Implementa le proprietà della sessione chiamando una funzione statica definita dalla mappa del set di proprietà. La mappa del set di proprietà deve essere specificata nella classe di sessione. Interfaccia obbligatoria nelle sessioni.

## <a name="rowset-classes"></a>Classi rowset

[CRowsetImpl](../../data/oledb/crowsetimpl-class.md)

Fornisce un'implementazione standard del set di righe OLE DB senza richiedere l'ereditarietà multipla di numerose interfacce di implementazione. L'unico metodo per cui è necessario fornire l'implementazione è `Execute`.

[CSimpleRow](../../data/oledb/csimplerow-class.md)<br/>
Fornisce un'implementazione predefinita per l'handle di riga, che viene usato nella classe `IRowsetImpl`. Un handle di riga è logicamente un tag univoco per una riga di risultati. `IRowsetImpl` crea una nuova `CSimpleRow` per ogni riga richiesta in `IRowsetImpl::GetNextRows`.

[IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)<br/>
OLE DB richiede che i provider implementino un `HACCESSOR`, che è un tag per una matrice di strutture di `DBBINDING`. Fornisce `HACCESSOR`s che sono indirizzi delle strutture di `BindType`. Obbligatorio per i set di righe e i comandi.

[IColumnsInfoImpl](../../data/oledb/icolumnsinfoimpl-class.md)<br/>
Delega a una funzione statica definita dalla mappa delle colonne del provider. Interfaccia obbligatoria nei set di righe e nei comandi.

[IConvertTypeImpl](../../data/oledb/iconverttypeimpl-class.md)<br/>
Fornisce informazioni sulla disponibilità di conversioni di tipi in un comando o in un set di righe. Obbligatorio per i comandi, i set di righe e i set di righe dell'indice. Implementa l'interfaccia `IConvertType` delegando l'oggetto di conversione fornito da OLE DB.

[IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)<br/>
Implementa l'interfaccia `IDBSchemaRowset` e la funzione Creator creato un modello `CreateSchemaRowset`.

[IOpenRowsetImpl](../../data/oledb/iopenrowsetimpl-class.md)<br/>
Apre e restituisce un set di righe che include tutte le righe di una singola tabella o indice di base. Interfaccia obbligatoria per un oggetto Session.

[IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)<br/>
Implementa l'interfaccia OLE DB [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)) , che consente l'aggiornamento dei valori delle colonne nelle righe esistenti, l'eliminazione di righe e l'inserimento di nuove righe.

[IRowsetCreatorImpl](../../data/oledb/irowsetcreatorimpl-class.md)<br/>
Questa classe eredita da [IObjectWithSite](/windows/win32/api/ocidl/nn-ocidl-iobjectwithsite) ed esegue l'override di [IObjectWithSite:: SESITE](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-setsite). `IRowsetCreatorImpl` esegue le stesse funzioni `IObjectWithSite` ma Abilita anche le proprietà OLE DB `DBPROPCANSCROLLBACKWARDS` e `DBPROPCANFETCHBACKWARDS`.

[IRowsetIdentityImpl](../../data/oledb/irowsetidentityimpl-class.md)<br/>
Implementa l'interfaccia `IRowsetIdentity`, che consente di confrontare se due righe di dati sono identiche o meno.

[IRowsetImpl](../../data/oledb/irowsetimpl-class.md)<br/>
Fornisce un'implementazione dell'interfaccia `IRowset`, ovvero l'interfaccia del set di righe di base.

[IRowsetInfoImpl](../../data/oledb/irowsetinfoimpl-class.md)<br/>
Implementa le proprietà del set di righe tramite la mappa del set di proprietà definita nella classe Command. Interfaccia obbligatoria nei set di righe.

[IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md)<br/>
Implementa l'interfaccia OLE DB [IRowsetLocate](/previous-versions/windows/desktop/ms721190(v=vs.85)) , che recupera le righe arbitrarie da un set di righe. Per supportare OLE DB segnalibri in un set di righe, fare in modo che il set di righe erediti da questa classe.

[IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)<br/>
Implementa funzioni broadcast per consigliare i listener sul punto di connessione `IID_IRowsetNotify` delle modifiche apportate al contenuto del set di righe. I consumer che gestiscono le notifiche implementano [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)) e li registrano in tale punto di connessione.

[IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)<br/>
Implementa il OLE DB interfaccia [IRowsetUpdate](/previous-versions/windows/desktop/ms714401(v=vs.85)) , che consente agli utenti di ritardare la trasmissione delle modifiche apportate con [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)) nell'origine dati e di annullare le modifiche prima della trasmissione.

## <a name="command-classes"></a>Classi di comando

[ICommandImpl](../../data/oledb/icommandimpl-class.md)<br/>
Fornisce un'implementazione dell'interfaccia `ICommand`. Questa interfaccia non è visibile, ma viene gestita da `ICommandTextImpl`. Interfaccia obbligatoria sull'oggetto Command.

[ICommandPropertiesImpl](../../data/oledb/icommandpropertiesimpl-class.md)<br/>
Questa implementazione dell'interfaccia `ICommandProperties` viene fornita da una funzione statica definita dalla macro `BEGIN_PROPSET_MAP`. Obbligatorio sui comandi.

[ICommandTextImpl](../../data/oledb/icommandtextimpl-class.md)<br/>
Imposta, archivia e restituisce il testo del comando. Obbligatorio sui comandi.

[IDBCreateCommandImpl](../../data/oledb/idbcreatecommandimpl-class.md)<br/>
Crea un nuovo comando dall'oggetto Session e restituisce l'interfaccia richiesta sul comando appena creato. Interfaccia facoltativa sugli oggetti sessione.

Altre classi di comando sono `IColumnsInfoImpl` e `IAccessorImpl`, descritte nella sezione precedente relativa alle classi di set di righe.

## <a name="data-source-classes"></a>Classi di origini dati

[IDBInitializeImpl](../../data/oledb/idbinitializeimpl-class.md)<br/>
Crea ed elimina la connessione al consumer. Interfaccia obbligatoria sugli oggetti origine dati e sull'interfaccia facoltativa sugli enumeratori.

[IDBPropertiesImpl](../../data/oledb/idbpropertiesimpl-class.md)<br/>
`IDBProperties` è un'interfaccia obbligatoria per gli oggetti origine dati e un'interfaccia facoltativa per gli enumeratori. Tuttavia, se un enumeratore espone `IDBInitialize`, deve esporre `IDBProperties` (proprietà nell'origine dati).

[IGetDataSourceImpl](../../data/oledb/igetdatasourceimpl-class.md)<br/>
Ottiene un puntatore a interfaccia per l'oggetto origine dati. Interfaccia obbligatoria per la sessione.

## <a name="other-classes"></a>Altre classi

[CUtlProps](../../data/oledb/cutlprops-class.md)<br/>
Implementa proprietà per un'ampia gamma di interfacce di proprietà OLE DB, ad esempio `IDBProperties`, `ISessionProperties`e `IRowsetInfo`.

[IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)

Implementa l'interfaccia OLE DB [IErrorRecords](/previous-versions/windows/desktop/ms718112(v=vs.85)) , aggiungendo record e recuperando record da un membro dati.

## <a name="see-also"></a>Vedere anche

[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Modelli OLE DB](../../data/oledb/ole-db-templates.md)
