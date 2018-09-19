---
title: ATL classi e struct | Microsoft Docs
ms.custom: ''
ms.date: 05/03/2018
ms.technology:
- cpp-atl
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- classes [C++], ATL
- ATL, classes
ms.assetid: 7da42e2d-ac84-4506-92bd-502a86d68bdc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 94d69debb4bde61fc76917c70d95bcc6314c7208
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46044535"
---
# <a name="atl-classes-and-structs"></a>Gli struct e classi ATL

La libreria ATL (Active Template) include le seguenti classi e struct. Per trovare una classe specifica in base alla categoria, vedere la [Cenni preliminari sulla classe ATL](../../atl/atl-class-overview.md).

|Classe / struct|Descrizione|File di intestazione|
|-----------|-----------------|-----------------|
|[ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md)|Contiene informazioni utilizzate per il rendering a destinazioni diverse, ad esempio una stampante, metafile o controllo ActiveX.|atlctl. h|
|[_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md)|Contiene i dati di istanza di classe nel codice di windowing in ATL.|atlbase. h|
|[_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md)|Usato da qualsiasi progetto che utilizza ATL.|atlbase. h|
|[_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md)|Utilizzato dal codice correlato a COM in ATL.| atlbase. h|
|[_ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md)|Contiene informazioni sul tipo usati per descrivere una proprietà o metodo in un'interfaccia dispatch.|atlcom.h|
|[_ATL_MODULE70](../../atl/reference/atl-module70-structure.md)|Contiene i dati usati da ogni modulo ATL.|atlbase. h|
|[_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|Utilizzato dal codice di windowing in ATL.|atlbase. h|
|[CA2AEX](../../atl/reference/ca2aex-class.md)|Questa classe viene utilizzata la macro di conversione di stringhe CA2TEX e CT2AEX e typedef CA2A.|atlconv.h|
|[CA2CAEX](../../atl/reference/ca2caex-class.md)|Questa classe viene utilizzata dalle macro di conversione di stringhe CA2CTEX e CT2CAEX e typedef CA2CA.|atlconv.h|
|[CA2WEX](../../atl/reference/ca2wex-class.md)|Questa classe viene utilizzata la macro di conversione di stringhe CA2TEX, CA2CTEX, CT2WEX e CT2CWEX e typedef CA2W.|atlconv.h|
|[CAccessToken](../../atl/reference/caccesstoken-class.md)|Questa classe è un wrapper per un token di accesso.|atlsecurity.h|
|[CAcl](../../atl/reference/cacl-class.md)|Questa classe è un wrapper per una struttura ACL (elenco di controllo di accesso).|atlsecurity.h|
|[CAdapt](../../atl/reference/cadapt-class.md)|Questo modello viene utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of per restituire un valore diverso da quello dell'indirizzo dell'oggetto.|atlcomcli.h|
|[CAtlArray](../../atl/reference/catlarray-class.md)|Questa classe implementa un oggetto matrice.|atlcoll. h|
|[CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md)|Questa classe implementa un pool di thread di modello di apartment COM server.|atlbase. h|
|[CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)|Questa classe fornisce metodi per l'implementazione di un server COM in pool di thread, modello di apartment.|atlbase. h|
|[CAtlBaseModule](../../atl/reference/catlbasemodule-class.md)|Questa classe viene creata un'istanza in tutti i progetti ATL.|atlcore|
|[CAtlComModule](../../atl/reference/catlcommodule-class.md)|Questa classe implementa un modulo di server COM.|atlbase. h|
|[CAtlDebugInterfacesModule](../../atl/reference/catldebuginterfacesmodule-class.md)|Questa classe offre supporto per interfacce di debug.|atlbase. h|
|[CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md)|Questa classe rappresenta il modulo per una DLL.|atlbase. h|
|[CAtlException](../../atl/reference/catlexception-class.md)|Questa classe definisce un'eccezione di ATL.|atlexcept.h|
|[CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)|Questa classe rappresenta il modulo per un'applicazione.|atlbase. h|
|[CAtlFile](../../atl/reference/catlfile-class.md)|Questa classe fornisce un wrapper sottile per i Windows API di gestione di file.|atlfile.h|
|[CAtlFileMapping](../../atl/reference/catlfilemapping-class.md)|Questa classe rappresenta un file mappato alla memoria, l'aggiunta di un operatore cast per i metodi della [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).|atlfile.h|
|[CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)|Questa classe rappresenta un file mappato alla memoria.|atlfile.h|
|[CAtlList](../../atl/reference/catllist-class.md)|Questa classe fornisce metodi per creare e gestire un oggetto elenco.|atlcoll. h|
|[CAtlMap](../../atl/reference/catlmap-class.md)|Questa classe fornisce metodi per creare e gestire un oggetto map.|atlcoll. h|
|[CAtlModule](../../atl/reference/catlmodule-class.md)|Questa classe fornisce metodi usati da diverse classi di modulo ATL.|atlbase. h|
|[CAtlModuleT](../../atl/reference/catlmodulet-class.md)|Questa classe implementa un modulo ATL.|atlbase. h|
|[CAtlPreviewCtrlImpl](../../atl/reference/catlpreviewctrlimpl-class.md)|Questa classe è un'implementazione di ATL di una finestra collocata in una finestra host fornita dalla Shell per l'anteprima avanzata.|atlpreviewctrlimpl.h|
|[CAtlServiceModuleT](../../atl/reference/catlservicemodulet-class.md)|Questa classe implementa un servizio.|atlbase. h|
|[CAtlTemporaryFile](../../atl/reference/catltemporaryfile-class.md)|Questa classe fornisce metodi per la creazione e utilizzo di un file temporaneo.|atlfile.h|
|[CAtlTransactionManager](../../atl/reference/catltransactionmanager-class.md)|Questa classe fornisce un wrapper per le funzioni di gestione transazioni (kernel).|atltransactionmanager.h|
|[CAtlWinModule](../../atl/reference/catlwinmodule-class.md)|Questa classe fornisce il supporto per i componenti di finestra ATL.|atlbase. h|
|[CAutoPtr](../../atl/reference/cautoptr-class.md)|Questa classe rappresenta un oggetto del puntatore intelligente.|atlbase. h|
|[CAutoPtrArray](../../atl/reference/cautoptrarray-class.md)|Questa classe fornisce metodi utili quando si crea una matrice di puntatori intelligenti.|atlbase. h|
|[CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)|Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori intelligenti.|atlcoll. h|
|[CAutoPtrList](../../atl/reference/cautoptrlist-class.md)|Questa classe fornisce metodi utili quando si crea un elenco di puntatori intelligenti.|atlcoll. h|
|[CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)|Questa classe rappresenta un oggetto del puntatore intelligente utilizzando il vettore di nuovo ed Elimina gli operatori.|atlbase. h|
|[CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md)|Questa classe fornisce metodi e funzioni statiche typedef utili durante la creazione di raccolte di puntatori intelligenti utilizzando il vettore di nuovo ed eliminare gli operatori.|atlcoll. h|
|[CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md)|Questa classe implementa una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.|atlwin.h|
|[CAxWindow](../../atl/reference/caxwindow-class.md)|Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX.|atlwin.h|
|[CAxWindow2T](../../atl/reference/caxwindow2t-class.md)|Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX e include anche il supporto per l'hosting di controlli ActiveX con licenza.|atlwin.h|
|[CBindStatusCallback](../../atl/reference/cbindstatuscallback-class.md)|Questa classe implementa l'interfaccia `IBindStatusCallback`.|atlctl. h|
|[CComAggObject](../../atl/reference/ccomaggobject-class.md)|Questa classe implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) per un oggetto aggregato.|atlcom.h|
|[CComAllocator](../../atl/reference/ccomallocator-class.md)|Questa classe fornisce metodi per la gestione della memoria con le routine di memoria COM.|atlbase. h|
|[CComApartment](../../atl/reference/ccomapartment-class.md)|Questa classe fornisce il supporto per la gestione di un apartment in un modulo EXE raggruppate in pool di thread.|atlbase. h|
|[CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md)|Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.|atlcore|
|[CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md)|A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [ATL moduli](../../atl/atl-module-classes.md) per altri dettagli.|atlbase. h|
|[CComBSTR](../../atl/reference/ccombstr-class.md)|Questa classe è un wrapper per i BSTR.|atlbase. h|
|[CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md)|Questa classe implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) per un'interfaccia tear-off.|atlcom.h|
|[CComClassFactory](../../atl/reference/ccomclassfactory-class.md)|Questa classe implementa il [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory) interfaccia.|atlcom.h|
|[CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)|Questa classe implementa il [IClassFactory2](/windows/desktop/api/ocidl/nn-ocidl-iclassfactory2) interfaccia.|atlcom.h|
|[CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)|Questa classe implementa il [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory) interfaccia e consente di creare in apartment più oggetti.|atlcom.h|
|[CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)|Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e Usa [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.|atlcom.h|
|[CComCoClass](../../atl/reference/ccomcoclass-class.md)|Questa classe fornisce metodi per la creazione di istanze di una classe e ottenere le relative proprietà.|atlcom.h|
|[CComCompositeControl](../../atl/reference/ccomcompositecontrol-class.md)|Questa classe fornisce i metodi necessari per implementare un controllo composito.|atlctl. h|
|[CComContainedObject](../../atl/reference/ccomcontainedobject-class.md)|Questa classe implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) mediante la delega dell'oggetto proprietario `IUnknown`.|atlcom.h|
|[CComControl](../../atl/reference/ccomcontrol-class.md)|Questa classe fornisce metodi per la creazione e gestione dei controlli ATL.|atlctl. h|
|[CComControlBase](../../atl/reference/ccomcontrolbase-class.md)|Questa classe fornisce metodi per la creazione e gestione dei controlli ATL.|atlctl. h|
|[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)|Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.|atlcore|
|[CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)|Questa classe fornisce metodi per bloccare e sbloccare un oggetto sezione critica.|atlbase. h|
|[CComCurrency](../../atl/reference/ccomcurrency-class.md)|Questa classe dispone di metodi e operatori per creare e gestire un oggetto di tipo valuta.|atlcur.h|
|[CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md)|Questa classe archivia una matrice di `IUnknown` puntatori.|atlcom.h|
|[CComEnum](../../atl/reference/ccomenum-class.md)|Questa classe definisce un oggetto enumeratore COM basato su una matrice.|atlcom.h|
|[CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)|Questa classe fornisce l'implementazione per un'interfaccia dell'enumeratore COM in cui sono archiviati gli elementi vengono enumerati in una matrice.|atlcom.h|
|[CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)|Questa classe definisce un oggetto enumeratore COM basato su una raccolta della libreria Standard C++.|atlcom.h|
|[CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)|Questa classe fornisce gli stessi metodi come [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) ma non fornisce una sezione critica.|atlcore|
|[CComGITPtr](../../atl/reference/ccomgitptr-class.md)|Questa classe fornisce metodi per la gestione di puntatori a interfaccia e la tabella di interfaccia globale (GIT).|atlbase. h|
|[CComHeap](../../atl/reference/ccomheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di allocazione della memoria COM.|ATLComMem.h|
|[CComHeapPtr](../../atl/reference/ccomheapptr-class.md)|Una classe del puntatore intelligente per la gestione dei puntatori di heap.|atlbase. h|
|[CComModule](../../atl/reference/ccommodule-class.md)|A partire da ATL 7.0 `CComModule` è obsoleta: vedere [ATL moduli](../../atl/atl-module-classes.md) per altri dettagli.|atlbase. h|
|[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md)|Questa classe fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile.|atlbase. h|
|[CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md)|Questa classe fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile, senza causare blocchi sezione critica o funzionalità di sblocco.|atlbase. h|
|[CComObject](../../atl/reference/ccomobject-class.md)|Questa classe implementa `IUnknown` per un oggetto non aggregato.|atlcom.h|
|[CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md)|Questa classe gestisce un conteggio dei riferimenti in cui il modulo che contiene il `Base` oggetto.|atlcom.h|
|[CComObjectNoLock](../../atl/reference/ccomobjectnolock-class.md)|Questa classe implementa `IUnknown` per un oggetto non aggregato, ma non non incremento il modulo conteggio dei blocchi nel costruttore.|atlcom.h|
|[CComObjectRoot](../../atl/reference/ccomobjectroot-class.md)|Questo typedef dei [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) viene creato un modello predefinito del server del modello di threading.|atlcom.h|
|[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)|Questa classe fornisce metodi per la gestione di gestione di conteggio di riferimento di oggetto per gli oggetti aggregati e non aggregati.|atlcom.h|
|[CComObjectStack](../../atl/reference/ccomobjectstack-class.md)|Questa classe crea un oggetto COM temporaneo e fornisce un'implementazione di base di `IUnknown`.|atlcom.h|
|[CComPolyObject](../../atl/reference/ccompolyobject-class.md)|Questa classe implementa `IUnknown` per un oggetto aggregato o non aggregato.|atlcom.h|
|[CComPtr](../../atl/reference/ccomptr-class.md)|Una classe del puntatore intelligente per la gestione dei puntatori a interfaccia COM.|atlcomcli.h|
|[CComPtrBase](../../atl/reference/ccomptrbase-class.md)|Questa classe fornisce una base per le classi di puntatore intelligente con le routine di memoria basato su COM.|atlcomcli.h|
|[CComQIPtr](../../atl/reference/ccomqiptr-class.md)|Una classe del puntatore intelligente per la gestione dei puntatori a interfaccia COM.|atlcomcli.h|
|[CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)|Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori a interfaccia COM.|atlcoll. h|
|[CComSafeArray](../../atl/reference/ccomsafearray-class.md)|Questa classe è un wrapper per il `SAFEARRAY Data Type` struttura.|atlsafe. h|
|[CComSafeArrayBound](../../atl/reference/ccomsafearraybound-class.md)|Questa classe è un wrapper per un `SAFEARRAYBOUND` struttura.|atlsafe. h|
|[CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md)|Questa classe gestisce la selezione di thread per la classe [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).|atlbase. h|
|[CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md)|Questa classe fornisce metodi per incrementare e decrementare il valore di una variabile.|atlbase. h|
|[CComTearOffObject](../../atl/reference/ccomtearoffobject-class.md)|Questa classe implementa un'interfaccia tear-off.|atlcom.h|
|[CComUnkArray](../../atl/reference/ccomunkarray-class.md)|Questa classe Archivia `IUnknown` puntatori ed è progettato per essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello.|atlcom.h|
|[CComVariant](../../atl/reference/ccomvariant-class.md)|Questa classe esegue il wrapping di tipo VARIANT, fornendo un membro che indica il tipo di dati archiviati.|atlcomcli.h|
|[CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md)|Questa classe implementa una finestra contenuta all'interno di un altro oggetto.|atlwin.h|
|[CCRTAllocator](../../atl/reference/ccrtallocator-class.md)|Questa classe fornisce metodi per la gestione della memoria mediante routine di memoria CRT.|atlcore|
|[Su CCRTHeap](../../atl/reference/ccrtheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di heap CRT.|atlmem.h|
|[CDacl](../../atl/reference/cdacl-class.md)|Questa classe è un wrapper per una struttura DACL (elenco di controllo di accesso discrezionali).|atlsecurity.h|
|[Classe CDebugReportHook](../../atl/reference/cdebugreporthook-class.md)|Usare questa classe per inviare i report di debug a una named pipe.|atlutil.h|
|[CDefaultCharTraits](../../atl/reference/cdefaultchartraits-class.md)|Questa classe fornisce due funzioni statiche per la conversione dei caratteri tra lettere maiuscole e minuscole.|atlcoll. h|
|[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)|Questa classe fornisce funzioni di confronto di elemento predefinite.|atlcoll. h|
|[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)|Questa classe fornisce funzioni e metodi predefiniti per una classe di raccolta.|atlcoll. h|
|[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)|Questa classe fornisce una funzione statica per il calcolo dei valori hash.|atlcoll. h|
|[CDialogImpl](../../atl/reference/cdialogimpl-class.md)|Questa classe fornisce metodi per la creazione di una finestra di dialogo modale o non modale.|atlwin.h|
|[CDynamicChain](../../atl/reference/cdynamicchain-class.md)|Questa classe fornisce metodi che supportano la concatenazione dinamica di mappe messaggi.|atlwin.h|
|[CElementTraits](../../atl/reference/celementtraits-class.md)|Questa classe viene utilizzata dalle classi di raccolta per fornire funzioni e metodi per lo spostamento, copia, confronto e operazioni di hashing.|atlcoll. h|
|[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)|Questa classe fornisce copia predefinita e sposta i metodi per una classe di raccolta.|atlcoll. h|
|[CFirePropNotifyEvent](../../atl/reference/cfirepropnotifyevent-class.md)|Questa classe fornisce metodi per inviare la notifica sink del contenitore relative alle modifiche delle proprietà di controllo.|atlctl. h|
|[CGlobalHeap](../../atl/reference/cglobalheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni globali dell'heap Win32.|atlmem.h|
|[CHandle](../../atl/reference/chandle-class.md)|Questa classe fornisce metodi per la creazione e utilizzo di un handle di oggetto.|atlbase. h|
|[CHeapPtr](../../atl/reference/cheapptr-class.md)|Una classe del puntatore intelligente per la gestione dei puntatori di heap.|atlcore|
|[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)|Questa classe costituisce la base per diverse classi di puntatore intelligente dell'heap.|atlcore|
|[Classe CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md)|Questa classe fornisce metodi e funzioni statiche typedef utile durante la creazione di raccolte di puntatori di heap.|atlcoll. h|
|[CHeapPtrList](../../atl/reference/cheapptrlist-class.md)|Questa classe fornisce metodi utili quando si crea un elenco di puntatori di heap.|atlcoll. h|
|[CImage](../../atl-mfc-shared/reference/cimage-class.md)|Fornisce il supporto avanzato per le bitmap, inclusa la possibilità di caricare e salvare le immagini in formato JPEG, GIF, BMP e grafica PNG (Portable Network).|atlimage.h|
|[CInterfaceArray](../../atl/reference/cinterfacearray-class.md)|Questa classe fornisce metodi utili quando si crea una matrice di puntatori a interfaccia COM.|atlcoll. h|
|[CInterfaceList](../../atl/reference/cinterfacelist-class.md)|Questa classe fornisce metodi utili quando si crea un elenco di puntatori a interfaccia COM.|atlcoll. h|
|[CLocalHeap](../../atl/reference/clocalheap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di heap locale Win32.|atlmem.h|
|[CMessageMap](../../atl/reference/cmessagemap-class.md)|Questa classe consente di che mappe messaggi di un oggetto per l'accesso da un altro oggetto.|atlwin.h|
|[Classe CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste da un pool di thread e li passa ad un oggetto di lavoro che verrà creato ed eliminato a ogni richiesta.|atlutil.h|
|[Classe CNoWorkerThread](../../atl/reference/cnoworkerthread-class.md)|Utilizzare questa classe come argomento per il `MonitorClass` cache parametro modello classi se si desidera disabilitare la manutenzione della cache dinamica.|atlutil.h|
|[Classe CPathT](../../atl/reference/cpatht-class.md)|Questa classe rappresenta un percorso.|atlpath. h|
|[CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md)|Questa classe fornisce metodi predefiniti e le funzioni per una classe di raccolta è costituita da tipi di dati primitivi.|atlcoll. h|
|[CPrivateObjectSecurityDesc](../../atl/reference/cprivateobjectsecuritydesc-class.md)|Questa classe rappresenta un oggetto descrittore di sicurezza oggetto privato.|atlsecurity.h|
|[CRBMap](../../atl/reference/crbmap-class.md)|Questa classe rappresenta una struttura di mapping, utilizzando un albero binario rosso-bianco.|atlcoll. h|
|[CRBMultiMap](../../atl/reference/crbmultimap-class.md)|Questa classe rappresenta una struttura di mapping che consente a ogni chiave da associare a più di un valore, usando un albero binario rosso-bianco.|atlcoll. h|
|[CRBTree](../../atl/reference/crbtree-class.md)|Questa classe fornisce metodi per la creazione e utilizzo di una struttura ad albero rosso-bianco.|atlcoll. h|
|[CRegKey](../../atl/reference/cregkey-class.md)|Questa classe fornisce metodi per modificare le voci nel Registro di sistema.|atlbase. h|
|[CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md)|Questa classe fornisce la funzione di creazione di un thread di CRT. Utilizzare questa classe se il thread utilizza le funzioni CRT.|atlbase. h|
|[CSacl](../../atl/reference/csacl-class.md)|Questa classe è un wrapper per una struttura SACL (elenco di controllo di accesso di sistema).|atlsecurity.h|
|[CSecurityAttributes](../../atl/reference/csecurityattributes-class.md)|Questa classe è un thin wrapper per il `SECURITY_ATTRIBUTES` struttura.|atlsecurity.h|
|[Ci CSecurityDesc](../../atl/reference/csecuritydesc-class.md)|Questa classe è un wrapper per il `SECURITY_DESCRIPTOR` struttura.|atlsecurity.h|
|[CSid](../../atl/reference/csid-class.md)|Questa classe è un wrapper per un `SID` struttura (ID di sicurezza).|atlsecurity.h|
|[CSimpleArray](../../atl/reference/csimplearray-class.md)|Questa classe fornisce metodi per la gestione di una matrice semplice.|atlsimpcoll. h|
|[CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md)|Questa classe è un supporto per la [CSimpleArray](../../atl/reference/csimplearray-class.md) classe.|atlsimpcoll. h|
|[CSimpleArrayEqualHelperFalse](../../atl/reference/csimplearrayequalhelperfalse-class.md)|Questa classe è un supporto per la [CSimpleArray](../../atl/reference/csimplearray-class.md) classe.|atlsimpcoll. h|
|[CSimpleDialog](../../atl/reference/csimpledialog-class.md)|Questa classe implementa una finestra di dialogo modale base.|atlwin.h|
|[CSimpleMap](../../atl/reference/csimplemap-class.md)|Questa classe offre supporto per una matrice di mapping semplice.|atlsimpcoll. h|
|[CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md)|Questa classe è un supporto per la [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.|atlsimpcoll. h|
|[CSimpleMapEqualHelperFalse](../../atl/reference/csimplemapequalhelperfalse-class.md)|Questa classe è un supporto per la [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.|atlsimpcoll. h|
|[CSnapInItemImpl](../../atl/reference/csnapinitemimpl-class.md)|Questa classe fornisce metodi per l'implementazione di un oggetto snap-in di nodo.|atlsnap.h|
|[CSnapInPropertyPageImpl](../../atl/reference/csnapinpropertypageimpl-class.md)|Questa classe fornisce metodi per l'implementazione di un oggetto pagina delle proprietà di snap-in.|atlsnap.h|
|[CStockPropImpl](../../atl/reference/cstockpropimpl-class.md)|Questa classe fornisce metodi per il supporto di valori di proprietà predefinite.|atlctl. h|
|[CStringElementTraits](../../atl/reference/cstringelementtraits-class.md)|Questa classe fornisce funzioni statiche utilizzate dalle classi di raccolta l'archiviazione `CString` oggetti.|cstringt.h|
|[CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md)|Questa classe fornisce funzioni statiche relative alle stringhe negli oggetti di classe di raccolta. È simile a [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), ma esegue i confronti tra maiuscole e minuscole.|atlcoll. h|
|[CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md)|Questa classe fornisce funzioni statiche relative alle stringhe negli oggetti di classe di raccolta. Gli oggetti stringa sono trattati come riferimenti.|atlcoll. h|
|[Classe CThreadPool](../../atl/reference/cthreadpool-class.md)|Questa classe fornisce un pool di thread di lavoro che elaborano una coda di elementi di lavoro.|atlutil.h|
|[CTokenGroups](../../atl/reference/ctokengroups-class.md)|Questa classe è un wrapper per il `TOKEN_GROUPS` struttura.|atlsecurity.h|
|[CTokenPrivileges](../../atl/reference/ctokenprivileges-class.md)|Questa classe è un wrapper per il `TOKEN_PRIVILEGES` struttura.|atlsecurity.h|
|[Classe CUrl](../../atl/reference/curl-class.md)|Questa classe rappresenta un URL. È possibile modificare ogni elemento dell'URL indipendentemente dagli altri, se l'analisi di un URL esistente stringa o creazione di una stringa da zero.|atlutil.h|
|[CW2AEX](../../atl/reference/cw2aex-class.md)|Questa classe viene utilizzata la macro di conversione di stringhe CT2AEX, CW2TEX, CW2CTEX e CT2CAEX e typedef CW2A.|atlconv.h|
|[CW2CWEX](../../atl/reference/cw2cwex-class.md)|Questa classe viene utilizzata la macro di conversione di stringhe CW2CTEX e CT2CWEX e typedef CW2CW.|atlconv.h|
|[CW2WEX](../../atl/reference/cw2wex-class.md)|Questa classe viene utilizzata la macro di conversione di stringhe CW2TEX e CT2WEX e typedef CW2W.|atlconv.h|
|[CWin32Heap](../../atl/reference/cwin32heap-class.md)|Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di allocazione dell'heap Win32.|atlmem.h|
|[CWindow](../../atl/reference/cwindow-class.md)|Questa classe fornisce metodi per la modifica di una finestra.|atlwin.h|
|[CWindowImpl](../../atl/reference/cwindowimpl-class.md)|Questa classe fornisce metodi per la creazione o di una sottoclasse di una finestra.|atlwin.h|
|[CWinTraits](../../atl/reference/cwintraits-class.md)|Questa classe fornisce un metodo per la standardizzazione con gli stili usati durante la creazione di un oggetto finestra.|atlwin.h|
|[CWinTraitsOR](../../atl/reference/cwintraitsor-class.md)|Questa classe fornisce un metodo per la standardizzazione con gli stili usati durante la creazione di un oggetto finestra.|atlwin.h|
|[CWndClassInfo](../../atl/reference/cwndclassinfo-class.md)|Questa classe fornisce metodi per la registrazione delle informazioni per una classe della finestra.|atlwin.h|
|[Classe CWorkerThread](../../atl/reference/cworkerthread-class.md)|Questa classe crea un thread di lavoro o viene utilizzato uno esistente, è in attesa su una o più handle di oggetto kernel ed esegue una funzione di client specificato quando uno degli handle viene segnalato.|atlutil.h|
|[IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)|Questa classe rappresenta un'interfaccia per un `CreateInstance` (metodo).|atlbase. h|
|[IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)|Questa classe rappresenta l'interfaccia per un gestore della memoria.|atlmem.h|
|[IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)|Questa interfaccia fornisce metodi per specificare le caratteristiche del controllo ospitato o del contenitore.|atlbase. h, ATLIFace.h|
|[IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md)|Questa interfaccia implementa la proprietà di ambiente aggiuntive per un controllo ospitato.|atlbase. h, ATLIFace.h|
|[IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md)|Questa interfaccia fornisce metodi per la modifica di un controllo e il relativo oggetto host.|atlbase. h, ATLIFace.h|
|[IAxWinHostWindowLic](../../atl/reference/iaxwinhostwindowlic-interface.md)|Questa interfaccia fornisce metodi per la modifica di un controllo con licenza e il relativo oggetto host.|atlbase. h, ATLIFace.h|
|[ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md)|Questa classe fornisce metodi usati da una classe di raccolta.|atlcom.h|
|[IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md)|Questa classe implementa un contenitore del punto di connessione per gestire una raccolta di [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) oggetti.|atlcom.h|
|[IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md)|Questa classe implementa un punto di connessione.|atlcom.h|
|[IDataObjectImpl](../../atl/reference/idataobjectimpl-class.md)|Questa classe fornisce metodi per supportare il trasferimento dei dati uniformi e la gestione delle connessioni.|atlctl. h|
|[IDispatchImpl](../../atl/reference/idispatchimpl-class.md)|Questa classe fornisce un'implementazione predefinita per il `IDispatch` parte di un'interfaccia duale.|atlcom.h|
|[IDispEventImpl](../../atl/reference/idispeventimpl-class.md)|Questa classe fornisce le implementazioni del `IDispatch` metodi.|atlcom.h|
|[IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)|Questa classe fornisce le implementazioni del `IDispatch` metodi, senza recupero di informazioni sul tipo da una libreria dei tipi.|atlcom.h|
|[IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md)|Interfaccia per il motore di rendering e l'analisi HTML di Microsoft.|atlbase. h, ATLIFace.h|
|[IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)|Questa classe definisce un'interfaccia dell'enumeratore basata su una raccolta della libreria Standard C++.|atlcom.h|
|[IObjectSafetyImpl](../../atl/reference/iobjectsafetyimpl-class.md)|Questa classe fornisce un'implementazione predefinita del `IObjectSafety` interfaccia per consentire a un client recuperare e impostare i livelli di sicurezza di un oggetto.|atlctl. h|
|[IObjectWithSiteImpl](../../atl/reference/iobjectwithsiteimpl-class.md)|Questa classe fornisce metodi di consentire a un oggetto comunicare con il relativo sito.|atlcom.h|
|[IOleControlImpl](../../atl/reference/iolecontrolimpl-class.md)|Questa classe fornisce un'implementazione predefinita del `IOleControl` interfaccia e implementa `IUnknown`.|atlctl. h|
|[IOleInPlaceActiveObjectImpl](../../atl/reference/ioleinplaceactiveobjectimpl-class.md)|Questa classe fornisce metodi per facilitare la comunicazione tra un controllo sul posto e il relativo contenitore.|atlctl. h|
|[IOleInPlaceObjectWindowlessImpl](../../atl/reference/ioleinplaceobjectwindowlessimpl-class.md)|Questa classe implementa `IUnknown` e fornisce metodi che consentono un controllo senza finestra per ricevere i messaggi della finestra e partecipare alle operazioni di trascinamento e rilascio.|atlctl. h|
|[IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)|Questa classe implementa `IUnknown` ed è l'interfaccia principale da un contenitore per comunicare con un controllo.|atlctl. h|
|[IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)|Questa classe implementa `IUnknown` e consente a un client accedere alle informazioni nelle pagine delle proprietà di un oggetto.|atlctl. h|
|[IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md)|Questa classe implementa `IUnknown` e consente a un oggetto salvare le proprietà in un contenitore di proprietà specificato dal client.|atlcom.h|
|[IPersistStorageImpl](../../atl/reference/ipersiststorageimpl-class.md)|Questa classe implementa il [IPersistStorage](/windows/desktop/api/objidl/nn-objidl-ipersiststorage) interfaccia.|atlcom.h|
|[IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)|Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita del [IPersistStreamInit](/windows/desktop/api/ocidl/nn-ocidl-ipersiststreaminit) interfaccia.|atlcom.h|
|[IPointerInactiveImpl](../../atl/reference/ipointerinactiveimpl-class.md)|Questa classe implementa `IUnknown` e il [IPointerInactive](/windows/desktop/api/ocidl/nn-ocidl-ipointerinactive) metodi di interfaccia.|atlctl. h|
|[IPropertyNotifySinkCP](../../atl/reference/ipropertynotifysinkcp-class.md)|Questa classe espone il [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) interfaccia come interfaccia in uscita su un oggetto collegabile.|atlctl. h|
|[IPropertyPage2Impl](../../atl/reference/ipropertypage2impl-class.md)|Questa classe implementa `IUnknown` ed eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).|atlctl. h|
|[IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)|Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita del [IPropertyPage](/windows/desktop/api/ocidl/nn-ocidl-ipropertypage) interfaccia.|atlctl. h|
|[IProvideClassInfo2Impl](../../atl/reference/iprovideclassinfo2impl-class.md)|Questa classe fornisce un'implementazione predefinita del [IProvideClassInfo](/windows/desktop/api/ocidl/nn-ocidl-iprovideclassinfo) e [IProvideClassInfo2](/windows/desktop/api/ocidl/nn-ocidl-iprovideclassinfo2) metodi.|atlcom.h|
|[IQuickActivateImpl](../../atl/reference/iquickactivateimpl-class.md)|Questa classe combina l'inizializzazione di controllo dei contenitori in un'unica chiamata.|atlctl. h|
|[IRunnableObjectImpl](../../atl/reference/irunnableobjectimpl-class.md)|Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita del [IRunnableObject](/windows/desktop/api/objidl/nn-objidl-irunnableobject) interfaccia.|atlctl. h|
|[IServiceProviderImpl](../../atl/reference/iserviceproviderimpl-class.md)|Questa classe fornisce un'implementazione predefinita del `IServiceProvider` interfaccia.|atlcom.h|
|[ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)|Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita del [ISpecifyPropertyPages](/windows/desktop/api/ocidl/nn-ocidl-ispecifypropertypages) interfaccia.|atlcom.h|
|[ISupportErrorInfoImpl](../../atl/reference/isupporterrorinfoimpl-class.md)|Questa classe fornisce un'implementazione predefinita del `ISupportErrorInfo Interface` interfaccia e può essere usato quando solo una singola interfaccia genera errori in un oggetto.|atlcom.h|
|[Interfaccia IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)|Questa interfaccia fornisce metodi per la configurazione di un pool di thread.|atlutil.h|
|[IViewObjectExImpl](../../atl/reference/iviewobjecteximpl-class.md)|Questa classe implementa `IUnknown` e fornisce le implementazioni predefinite del [IViewObject](/windows/desktop/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/desktop/api/oleidl/nn-oleidl-iviewobject2), e [IViewObjectEx](/windows/desktop/api/ocidl/nn-ocidl-iviewobjectex) interfacce.|atlctl. h|
|[Interfaccia IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md)|`IWorkerThreadClient` è l'interfaccia implementata da client del [CWorkerThread](../../atl/reference/cworkerthread-class.md) classe.|atlutil.h|
|[_U_MENUorID](../../atl/reference/u-menuorid-class.md)|Questa classe fornisce wrapper `CreateWindow` e `CreateWindowEx`.|atlwin.h|
|[_U_RECT](../../atl/reference/u-rect-class.md)|Classe dell'adattatore in questo argomento consente `RECT` puntatori o riferimenti da passare a una funzione che viene implementata in termini di puntatori.|atlwin.h|
|[_U_STRINGorID](../../atl/reference/u-stringorid-class.md)|Classe dell'adattatore in questo argomento consente di eseguire i nomi delle risorse (LPCTSTRs) o gli ID delle risorse (UINTs) deve essere passato a una funzione senza la necessità di convertire l'ID in una stringa utilizzando la macro MAKEINTRESOURCE al chiamante.|atlwin.h|
|[Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md)|Questa classe fornisce la funzione di creazione di un thread di Windows. Utilizzare questa classe se il thread non useranno le funzioni CRT.|atlbase. h|

## <a name="see-also"></a>Vedere anche

[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)<br/>
[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Variabili globali](../../atl/reference/atl-global-variables.md)<br/>
[Typedef](../../atl/reference/atl-typedefs.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

