---
title: Classi ATL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: 'index-page '
dev_langs:
- C++
helpviewer_keywords:
- classes [C++], ATL
- ATL, classes
ms.assetid: 7da42e2d-ac84-4506-92bd-502a86d68bdc
caps.latest.revision: 26
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 04a413deead5f38a30ad8f7197e1b2345b5f9ca5
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="atl-classes"></a>Classi ATL
La libreria ATL (Active Template) include le classi seguenti. Per trovare una classe specifica in base alla categoria, vedere il [Cenni preliminari sulla classe ATL](../../atl/atl-class-overview.md).  
  
|Classe|Descrizione|File di intestazione|  
|-----------|-----------------|-----------------|  
|[CA2AEX](../../atl/reference/ca2aex-class.md)|Questa classe viene utilizzata per le macro di conversione di stringhe `CA2TEX` e `CT2AEX`e il typedef **CA2A**.|atlconv. h|  
|[CA2CAEX](../../atl/reference/ca2caex-class.md)|Questa classe viene utilizzata da macro di conversione di stringhe `CA2CTEX` e `CT2CAEX`e il typedef **CA2CA**.|atlconv. h|  
|[CA2WEX](../../atl/reference/ca2wex-class.md)|Questa classe viene utilizzata per le macro di conversione di stringhe `CA2TEX`, `CA2CTEX`, `CT2WEX`, e `CT2CWEX`e il typedef **CA2W**.|atlconv. h|  
|[CAccessToken](../../atl/reference/caccesstoken-class.md)|Questa classe è un wrapper per un token di accesso.|ATLSecurity. h|  
|[CAcl](../../atl/reference/cacl-class.md)|Questa classe è un wrapper per un **ACL** struttura (elenco di controllo di accesso).|ATLSecurity. h|  
|[CAdapt](../../atl/reference/cadapt-class.md)|Questo modello viene utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of per restituire un valore diverso da quello dell'indirizzo dell'oggetto.|atlcomcli. h|  
|[CAtlArray](../../atl/reference/catlarray-class.md)|Questa classe implementa un oggetto matrice.|atlcoll. h|  
|[CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md)|Questa classe implementa un server di pool di thread, il modello di apartment COM.|atlbase. h|  
|[CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)|Questa classe fornisce metodi per l'implementazione di un server di pool di thread, il modello di apartment COM.|atlbase. h|  
|[CAtlBaseModule](../../atl/reference/catlbasemodule-class.md)|Questa classe viene creata un'istanza in ogni progetto ATL.|atlcore. h|  
|[CAtlComModule](../../atl/reference/catlcommodule-class.md)|Questa classe implementa un modulo di server COM.|atlbase. h|  
|[CAtlDebugInterfacesModule](../../atl/reference/catldebuginterfacesmodule-class.md)|Questa classe fornisce supporto per interfacce di debug.|atlbase. h|  
|[CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md)|Questa classe rappresenta il modulo per una DLL.|atlbase. h|  
|[CAtlException](../../atl/reference/catlexception-class.md)|Questa classe definisce un'eccezione di ATL.|atlexcept.h|  
|[CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)|Questa classe rappresenta il modulo per un'applicazione.|atlbase. h|  
|[CAtlFile](../../atl/reference/catlfile-class.md)|Questa classe fornisce un semplice wrapper per le finestre di API di gestione di file.|atlfile.h|  
|[CAtlFileMapping](../../atl/reference/catlfilemapping-class.md)|Questa classe rappresenta un file mappato alla memoria, aggiunta di un operatore di cast dei metodi di [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).|atlfile.h|  
|[CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)|Questa classe rappresenta un file mappato alla memoria.|atlfile.h|  
|[CAtlList](../../atl/reference/catllist-class.md)|Questa classe fornisce metodi per la creazione e la gestione di un oggetto elenco.|atlcoll. h|  
|[CAtlMap](../../atl/reference/catlmap-class.md)|Questa classe fornisce metodi per la creazione e la gestione di un oggetto mappa.|atlcoll. h|  
|[CAtlModule](../../atl/reference/catlmodule-class.md)|Questa classe fornisce i metodi utilizzati da diverse classi di modulo ATL.|atlbase. h|  
|[CAtlModuleT](../../atl/reference/catlmodulet-class.md)|Questa classe implementa un modulo ATL.|atlbase. h|  
|[CAtlPreviewCtrlImpl](../../atl/reference/catlpreviewctrlimpl-class.md)|Questa classe è un'implementazione ATL di una finestra che viene inserita in una finestra host fornita dalla Shell per l'anteprima avanzata.|atlpreviewctrlimpl.h|  
|[CAtlServiceModuleT](../../atl/reference/catlservicemodulet-class.md)|Questa classe implementa un servizio.|atlbase. h|  
|[CAtlTemporaryFile](../../atl/reference/catltemporaryfile-class.md)|Questa classe fornisce metodi per la creazione e utilizzo di un file temporaneo.|atlfile.h|  
|[CAtlTransactionManager](../../atl/reference/catltransactionmanager-class.md)|Questa classe fornisce un wrapper per le funzioni di gestione transazioni (kernel).|atltransactionmanager.h|  
|[CAtlWinModule](../../atl/reference/catlwinmodule-class.md)|Questa classe fornisce supporto per i componenti di finestra ATL.|atlbase. h|  
|[Su CAutoPtr](../../atl/reference/cautoptr-class.md)|Questa classe rappresenta un oggetto del puntatore intelligente.|atlbase. h|  
|[CAutoPtrArray](../../atl/reference/cautoptrarray-class.md)|Questa classe fornisce metodi utili per la costruzione di una matrice di puntatori intelligenti.|atlbase. h|  
|[CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)|Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori intelligenti.|atlcoll. h|  
|[CAutoPtrList](../../atl/reference/cautoptrlist-class.md)|Questa classe fornisce metodi utili per la creazione di un elenco di puntatori intelligenti.|atlcoll. h|  
|[CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)|Questa classe rappresenta un oggetto del puntatore intelligente con vettore nuova ed Elimina gli operatori.|atlbase. h|  
|[CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md)|Questa classe fornisce metodi e funzioni statiche typedef utili durante la creazione di raccolte di puntatori intelligenti utilizzando nuovo vettore ed eliminare operatori.|atlcoll. h|  
|[CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md)|Questa classe implementa una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.|atlwin. h|  
|[CAxWindow](../../atl/reference/caxwindow-class.md)|Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX.|atlwin. h|  
|[CAxWindow2T](../../atl/reference/caxwindow2t-class.md)|Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX ed è inoltre supportata per l'hosting di controlli ActiveX con licenza.|atlwin. h|  
|[CBindStatusCallback](../../atl/reference/cbindstatuscallback-class.md)|Questa classe implementa l'interfaccia `IBindStatusCallback`.|atlctl. h|  
|[CComAggObject](../../atl/reference/ccomaggobject-class.md)|Questa classe implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto aggregato.|atlcom. h|  
|[CComAllocator](../../atl/reference/ccomallocator-class.md)|Questa classe fornisce metodi per la gestione della memoria, utilizzo della memoria COM delle routine.|atlbase. h|  
|[CComApartment](../../atl/reference/ccomapartment-class.md)|Questa classe fornisce supporto per la gestione di un apartment di un modulo EXE pool di thread.|atlbase. h|  
|[CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md)|Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.|atlcore. h|  
|[CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md)|In ATL 7.0, `CComAutoThreadModule` è obsoleto: vedere [moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.|atlbase. h|  
|[CComBSTR](../../atl/reference/ccombstr-class.md)|Questa classe è un wrapper per `BSTR`s.|atlbase. h|  
|[CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md)|Questa classe implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un'interfaccia tear-off.|atlcom. h|  
|[CComClassFactory](../../atl/reference/ccomclassfactory-class.md)|Questa classe implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interfaccia.|atlcom. h|  
|[CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)|Questa classe implementa il [IClassFactory2](http://msdn.microsoft.com/library/windows/desktop/ms692720) interfaccia.|atlcom. h|  
|[CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)|Questa classe implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) l'interfaccia e consente agli oggetti da creare in più apartment.|atlcom. h|  
|[CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)|Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e utilizza [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.|atlcom. h|  
|[CComCoClass](../../atl/reference/ccomcoclass-class.md)|Questa classe fornisce metodi per la creazione di istanze di una classe e le relative proprietà.|atlcom. h|  
|[CComCompositeControl](../../atl/reference/ccomcompositecontrol-class.md)|Questa classe fornisce i metodi richiesti per implementare un controllo composito.|atlctl. h|  
|[CComContainedObject](../../atl/reference/ccomcontainedobject-class.md)|Questa classe implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) delega per l'oggetto proprietario **IUnknown**.|atlcom. h|  
|[CComControl](../../atl/reference/ccomcontrol-class.md)|Questa classe fornisce metodi per la creazione e gestione dei controlli ATL.|atlctl. h|  
|[CComControlBase](../../atl/reference/ccomcontrolbase-class.md)|Questa classe fornisce metodi per la creazione e gestione dei controlli ATL.|atlctl. h|  
|[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)|Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.|atlcore. h|  
|[CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)|Questa classe fornisce metodi per bloccare e sbloccare un oggetto sezione critica.|atlbase. h|  
|[CComCurrency](../../atl/reference/ccomcurrency-class.md)|Questa classe dispone di metodi e degli operatori per creare e gestire un `CURRENCY` oggetto.|atlcur.h|  
|[CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md)|Questa classe archivia una matrice di **IUnknown** puntatori.|atlcom. h|  
|[CComEnum](../../atl/reference/ccomenum-class.md)|Questa classe definisce un oggetto enumeratore COM basato su una matrice.|atlcom. h|  
|[CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)|Questa classe fornisce l'implementazione per un'interfaccia di enumeratore COM in cui sono archiviati gli elementi enumerati in una matrice.|atlcom. h|  
|[CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)|Questa classe definisce un oggetto enumeratore COM basato su una raccolta della libreria Standard C++.|atlcom. h|  
|[CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)|Questa classe fornisce gli stessi metodi di [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) ma non fornisce una sezione critica.|atlcore. h|  
|[CComGITPtr](../../atl/reference/ccomgitptr-class.md)|Questa classe fornisce metodi per la gestione con i puntatori a interfaccia e la tabella di interfaccia globale (GIT).|atlbase. h|  
|[CComHeap](../../atl/reference/ccomheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di allocazione della memoria COM.|ATLComMem.h|  
|[Template CComHeapPtr](../../atl/reference/ccomheapptr-class.md)|Una classe di puntatore intelligente per la gestione dei puntatori di heap.|atlbase. h|  
|[CComModule](../../atl/reference/ccommodule-class.md)|In ATL 7.0, `CComModule` è obsoleto: vedere [moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.|atlbase. h|  
|[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md)|Questa classe fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile.|atlbase. h|  
|[CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md)|Questa classe fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile, senza sezione critica blocco o sblocco di funzionalità.|atlbase. h|  
|[CComObject](../../atl/reference/ccomobject-class.md)|Questa classe implementa **IUnknown** per un oggetto non aggregato.|atlcom. h|  
|[CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md)|Questa classe gestisce un conteggio dei riferimenti sul modulo contenente il `Base` oggetto.|atlcom. h|  
|[CComObjectNoLock](../../atl/reference/ccomobjectnolock-class.md)|Questa classe implementa **IUnknown** per un oggetto non aggregato, ma non non incremento il modulo conteggio dei blocchi nel costruttore.|atlcom. h|  
|[CComObjectRoot](../../atl/reference/ccomobjectroot-class.md)|Questo typedef di [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) creato predefinito del server del modello di threading.|atlcom. h|  
|[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)|Questa classe fornisce metodi per la gestione di gestione di conteggio di riferimento oggetto per gli oggetti aggregati e non aggregati.|atlcom. h|  
|[CComObjectStack](../../atl/reference/ccomobjectstack-class.md)|Questa classe crea un oggetto COM temporaneo e fornisce un'implementazione di base di **IUnknown**.|atlcom. h|  
|[CComPolyObject](../../atl/reference/ccompolyobject-class.md)|Questa classe implementa **IUnknown** per un oggetto aggregato o aggregato.|atlcom. h|  
|[CComPtr](../../atl/reference/ccomptr-class.md)|Una classe di puntatore intelligente per la gestione dei puntatori a interfaccia COM.|atlcomcli. h|  
|[CComPtrBase](../../atl/reference/ccomptrbase-class.md)|Questa classe fornisce una base per classi di puntatori intelligenti utilizzando le routine memoria basato su COM.|atlcomcli. h|  
|[CComQIPtr](../../atl/reference/ccomqiptr-class.md)|Una classe di puntatore intelligente per la gestione dei puntatori a interfaccia COM.|atlcomcli. h|  
|[CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)|Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori a interfaccia COM.|atlcoll. h|  
|[CComSafeArray](../../atl/reference/ccomsafearray-class.md)|Questa classe è un wrapper per il `SAFEARRAY Data Type` struttura.|atlsafe.h|  
|[CComSafeArrayBound](../../atl/reference/ccomsafearraybound-class.md)|Questa classe è un wrapper per un `SAFEARRAYBOUND` struttura.|atlsafe.h|  
|[CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md)|Questa classe gestisce la selezione di thread per la classe [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).|atlbase. h|  
|[CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md)|Questa classe fornisce metodi per incrementare e decrementare il valore di una variabile.|atlbase. h|  
|[CComTearOffObject](../../atl/reference/ccomtearoffobject-class.md)|Questa classe implementa un'interfaccia tear-off.|atlcom. h|  
|[CComUnkArray](../../atl/reference/ccomunkarray-class.md)|Questa classe Archivia **IUnknown** puntatori ed è progettato per essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello.|atlcom. h|  
|[CComVariant](../../atl/reference/ccomvariant-class.md)|Questa classe incapsula il tipo di variante, fornendo un membro che indica il tipo di dati archiviati.|atlcomcli. h|  
|[CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md)|Questa classe implementa una finestra contenuta all'interno di un altro oggetto.|atlwin. h|  
|[CCRTAllocator](../../atl/reference/ccrtallocator-class.md)|Questa classe fornisce metodi per la gestione della memoria, utilizzo delle routine di memoria CRT.|atlcore. h|  
|[CCRTHeap](../../atl/reference/ccrtheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di heap CRT.|atlmem. h|  
|[CDacl](../../atl/reference/cdacl-class.md)|Questa classe è un wrapper per una struttura DACL (elenco di controllo di accesso discrezionali).|ATLSecurity. h|  
|[CDebugReportHook (classe)](../../atl/reference/cdebugreporthook-class.md)|Utilizzare questa classe per inviare report di debug a una named pipe.|atlutil. h|  
|[CDefaultCharTraits](../../atl/reference/cdefaultchartraits-class.md)|Questa classe fornisce due funzioni statiche per la conversione dei caratteri tra lettere maiuscole e minuscole.|atlcoll. h|  
|[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)|Questa classe fornisce funzioni di confronto elemento predefinite.|atlcoll. h|  
|[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)|Questa classe fornisce funzioni e metodi predefiniti per una classe di raccolta.|atlcoll. h|  
|[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)|Questa classe fornisce una funzione statica per il calcolo dei valori hash.|atlcoll. h|  
|[CDialogImpl](../../atl/reference/cdialogimpl-class.md)|Questa classe fornisce metodi per la creazione di una finestra di dialogo modale o non modale.|atlwin. h|  
|[CDynamicChain](../../atl/reference/cdynamicchain-class.md)|Questa classe fornisce metodi che supportano la concatenazione dinamica di mappe messaggi.|atlwin. h|  
|[CElementTraits](../../atl/reference/celementtraits-class.md)|Questa classe viene utilizzata dalle classi di raccolta per fornire funzioni e metodi per lo spostamento, copia, confronto e operazioni di hashing.|atlcoll. h|  
|[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)|Questa classe fornisce copia predefinita e sposta i metodi per una classe di raccolte.|atlcoll. h|  
|[CFirePropNotifyEvent](../../atl/reference/cfirepropnotifyevent-class.md)|Questa classe fornisce metodi per la notifica di sink del contenitore riguardanti le modifiche alle proprietà di controllo.|atlctl. h|  
|[CGlobalHeap](../../atl/reference/cglobalheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di heap globale Win32.|atlmem. h|  
|[CHandle](../../atl/reference/chandle-class.md)|Questa classe fornisce metodi per la creazione e utilizzo di un handle di oggetto.|atlbase. h|  
|[CHeapPtr](../../atl/reference/cheapptr-class.md)|Una classe di puntatore intelligente per la gestione dei puntatori di heap.|atlcore. h|  
|[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)|Questa classe costituisce la base per diverse classi di puntatore intelligente dell'heap.|atlcore. h|  
|[Classe CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md)|Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori di heap.|atlcoll. h|  
|[CHeapPtrList](../../atl/reference/cheapptrlist-class.md)|Questa classe fornisce metodi utili per la creazione di un elenco di puntatori di heap.|atlcoll. h|  
|[CImage](../../atl-mfc-shared/reference/cimage-class.md)|Fornisce il supporto bitmap avanzata, inclusa la possibilità di caricare e salvare le immagini in formati JPEG, GIF, BMP e grafica PNG (Portable Network).|atlimage.h|  
|[CInterfaceArray](../../atl/reference/cinterfacearray-class.md)|Questa classe fornisce metodi utili per la costruzione di una matrice di puntatori a interfaccia COM.|atlcoll. h|  
|[CInterfaceList](../../atl/reference/cinterfacelist-class.md)|Questa classe fornisce metodi utili per la creazione di un elenco di puntatori a interfaccia COM.|atlcoll. h|  
|[CLocalHeap](../../atl/reference/clocalheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di heap locali Win32.|atlmem. h|  
|[CMessageMap](../../atl/reference/cmessagemap-class.md)|Questa classe consente di che accedere a un altro oggetto esegue il mapping di messaggi di un oggetto.|atlwin. h|  
|[Classe CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Riceve richieste da un pool di thread e li passa un oggetto di lavoro che viene creato e distrutto in ogni richiesta.|atlutil. h|  
|[Classe CNoWorkerThread](../../atl/reference/cnoworkerthread-class.md)|Utilizzare questa classe come argomento per il `MonitorClass` cache parametri modello classi se si desidera disabilitare la manutenzione della cache dinamica.|atlutil. h|  
|[Classe CPathT](../../atl/reference/cpatht-class.md)|Questa classe rappresenta un percorso.|atlpath. h|  
|[CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md)|Questa classe fornisce metodi predefiniti e comporre funzioni per una classe di raccolte di tipi di dati primitivi.|atlcoll. h|  
|[CPrivateObjectSecurityDesc](../../atl/reference/cprivateobjectsecuritydesc-class.md)|Questa classe rappresenta un oggetto descrittore di sicurezza di oggetti privati.|ATLSecurity. h|  
|[CRBMap](../../atl/reference/crbmap-class.md)|Questa classe rappresenta una struttura di mapping, utilizzando una struttura binaria in rosso a nero.|atlcoll. h|  
|[CRBMultiMap](../../atl/reference/crbmultimap-class.md)|Questa classe rappresenta una struttura di mapping che consente a ogni chiave da associare a più di un valore, utilizzando una struttura binaria in rosso a nero.|atlcoll. h|  
|[CRBTree](../../atl/reference/crbtree-class.md)|Questa classe fornisce metodi per la creazione e utilizzo di una struttura ad albero rosso a nero.|atlcoll. h|  
|[CRegKey](../../atl/reference/cregkey-class.md)|Questa classe fornisce metodi per modificare le voci nel Registro di sistema.|atlbase. h|  
|[CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md)|Questa classe fornisce la funzione di creazione di un thread di CRT. Utilizzare questa classe se il thread verrà utilizzate le funzioni CRT.|atlbase. h|  
|[CSacl](../../atl/reference/csacl-class.md)|Questa classe è un wrapper per una struttura SACL (elenco di controllo di accesso di sistema).|ATLSecurity. h|  
|[CSecurityAttributes](../../atl/reference/csecurityattributes-class.md)|Questa classe è un wrapper semplice per la **SECURITY_ATTRIBUTES** struttura.|ATLSecurity. h|  
|[CSecurityDesc](../../atl/reference/csecuritydesc-class.md)|Questa classe è un wrapper per il **SECURITY_DESCRIPTOR** struttura.|ATLSecurity. h|  
|[IDSR](../../atl/reference/csid-class.md)|Questa classe è un wrapper per un `SID` struttura (SID).|ATLSecurity. h|  
|[CSimpleArray](../../atl/reference/csimplearray-class.md)|Questa classe fornisce metodi per la gestione di una matrice semplice.|atlsimpcoll. h|  
|[CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md)|Questa classe è un supporto per il [CSimpleArray](../../atl/reference/csimplearray-class.md) (classe).|atlsimpcoll. h|  
|[CSimpleArrayEqualHelperFalse](../../atl/reference/csimplearrayequalhelperfalse-class.md)|Questa classe è un supporto per il [CSimpleArray](../../atl/reference/csimplearray-class.md) (classe).|atlsimpcoll. h|  
|[CSimpleDialog](../../atl/reference/csimpledialog-class.md)|Questa classe implementa una finestra di dialogo modale base.|atlwin. h|  
|[CSimpleMap](../../atl/reference/csimplemap-class.md)|Questa classe fornisce supporto per una matrice di mapping semplice.|atlsimpcoll. h|  
|[CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md)|Questa classe è un supporto per il [CSimpleMap](../../atl/reference/csimplemap-class.md) (classe).|atlsimpcoll. h|  
|[CSimpleMapEqualHelperFalse](../../atl/reference/csimplemapequalhelperfalse-class.md)|Questa classe è un supporto per il [CSimpleMap](../../atl/reference/csimplemap-class.md) (classe).|atlsimpcoll. h|  
|[CSnapInItemImpl](../../atl/reference/csnapinitemimpl-class.md)|Questa classe fornisce metodi per l'implementazione di un oggetto nodo snap-in.|atlsnap.h|  
|[CSnapInPropertyPageImpl](../../atl/reference/csnapinpropertypageimpl-class.md)|Questa classe fornisce metodi per l'implementazione di un oggetto della pagina proprietà snap-in.|atlsnap.h|  
|[CStockPropImpl](../../atl/reference/cstockpropimpl-class.md)|Questa classe fornisce metodi per il supporto di valori di proprietà predefinite.|atlctl. h|  
|[CStringElementTraits](../../atl/reference/cstringelementtraits-class.md)|Questa classe fornisce funzioni statiche utilizzate dalle classi di raccolta archiviazione `CString` oggetti.|CStringT. h|  
|[CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md)|Questa classe fornisce funzioni statiche relative alle stringhe archiviate negli oggetti di classe di raccolta. È simile a [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), ma esegue confronti tra maiuscole e minuscole.|atlcoll. h|  
|[CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md)|Questa classe fornisce funzioni statiche relative alle stringhe archiviate negli oggetti di classe di raccolta. Gli oggetti stringa sono trattati come riferimenti.|atlcoll. h|  
|[CThreadPool (classe)](../../atl/reference/cthreadpool-class.md)|Questa classe fornisce un pool di thread di lavoro di elaborazione di una coda di elementi di lavoro.|atlutil. h|  
|[CTokenGroups](../../atl/reference/ctokengroups-class.md)|Questa classe è un wrapper per il **TOKEN_GROUPS** struttura.|ATLSecurity. h|  
|[CTokenPrivileges](../../atl/reference/ctokenprivileges-class.md)|Questa classe è un wrapper per il **TOKEN_PRIVILEGES** struttura.|ATLSecurity. h|  
|[CUrl (classe)](../../atl/reference/curl-class.md)|Questa classe rappresenta un URL. Consente di modificare ogni elemento dell'URL in modo indipendente, se l'analisi di un URL esistente stringa o la creazione di una stringa da zero.|atlutil. h|  
|[CW2AEX](../../atl/reference/cw2aex-class.md)|Questa classe viene utilizzata per le macro di conversione di stringhe `CT2AEX`, `CW2TEX`, `CW2CTEX`, e `CT2CAEX`e il typedef **CW2A**.|atlconv. h|  
|[CW2CWEX](../../atl/reference/cw2cwex-class.md)|Questa classe viene utilizzata per le macro di conversione di stringhe `CW2CTEX` e `CT2CWEX`e il typedef **CW2CW**.|atlconv. h|  
|[CW2WEX](../../atl/reference/cw2wex-class.md)|Questa classe viene utilizzata per le macro di conversione di stringhe `CW2TEX` e `CT2WEX`e il typedef `CW2W`.|atlconv. h|  
|[CWin32Heap](../../atl/reference/cwin32heap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di allocazione heap Win32.|atlmem. h|  
|[CWindow](../../atl/reference/cwindow-class.md)|Questa classe fornisce metodi per la modifica di una finestra.|atlwin. h|  
|[CWindowImpl](../../atl/reference/cwindowimpl-class.md)|Questa classe fornisce metodi per la creazione o di una sottoclasse di una finestra.|atlwin. h|  
|[CWinTraits](../../atl/reference/cwintraits-class.md)|Questa classe fornisce un metodo per la standardizzazione stili utilizzati quando si crea un oggetto finestra.|atlwin. h|  
|[CWinTraitsOR](../../atl/reference/cwintraitsor-class.md)|Questa classe fornisce un metodo per la standardizzazione stili utilizzati quando si crea un oggetto finestra.|atlwin. h|  
|[CWndClassInfo](../../atl/reference/cwndclassinfo-class.md)|Questa classe fornisce metodi per la registrazione di informazioni per una classe della finestra.|atlwin. h|  
|[Classe CWorkerThread](../../atl/reference/cworkerthread-class.md)|Questa classe crea un thread di lavoro o utilizza uno esistente, è in attesa su una o più handle di oggetto kernel ed esegue una funzione client specificato quando uno degli handle viene segnalato.|atlutil. h|  
|[IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)|Questa classe rappresenta un'interfaccia per un `CreateInstance` metodo.|atlbase. h|  
|[IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)|Questa classe rappresenta l'interfaccia per un gestore della memoria.|atlmem. h|  
|[IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)|Questa interfaccia fornisce metodi per la specifica delle caratteristiche del controllo ospitato o del contenitore.|atlbase. h, ATLIFace.h|  
|[IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md)|Questa interfaccia implementa le proprietà di ambiente aggiuntive per un controllo ospitato.|atlbase. h, ATLIFace.h|  
|[IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md)|Questa interfaccia fornisce metodi per la modifica di un controllo e il relativo oggetto host.|atlbase. h, ATLIFace.h|  
|[IAxWinHostWindowLic](../../atl/reference/iaxwinhostwindowlic-interface.md)|Questa interfaccia fornisce metodi per la modifica di un controllo concesso in licenza e il relativo oggetto host.|atlbase. h, ATLIFace.h|  
|[ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md)|Questa classe fornisce i metodi utilizzati da una classe di raccolta.|atlcom. h|  
|[IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md)|Questa classe implementa un contenitore del punto di connessione per gestire una raccolta di [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) oggetti.|atlcom. h|  
|[IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md)|Questa classe implementa un punto di connessione.|atlcom. h|  
|[IDataObjectImpl](../../atl/reference/idataobjectimpl-class.md)|Questa classe fornisce metodi per il supporto Uniform Data Transfer e la gestione delle connessioni.|atlctl. h|  
|[IDispatchImpl](../../atl/reference/idispatchimpl-class.md)|Questa classe fornisce un'implementazione predefinita per il `IDispatch` parte di un'interfaccia duale.|atlcom. h|  
|[IDispEventImpl](../../atl/reference/idispeventimpl-class.md)|Questa classe fornisce le implementazioni di `IDispatch` metodi.|atlcom. h|  
|[IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)|Questa classe fornisce le implementazioni di `IDispatch` metodi, senza recupero di informazioni sul tipo da una libreria dei tipi.|atlcom. h|  
|[IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md)|Un'interfaccia per il motore di rendering e di analisi HTML di Microsoft.|atlbase. h, ATLIFace.h|  
|[IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)|Questa classe definisce un'interfaccia di enumeratore basata su una raccolta della libreria Standard C++.|atlcom. h|  
|[IObjectSafetyImpl](../../atl/reference/iobjectsafetyimpl-class.md)|Questa classe fornisce un'implementazione predefinita del `IObjectSafety` interfaccia per consentire a un client recuperare e impostare i livelli di protezione di un oggetto.|atlctl. h|  
|[IObjectWithSiteImpl](../../atl/reference/iobjectwithsiteimpl-class.md)|Questa classe fornisce metodi di consentire a un oggetto comunicare con il relativo sito.|atlcom. h|  
|[IOleControlImpl](../../atl/reference/iolecontrolimpl-class.md)|Questa classe fornisce un'implementazione predefinita di **IOleControl** interfaccia e implementa **IUnknown**.|atlctl. h|  
|[IOleInPlaceActiveObjectImpl](../../atl/reference/ioleinplaceactiveobjectimpl-class.md)|Questa classe fornisce metodi per facilitare la comunicazione tra un controllo sul posto e il relativo contenitore.|atlctl. h|  
|[IOleInPlaceObjectWindowlessImpl](../../atl/reference/ioleinplaceobjectwindowlessimpl-class.md)|Questa classe implementa **IUnknown** e fornisce metodi che consentono un controllo senza finestra per ricevere i messaggi della finestra e partecipare alle operazioni di trascinamento e rilascio.|atlctl. h|  
|[IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)|Questa classe implementa **IUnknown** ed è l'interfaccia principale da un contenitore per comunicare con un controllo.|atlctl. h|  
|[IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)|Questa classe implementa **IUnknown** e consente a un client accedere alle informazioni nelle pagine delle proprietà di un oggetto.|atlctl. h|  
|[IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md)|Questa classe implementa **IUnknown** e consente a un oggetto salvare le proprietà in un contenitore di proprietà specificato dal client.|atlcom. h|  
|[IPersistStorageImpl](../../atl/reference/ipersiststorageimpl-class.md)|Questa classe implementa il [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731) interfaccia.|atlcom. h|  
|[IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)|Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita di [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia.|atlcom. h|  
|[IPointerInactiveImpl](../../atl/reference/ipointerinactiveimpl-class.md)|Questa classe implementa **IUnknown** e [IPointerInactive](http://msdn.microsoft.com/library/windows/desktop/ms693712) metodi di interfaccia.|atlctl. h|  
|[IPropertyNotifySinkCP](../../atl/reference/ipropertynotifysinkcp-class.md)|Questa classe espone il [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfaccia come interfaccia in uscita su un oggetto collegabile.|atlctl. h|  
|[IPropertyPage2Impl](../../atl/reference/ipropertypage2impl-class.md)|Questa classe implementa **IUnknown** ed eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).|atlctl. h|  
|[IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)|Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita di [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) interfaccia.|atlctl. h|  
|[IProvideClassInfo2Impl](../../atl/reference/iprovideclassinfo2impl-class.md)|Questa classe fornisce un'implementazione predefinita di [IProvideClassInfo](http://msdn.microsoft.com/library/windows/desktop/ms687303) e [IProvideClassInfo2](http://msdn.microsoft.com/library/windows/desktop/ms693764) metodi.|atlcom. h|  
|[IQuickActivateImpl](../../atl/reference/iquickactivateimpl-class.md)|Questa classe combina l'inizializzazione di controllo dei contenitori in una singola chiamata.|atlctl. h|  
|[IRunnableObjectImpl](../../atl/reference/irunnableobjectimpl-class.md)|Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita di [IRunnableObject](http://msdn.microsoft.com/library/windows/desktop/ms692783) interfaccia.|atlctl. h|  
|[IServiceProviderImpl](../../atl/reference/iserviceproviderimpl-class.md)|Questa classe fornisce un'implementazione predefinita del `IServiceProvider` interfaccia.|atlcom. h|  
|[ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)|Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita di [ISpecifyPropertyPages](http://msdn.microsoft.com/library/windows/desktop/ms695217) interfaccia.|atlcom. h|  
|[ISupportErrorInfoImpl](../../atl/reference/isupporterrorinfoimpl-class.md)|Questa classe fornisce un'implementazione predefinita del `ISupportErrorInfo Interface` l'interfaccia e può essere utilizzato quando un'unica interfaccia genera errori in un oggetto.|atlcom. h|  
|[Interfaccia IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)|Questa interfaccia fornisce metodi per la configurazione di un pool di thread.|atlutil. h|  
|[IViewObjectExImpl](../../atl/reference/iviewobjecteximpl-class.md)|Questa classe implementa **IUnknown** e fornisce le implementazioni predefinite di [IViewObject](http://msdn.microsoft.com/library/windows/desktop/ms680763), [IViewObject2](http://msdn.microsoft.com/library/windows/desktop/ms691318), e [IViewObjectEx](http://msdn.microsoft.com/library/windows/desktop/ms682375) interfacce.|atlctl. h|  
|[Interfaccia IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md)|`IWorkerThreadClient`è l'interfaccia implementata dai client di [CWorkerThread](../../atl/reference/cworkerthread-class.md) (classe).|atlutil. h|  
|[_U_MENUorID](../../atl/reference/u-menuorid-class.md)|Questa classe fornisce wrapper per **CreateWindow** e **CreateWindowEx**.|atlwin. h|  
|[_U_RECT](../../atl/reference/u-rect-class.md)|Questa classe di adattatori di argomento consente `RECT` puntatori o riferimenti deve essere passato a una funzione che viene implementata in termini di puntatori.|atlwin. h|  
|[_U_STRINGorID](../../atl/reference/u-stringorid-class.md)|Questa classe di adattatori di argomento consente di entrambi i nomi delle risorse (`LPCTSTR`s) o ID di risorsa (**UINT**s) deve essere passato a una funzione senza richiedere al chiamante di convertire l'ID di una stringa utilizzando il **MAKEINTRESOURCE** (macro).|atlwin. h|  
|[Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md)|Questa classe fornisce la funzione di creazione di un thread di Windows. Utilizzare questa classe se il thread non utilizzerà le funzioni CRT.|atlbase. h|  
  
## <a name="see-also"></a>Vedere anche  
 [Componenti COM Desktop ATL](../../atl/atl-com-desktop-components.md)   
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Global Variables](../../atl/reference/atl-global-variables.md)  (Variabili globali)  
 [Strutture](../../atl/reference/atl-structures.md)   
 [Definizioni typedef](../../atl/reference/atl-typedefs.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)



