---
title: Libreria di modelli di Windows Runtime C++ (WRL)
ms.date: 11/04/2016
ms.topic: overview
ms.assetid: b915afce-553b-44a7-b8dc-0ab601758eb0
ms.openlocfilehash: b03dc98212bbc822ddc44871632fda73d1be8740
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86404912"
---
# <a name="windows-runtime-c-template-library-wrl"></a>Libreria di modelli di Windows Runtime C++ (WRL)

La libreria modelli C++ per Windows Runtime (WRL) è una libreria modello che offre un approccio di base per creare e usare componenti Windows Runtime.

> [!NOTE]
> WRL è ora sostituito da C++/WinRT, una proiezione del linguaggio C++ 17 standard per le API Windows Runtime. C++/WinRT è disponibile in Windows 10 SDK dalla versione 1803 in poi. C++/WinRT viene implementato interamente nei file di intestazione e progettato per offrire all'utente l'accesso di prima classe alla moderna API Windows.
>
> Con C++/WinRT, è possibile utilizzare e creare Windows Runtime API utilizzando qualsiasi compilatore C++ 17 conforme agli standard. C++/WinRT in genere garantisce prestazioni migliori e produce binari più piccoli rispetto a qualsiasi altra opzione del linguaggio per il Windows Runtime. Microsoft continuerà a supportare C++/CX e WRL, ma è consigliabile usare C++/WinRT per le nuove applicazioni. Per ulteriori informazioni, vedere [C++/WinRT](https://docs.microsoft.com/windows/uwp/cpp-and-winrt-apis/index).

## <a name="benefits"></a>Vantaggi

La libreria di modelli Windows Runtime C++ consente di implementare e utilizzare più facilmente componenti Component Object Model (COM). Fornisce tecniche di manutenzione come il conteggio dei riferimenti per gestire la durata degli oggetti e il test dei valori HRESULT per determinare se un'operazione ha avuto esito positivo o negativo. Per utilizzare correttamente la libreria di modelli di Windows Runtime C++, è necessario seguire attentamente queste regole e tecniche.

C++/CX è una modalità di alto livello basata sul linguaggio per l'uso di componenti Windows Runtime. Sia la libreria di modelli di Windows Runtime C++ che C++/CX semplificano la scrittura di codice per il Windows Runtime eseguendo automaticamente le attività di manutenzione per conto dell'utente.

La libreria di modelli Windows Runtime C++ e C++/CX offrono diversi vantaggi. Ecco alcuni motivi per cui si potrebbe voler usare la libreria di modelli di Windows Runtime C++ anziché C++/CX:

- Windows Runtime libreria di modelli C++ aggiunge una piccola astrazione sulla Windows Runtime ABI (Application Binary Interface), offrendo la possibilità di controllare il codice sottostante per creare o utilizzare in modo più efficace Windows Runtime API.

- C++/CX rappresenta i valori HRESULT COM come eccezioni. Se è stata ereditata una codebase che utilizza COM o una che non utilizza le eccezioni, è possibile che la Windows Runtime libreria di modelli C++ sia un modo più naturale per lavorare con l'Windows Runtime perché non è necessario utilizzare eccezioni.

   > [!NOTE]
   > La libreria di modelli Windows Runtime C++ usa i valori HRESULT e non genera eccezioni. Inoltre, la libreria di modelli Windows Runtime C++ utilizza i puntatori intelligenti e il modello RAII per garantire che gli oggetti vengano eliminati correttamente quando il codice dell'applicazione genera un'eccezione. Per ulteriori informazioni sui puntatori intelligenti e RAII, vedere la pagina relativa alle risorse intelligenti per i [puntatori](../../cpp/smart-pointers-modern-cpp.md) e [gli oggetti (RAII)](../../cpp/objects-own-resources-raii.md).

- Lo scopo e la progettazione della libreria di modelli Windows Runtime C++ sono ispirati dalla Active Template Library (ATL), ovvero un set di classi C++ basate su modelli che semplificano la programmazione di oggetti COM. Poiché Windows Runtime libreria di modelli C++ usa il linguaggio C++ standard per eseguire il wrapping del Windows Runtime, è possibile trasferire più facilmente e interagire con molti componenti COM esistenti scritti in ATL per il Windows Runtime. Se si conosce già ATL, è possibile che Windows Runtime programmazione della libreria di modelli C++ sia più semplice.

## <a name="getting-started"></a>Introduzione

Di seguito sono riportate alcune risorse che consentono di lavorare immediatamente con la libreria di modelli di Windows Runtime C++.

[Libreria Windows Runtime (WRL)](https://channel9.msdn.com/Events/Windows-Camp/Developing-Windows-8-Metro-style-apps-in-Cpp/The-Windows-Runtime-Library-WRL-)<br/>
In questo video di Channel 9, Scopri di più su come la libreria di modelli di Windows Runtime C++ ti aiuta a scrivere le app piattaforma UWP (Universal Windows Platform) (UWP) e come creare e utilizzare Windows Runtime componenti.

[Procedura: attivare e utilizzare un componente Windows Runtime](how-to-activate-and-use-a-windows-runtime-component-using-wrl.md)<br/>
Viene illustrato come utilizzare la libreria di modelli C++ Windows Runtime per inizializzare il Windows Runtime e attivare e utilizzare un componente Windows Runtime.

[Procedura: completare operazioni asincrone](how-to-complete-asynchronous-operations-using-wrl.md)<br/>
Viene illustrato come utilizzare la libreria di modelli C++ Windows Runtime per avviare le operazioni asincrone ed eseguire il lavoro quando le operazioni vengono completate.

[Procedura: gestire eventi](how-to-handle-events-using-wrl.md)<br/>
Viene illustrato come utilizzare la libreria di modelli di Windows Runtime C++ per sottoscrivere e gestire gli eventi di un oggetto Windows Runtime.

[Procedura dettagliata: Creazione di un'app UWP tramite WRL e Media Foundation](walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation.md)<br/>
Informazioni su come creare un'app UWP che usa [Microsoft Media Foundation](/windows/win32/medfound/microsoft-media-foundation-sdk).

[Procedura: creare un componente COM classico](how-to-create-a-classic-com-component-using-wrl.md)<br/>
Viene illustrato come utilizzare la libreria di modelli C++ Windows Runtime per creare un componente COM di base e un metodo di base per registrare e utilizzare il componente COM da un'applicazione desktop.

[Procedura: creare direttamente un'istanza dei componenti WRL](how-to-instantiate-wrl-components-directly.md)<br/>
Informazioni sull'utilizzo delle funzioni [Microsoft::WRL::Details::MakeAndInitialize](make-function.md) e [Microsoft::WRL::Make](makeandinitialize-function.md) per creare un'istanza di un componente dal modulo che lo definisce.

[Procedura: Usare winmdidl.exe e midlrt.exe per creare file con estensione h dai metadati di Windows](use-winmdidl-and-midlrt-to-create-h-files-from-windows-metadata.md)<br/>
Viene illustrato come utilizzare i componenti personalizzati di Windows Runtime da WRL creando un file IDL dai metadati di .winmd.

[Procedura dettagliata: connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)<br/>
Viene illustrato come utilizzare le interfacce [IXMLHTTPRequest2](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2) e [IXMLHTTPRequest2Callback](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2callback) insieme alle attività per inviare richieste HTTP GET e post a un servizio Web in un'app UWP.

[Esempio dell'utilità di ottimizzazione dei viaggi di Bing Maps](https://github.com/Microsoft/VCSamples/tree/master/VC2012Samples/Windows%208%20samples/C%2B%2B/Windows%208%20app%20samples)<br/>
Usa la `HttpRequest` classe definita in [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md) nel contesto di un'app UWP completa.

[Creazione di un esempio di componente DLL Windows Runtime con C++](https://github.com/Microsoft/VCSamples/tree/master/VC2012Samples/Windows%208%20samples/C%2B%2B/Windows%208%20app%20samples)<br/>
Viene illustrato come utilizzare la libreria di modelli C++ Windows Runtime per creare un componente DLL in-process e utilizzarlo da C++/CX, JavaScript e C#.

[Esempio di gioco Marble Maze DirectX](https://docs.microsoft.com/samples/microsoft/windows-appsample-marble-maze/directx-marble-maze-game-sample/)<br/>
Viene illustrato come utilizzare la libreria di modelli C++ Windows Runtime per gestire la durata di componenti COM come DirectX e Media Foundation nel contesto di un gioco 3D completo.

[Notifiche di tipo avviso popup da app desktop](/windows/uwp/design/shell/tiles-and-notifications/toast-desktop-apps)<br/>
Viene illustrato come inviare notifiche di tipo avviso popup da un'applicazione desktop.

## <a name="windows-runtime-c-template-library-compared-to-atl"></a>Windows Runtime libreria di modelli C++ rispetto ad ATL

Windows Runtime libreria di modelli C++ è simile al Active Template Library (ATL), perché è possibile usarla per creare oggetti COM piccoli e veloci. Windows Runtime libreria di modelli C++ e ATL condividono anche concetti quali la definizione di oggetti nei moduli, la registrazione esplicita delle interfacce e la creazione aperta di oggetti tramite le factory. Se si ha familiarità con ATL, è possibile che si abbia familiarità con Windows Runtime libreria di modelli C++.

Windows Runtime libreria di modelli C++ supporta la funzionalità COM necessaria per le app UWP. Di conseguenza, differisce da ATL in quanto non include il supporto diretto alle funzionalità COM come:

- aggregation

- implementazioni predefinite

- interfacce duali (`IDispatch`)

- interfacce dell'enumeratore standard

- punti di connessione

- interfacce tear-off

- incorporamento OLE

- Controlli ActiveX

- COM+

## <a name="concepts"></a>Concetti

Windows Runtime libreria di modelli C++ fornisce tipi che rappresentano alcuni concetti di base. Nelle seguenti sezioni vengono descritti questi tipi.

### <a name="comptr"></a>ComPtr

[ComPtr](comptr-class.md) è un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. Utilizzare `ComPtr` per dichiarare una variabile che può accedere ai membri di un oggetto derivato dall'interfaccia. `ComPtr` mantiene automaticamente un conteggio dei riferimenti per un puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.

### <a name="runtimeclass"></a>RuntimeClass

[RuntimeClass](runtimeclass-class.md) rappresenta una classe di cui è stata creata un'istanza che eredita un set di interfacce specificate. Un `RuntimeClass` oggetto può fornire una combinazione di supporto per una o più Windows Runtime interfacce com o un riferimento debole a un componente.

### <a name="module"></a>Modulo

[Modulo](module-class.md) rappresenta una raccolta di oggetti correlati. Un oggetto `Module` gestisce le class factory, che creano oggetti, e la registrazione, che consente alle altre applicazioni di utilizzare un oggetto.

### <a name="callback"></a>Callback

La funzione [Callback](callback-function-wrl.md) crea un oggetto la cui funzione membro è un gestore eventi (un metodo di callback). Utilizzare la funzione `Callback` per scrivere operazioni asincrone.

### <a name="eventsource"></a>EventSource

[EventSource](eventsource-class.md) viene utilizzato per gestire i gestori eventi del *delegato* . Utilizzare Windows Runtime libreria di modelli C++ per implementare un delegato e utilizzare `EventSource` per aggiungere, rimuovere e richiamare delegati.

### <a name="asyncbase"></a>AsyncBase

[AsyncBase](asyncbase-class.md) fornisce metodi virtuali che rappresentano il modello di programmazione asincrono Windows Runtime. Eseguire l'override dei membri di questa classe per creare una classe personalizzata che consente di avviare, arrestare o controllare lo stato di avanzamento di un'operazione asincrona.

### <a name="ftmbase"></a>FtmBase

[FtmBase](ftmbase-class.md) rappresenta un oggetto di gestore del marshalling con modello di threading Free. `FtmBase` crea una tabella globale (GIT) dell'interfaccia e aiuta a gestire il marshalling e gli oggetti proxy.

### <a name="weakref"></a>WeakRef

[WeakRef](weakref-class.md) è un tipo di puntatore intelligente che rappresenta un *riferimento debole*che fa riferimento a un oggetto che potrebbe essere accessibile o meno. Un `WeakRef` oggetto può essere usato solo da Windows Runtime e non da com classico.

Un oggetto `WeakRef` in genere rappresenta un oggetto la cui esistenza è controllata da un thread o da un'applicazione esterna. Ad esempio, un oggetto `WeakRef` può fare riferimento a un oggetto file. Quando il file viene aperto, `WeakRef` è valido e il file a cui si fa riferimento è accessibile. Ma quando il file viene chiuso, `WeakRef` non è valido e il file non è accessibile.

## <a name="related-topics"></a>Argomenti correlati

|||
|-|-|
|[API chiave per categoria](key-wrl-apis-by-category.md)|Evidenzia i tipi, le funzioni e le macro principali della libreria di modelli C++ Windows Runtime.|
|[Riferimento](wrl-reference.md)|Contiene informazioni di riferimento per la libreria di modelli di Windows Runtime C++.|
|[Riferimento rapido (C++/CX)](../../cppcx/quick-reference-c-cx.md)|Descrive brevemente le funzionalità C++/CX che supportano il Windows Runtime.|
|[Uso di componenti Windows Runtime in Visual C++](/windows/uwp/winrt-components/walkthrough-creating-a-basic-windows-runtime-component-in-cpp-and-calling-it-from-javascript-or-csharp)|Viene illustrato come utilizzare C++/CX per creare un componente Windows Runtime di base.|
