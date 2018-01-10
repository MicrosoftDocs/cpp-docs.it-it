---
title: Riferimenti ai modelli Provider OLE DB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.templates.ole
dev_langs: C++
helpviewer_keywords: OLE DB provider templates
ms.assetid: 518358f0-bab1-4de9-bce9-4062cc87c11f
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a68c3f0b161a21749ad49b1b89a1356b757d4b76
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ole-db-provider-templates-reference"></a>Riferimenti ai modelli del provider OLE DB
Le classi e interfacce per i modelli di Provider OLE DB possono essere raggruppate nelle categorie seguenti. Il materiale di riferimento include anche informazioni sul [macro per i modelli di Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md).  
  
 Le classi usano la convenzione di denominazione seguente: una classe denominata con il modello **IWidgetImpl** fornisce un'implementazione dell'interfaccia **IWidget**.  
  
## <a name="session-classes"></a>Classi di sessione  
 [IDBCreateSessionImpl](../../data/oledb/idbcreatesessionimpl-class.md)  
 Crea una nuova sessione dall'oggetto di origine dati e restituisce l'interfaccia richiesta per la sessione appena creata. Interfaccia obbligatoria per gli oggetti origine dati.  
  
 [ISessionPropertiesImpl](../../data/oledb/isessionpropertiesimpl-class.md)  
 Implementa le proprietà della sessione chiamando una funzione statica definita mediante il mapping di set di proprietà. Il mapping di set di proprietà deve essere specificato nella classe di sessione. Interfaccia obbligatoria sulle sessioni.  
  
## <a name="rowset-classes"></a>Classi rowset  
 [CRowsetImpl](../../data/oledb/crowsetimpl-class.md)  
  
 Fornisce un'implementazione standard di set di righe OLE DB senza ereditarietà multipla di molte delle interfacce di implementazione. L'unico metodo per cui è necessario fornire l'implementazione è **Execute**.  
  
 [CSimpleRow](../../data/oledb/csimplerow-class.md)  
 Fornisce un'implementazione predefinita per l'handle di riga, viene utilizzata la `IRowsetImpl` classe. Un handle di riga è logicamente un identificatore univoco per una riga di risultati. `IRowsetImpl`Crea un nuovo `CSimpleRow` per ogni riga richiesti `IRowsetImpl::GetNextRows`.  
  
 [IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)  
 OLE DB Provider richiede che implementano un **HACCESSOR**, che è un tag a una matrice di **DBBINDING** strutture. Fornisce **HACCESSOR**che sono gli indirizzi del **BindType** strutture. Obbligatoria sui set di righe e i comandi.  
  
 [IColumnsInfoImpl](../../data/oledb/icolumnsinfoimpl-class.md)  
 Delegati per una funzione statica definito dalla mappa colonna provider. Interfaccia obbligatoria nel set di righe e i comandi.  
  
 [IConvertTypeImpl](../../data/oledb/iconverttypeimpl-class.md)  
 Fornisce informazioni sulla disponibilità delle conversioni di tipo in un comando o in un set di righe. Obbligatoria sui comandi, i set di righe e i set di righe di indice. Implementa il **IConvertType** interfaccia mediante la delega per l'oggetto di conversione fornito da OLE DB.  
  
 [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)  
 Implementa il **IDBSchemaRowset** interfaccia e la funzione di creazione di modelli `CreateSchemaRowset`.  
  
 [IOpenRowsetImpl](../../data/oledb/iopenrowsetimpl-class.md)  
 Apre e restituisce un set di righe che include tutte le righe da una singola tabella di base o un indice. Interfaccia obbligatoria per un oggetto di sessione.  
  
 [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)  
 Implementa OLE DB [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx) interfaccia che consente l'aggiornamento dei valori delle colonne in righe esistenti, l'eliminazione di righe e inserendo nuove righe.  
  
 [IRowsetCreatorImpl](../../data/oledb/irowsetcreatorimpl-class.md)  
 Questa classe eredita da [IObjectWithSite](http://msdn.microsoft.com/library/windows/desktop/ms693765) ed esegue l'override [IObjectWithSite::SetSite](http://msdn.microsoft.com/library/windows/desktop/ms683869). `IRowsetCreatorImpl`esegue le stesse funzioni come `IObjectWithSite` ma consente anche di proprietà OLE DB **DBPROPCANSCROLLBACKWARDS** e **DBPROPCANFETCHBACKWARDS**.  
  
 [IRowsetIdentityImpl](../../data/oledb/irowsetidentityimpl-class.md)  
 Implementa il **IRowsetIdentity** interfaccia, che consente di confrontare sia due righe di dati siano identiche o meno.  
  
 [IRowsetImpl](../../data/oledb/irowsetimpl-class.md)  
 Fornisce un'implementazione del `IRowset` interfaccia, che è l'interfaccia di base del set di righe.  
  
 [IRowsetInfoImpl](../../data/oledb/irowsetinfoimpl-class.md)  
 Implementa le proprietà del set di righe utilizzando la proprietà impostata mappa definita nella classe di comando. Interfaccia obbligatoria sui set di righe.  
  
 [IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md)  
 Implementa OLE DB [IRowsetLocate](https://msdn.microsoft.com/en-us/library/ms721190.aspx) interfaccia, che recupera righe arbitrarie da un set di righe. Per supportare i segnalibri di OLE DB in un set di righe, assicurarsi che il set di righe erediti da questa classe.  
  
 [IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)  
 Implementa funzioni per comunicare ai listener sul punto di connessione di broadcast **IID_IRowsetNotify** delle modifiche al contenuto del set di righe. Implementano i consumer che gestiscono le notifiche [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx) e registrarlo nel punto di connessione.  
  
 [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)  
 Implementa OLE DB [IRowsetUpdate](https://msdn.microsoft.com/en-us/library/ms714401.aspx) interfaccia, che consente ai consumer di ritardare la trasmissione delle modifiche apportate con [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx) per l'origine dati e annullare le modifiche apportate prima della trasmissione.  
  
## <a name="command-classes"></a>Classi di comandi  
 [ICommandImpl](../../data/oledb/icommandimpl-class.md)  
 Fornisce un'implementazione dell'interfaccia `ICommand`. Questa interfaccia non è visibile, ma viene gestita da **ICommandTextImpl**. Un'interfaccia obbligatoria per l'oggetto comando.  
  
 [ICommandPropertiesImpl](../../data/oledb/icommandpropertiesimpl-class.md)  
 Questa implementazione del **ICommandProperties** interfaccia viene fornita da una funzione statica definita mediante il `BEGIN_PROPSET_MAP` (macro). Obbligatoria sui comandi.  
  
 [ICommandTextImpl](../../data/oledb/icommandtextimpl-class.md)  
 Imposta, archivia e restituisce il testo del comando. Obbligatoria sui comandi.  
  
 [IDBCreateCommandImpl](../../data/oledb/idbcreatecommandimpl-class.md)  
 Crea un nuovo comando dall'oggetto sessione e restituisce l'interfaccia richiesta per il comando appena creato. Interfaccia facoltativa per gli oggetti di sessione.  
  
 Altre classi di comando sono `IColumnsInfoImpl` e `IAccessorImpl`, descritto nella sezione precedente classi Rowset.  
  
## <a name="data-source-classes"></a>Classi di origine dati  
 [IDBInitializeImpl](../../data/oledb/idbinitializeimpl-class.md)  
 Crea ed elimina la connessione al consumer. Interfaccia obbligatoria in oggetti origine dati e l'interfaccia facoltativa sugli enumeratori.  
  
 [IDBPropertiesImpl](../../data/oledb/idbpropertiesimpl-class.md)  
 `IDBProperties`è un'interfaccia obbligatoria per gli oggetti origine dati e un'interfaccia facoltativa per gli enumeratori. Tuttavia, se espone un enumeratore **IDBInitialize**, deve esporre `IDBProperties` (le proprietà dell'origine dati).  
  
 [IGetDataSourceImpl](../../data/oledb/igetdatasourceimpl-class.md)  
 Ottiene un puntatore a interfaccia per l'oggetto origine dati. Interfaccia obbligatoria nella sessione.  
  
## <a name="other-classes"></a>Altre classi  
 [CUtlProps](../../data/oledb/cutlprops-class.md)  
 Implementa le proprietà per un'ampia gamma di interfacce di proprietà OLE DB (ad esempio, `IDBProperties`, **ISessionProperties**, e `IRowsetInfo`).  
  
 [IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)  
  
 Implementa OLE DB [IErrorRecords](https://msdn.microsoft.com/en-us/library/ms718112.aspx) interfaccia, aggiunta di record a e il recupero di record da un membro dati.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti per i modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Modelli OLE DB](../../data/oledb/ole-db-templates.md)