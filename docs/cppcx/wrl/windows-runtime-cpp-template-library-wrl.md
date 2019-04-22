---
title: Libreria di modelli di Windows Runtime C++ (WRL)
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: b915afce-553b-44a7-b8dc-0ab601758eb0
ms.openlocfilehash: 5c1a4e7df424499f400dbd70d675956deef6bc5d
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58784948"
---
# <a name="windows-runtime-c-template-library-wrl"></a>Libreria di modelli di Windows Runtime C++ (WRL)

La libreria modelli C++ per Windows Runtime (WRL) è una libreria modello che offre un approccio di base per creare e usare componenti Windows Runtime.

> [!NOTE]
> WRL a questo punto è stata sostituita da C++/WinRT, una proiezione standard del C + + 17 language for Windows Runtime APIs. C++/ È disponibile in Windows 10 SDK versione 1803 poi WinRT. C++/ WinRT è implementata interamente nel file di intestazione e progettato per fornire un accesso all'API Windows moderna.
>
> Con C++/WinRT, è possibile utilizzare e creare Windows Runtime APIs usando qualsiasi conforme agli standard C + + 17 del compilatore. C++/ WinRT è in genere offre prestazioni migliori e produce file binari più piccoli rispetto a un'altra opzione di linguaggio per il Runtime di Windows. Continueremo a supportare C++/CX e WRL, ma è consigliabile usano le nuove applicazioni C++/WinRT. Per altre informazioni, vedere [ C++/WinRT](https://docs.microsoft.com/windows/uwp/cpp-and-winrt-apis/index).

## <a name="benefits"></a>Vantaggi

La libreria di modelli di Windows Runtime C++ consente più facilmente a implementare e utilizzare i componenti del modello COM (Component Object). Vengono illustrate le tecniche, ad esempio il conteggio dei riferimenti per gestire la durata degli oggetti e verifica di valori HRESULT per determinare se un'operazione ha avuto esito positivo o negativo. Per usare correttamente la libreria di modelli di Windows Runtime C++, è necessario seguire attentamente queste regole e tecniche.

C + c++ /CX è ad alto livello, basata sul linguaggio consentono di usare componenti Windows Runtime. Entrambi i Runtime di Windows C++ libreria di modelli e C++/CX semplificano la scrittura di codice per il Runtime di Windows eseguendo automaticamente le attività di gestione per tuo conto.

Il Runtime di Windows C++ libreria di modelli e C++/CX offrono diversi vantaggi. Ecco alcuni motivi per cui si potrebbe voler usare il Runtime di Windows C++ libreria di modelli al posto di C++/CX:

- Libreria modelli C++ per Windows Runtime aggiunge una piccola astrazione failover di Windows Runtime interfaccia applicativa binaria (ABI), offrendo la possibilità di controllare il codice sottostante per ottenere una migliore creare o utilizzare APIs di Windows Runtime.

- C + c++ /CX rappresenta i valori HRESULT COM come eccezioni. Se è stata ereditata una codebase che utilizza COM o che non utilizza le eccezioni, si noterà che la libreria di modelli di Windows Runtime C++ è un modo più semplice lavorare con il Runtime di Windows perché non è necessario utilizzare le eccezioni.

   > [!NOTE]
   > La libreria di modelli di Windows Runtime C++ Usa i valori HRESULT e non genera eccezioni. Inoltre, la libreria di modelli di Windows Runtime C++ utilizza i puntatori intelligenti e il modello RAII che consentono di garantire che gli oggetti vengono eliminati correttamente quando il codice dell'applicazione genera un'eccezione. Per altre informazioni sui puntatori intelligenti e sul modello RAII, vedere [puntatori intelligenti](../../cpp/smart-pointers-modern-cpp.md) e [risorse propri oggetti (RAII)](../../cpp/objects-own-resources-raii.md).

- Lo scopo e la progettazione di Windows Runtime C++ della libreria di modelli è ispirato dal modello libreria ATL (Active), ovvero un set di classi C++ basate su modelli che semplificano la programmazione di oggetti COM. In quanto libreria modelli C++ per Windows Runtime utilizza lo standard C++ per eseguire il wrapping del Runtime di Windows, è possibile la porta più facilmente e interagire con molti componenti COM esistenti scritti in ATL al Runtime di Windows. Se si conosce già ATL, si noterà che è più semplice la programmazione libreria modelli C++ per Windows Runtime.

## <a name="getting-started"></a>Introduzione

Ecco alcune risorse che possono aiutarti a iniziare subito a lavorare con la libreria di modelli di Windows Runtime C++.

[La libreria di Windows Runtime (WRL)](https://channel9.msdn.com/Events/Windows-Camp/Developing-Windows-8-Metro-style-apps-in-Cpp/The-Windows-Runtime-Library-WRL-)<br/>
In questo video di Channel 9, ulteriori informazioni sul modo in cui la libreria di modelli di Windows Runtime C++ consente che scrivere App Universal Windows Platform (UWP) e su come creare e utilizzare i componenti Windows Runtime.

[Procedura: Attivare e utilizzare un componente di Runtime di Windows](how-to-activate-and-use-a-windows-runtime-component-using-wrl.md)<br/>
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per inizializzare il Runtime di Windows e attivare e utilizzare un componente Windows Runtime.

[Procedura: Completare operazioni asincrone](how-to-complete-asynchronous-operations-using-wrl.md)<br/>
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per avviare le operazioni asincrone ed eseguirle quando le operazioni completate.

[Procedura: Gestione degli eventi](how-to-handle-events-using-wrl.md)<br/>
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per sottoscrivere e gestire gli eventi di un oggetto Windows Runtime.

[Procedura dettagliata: Creazione di un'app UWP tramite WRL e Media Foundation](walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation.md)<br/>
Informazioni su come creare un'app UWP che usa [Microsoft Media Foundation](/windows/desktop/medfound/microsoft-media-foundation-sdk).

[Procedura: Creare un componente COM classico](how-to-create-a-classic-com-component-using-wrl.md)<br/>
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per creare un componente COM di base e un metodo di base per registrare e utilizzare il componente COM da un'app desktop.

[Procedura: Creare direttamente un'istanza dei componenti WRL](how-to-instantiate-wrl-components-directly.md)<br/>
Informazioni sull'utilizzo delle funzioni [Microsoft::WRL::Details::MakeAndInitialize](make-function.md) e [Microsoft::WRL::Make](makeandinitialize-function.md) per creare un'istanza di un componente dal modulo che lo definisce.

[Procedura: Usare winmdidl.exe e midlrt.exe per creare file con estensione h dai metadati di Windows](use-winmdidl-and-midlrt-to-create-h-files-from-windows-metadata.md)<br/>
Viene illustrato come utilizzare i componenti personalizzati di Windows Runtime da WRL creando un file IDL dai metadati di .winmd.

[Procedura dettagliata: Connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)<br/>
Viene illustrato come utilizzare il [IXMLHTTPRequest2](/windows/desktop/api/msxml6/nn-msxml6-ixmlhttprequest2) e [IXMLHTTPRequest2Callback](/windows/desktop/api/msxml6/nn-msxml6-ixmlhttprequest2callback) interfacce insieme alle attività per inviare richieste HTTP GET e POST a un servizio web in un'app UWP.

[Esempio di utilità di ottimizzazione dei viaggi di Bing mappe](https://code.msdn.microsoft.com/Bing-Maps-trip-optimizer-c4e037f7)<br/>
Usa il `HttpRequest` definito nella classe [procedura dettagliata: La connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md) nel contesto di un'app UWP completa.

[Creazione di un componente DLL di Windows Runtime con esempio di C++](https://code.msdn.microsoft.com/windowsapps/Creating-a-Windows-Runtime-6c399797)<br/>
Viene illustrato come utilizzare il Runtime di Windows C++ libreria di modelli per creare un componente DLL in-process e usarla da C++/CX, JavaScript, e C#.

[Esempio di gioco marble maze DirectX](https://code.msdn.microsoft.com/windowsapps/DirectX-Marble-Maze-Game-e4806345)<br/>
Illustra come usare la libreria di modelli di Windows Runtime C++ per gestire la durata di componenti COM come DirectX e Media Foundation nel contesto di un gioco 3D completo.

[Esempio di invio notifiche di tipo avviso popup da app desktop](https://code.msdn.microsoft.com/windowsdesktop/Sending-toast-notifications-71e230a2)<br/>
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per lavorare con le notifiche di tipo avviso popup da un'app desktop.

## <a name="windows-runtime-c-template-library-compared-to-atl"></a>Libreria modelli C++ per Windows Runtime confronto confrontata ATL

Libreria modelli C++ per Windows Runtime è simile alla libreria ATL (Active Template) quanto è possibile utilizzarlo per creare piccoli e veloci oggetti COM. Libreria di modelli di Windows Runtime C++ e ATL condividono i concetti di definizione degli oggetti in moduli, registrazione esplicita delle interfacce e aperta la creazione di oggetti tramite le factory. Potrebbe essere familiarità con la libreria modelli C++ per Windows Runtime se si ha familiarità con ATL.

Libreria modelli C++ per Windows Runtime supporta la funzionalità COM necessaria per le app UWP. Di conseguenza, differisce da ATL in quanto non include il supporto diretto alle funzionalità COM come:

- aggregazione

- implementazioni predefinite

- interfacce duali (`IDispatch`)

- interfacce dell'enumeratore standard

- punti di connessione

- interfacce tear-off

- incorporamento OLE

- Controlli ActiveX

- COM+

## <a name="concepts"></a>Concetti

Libreria modelli C++ per Windows Runtime offre tipi che rappresentano alcuni concetti di base. Nelle seguenti sezioni vengono descritti questi tipi.

### <a name="comptr"></a>ComPtr

[ComPtr](comptr-class.md) è un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. Utilizzare `ComPtr` per dichiarare una variabile che può accedere ai membri di un oggetto derivato dall'interfaccia. `ComPtr` mantiene automaticamente un conteggio dei riferimenti per un puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.

### <a name="runtimeclass"></a>RuntimeClass

[RuntimeClass](runtimeclass-class.md) rappresenta una classe di cui è stata creata un'istanza che eredita un set di interfacce specificate. Oggetto `RuntimeClass` oggetto può fornire una combinazione di supporto per uno o più interfacce di Windows Runtime COM, o un riferimento debole a un componente.

### <a name="module"></a>Modulo

[Modulo](module-class.md) rappresenta una raccolta di oggetti correlati. Un oggetto `Module` gestisce le class factory, che creano oggetti, e la registrazione, che consente alle altre applicazioni di utilizzare un oggetto.

### <a name="callback"></a>Callback

La funzione [Callback](callback-function-wrl.md) crea un oggetto la cui funzione membro è un gestore eventi (un metodo di callback). Utilizzare la funzione `Callback` per scrivere operazioni asincrone.

### <a name="eventsource"></a>EventSource

[EventSource](eventsource-class.md) viene utilizzato per gestire i gestori eventi del *delegato* . Libreria modelli C++ per Windows Runtime consente di implementare un delegato e utilizzare `EventSource` per aggiungere, rimuovere e richiamare delegati.

### <a name="asyncbase"></a>AsyncBase

[AsyncBase](asyncbase-class.md) fornisce metodi virtuali che rappresentano il modello di programmazione asincrono di Windows Runtime. Eseguire l'override dei membri di questa classe per creare una classe personalizzata che consente di avviare, arrestare o controllare lo stato di avanzamento di un'operazione asincrona.

### <a name="ftmbase"></a>FtmBase

[FtmBase](ftmbase-class.md) rappresenta un oggetto di gestore del marshalling con modello di threading Free. `FtmBase` crea una tabella globale (GIT) dell'interfaccia e aiuta a gestire il marshalling e gli oggetti proxy.

### <a name="weakref"></a>WeakRef

[WeakRef](weakref-class.md) è un tipo di puntatore intelligente che rappresenta un *riferimento debole*che fa riferimento a un oggetto che potrebbe essere accessibile o meno. Oggetto `WeakRef` oggetto può essere usato solamente da Windows Runtime e non da COM classico.

Un oggetto `WeakRef` in genere rappresenta un oggetto la cui esistenza è controllata da un thread o da un'applicazione esterna. Ad esempio, un oggetto `WeakRef` può fare riferimento a un oggetto file. Quando il file viene aperto, `WeakRef` è valido e il file a cui si fa riferimento è accessibile. Ma quando il file viene chiuso, `WeakRef` non è valido e il file non è accessibile.

## <a name="related-topics"></a>Argomenti correlati

|||
|-|-|
|[Chiave API per categoria](key-wrl-apis-by-category.md)|Evidenzia i tipi, funzioni e macro primari libreria modelli C++ per Windows Runtime.|
|[Riferimento](wrl-reference.md)|Contiene informazioni di riferimento per la libreria di modelli di Windows Runtime C++.|
|[Riferimento rapido (Windows Runtime e Visual C++)](../../cppcx/quick-reference-c-cx.md)|Vengono descritti brevemente i C++funzionalità /CX che supportano il Runtime di Windows.|
|[Uso di componenti Windows Runtime in Visual C++](/windows/uwp/winrt-components/walkthrough-creating-a-basic-windows-runtime-component-in-cpp-and-calling-it-from-javascript-or-csharp)|Viene illustrato come usare c++ /CX per creare un componente Windows Runtime di base.|
