---
title: "Riferimenti ai modelli del provider OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.templates.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli del provider OLE DB"
ms.assetid: 518358f0-bab1-4de9-bce9-4062cc87c11f
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Riferimenti ai modelli del provider OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le classi e le interfacce per i modelli provider OLE DB possono essere raggruppate nelle categorie seguenti.  Materiale di riferimento sono inoltre incluse le informazioni su [macro per i modelli provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md).  
  
 Le classi utilizzano la convenzione di denominazione seguente: una classe denominata con il modello **IWidgetImpl** fornisce un'implementazione dell'interfaccia **IWidget**.  
  
## Classi di sessione  
 [IDBCreateSessionImpl](../../data/oledb/idbcreatesessionimpl-class.md)  
 Crea una nuova sessione dall'oggetto origine dati e restituisce l'interfaccia richiesta la sessione appena creato.  Interfaccia richiesta per gli oggetti origine dati.  
  
 [ISessionPropertiesImpl](../../data/oledb/isessionpropertiesimpl-class.md)  
 Implementa le proprietà della sessione chiamando una funzione statica definita dalla mappa degli insiemi di proprietà.  La mappa degli insiemi di proprietà deve essere specificata nella classe di sessione.  Interfaccia richiesta sulle sessioni.  
  
## Classi dei rowset  
 [CRowsetImpl](../../data/oledb/crowsetimpl-class.md)  
  
 Fornisce un'implementazione di rowset OLE DB standard senza richiedere l'ereditarietà multipla di molte interfacce di implementazione.  L'unico metodo per il quale è necessario fornire l'implementazione è **Esegui**.  
  
 [CSimpleRow](../../data/oledb/csimplerow-class.md)  
 Fornisce un'implementazione predefinita per gli handle di riga, utilizzate nella classe di `IRowsetImpl`.  Gli handle di riga sono logicamente un tag univoco per una riga di risultati.  `IRowsetImpl` crea nuovo `CSimpleRow` per ogni riga richiesta in `IRowsetImpl::GetNextRows`.  
  
 [IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)  
 OLE DB richiede i provider di implementare **HACCESSOR**, un tag a una matrice di strutture **DBBINDING**.  Fornisce **HACCESSOR**s che è indirizzi di strutture di **BindType**.  Obbligatorio sui rowset e controlli.  
  
 [IColumnsInfoImpl](../../data/oledb/icolumnsinfoimpl-class.md)  
 Delegati a una funzione statica definita dalla mappa delle colonne del provider.  Interfaccia richiesta sui rowset e controlli.  
  
 [IConvertTypeImpl](../../data/oledb/iconverttypeimpl-class.md)  
 Consente di specificare informazioni sulla disponibilità delle conversioni di tipo un comando o per un rowset.  Obbligatorio sui controlli, sui rowset e sui rowset dell'indice.  Implementa l'interfaccia di **IConvertType** delegando la conversione l'oggetto fornito da OLE DB.  
  
 [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)  
 Implementa l'interfaccia di **IDBSchemaRowset** e la funzione templatized `CreateSchemaRowset`author.  
  
 [IOpenRowsetImpl](../../data/oledb/iopenrowsetimpl-class.md)  
 Apre e restituisce un rowset che include tutte le righe di una tabella o indice di base.  Interfaccia richiesta per un oggetto session.  
  
 [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)  
 Implementa l'interfaccia OLE DB [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx), che consente l'aggiornamento dei valori delle colonne delle righe esistenti, eliminare righe e inserire nuove righe.  
  
 [IRowsetCreatorImpl](../../data/oledb/irowsetcreatorimpl-class.md)  
 Questa classe eredita da [IObjectWithSite](http://msdn.microsoft.com/library/windows/desktop/ms693765) ed eseguire l'override [IObjectWithSite::SetSite](http://msdn.microsoft.com/library/windows/desktop/ms683869).  `IRowsetCreatorImpl` esegue le stesse funzioni di `IObjectWithSite` ma consente inoltre alle proprietà **DBPROPCANSCROLLBACKWARDS** e **DBPROPCANFETCHBACKWARDS** oLE DB.  
  
 [IRowsetIdentityImpl](../../data/oledb/irowsetidentityimpl-class.md)  
 Implementa l'interfaccia di **IRowsetIdentity**, che consente di confrontare se due righe di dati siano identiche o meno.  
  
 [IRowsetImpl](../../data/oledb/irowsetimpl-class.md)  
 Fornisce un'implementazione dell'interfaccia di `IRowset`, ovvero l'interfaccia base del rowset.  
  
 [IRowsetInfoImpl](../../data/oledb/irowsetinfoimpl-class.md)  
 Implementa le proprietà del rowset utilizzando la mappa degli insiemi di proprietà definita nella classe del comando.  Interfaccia richiesta sui rowset.  
  
 [IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md)  
 Implementa l'interfaccia OLE DB [L'interfaccia IRowsetLocate](https://msdn.microsoft.com/en-us/library/ms721190.aspx), che recupera le righe arbitrarie di un rowset.  Per supportare i segnalibri OLE DB in un rowset, sul rowset ereditare dalla classe.  
  
 [IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)  
 I mezzi di trasmissione per comunicare le funzioni per visualizzeranno solo i listener sul punto di connessione **IID\_IRowsetNotify** le modifiche apportate al contenuto del rowset.  I consumer che gestiscono le notifiche implementano [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx) e la registrazione sul punto di connessione.  
  
 [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)  
 Implementa l'interfaccia OLE DB [IRowsetUpdate](https://msdn.microsoft.com/en-us/library/ms714401.aspx), che consente agli utenti di ritardare la trasmissione delle modifiche apportate a [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx) all'origine dati e annulla modifica prima della trasmissione.  
  
## Classi dei comandi  
 [ICommandImpl](../../data/oledb/icommandimpl-class.md)  
 Fornisce un'implementazione dell'interfaccia `ICommand`.  Questa interfaccia non è visibile, ma è gestita da **ICommandTextImpl**.  Un'interfaccia richiesta sull'oggetto comando.  
  
 [ICommandPropertiesImpl](../../data/oledb/icommandpropertiesimpl-class.md)  
 Questa implementazione dell'interfaccia di **ICommandProperties** viene fornita da una funzione statica definita dalla macro di `BEGIN_PROPSET_MAP`.  Obbligatorio sui controlli.  
  
 [ICommandTextImpl](../../data/oledb/icommandtextimpl-class.md)  
 Set, archivi e restituisce il testo del comando.  Obbligatorio sui controlli.  
  
 [IDBCreateCommandImpl](../../data/oledb/idbcreatecommandimpl-class.md)  
 Crea un nuovo comando dall'oggetto sessione e restituisce l'interfaccia richiesta nel comando appena creato.  Interfaccia facoltativa sugli oggetti sessione.  
  
 Altre classi dei comandi sono `IColumnsInfoImpl` e `IAccessorImpl`, descritti nella sezione classi di rowset precedente.  
  
## Classi di origine dati  
 [IDBInitializeImpl](../../data/oledb/idbinitializeimpl-class.md)  
 Creare ed eliminare la connessione al consumer.  Interfaccia richiesta per gli oggetti origine dati e interfaccia facoltativa in enumeratori.  
  
 [IDBPropertiesImpl](../../data/oledb/idbpropertiesimpl-class.md)  
 `IDBProperties` è un'interfaccia richiesta per gli oggetti origine dati e un'interfaccia opzionale per gli enumeratori.  Tuttavia, se un enumeratore espone **IDBInitialize**, deve esporre `IDBProperties` \(proprietà nell'origine dati.  
  
 [IGetDataSourceImpl](../../data/oledb/igetdatasourceimpl-class.md)  
 Ottiene un puntatore a interfaccia all'oggetto datasource.  Interfaccia richiesta nella sessione.  
  
## Altre classi  
 [CUtlProps](../../data/oledb/cutlprops-class.md)  
 Implementa le proprietà di diverse interfacce della proprietà OLE DB, ad esempio `IDBProperties`, **ISessionProperties** e `IRowsetInfo`\).  
  
 [IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)  
  
 Implementa l'interfaccia OLE DB [IErrorRecords](https://msdn.microsoft.com/en-us/library/ms718112.aspx), aggiungendo i record e il recupero dei record da un membro dati.  
  
## Vedere anche  
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [modelli OLE DB](../../data/oledb/ole-db-templates.md)