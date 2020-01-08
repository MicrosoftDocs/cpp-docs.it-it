---
title: Libreria modelli C++ per Windows Runtime (WRL)
ms.date: 11/04/2016
ms.topic: overview
ms.assetid: b915afce-553b-44a7-b8dc-0ab601758eb0
ms.openlocfilehash: 41b8b45f89e94b8de2ddcb9c87bfd72122db8e1a
ms.sourcegitcommit: 27d9db019f6d84c94de9e6aff0170d918cee6738
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/06/2020
ms.locfileid: "75676938"
---
# <a name="windows-runtime-c-template-library-wrl"></a>Libreria modelli C++ per Windows Runtime (WRL)

La libreria modelli C++ per Windows Runtime (WRL) è una libreria modello che offre un approccio di base per creare e usare componenti Windows Runtime.

> [!NOTE]
> WRL è ora sostituito da C++/WinRT, una proiezione del linguaggio c++ 17 standard per le API Windows Runtime. C++/WinRT è disponibile in Windows 10 SDK dalla versione 1803 in poi. C++/WinRT viene implementato interamente nei file di intestazione e progettato per offrire all'utente l'accesso di prima classe alla moderna API Windows.
>
> Con C++/WinRT è possibile utilizzare e creare Windows Runtime API utilizzando un compilatore c++ 17 conforme agli standard. C++/WinRT offre in genere prestazioni migliori e produce binari più piccoli rispetto a qualsiasi altra opzione del linguaggio per il Windows Runtime. Microsoft continuerà a supportare C++/CX e WRL, ma è consigliabile usare C++/WinRT per le nuove applicazioni. Per altre informazioni, vedere [C++/WinRT](https://docs.microsoft.com/windows/uwp/cpp-and-winrt-apis/index).

## <a name="benefits"></a>Vantaggi

La libreria C++ di modelli Windows Runtime consente di implementare e utilizzare più facilmente componenti Component Object Model (com). Fornisce tecniche di manutenzione come il conteggio dei riferimenti per gestire la durata degli oggetti e il test dei valori HRESULT per determinare se un'operazione ha avuto esito positivo o negativo. Per utilizzare correttamente la libreria C++ di modelli di Windows Runtime, è necessario seguire attentamente queste regole e tecniche.

/CX C++è una modalità di alto livello basata su linguaggio per utilizzare i componenti Windows Runtime. Sia la libreria C++ di modelli Windows Runtime C++che/CX semplificano la scrittura di codice per il Windows Runtime eseguendo automaticamente le attività di manutenzione per conto dell'utente.

Il Windows Runtime C++ libreria di modelli C++e/CX offrono diversi vantaggi. Di seguito sono riportati alcuni motivi per cui è consigliabile usare C++ la libreria di C++modelli Windows Runtime anziché/CX:

- Windows Runtime C++ libreria di modelli aggiunge una piccola astrazione sulla Windows Runtime ABI (Application Binary Interface), offrendo la possibilità di controllare il codice sottostante per creare o utilizzare in modo migliore le API Windows Runtime.

- C++/CX rappresenta i valori HRESULT COM come eccezioni. Se è stata ereditata una codebase che utilizza COM o una che non utilizza le eccezioni, è possibile che la libreria C++ di modelli Windows Runtime sia un metodo più naturale per lavorare con l'Windows Runtime perché non è necessario utilizzare eccezioni.

   > [!NOTE]
   > La libreria C++ di modelli Windows Runtime usa i valori HRESULT e non genera eccezioni. Inoltre, la libreria di C++ modelli Windows Runtime utilizza i puntatori intelligenti e il modello RAII per garantire che gli oggetti vengano eliminati correttamente quando il codice dell'applicazione genera un'eccezione. Per ulteriori informazioni sui puntatori intelligenti e RAII, vedere la pagina relativa alle risorse intelligenti per i [puntatori](../../cpp/smart-pointers-modern-cpp.md) e [gli oggetti (RAII)](../../cpp/objects-own-resources-raii.md).

- Lo scopo e la progettazione della libreria C++ di modelli Windows Runtime sono ispirati dalla Active Template Library (ATL), ovvero un set di classi basate su C++ modello che semplificano la programmazione di oggetti com. Poiché Windows Runtime C++ libreria di modelli utilizza C++ standard per eseguire il wrapping del Windows Runtime, è possibile trasferire più facilmente e interagire con molti componenti COM esistenti scritti in ATL nella Windows Runtime. Se si conosce già ATL, è possibile che Windows Runtime C++ programmazione della libreria di modelli sia più semplice.

## <a name="getting-started"></a>Guida introduttiva

Di seguito sono riportate alcune risorse che consentono di lavorare immediatamente C++ con la libreria di modelli Windows Runtime.

[Libreria di Windows Runtime (WRL)](https://channel9.msdn.com/Events/Windows-Camp/Developing-Windows-8-Metro-style-apps-in-Cpp/The-Windows-Runtime-Library-WRL-)<br/>
In questo video di Channel 9 sono disponibili altre informazioni sul modo C++ in cui la libreria di modelli di Windows Runtime consente di scrivere piattaforma UWP (Universal Windows Platform) app (UWP) e come creare e utilizzare componenti di Windows Runtime.

[Procedura: attivare e utilizzare un componente Windows Runtime](how-to-activate-and-use-a-windows-runtime-component-using-wrl.md)<br/>
Viene illustrato come utilizzare la libreria C++ di modelli Windows Runtime per inizializzare il Windows Runtime e attivare e utilizzare un componente Windows Runtime.

[Procedura: completare operazioni asincrone](how-to-complete-asynchronous-operations-using-wrl.md)<br/>
Viene illustrato come utilizzare la libreria C++ di modelli Windows Runtime per avviare le operazioni asincrone ed eseguire il lavoro quando le operazioni vengono completate.

[Procedura: gestire eventi](how-to-handle-events-using-wrl.md)<br/>
Viene illustrato come utilizzare la libreria C++ di modelli Windows Runtime per sottoscrivere e gestire gli eventi di un oggetto Windows Runtime.

[Procedura dettagliata: creazione di un'app UWP tramite WRL e Media Foundation](walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation.md)<br/>
Informazioni su come creare un'app UWP che usa [Microsoft Media Foundation](/windows/win32/medfound/microsoft-media-foundation-sdk).

[Procedura: creare un componente COM classico](how-to-create-a-classic-com-component-using-wrl.md)<br/>
Viene illustrato come utilizzare la libreria C++ di modelli Windows Runtime per creare un componente COM di base e un metodo di base per registrare e utilizzare il componente COM da un'applicazione desktop.

[Procedura: Creare direttamente un'istanza dei componenti WRL](how-to-instantiate-wrl-components-directly.md)<br/>
Informazioni sull'utilizzo delle funzioni [Microsoft::WRL::Details::MakeAndInitialize](make-function.md) e [Microsoft::WRL::Make](makeandinitialize-function.md) per creare un'istanza di un componente dal modulo che lo definisce.

[Procedura: Usare winmdidl.exe e midlrt.exe per creare file con estensione h dai metadati di Windows](use-winmdidl-and-midlrt-to-create-h-files-from-windows-metadata.md)<br/>
Viene illustrato come utilizzare i componenti personalizzati di Windows Runtime da WRL creando un file IDL dai metadati di .winmd.

[Procedura dettagliata: connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)<br/>
Viene illustrato come utilizzare le interfacce [IXMLHTTPRequest2](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2) e [IXMLHTTPRequest2Callback](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2callback) insieme alle attività per inviare richieste HTTP GET e post a un servizio Web in un'app UWP.

[Esempio di utilità di ottimizzazione viaggi di Bing mappe](https://code.msdn.microsoft.com/Bing-Maps-trip-optimizer-c4e037f7)<br/>
Usa la classe `HttpRequest` definita in [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md) nel contesto di un'app UWP completa.

[Creazione di un componente Windows Runtime DLL C++ con Sample](https://code.msdn.microsoft.com/windowsapps/Creating-a-Windows-Runtime-6c399797)<br/>
Viene illustrato come utilizzare la libreria C++ di modelli Windows Runtime per creare un componente dll in-process e utilizzarlo C++da/CX, JavaScript e C#.

[Esempio di gioco Marble Maze DirectX](https://docs.microsoft.com/samples/microsoft/windows-appsample-marble-maze/directx-marble-maze-game-sample/)<br/>
Viene illustrato come utilizzare la libreria C++ di modelli Windows Runtime per gestire la durata di componenti com come DirectX e Media Foundation nel contesto di un gioco 3D completo.

[Esempio di invio di notifiche di tipo avviso popup da app desktop](https://code.msdn.microsoft.com/windowsdesktop/Sending-toast-notifications-71e230a2)<br/>
Viene illustrato come utilizzare la libreria C++ di modelli Windows Runtime per utilizzare le notifiche di tipo avviso popup da un'applicazione desktop.

## <a name="windows-runtime-c-template-library-compared-to-atl"></a>Libreria C++ di modelli Windows Runtime rispetto ad ATL

Windows Runtime C++ libreria di modelli è simile al Active Template Library (ATL), perché è possibile usarla per creare oggetti com piccoli e veloci. Windows Runtime C++ libreria di modelli e ATL condividono anche concetti quali la definizione di oggetti nei moduli, la registrazione esplicita delle interfacce e la creazione aperta di oggetti tramite le factory. Se si ha familiarità con C++ ATL, è possibile che si abbia familiarità con Windows Runtime libreria di modelli.

Windows Runtime C++ libreria di modelli supporta la funzionalità com necessaria per le app UWP. Di conseguenza, differisce da ATL in quanto non include il supporto diretto alle funzionalità COM come:

- aggregazione

- implementazioni predefinite

- interfacce duali (`IDispatch`)

- interfacce dell'enumeratore standard

- punti di connessione

- interfacce tear-off

- incorporamento OLE

- Controlli ActiveX

- COM+

## <a name="concepts"></a>Concetti relativi a

Windows Runtime C++ libreria di modelli fornisce tipi che rappresentano alcuni concetti di base. Nelle seguenti sezioni vengono descritti questi tipi.

### <a name="comptr"></a>ComPtr

[ComPtr](comptr-class.md) è un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. Utilizzare `ComPtr` per dichiarare una variabile che può accedere ai membri di un oggetto derivato dall'interfaccia. `ComPtr` mantiene automaticamente un conteggio dei riferimenti per un puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.

### <a name="runtimeclass"></a>RuntimeClass

[RuntimeClass](runtimeclass-class.md) rappresenta una classe di cui è stata creata un'istanza che eredita un set di interfacce specificate. Un oggetto `RuntimeClass` può fornire una combinazione di supporto per una o più interfacce Windows Runtime COM o un riferimento debole a un componente.

### <a name="module"></a>Module

[Modulo](module-class.md) rappresenta una raccolta di oggetti correlati. Un oggetto `Module` gestisce le class factory, che creano oggetti, e la registrazione, che consente alle altre applicazioni di utilizzare un oggetto.

### <a name="callback"></a>Callback

La funzione [Callback](callback-function-wrl.md) crea un oggetto la cui funzione membro è un gestore eventi (un metodo di callback). Utilizzare la funzione `Callback` per scrivere operazioni asincrone.

### <a name="eventsource"></a>EventSource

[EventSource](eventsource-class.md) viene utilizzato per gestire i gestori eventi del *delegato* . Utilizzare Windows Runtime C++ libreria di modelli per implementare un delegato e utilizzare `EventSource` per aggiungere, rimuovere e richiamare delegati.

### <a name="asyncbase"></a>AsyncBase

[AsyncBase](asyncbase-class.md) fornisce metodi virtuali che rappresentano il modello di programmazione asincrono Windows Runtime. Eseguire l'override dei membri di questa classe per creare una classe personalizzata che consente di avviare, arrestare o controllare lo stato di avanzamento di un'operazione asincrona.

### <a name="ftmbase"></a>FtmBase

[FtmBase](ftmbase-class.md) rappresenta un oggetto di gestore del marshalling con modello di threading Free. `FtmBase` crea una tabella globale (GIT) dell'interfaccia e aiuta a gestire il marshalling e gli oggetti proxy.

### <a name="weakref"></a>WeakRef

[WeakRef](weakref-class.md) è un tipo di puntatore intelligente che rappresenta un *riferimento debole*che fa riferimento a un oggetto che potrebbe essere accessibile o meno. Un oggetto `WeakRef` può essere usato solo da Windows Runtime e non da COM classico.

Un oggetto `WeakRef` in genere rappresenta un oggetto la cui esistenza è controllata da un thread o da un'applicazione esterna. Ad esempio, un oggetto `WeakRef` può fare riferimento a un oggetto file. Quando il file viene aperto, `WeakRef` è valido e il file a cui si fa riferimento è accessibile. Ma quando il file viene chiuso, `WeakRef` non è valido e il file non è accessibile.

## <a name="related-topics"></a>Argomenti correlati

|||
|-|-|
|[API chiave per categoria](key-wrl-apis-by-category.md)|Evidenzia i tipi, C++ le funzioni e le macro principali della libreria di modelli di Windows Runtime.|
|[Reference](wrl-reference.md)|Contiene informazioni di riferimento per la C++ libreria di modelli Windows Runtime.|
|[Riferimento rapido (C++/CX)](../../cppcx/quick-reference-c-cx.md)|Descrive brevemente le C++funzionalità di/CX che supportano il Windows Runtime.|
|[Uso di componenti Windows Runtime in VisualC++](/windows/uwp/winrt-components/walkthrough-creating-a-basic-windows-runtime-component-in-cpp-and-calling-it-from-javascript-or-csharp)|Viene illustrato come utilizzare C++/CX per creare un componente Windows Runtime di base.|
