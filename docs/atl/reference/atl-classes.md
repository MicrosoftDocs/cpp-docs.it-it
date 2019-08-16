---
title: Classi e struct ATL | Microsoft Docs
ms.date: 05/03/2018
helpviewer_keywords:
- classes [C++], ATL
- ATL, classes
ms.assetid: 7da42e2d-ac84-4506-92bd-502a86d68bdc
ms.openlocfilehash: 2bf13700ada3284b8a32718d21971e89e30e5b76
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498042"
---
# <a name="atl-classes-and-structs"></a>Classi e struct ATL

Il Active Template Library (ATL) include le classi e gli struct seguenti. Per trovare una classe specifica per categoria, vedere [Cenni preliminari sulla classe ATL](../../atl/atl-class-overview.md).

|Classe/struct|DESCRIZIONE|File di intestazione|
|-----------|-----------------|-----------------|
|[ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md)|Contiene informazioni utilizzate per il rendering in varie destinazioni, ad esempio una stampante, un metafile o un controllo ActiveX.|atlctl. h|
|[_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md)|Contiene i dati dell'istanza della classe nel codice di finestra di ATL.|atlbase. h|
|[_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md)|Utilizzato da qualsiasi progetto che utilizza ATL.|atlbase. h|
|[_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md)|Utilizzato dal codice correlato a COM in ATL.| atlbase. h|
|[_ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md)|Contiene informazioni sul tipo utilizzate per descrivere un metodo o una proprietà in un'interfaccia dispatch.|atlcom.h|
|[_ATL_MODULE70](../../atl/reference/atl-module70-structure.md)|Contiene i dati utilizzati da ogni modulo ATL.|atlbase. h|
|[_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|Utilizzato dal codice di finestra in ATL.|atlbase. h|
|[CA2AEX](../../atl/reference/ca2aex-class.md)|Questa classe viene utilizzata dalle macro di conversione di stringa CA2TEX e CT2AEX e typedef CA2A.|atlconv.h|
|[CA2CAEX](../../atl/reference/ca2caex-class.md)|Questa classe viene utilizzata dalle macro di conversione di stringa CA2CTEX e CT2CAEX e typedef CA2CA.|atlconv.h|
|[CA2WEX](../../atl/reference/ca2wex-class.md)|Questa classe viene utilizzata dalle macro di conversione di stringhe CA2TEX, CA2CTEX, CT2WEX e CT2CWEX e typedef CA2W.|atlconv.h|
|[CAccessToken](../../atl/reference/caccesstoken-class.md)|Questa classe è un wrapper per un token di accesso.|atlsecurity.h|
|[CAcl](../../atl/reference/cacl-class.md)|Questa classe è un wrapper per una struttura ACL (elenco di controllo di accesso).|atlsecurity.h|
|[CAdapt](../../atl/reference/cadapt-class.md)|Questo modello viene utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of per restituire un valore diverso da quello dell'indirizzo dell'oggetto.|atlcomcli.h|
|[CAtlArray](../../atl/reference/catlarray-class.md)|Questa classe implementa un oggetto Array.|atlcoll. h|
|[CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md)|Questa classe implementa un server COM in pool di thread e un modello di Apartment.|atlbase. h|
|[CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)|Questa classe fornisce metodi per l'implementazione di un server COM in pool di thread e di tipo Apartment.|atlbase. h|
|[CAtlBaseModule](../../atl/reference/catlbasemodule-class.md)|Viene creata un'istanza di questa classe in ogni progetto ATL.|atlcore. h|
|[CAtlComModule](../../atl/reference/catlcommodule-class.md)|Questa classe implementa un modulo server COM.|atlbase. h|
|[CAtlDebugInterfacesModule](../../atl/reference/catldebuginterfacesmodule-class.md)|Questa classe fornisce supporto per il debug delle interfacce.|atlbase. h|
|[CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md)|Questa classe rappresenta il modulo per una DLL.|atlbase. h|
|[CAtlException](../../atl/reference/catlexception-class.md)|Questa classe definisce un'eccezione ATL.|atlexcept.h|
|[CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)|Questa classe rappresenta il modulo per un'applicazione.|atlbase. h|
|[CAtlFile](../../atl/reference/catlfile-class.md)|Questa classe fornisce un wrapper sottile per l'API di gestione dei file di Windows.|atlfile. h|
|[CAtlFileMapping](../../atl/reference/catlfilemapping-class.md)|Questa classe rappresenta un file mappato alla memoria, aggiungendo un operatore cast ai metodi di [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).|atlfile. h|
|[CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)|Questa classe rappresenta un file mappato alla memoria.|atlfile. h|
|[CAtlList](../../atl/reference/catllist-class.md)|Questa classe fornisce metodi per la creazione e la gestione di un oggetto elenco.|atlcoll. h|
|[CAtlMap](../../atl/reference/catlmap-class.md)|Questa classe fornisce metodi per la creazione e la gestione di un oggetto map.|atlcoll. h|
|[CAtlModule](../../atl/reference/catlmodule-class.md)|Questa classe fornisce i metodi utilizzati da diverse classi di moduli ATL.|atlbase. h|
|[CAtlModuleT](../../atl/reference/catlmodulet-class.md)|Questa classe implementa un modulo ATL.|atlbase. h|
|[CAtlPreviewCtrlImpl](../../atl/reference/catlpreviewctrlimpl-class.md)|Questa classe è un'implementazione ATL di una finestra posizionata in una finestra host fornita dalla Shell per l'anteprima avanzata.|atlpreviewctrlimpl.h|
|[CAtlServiceModuleT](../../atl/reference/catlservicemodulet-class.md)|Questa classe implementa un servizio.|atlbase. h|
|[CAtlTemporaryFile](../../atl/reference/catltemporaryfile-class.md)|Questa classe fornisce i metodi per la creazione e l'uso di un file temporaneo.|atlfile. h|
|[CAtlTransactionManager](../../atl/reference/catltransactionmanager-class.md)|Questa classe fornisce un wrapper per le funzioni di gestione transazioni kernel.|atltransactionmanager.h|
|[CAtlWinModule](../../atl/reference/catlwinmodule-class.md)|Questa classe fornisce supporto per i componenti di Windows ATL.|atlbase. h|
|[CAutoPtr](../../atl/reference/cautoptr-class.md)|Questa classe rappresenta un oggetto puntatore intelligente.|atlbase. h|
|[CAutoPtrArray](../../atl/reference/cautoptrarray-class.md)|Questa classe fornisce metodi utili per la creazione di una matrice di puntatori intelligenti.|atlbase. h|
|[CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)|Questa classe fornisce metodi, funzioni statiche e typedef utili per la creazione di raccolte di puntatori intelligenti.|atlcoll. h|
|[CAutoPtrList](../../atl/reference/cautoptrlist-class.md)|Questa classe fornisce metodi utili per la creazione di un elenco di puntatori intelligenti.|atlcoll. h|
|[CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)|Questa classe rappresenta un oggetto puntatore intelligente usando gli operatori new e Delete vettoriali.|atlbase. h|
|[CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md)|Questa classe fornisce metodi, funzioni statiche e typedef utili per la creazione di raccolte di puntatori intelligenti mediante operatori new e Delete vettoriali.|atlcoll. h|
|[CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md)|Questa classe implementa una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.|atlwin.h|
|[CAxWindow](../../atl/reference/caxwindow-class.md)|Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX.|atlwin.h|
|[CAxWindow2T](../../atl/reference/caxwindow2t-class.md)|Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX e dispone anche del supporto per l'hosting di controlli ActiveX con licenza.|atlwin.h|
|[CBindStatusCallback](../../atl/reference/cbindstatuscallback-class.md)|Questa classe implementa l'interfaccia `IBindStatusCallback` .|atlctl. h|
|[CComAggObject](../../atl/reference/ccomaggobject-class.md)|Questa classe implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato.|atlcom.h|
|[CComAllocator](../../atl/reference/ccomallocator-class.md)|Questa classe fornisce metodi per la gestione della memoria utilizzando le routine di memoria COM.|atlbase. h|
|[CComApartment](../../atl/reference/ccomapartment-class.md)|Questa classe fornisce supporto per la gestione di un Apartment in un modulo EXE in pool di thread.|atlbase. h|
|[CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md)|Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.|atlcore. h|
|[CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md)|A partire da ATL 7,0 `CComAutoThreadModule` , è obsoleto: vedere [moduli ATL](../../atl/atl-module-classes.md) per altri dettagli.|atlbase. h|
|[CComBSTR](../../atl/reference/ccombstr-class.md)|Questa classe è un wrapper per BSTRs.|atlbase. h|
|[CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md)|Questa classe implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) per un'interfaccia tear-off.|atlcom.h|
|[CComClassFactory](../../atl/reference/ccomclassfactory-class.md)|Questa classe implementa l'interfaccia [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) .|atlcom.h|
|[CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)|Questa classe implementa l'interfaccia [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) .|atlcom.h|
|[CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)|Questa classe implementa l'interfaccia [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) e consente la creazione di oggetti in più Apartment.|atlcom.h|
|[CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)|Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e USA [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.|atlcom.h|
|[CComCoClass](../../atl/reference/ccomcoclass-class.md)|Questa classe fornisce i metodi per creare istanze di una classe e ottenere le relative proprietà.|atlcom.h|
|[CComCompositeControl](../../atl/reference/ccomcompositecontrol-class.md)|Questa classe fornisce i metodi necessari per implementare un controllo composito.|atlctl. h|
|[CComContainedObject](../../atl/reference/ccomcontainedobject-class.md)|Questa classe implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) delegando all'oggetto `IUnknown`proprietario.|atlcom.h|
|[CComControl](../../atl/reference/ccomcontrol-class.md)|Questa classe fornisce metodi per la creazione e la gestione di controlli ATL.|atlctl. h|
|[CComControlBase](../../atl/reference/ccomcontrolbase-class.md)|Questa classe fornisce metodi per la creazione e la gestione di controlli ATL.|atlctl. h|
|[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)|Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.|atlcore. h|
|[CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)|Questa classe fornisce metodi per bloccare e sbloccare un oggetto sezione critica.|atlbase. h|
|[CComCurrency](../../atl/reference/ccomcurrency-class.md)|Questa classe dispone di metodi e operatori per la creazione e la gestione di un oggetto di valuta.|atlcur.h|
|[CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md)|Questa classe archivia una matrice di `IUnknown` puntatori.|atlcom.h|
|[CComEnum](../../atl/reference/ccomenum-class.md)|Questa classe definisce un oggetto enumeratore COM basato su una matrice.|atlcom.h|
|[CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)|Questa classe fornisce l'implementazione per un'interfaccia dell'enumeratore COM in cui gli elementi enumerati vengono archiviati in una matrice.|atlcom.h|
|[CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)|Questa classe definisce un oggetto enumeratore COM basato su C++ una raccolta di librerie standard.|atlcom.h|
|[CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)|Questa classe fornisce gli stessi metodi di [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) , ma non fornisce una sezione critica.|atlcore. h|
|[CComGITPtr](../../atl/reference/ccomgitptr-class.md)|Questa classe fornisce metodi per gestire i puntatori di interfaccia e la tabella di interfaccia globale (GIT).|atlbase. h|
|[CComHeap](../../atl/reference/ccomheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di allocazione della memoria com.|ATLComMem.h|
|[CComHeapPtr](../../atl/reference/ccomheapptr-class.md)|Classe di puntatore intelligente per la gestione dei puntatori dell'heap.|atlbase. h|
|[CComModule](../../atl/reference/ccommodule-class.md)|A partire da ATL 7,0 `CComModule` , è obsoleto: vedere [moduli ATL](../../atl/atl-module-classes.md) per altri dettagli.|atlbase. h|
|[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md)|Questa classe fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile.|atlbase. h|
|[CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md)|Questa classe fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile, senza funzionalità di blocco o sblocco della sezione critica.|atlbase. h|
|[CComObject](../../atl/reference/ccomobject-class.md)|Questa classe implementa `IUnknown` per un oggetto non aggregato.|atlcom.h|
|[CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md)|Questa classe gestisce un conteggio dei riferimenti nel modulo che contiene `Base` l'oggetto.|atlcom.h|
|[CComObjectNoLock](../../atl/reference/ccomobjectnolock-class.md)|Questa classe implementa `IUnknown` per un oggetto non aggregato, ma non incrementa il conteggio dei blocchi del modulo nel costruttore.|atlcom.h|
|[CComObjectRoot](../../atl/reference/ccomobjectroot-class.md)|Questo typedef di [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) è creato un modello nel modello di threading predefinito del server.|atlcom.h|
|[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)|Questa classe fornisce metodi per gestire la gestione del conteggio dei riferimenti agli oggetti per gli oggetti non aggregati e aggregati.|atlcom.h|
|[CComObjectStack](../../atl/reference/ccomobjectstack-class.md)|Questa classe crea un oggetto COM temporaneo e fornisce un'implementazione scheletrica di `IUnknown`.|atlcom.h|
|[CComPolyObject](../../atl/reference/ccompolyobject-class.md)|Questa classe implementa `IUnknown` per un oggetto aggregato o non aggregato.|atlcom.h|
|[CComPtr](../../atl/reference/ccomptr-class.md)|Classe di puntatore intelligente per la gestione dei puntatori di interfaccia COM.|atlcomcli.h|
|[CComPtrBase](../../atl/reference/ccomptrbase-class.md)|Questa classe fornisce una base per le classi di puntatore intelligente che utilizzano routine di memoria basate su COM.|atlcomcli.h|
|[CComQIPtr](../../atl/reference/ccomqiptr-class.md)|Classe di puntatore intelligente per la gestione dei puntatori di interfaccia COM.|atlcomcli.h|
|[CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)|Questa classe fornisce metodi, funzioni statiche e typedef utili per la creazione di raccolte di puntatori di interfaccia COM.|atlcoll. h|
|[CComSafeArray](../../atl/reference/ccomsafearray-class.md)|Questa classe è un wrapper per la `SAFEARRAY Data Type` struttura.|atlsafe. h|
|[CComSafeArrayBound](../../atl/reference/ccomsafearraybound-class.md)|Questa classe è un wrapper per una `SAFEARRAYBOUND` struttura.|atlsafe. h|
|[CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md)|Questa classe gestisce la selezione dei thread per la classe [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).|atlbase. h|
|[CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md)|Questa classe fornisce metodi per incrementare e decrementare il valore di una variabile.|atlbase. h|
|[CComTearOffObject](../../atl/reference/ccomtearoffobject-class.md)|Questa classe implementa un'interfaccia tear-off.|atlcom.h|
|[CComUnkArray](../../atl/reference/ccomunkarray-class.md)|Questa classe archivia `IUnknown` i puntatori ed è progettata per essere utilizzata come parametro per la classe modello [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) .|atlcom.h|
|[CComVariant](../../atl/reference/ccomvariant-class.md)|Questa classe esegue il wrapping del tipo VARIANT, fornendo un membro che indica il tipo di dati archiviati.|atlcomcli.h|
|[CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md)|Questa classe implementa una finestra contenuta in un altro oggetto.|atlwin.h|
|[CCRTAllocator](../../atl/reference/ccrtallocator-class.md)|Questa classe fornisce metodi per la gestione della memoria tramite le routine di memoria CRT.|atlcore. h|
|[CCRTHeap](../../atl/reference/ccrtheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni dell'heap CRT.|atlmem.h|
|[CDacl](../../atl/reference/cdacl-class.md)|Questa classe è un wrapper per una struttura DACL (elenco di controllo di accesso discrezionale).|atlsecurity.h|
|[Classe CDebugReportHook](../../atl/reference/cdebugreporthook-class.md)|Utilizzare questa classe per inviare report di debug a un named pipe.|atlutil.h|
|[CDefaultCharTraits](../../atl/reference/cdefaultchartraits-class.md)|Questa classe fornisce due funzioni statiche per la conversione di caratteri tra lettere maiuscole e minuscole.|atlcoll. h|
|[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)|Questa classe fornisce funzioni di confronto degli elementi predefinite.|atlcoll. h|
|[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)|Questa classe fornisce i metodi e le funzioni predefiniti per una classe di raccolte.|atlcoll. h|
|[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)|Questa classe fornisce una funzione statica per il calcolo dei valori hash.|atlcoll. h|
|[CDialogImpl](../../atl/reference/cdialogimpl-class.md)|Questa classe fornisce metodi per la creazione di una finestra di dialogo modale o non modale.|atlwin.h|
|[CDynamicChain](../../atl/reference/cdynamicchain-class.md)|Questa classe fornisce metodi che supportano il concatenamento dinamico delle mappe messaggi.|atlwin.h|
|[CElementTraits](../../atl/reference/celementtraits-class.md)|Questa classe viene utilizzata dalle classi di raccolta per fornire metodi e funzioni per operazioni di trasferimento, copia, confronto e hashing.|atlcoll. h|
|[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)|Questa classe fornisce metodi di copia e spostamento predefiniti per una classe di raccolte.|atlcoll. h|
|[CFirePropNotifyEvent](../../atl/reference/cfirepropnotifyevent-class.md)|Questa classe fornisce metodi per notificare al sink del contenitore le modifiche alle proprietà del controllo.|atlctl. h|
|[CGlobalHeap](../../atl/reference/cglobalheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni dell'heap globale Win32.|atlmem.h|
|[CHandle](../../atl/reference/chandle-class.md)|Questa classe fornisce metodi per la creazione e l'utilizzo di un oggetto handle.|atlbase. h|
|[CHeapPtr](../../atl/reference/cheapptr-class.md)|Classe di puntatore intelligente per la gestione dei puntatori dell'heap.|atlcore. h|
|[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)|Questa classe costituisce la base per diverse classi di puntatore dell'heap intelligente.|atlcore. h|
|[Classe CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md)|Questa classe fornisce metodi, funzioni statiche e typedef utili per la creazione di raccolte di puntatori dell'heap.|atlcoll. h|
|[CHeapPtrList](../../atl/reference/cheapptrlist-class.md)|Questa classe fornisce metodi utili per la creazione di un elenco di puntatori dell'heap.|atlcoll. h|
|[CImage](../../atl-mfc-shared/reference/cimage-class.md)|Offre supporto ottimizzato per le bitmap, inclusa la possibilità di caricare e salvare immagini in formati JPEG, GIF, BMP e Portable Network Graphics (PNG).|atlimage. h|
|[CInterfaceArray](../../atl/reference/cinterfacearray-class.md)|Questa classe fornisce metodi utili per la creazione di una matrice di puntatori di interfaccia COM.|atlcoll. h|
|[CInterfaceList](../../atl/reference/cinterfacelist-class.md)|Questa classe fornisce metodi utili per la creazione di un elenco di puntatori di interfaccia COM.|atlcoll. h|
|[CLocalHeap](../../atl/reference/clocalheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni dell'heap locale di Win32.|atlmem.h|
|[CMessageMap](../../atl/reference/cmessagemap-class.md)|Questa classe consente l'accesso a mappe messaggi di un oggetto da un altro oggetto.|atlwin.h|
|[Classe CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste da un pool di thread e le passa a un oggetto di lavoro creato ed eliminato in base a ogni richiesta.|atlutil.h|
|[Classe CNoWorkerThread](../../atl/reference/cnoworkerthread-class.md)|Utilizzare questa classe come argomento per le classi `MonitorClass` della cache dei parametri di modello se si desidera disabilitare la manutenzione dinamica della cache.|atlutil.h|
|[Classe CPathT](../../atl/reference/cpatht-class.md)|Questa classe rappresenta un percorso.|atlpath.h|
|[CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md)|Questa classe fornisce i metodi e le funzioni predefiniti per una classe di raccolta composta da tipi di dati primitivi.|atlcoll. h|
|[CPrivateObjectSecurityDesc](../../atl/reference/cprivateobjectsecuritydesc-class.md)|Questa classe rappresenta un oggetto descrittore di sicurezza di un oggetto privato.|atlsecurity.h|
|[CRBMap](../../atl/reference/crbmap-class.md)|Questa classe rappresenta una struttura di mapping, usando un albero binario rosso-nero.|atlcoll. h|
|[CRBMultiMap](../../atl/reference/crbmultimap-class.md)|Questa classe rappresenta una struttura di mapping che consente a ogni chiave di essere associata a più di un valore, utilizzando un albero binario rosso-nero.|atlcoll. h|
|[CRBTree](../../atl/reference/crbtree-class.md)|Questa classe fornisce metodi per la creazione e l'utilizzo di un albero rosso-nero.|atlcoll. h|
|[CRegKey](../../atl/reference/cregkey-class.md)|Questa classe fornisce metodi per modificare le voci nel registro di sistema.|atlbase. h|
|[CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md)|Questa classe fornisce la funzione di creazione per un thread CRT. Utilizzare questa classe se il thread utilizzerà funzioni CRT.|atlbase. h|
|[CSacl](../../atl/reference/csacl-class.md)|Questa classe è un wrapper per una struttura SACL (elenco di controllo di accesso di sistema).|atlsecurity.h|
|[CSecurityAttributes](../../atl/reference/csecurityattributes-class.md)|Questa classe è un wrapper sottile per la `SECURITY_ATTRIBUTES` struttura.|atlsecurity.h|
|[CSecurityDesc](../../atl/reference/csecuritydesc-class.md)|Questa classe è un wrapper per la `SECURITY_DESCRIPTOR` struttura.|atlsecurity.h|
|[CSid](../../atl/reference/csid-class.md)|Questa classe è un wrapper per una `SID` struttura (ID di sicurezza).|atlsecurity.h|
|[CSimpleArray](../../atl/reference/csimplearray-class.md)|Questa classe fornisce metodi per la gestione di una matrice semplice.|atlsimpcoll. h|
|[CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md)|Questa classe è un helper per la classe [CSimpleArray](../../atl/reference/csimplearray-class.md) .|atlsimpcoll. h|
|[CSimpleArrayEqualHelperFalse](../../atl/reference/csimplearrayequalhelperfalse-class.md)|Questa classe è un helper per la classe [CSimpleArray](../../atl/reference/csimplearray-class.md) .|atlsimpcoll. h|
|[CSimpleDialog](../../atl/reference/csimpledialog-class.md)|Questa classe implementa una finestra di dialogo modale di base.|atlwin.h|
|[CSimpleMap](../../atl/reference/csimplemap-class.md)|Questa classe fornisce supporto per una semplice matrice di mapping.|atlsimpcoll. h|
|[CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md)|Questa classe è un helper per la classe [CSimpleMap](../../atl/reference/csimplemap-class.md) .|atlsimpcoll. h|
|[CSimpleMapEqualHelperFalse](../../atl/reference/csimplemapequalhelperfalse-class.md)|Questa classe è un helper per la classe [CSimpleMap](../../atl/reference/csimplemap-class.md) .|atlsimpcoll. h|
|[CSnapInItemImpl](../../atl/reference/csnapinitemimpl-class.md)|Questa classe fornisce metodi per l'implementazione di un oggetto nodo di snap-in.|atlsnap.h|
|[CSnapInPropertyPageImpl](../../atl/reference/csnapinpropertypageimpl-class.md)|Questa classe fornisce metodi per l'implementazione di un oggetto pagina delle proprietà dello snap-in.|atlsnap.h|
|[CStockPropImpl](../../atl/reference/cstockpropimpl-class.md)|Questa classe fornisce metodi per supportare i valori delle proprietà predefinite.|atlctl. h|
|[CStringElementTraits](../../atl/reference/cstringelementtraits-class.md)|Questa classe fornisce funzioni statiche utilizzate dalle classi di raccolta `CString` che archiviano oggetti.|cstringt.h|
|[CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md)|Questa classe fornisce funzioni statiche correlate alle stringhe archiviate negli oggetti classe della raccolta. È simile a [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), ma esegue confronti senza distinzione tra maiuscole e minuscole.|atlcoll. h|
|[CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md)|Questa classe fornisce funzioni statiche correlate alle stringhe archiviate negli oggetti classe della raccolta. Gli oggetti stringa vengono gestiti come riferimenti.|atlcoll. h|
|[Classe CThreadPool](../../atl/reference/cthreadpool-class.md)|Questa classe fornisce un pool di thread di lavoro che elaborano una coda di elementi di lavoro.|atlutil.h|
|[CTokenGroups](../../atl/reference/ctokengroups-class.md)|Questa classe è un wrapper per la `TOKEN_GROUPS` struttura.|atlsecurity.h|
|[CTokenPrivileges](../../atl/reference/ctokenprivileges-class.md)|Questa classe è un wrapper per la `TOKEN_PRIVILEGES` struttura.|atlsecurity.h|
|[Classe CUrl](../../atl/reference/curl-class.md)|Questa classe rappresenta un URL. Consente di modificare ogni elemento dell'URL in modo indipendente dagli altri se si sta analizzando una stringa URL esistente o creando una stringa da zero.|atlutil.h|
|[CW2AEX](../../atl/reference/cw2aex-class.md)|Questa classe viene utilizzata dalle macro di conversione di stringhe CT2AEX, CW2TEX, CW2CTEX e CT2CAEX e typedef CW2A.|atlconv.h|
|[CW2CWEX](../../atl/reference/cw2cwex-class.md)|Questa classe viene utilizzata dalle macro di conversione di stringa CW2CTEX e CT2CWEX e typedef CW2CW.|atlconv.h|
|[CW2WEX](../../atl/reference/cw2wex-class.md)|Questa classe viene utilizzata dalle macro di conversione di stringa CW2TEX e CT2WEX e typedef CW2W.|atlconv.h|
|[CWin32Heap](../../atl/reference/cwin32heap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di allocazione heap Win32.|atlmem.h|
|[CWindow](../../atl/reference/cwindow-class.md)|Questa classe fornisce metodi per la modifica di una finestra.|atlwin.h|
|[CWindowImpl](../../atl/reference/cwindowimpl-class.md)|Questa classe fornisce metodi per la creazione o la creazione di una sottoclasse di una finestra.|atlwin.h|
|[CWinTraits](../../atl/reference/cwintraits-class.md)|Questa classe fornisce un metodo per la standardizzazione degli stili utilizzati durante la creazione di un oggetto finestra.|atlwin.h|
|[CWinTraitsOR](../../atl/reference/cwintraitsor-class.md)|Questa classe fornisce un metodo per la standardizzazione degli stili utilizzati durante la creazione di un oggetto finestra.|atlwin.h|
|[CWndClassInfo](../../atl/reference/cwndclassinfo-class.md)|Questa classe fornisce metodi per la registrazione di informazioni per una classe finestra.|atlwin.h|
|[Classe CWorkerThread](../../atl/reference/cworkerthread-class.md)|Questa classe crea un thread di lavoro o ne usa uno esistente, attende uno o più handle di oggetti kernel ed esegue una funzione client specificata quando uno degli handle viene segnalato.|atlutil.h|
|[IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)|Questa classe rappresenta un'interfaccia per un `CreateInstance` metodo.|atlbase. h|
|[IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)|Questa classe rappresenta l'interfaccia per un gestore della memoria.|atlmem.h|
|[IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)|Questa interfaccia fornisce metodi per specificare le caratteristiche del contenitore o del controllo ospitato.|atlbase. h, ATLIFace. h|
|[IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md)|Questa interfaccia implementa le proprietà di ambiente aggiuntive per un controllo ospitato.|atlbase. h, ATLIFace. h|
|[IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md)|Questa interfaccia fornisce metodi per la modifica di un controllo e del relativo oggetto host.|atlbase. h, ATLIFace. h|
|[IAxWinHostWindowLic](../../atl/reference/iaxwinhostwindowlic-interface.md)|Questa interfaccia fornisce metodi per la modifica di un controllo concesso in licenza e del relativo oggetto host.|atlbase. h, ATLIFace. h|
|[ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md)|Questa classe fornisce i metodi utilizzati da una classe di raccolte.|atlcom.h|
|[IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md)|Questa classe implementa un contenitore di punti di connessione per gestire una raccolta di oggetti [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) .|atlcom.h|
|[IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md)|Questa classe implementa un punto di connessione.|atlcom.h|
|[IDataObjectImpl](../../atl/reference/idataobjectimpl-class.md)|Questa classe fornisce metodi per supportare Uniform Data Transfer e gestire le connessioni.|atlctl. h|
|[IDispatchImpl](../../atl/reference/idispatchimpl-class.md)|Questa classe fornisce un'implementazione predefinita per la `IDispatch` parte di un'interfaccia duale.|atlcom.h|
|[IDispEventImpl](../../atl/reference/idispeventimpl-class.md)|Questa classe fornisce le `IDispatch` implementazioni dei metodi.|atlcom.h|
|[IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)|Questa classe fornisce le `IDispatch` implementazioni dei metodi, senza recuperare le informazioni sul tipo da una libreria dei tipi.|atlcom.h|
|[IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md)|Interfaccia per il motore di analisi e rendering HTML Microsoft.|atlbase. h, ATLIFace. h|
|[IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)|Questa classe definisce un'interfaccia di enumeratore basata C++ su una raccolta di librerie standard.|atlcom.h|
|[IObjectSafetyImpl](../../atl/reference/iobjectsafetyimpl-class.md)|Questa classe fornisce un'implementazione predefinita dell'interfaccia `IObjectSafety` per consentire a un client di recuperare e impostare i livelli di sicurezza di un oggetto.|atlctl. h|
|[IObjectWithSiteImpl](../../atl/reference/iobjectwithsiteimpl-class.md)|Questa classe fornisce metodi che consentono a un oggetto di comunicare con il relativo sito.|atlcom.h|
|[IOleControlImpl](../../atl/reference/iolecontrolimpl-class.md)|Questa classe fornisce un'implementazione predefinita dell' `IOleControl` interfaccia e implementa. `IUnknown`|atlctl. h|
|[IOleInPlaceActiveObjectImpl](../../atl/reference/ioleinplaceactiveobjectimpl-class.md)|Questa classe fornisce metodi per facilitare la comunicazione tra un controllo sul posto e il relativo contenitore.|atlctl. h|
|[IOleInPlaceObjectWindowlessImpl](../../atl/reference/ioleinplaceobjectwindowlessimpl-class.md)|Questa classe implementa `IUnknown` e fornisce metodi che consentono a un controllo senza finestra di ricevere messaggi della finestra e di partecipare alle operazioni di trascinamento della selezione.|atlctl. h|
|[IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)|Questa classe implementa `IUnknown` e è l'interfaccia principale attraverso la quale un contenitore comunica con un controllo.|atlctl. h|
|[IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)|Questa classe implementa `IUnknown` e consente a un client di accedere alle informazioni nelle pagine delle proprietà di un oggetto.|atlctl. h|
|[IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md)|Questa classe implementa `IUnknown` e consente a un oggetto di salvare le proprietà in un contenitore di proprietà fornito dal client.|atlcom.h|
|[IPersistStorageImpl](../../atl/reference/ipersiststorageimpl-class.md)|Questa classe implementa l'interfaccia [IPersistStorage](/windows/win32/api/objidl/nn-objidl-ipersiststorage) .|atlcom.h|
|[IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)|Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) .|atlcom.h|
|[IPointerInactiveImpl](../../atl/reference/ipointerinactiveimpl-class.md)|Questa classe implementa `IUnknown` e i metodi dell'interfaccia [IPointerInactive](/windows/win32/api/ocidl/nn-ocidl-ipointerinactive) .|atlctl. h|
|[IPropertyNotifySinkCP](../../atl/reference/ipropertynotifysinkcp-class.md)|Questa classe espone l'interfaccia [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) come interfaccia in uscita su un oggetto collegabile.|atlctl. h|
|[IPropertyPage2Impl](../../atl/reference/ipropertypage2impl-class.md)|Questa classe implementa `IUnknown` ed eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).|atlctl. h|
|[IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)|Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) .|atlctl. h|
|[IProvideClassInfo2Impl](../../atl/reference/iprovideclassinfo2impl-class.md)|Questa classe fornisce un'implementazione predefinita dei metodi [IProvideClassInfo](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo) e [IProvideClassInfo2](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo2) .|atlcom.h|
|[IQuickActivateImpl](../../atl/reference/iquickactivateimpl-class.md)|Questa classe combina l'inizializzazione del controllo dei contenitori in un'unica chiamata.|atlctl. h|
|[IRunnableObjectImpl](../../atl/reference/irunnableobjectimpl-class.md)|Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [IRunnableObject](/windows/win32/api/objidl/nn-objidl-irunnableobject) .|atlctl. h|
|[IServiceProviderImpl](../../atl/reference/iserviceproviderimpl-class.md)|Questa classe fornisce un'implementazione predefinita dell' `IServiceProvider` interfaccia.|atlcom.h|
|[ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)|Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [ISpecifyPropertyPages](/windows/win32/api/ocidl/nn-ocidl-ispecifypropertypages) .|atlcom.h|
|[ISupportErrorInfoImpl](../../atl/reference/isupporterrorinfoimpl-class.md)|Questa classe fornisce un'implementazione predefinita dell' `ISupportErrorInfo Interface` interfaccia e può essere utilizzata quando una sola interfaccia genera errori in un oggetto.|atlcom.h|
|[Interfaccia IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)|Questa interfaccia fornisce metodi per la configurazione di un pool di thread.|atlutil.h|
|[IViewObjectExImpl](../../atl/reference/iviewobjecteximpl-class.md)|Questa classe implementa `IUnknown` e fornisce implementazioni predefinite delle interfacce [IViewObject](/windows/win32/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/win32/api/oleidl/nn-oleidl-iviewobject2)e [IViewObjectEx](/windows/win32/api/ocidl/nn-ocidl-iviewobjectex) .|atlctl. h|
|[Interfaccia IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md)|`IWorkerThreadClient`è l'interfaccia implementata dai client della classe [CWorkerThread](../../atl/reference/cworkerthread-class.md) .|atlutil.h|
|[_U_MENUorID](../../atl/reference/u-menuorid-class.md)|Questa classe fornisce wrapper per `CreateWindow` e. `CreateWindowEx`|atlwin.h|
|[_U_RECT](../../atl/reference/u-rect-class.md)|Questa classe di adattatori di `RECT` argomenti consente di passare puntatori o riferimenti a una funzione implementata in termini di puntatori.|atlwin.h|
|[_U_STRINGorID](../../atl/reference/u-stringorid-class.md)|Questa classe di adattatori di argomenti consente di passare i nomi di risorsa (LPCTSTRs) o gli ID di risorsa (UINTs) a una funzione senza richiedere al chiamante di convertire l'ID in una stringa utilizzando la macro MAKEINTRESOURCE.|atlwin.h|
|[Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md)|Questa classe fornisce la funzione di creazione per un thread di Windows. Utilizzare questa classe se il thread non utilizzerà funzioni CRT.|atlbase. h|

## <a name="see-also"></a>Vedere anche

[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)<br/>
[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Variabili globali](../../atl/reference/atl-global-variables.md)<br/>
[Typedef](../../atl/reference/atl-typedefs.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
