---
title: Libreria modelli C++ per Windows Runtime (WRL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: b915afce-553b-44a7-b8dc-0ab601758eb0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3c758226935151bd11faec12aed459aeb2606ca9
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43684824"
---
# <a name="windows-runtime-c-template-library-wrl"></a>Libreria di modelli di Windows Runtime C++ (WRL)

La libreria modelli C++ per Windows Runtime (WRL) è una libreria modello che offre un approccio di base per creare e usare componenti Windows Runtime.

> [!NOTE]
> WRL a questo punto è stata sostituita da C + + / WinRT, una proiezione standard del C + + 17 language for Windows Runtime APIs. C + + / WinRT è disponibile in Windows 10 SDK versione 1803 in poi. C + + / WinRT è implementata interamente nel file di intestazione e progettato per fornire un accesso all'API Windows moderna.

> Con C + + / WinRT, è possibile utilizzare e creare Windows Runtime APIs usando qualsiasi conforme agli standard C + + 17 del compilatore. C + + / WinRT è in genere offre prestazioni migliori e produce file binari più piccoli rispetto a un'altra opzione di linguaggio per il Runtime di Windows. Continueremo a supportare C + + c++ /CX e WRL, ma è consigliabile che le nuove applicazioni usare C + + c++ /CLI WinRT. Per altre informazioni, vedere [C + + / WinRT](https://docs.microsoft.com/windows/uwp/cpp-and-winrt-apis/index).

## <a name="benefits"></a>Vantaggi

La libreria di modelli di Windows Runtime C++ consente più facilmente a implementare e utilizzare i componenti del modello COM (Component Object). Vengono illustrate le tecniche, ad esempio il conteggio dei riferimenti per gestire la durata degli oggetti e verifica di valori HRESULT per determinare se un'operazione ha avuto esito positivo o negativo. Per usare correttamente la libreria di modelli di Windows Runtime C++, è necessario seguire attentamente queste regole e tecniche.

C + c++ /CX è ad alto livello, basata sul linguaggio consentono di usare componenti Windows Runtime. Sia la libreria di modelli di Windows Runtime C++ e C + + c++ /CX semplificano la scrittura di codice per il Runtime di Windows eseguendo automaticamente le attività di gestione per tuo conto.

La libreria di modelli di Windows Runtime C++ e C + + c++ /CX offrono diversi vantaggi. Ecco alcuni motivi per cui si potrebbe voler usare la libreria di modelli di Windows Runtime C++ anziché C + + c++ /CX:

- Libreria modelli C++ per Windows Runtime aggiunge una piccola astrazione failover di Windows Runtime interfaccia applicativa binaria (ABI), offrendo la possibilità di controllare il codice sottostante per ottenere una migliore creare o utilizzare APIs di Windows Runtime.

- C + c++ /CX rappresenta i valori HRESULT COM come eccezioni. Se è stata ereditata una codebase che utilizza COM o che non utilizza le eccezioni, si noterà che la libreria di modelli di Windows Runtime C++ è un modo più semplice lavorare con il Runtime di Windows perché non è necessario utilizzare le eccezioni.

   > [!NOTE]
   > La libreria di modelli di Windows Runtime C++ Usa i valori HRESULT e non genera eccezioni. Inoltre, la libreria di modelli di Windows Runtime C++ utilizza i puntatori intelligenti e il modello RAII che consentono di garantire che gli oggetti vengono eliminati correttamente quando il codice dell'applicazione genera un'eccezione. Per altre informazioni sui puntatori intelligenti e sul modello RAII, vedere [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md) e [risorse propri oggetti (RAII)](../cpp/objects-own-resources-raii.md).

- Lo scopo e la progettazione di Windows Runtime C++ della libreria di modelli è ispirato dal modello libreria ATL (Active), ovvero un set di classi C++ basate su modelli che semplificano la programmazione di oggetti COM. In quanto libreria modelli C++ per Windows Runtime utilizza lo standard C++ per eseguire il wrapping del Runtime di Windows, è possibile la porta più facilmente e interagire con molti componenti COM esistenti scritti in ATL al Runtime di Windows. Se si conosce già ATL, si noterà che è più semplice la programmazione libreria modelli C++ per Windows Runtime.

## <a name="getting-started"></a>Introduzione

Ecco alcune risorse che possono aiutarti a iniziare subito a lavorare con la libreria di modelli di Windows Runtime C++.

[La libreria di Windows Runtime (WRL)](http://channel9.msdn.com/Events/Windows-Camp/Developing-Windows-8-Metro-style-apps-in-Cpp/The-Windows-Runtime-Library-WRL-)  
In questo video di Channel 9, ulteriori informazioni sul modo in cui la libreria di modelli di Windows Runtime C++ consente che scrivere App Universal Windows Platform (UWP) e su come creare e utilizzare i componenti Windows Runtime.

[Procedura: attivare e utilizzare un componente di Runtime di Windows](../windows/how-to-activate-and-use-a-windows-runtime-component-using-wrl.md)  
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per inizializzare il Runtime di Windows e attivare e utilizzare un componente Windows Runtime.

[Procedura: completare operazioni asincrone](../windows/how-to-complete-asynchronous-operations-using-wrl.md)  
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per avviare le operazioni asincrone ed eseguirle quando le operazioni completate.

[Procedura: gestire eventi](../windows/how-to-handle-events-using-wrl.md)  
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per sottoscrivere e gestire gli eventi di un oggetto Windows Runtime.

[Procedura dettagliata: creazione di un'app UWP tramite WRL e Media Foundation](../windows/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation.md)  
Informazioni su come creare un'app UWP che usa [Microsoft Media Foundation](/windows/desktop/medfound/microsoft-media-foundation-sdk).

[Procedura: creare un componente COM classico](../windows/how-to-create-a-classic-com-component-using-wrl.md)  
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per creare un componente COM di base e un metodo di base per registrare e utilizzare il componente COM da un'app desktop.

[Procedura: Creare direttamente un'istanza dei componenti WRL](../windows/how-to-instantiate-wrl-components-directly.md)  
Informazioni su come usare il [makeandinitialize](../windows/make-function.md) e [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md) funzioni per creare un'istanza di un componente dal modulo che lo definisce.

[Procedura: Usare winmdidl.exe e midlrt.exe per creare file con estensione h dai metadati di Windows](../windows/use-winmdidl-and-midlrt-to-create-h-files-from-windows-metadata.md)  
Viene illustrato come utilizzare i componenti personalizzati di Windows Runtime da WRL creando un file IDL dai metadati di .winmd.

[Procedura dettagliata: connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)  
Viene illustrato come utilizzare il [IXMLHTTPRequest2](/previous-versions/windows/desktop/api/msxml6/nn-msxml6-ixmlhttprequest2) e [IXMLHTTPRequest2Callback](/previous-versions/windows/desktop/api/msxml6/nn-msxml6-ixmlhttprequest2callback) interfacce insieme alle attività per inviare richieste HTTP GET e POST a un servizio web in un'app UWP.

[Esempio di utilità di ottimizzazione dei viaggi di Bing mappe](http://code.msdn.microsoft.com/Bing-Maps-trip-optimizer-c4e037f7)  
Usa il `HttpRequest` definito nella classe [questa procedura dettagliata: connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md) nel contesto di un'app UWP completa.

[Creazione di un componente DLL di Windows Runtime con esempio di C++](http://code.msdn.microsoft.com/windowsapps/Creating-a-Windows-Runtime-6c399797)  
Viene illustrato come usare la libreria di modelli di Windows Runtime C++ per creare un componente DLL in-process e utilizzarlo da C + + c++ /CX, JavaScript e c#.

[Esempio di gioco marble maze DirectX](http://code.msdn.microsoft.com/windowsapps/DirectX-Marble-Maze-Game-e4806345)  
Illustra come usare la libreria di modelli di Windows Runtime C++ per gestire la durata di componenti COM come DirectX e Media Foundation nel contesto di un gioco 3D completo.

[Esempio di invio notifiche di tipo avviso popup da app desktop](http://code.msdn.microsoft.com/windowsdesktop/Sending-toast-notifications-71e230a2)  
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

[ComPtr](../windows/comptr-class.md) è un *puntatore intelligente* tipo che rappresenta l'interfaccia specificata dal parametro di modello. Utilizzare `ComPtr` per dichiarare una variabile che può accedere ai membri di un oggetto derivato dall'interfaccia. `ComPtr` mantiene automaticamente un conteggio dei riferimenti per un puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.

### <a name="runtimeclass"></a>RuntimeClass

[RuntimeClass](../windows/runtimeclass-class.md) rappresenta una classe istanziata che eredita un set di interfacce specificate. Oggetto `RuntimeClass` oggetto può fornire una combinazione di supporto per uno o più interfacce di Windows Runtime COM, o un riferimento debole a un componente.

### <a name="module"></a>Modulo

[Modulo](../windows/module-class.md) rappresenta una raccolta di oggetti correlati. Un oggetto `Module` gestisce le class factory, che creano oggetti, e la registrazione, che consente alle altre applicazioni di utilizzare un oggetto.

### <a name="callback"></a>Callback

Il [Callback](../windows/callback-function-windows-runtime-cpp-template-library.md) funzione crea un oggetto la cui funzione membro è un gestore eventi (un metodo di callback). Utilizzare la funzione `Callback` per scrivere operazioni asincrone.

### <a name="eventsource"></a>EventSource

[EventSource](../windows/eventsource-class.md) viene usato per gestire *delegare* gestori eventi. Libreria modelli C++ per Windows Runtime consente di implementare un delegato e utilizzare `EventSource` per aggiungere, rimuovere e richiamare delegati.

### <a name="asyncbase"></a>AsyncBase

[AsyncBase](../windows/asyncbase-class.md) fornisce metodi virtuali che rappresentano il modello di programmazione asincrono di Windows Runtime. Eseguire l'override dei membri di questa classe per creare una classe personalizzata che consente di avviare, arrestare o controllare lo stato di avanzamento di un'operazione asincrona.

### <a name="ftmbase"></a>FtmBase

[FtmBase](../windows/ftmbase-class.md) rappresenta un oggetto gestore del marshalling a thread libero. `FtmBase` crea una tabella globale (GIT) dell'interfaccia e aiuta a gestire il marshalling e gli oggetti proxy.

### <a name="weakref"></a>WeakRef

[WeakRef](../windows/weakref-class.md) è un tipo di puntatore intelligente che rappresenta un *riferimento debole*, che fa riferimento a un oggetto che può o potrebbe non essere accessibile. Oggetto `WeakRef` oggetto può essere usato solamente da Windows Runtime e non da COM classico.

Un oggetto `WeakRef` in genere rappresenta un oggetto la cui esistenza è controllata da un thread o da un'applicazione esterna. Ad esempio, un oggetto `WeakRef` può fare riferimento a un oggetto file. Quando il file viene aperto, `WeakRef` è valido e il file a cui si fa riferimento è accessibile. Ma quando il file viene chiuso, `WeakRef` non è valido e il file non è accessibile.

## <a name="related-topics"></a>Argomenti correlati

|||
|-|-|
|[Chiave API per categoria](../windows/key-wrl-apis-by-category.md)|Evidenzia i tipi, funzioni e macro primari libreria modelli C++ per Windows Runtime.|
|[Riferimento](../windows/wrl-reference.md)|Contiene informazioni di riferimento per la libreria di modelli di Windows Runtime C++.|
|[Riferimento rapido (Windows Runtime e Visual C++)](../cppcx/quick-reference-c-cx.md)|Vengono descritti brevemente di C + + / funzionalità CX che supportano il Runtime di Windows.|
|[Uso di componenti Windows Runtime in Visual C++](/windows/uwp/winrt-components/walkthrough-creating-a-basic-windows-runtime-component-in-cpp-and-calling-it-from-javascript-or-csharp)|Viene illustrato come usare c++ /CX per creare un componente Windows Runtime di base.|