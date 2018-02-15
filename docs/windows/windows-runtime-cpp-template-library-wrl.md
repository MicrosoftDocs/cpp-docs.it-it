---
title: Libreria modelli C++ per Windows Runtime (WRL) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: b915afce-553b-44a7-b8dc-0ab601758eb0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 98b97098f397772026d0926c72ad83dadd5e59cb
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="windows-runtime-c-template-library-wrl"></a>Libreria di modelli di Windows Runtime C++ (WRL)
La libreria modelli C++ per Windows Runtime (WRL) è una libreria modello che offre un approccio di base per creare e usare componenti Windows Runtime.  
  
## <a name="benefits"></a>Vantaggi  
 La libreria di modelli di Windows Runtime C++ consente di implementare più facilmente e utilizzare i componenti del modello COM (Component Object). Vengono illustrate le tecniche di gestione come il conteggio dei riferimenti per gestire la durata degli oggetti e verificare i valori `HRESULT` per determinare se un'operazione ha avuto esito positivo o negativo. Per utilizzare correttamente la libreria di modelli di Windows Runtime C++, è necessario seguire attentamente queste regole e tecniche.  
  
 C + + CX consente a un livello elevato, basata su linguaggio per utilizzare i componenti Windows Runtime. Sia la libreria di modelli di Windows Runtime C++ e C + + CX semplificano la scrittura di codice per Windows Runtime eseguendo automaticamente le attività per conto dell'utente.  
  
 La libreria di modelli di Windows Runtime C++ e C + + CX offrono diversi vantaggi. Ecco alcuni motivi per cui è possibile utilizzare la libreria di modelli di Windows Runtime C++ anziché C + + CX:  
  
-   Libreria di modelli di Windows Runtime C++ aggiunge una piccola astrazione tramite Windows Runtime Application Binary Interface (ABI), offrendo la possibilità di controllare il codice sottostante per una migliore creare o utilizzare APIs di Windows Runtime.  
  
-   C + + CX rappresenta COM `HRESULT` valori come eccezioni. Se è stata ereditata una codebase che utilizza COM o una che non utilizza le eccezioni, è possibile che la libreria di modelli di Windows Runtime C++ è un modo più semplice per funzionare con Windows Runtime, poiché non è necessario utilizzare eccezioni.  
  
    > [!NOTE]
    >  Utilizza la libreria di modelli di Windows Runtime C++ `HRESULT` valori e non genera eccezioni. Inoltre, la libreria di modelli di Windows Runtime C++ utilizza i puntatori intelligenti e il modello RAII che consentono di garantire che gli oggetti vengano eliminati correttamente quando il codice dell'applicazione genera un'eccezione. Per ulteriori informazioni sui puntatori intelligenti e il modello RAII, vedere [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md) e [risorse propri oggetti (RAII)](../cpp/objects-own-resources-raii.md).  
  
-   Lo scopo e la progettazione della libreria di modelli Windows Runtime C++ sono ispirati per il modello libreria ATL (Active), ovvero un set di classi C++ basate su modelli che semplifica la programmazione di oggetti COM. Poiché il modello libreria di Windows Runtime C++ utilizza lo standard C++ per eseguire il wrapping di Windows Runtime, è possibile porta più facilmente e interagire con molti componenti COM esistenti scritti in ATL a Windows Runtime. Se si conosce già ATL, è possibile che sia più semplice la programmazione della libreria di modelli di Windows Runtime C++.  
  
## <a name="getting-started"></a>Introduzione  
 Di seguito sono riportate alcune risorse che consentono di ottenere subito a lavorare con la libreria di modelli di Windows Runtime C++.  
  
 [La libreria Windows Runtime (WRL)](http://channel9.msdn.com/Events/Windows-Camp/Developing-Windows-8-Metro-style-apps-in-Cpp/The-Windows-Runtime-Library-WRL-)  
 In questo video di Channel 9, acquisire ulteriori informazioni come la libreria di modelli di Windows Runtime C++ consente che scrivere app di piattaforma UWP (Universal Windows) e come creare e utilizzare i componenti Windows Runtime.  
  
 [Procedura: attivare e utilizzare un componente Windows Runtime](../windows/how-to-activate-and-use-a-windows-runtime-component-using-wrl.md)  
 Di seguito viene illustrato come utilizzare la libreria di modelli di Windows Runtime C++ per inizializzare il Runtime di Windows e attivare e utilizzare un componente Windows Runtime.  
  
 [Procedura: completare operazioni asincrone](../windows/how-to-complete-asynchronous-operations-using-wrl.md)  
 Di seguito viene illustrato come utilizzare la libreria di modelli di Windows Runtime C++ per avviare le operazioni asincrone ed eseguirle quando le operazioni vengono completate.  
  
 [Procedura: gestire gli eventi](../windows/how-to-handle-events-using-wrl.md)  
 Viene illustrato come utilizzare la libreria di modelli di Windows Runtime C++ per sottoscrivere e gestire gli eventi di un oggetto Windows Runtime.  
  
 [Procedura dettagliata: Creazione di un componente di Runtime di base di Windows](../windows/walkthrough-creating-a-basic-windows-runtime-component-using-wrl.md)  
 Di seguito viene illustrato come utilizzare la libreria di modelli di Windows Runtime C++ per creare un componente Windows Runtime di base che somma due numeri. Viene inoltre illustrato come generare eventi e utilizzare il componente da un'app UWP che utilizza JavaScript.  
  
 [Procedura dettagliata: Creazione di un'app UWP mediante WRL e Media Foundation](../windows/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation.md)  
 Informazioni su come creare un'app UWP che usa [Microsoft Media Foundation](http://msdn.microsoft.com/library/windows/apps/ms694197).  
  
 [Procedura: creare un componente COM classico](../windows/how-to-create-a-classic-com-component-using-wrl.md)  
 Viene illustrato come utilizzare la libreria di modelli di Windows Runtime C++ per creare un componente COM di base e un metodo di base per registrare e utilizzare il componente COM da un'applicazione desktop.  
  
 [Procedura: Creare direttamente un'istanza dei componenti WRL](../windows/how-to-instantiate-wrl-components-directly.md)  
 Informazioni su come utilizzare il [Microsoft::WRL::Make](../windows/make-function.md) e [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md) funzioni per creare un'istanza di un componente dal modulo che lo definisce.  
  
 [Procedura: Usare winmdidl.exe e midlrt.exe per creare file con estensione h dai metadati di Windows](../windows/use-winmdidl-and-midlrt-to-create-h-files-from-windows-metadata.md)  
 Viene illustrato come utilizzare i componenti personalizzati di Windows Runtime da WRL creando un file IDL dai metadati di .winmd.  
  
 [Procedura dettagliata: connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)  
 Viene illustrato come utilizzare il [IXMLHTTPRequest2](http://msdn.microsoft.com/en-us/bbc11c4a-aecf-4d6d-8275-3e852e309908) e [IXMLHTTPRequest2Callback](http://msdn.microsoft.com/en-us/aa4b3f4c-6e28-458b-be25-6cce8865fc71) interfacce insieme alle attività per inviare richieste HTTP GET e POST a un servizio web in un'app UWP.  
  
 [Esempio di ottimizzazione dei viaggi di Bing mappe](http://code.msdn.microsoft.com/Bing-Maps-trip-optimizer-c4e037f7)  
 Usa il `HttpRequest` classe definita in [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md) nel contesto di un'app UWP completa.  
  
 [Creazione di un componente DLL Windows Runtime con C++](http://code.msdn.microsoft.com/windowsapps/Creating-a-Windows-Runtime-6c399797)  
 Viene illustrato come utilizzare la libreria di modelli di Windows Runtime C++ per creare un componente DLL in processo e utilizzarlo da C + + CX, JavaScript e c#.  
  
 [Esempio di gioco marble maze DirectX](http://code.msdn.microsoft.com/windowsapps/DirectX-Marble-Maze-Game-e4806345)  
 Viene illustrato come utilizzare la libreria di modelli di Windows Runtime C++ per gestire la durata di componenti COM come DirectX e Media Foundation nel contesto di un gioco 3D completo.  
  
 [L'invio di notifiche di tipo avviso popup tratto dall'esempio di App desktop](http://code.msdn.microsoft.com/windowsdesktop/Sending-toast-notifications-71e230a2)  
 Viene illustrato come utilizzare la libreria di modelli di Windows Runtime C++ per utilizzare le notifiche di tipo avviso popup da un'applicazione desktop.  
  
## <a name="windows-runtime-c-template-library-compared-to-atl"></a>Libreria di modelli di C++ di Windows Runtime, confrontata con ATL  
 Libreria di modelli di Windows Runtime C++ la libreria ATL (Active Template) è simile quanto possibile utilizzarlo per creare piccoli e veloci oggetti COM. Libreria modelli C++ per Windows Runtime e ATL condividono i concetti di definizione di oggetti in moduli, registrazione esplicita delle interfacce e aprire la creazione di oggetti tramite le factory. Potrebbe essere familiarità con la libreria di modelli di Windows Runtime C++ se si ha dimestichezza con ATL.  
  
 Libreria modelli C++ per Windows Runtime supporta le funzionalità COM necessaria per App UWP. Di conseguenza, differisce da ATL in quanto non include il supporto diretto alle funzionalità COM come:  
  
-   aggregazione  
  
-   implementazioni predefinite  
  
-   interfacce duali (`IDispatch`)  
  
-   interfacce dell'enumeratore standard  
  
-   punti di connessione  
  
-   interfacce tear-off  
  
-   incorporamento OLE  
  
-   Controlli ActiveX  
  
-   COM+  
  
## <a name="concepts"></a>Concetti  
 Libreria di modelli di Windows Runtime C++ fornisce tipi che rappresentano alcuni concetti di base. Nelle seguenti sezioni vengono descritti questi tipi.  
  
### <a name="comptr"></a>ComPtr  
 [ComPtr](../windows/comptr-class.md) è un *puntatore intelligente* tipo che rappresenta l'interfaccia specificata dal parametro di modello. Utilizzare `ComPtr` per dichiarare una variabile che può accedere ai membri di un oggetto derivato dall'interfaccia. `ComPtr` mantiene automaticamente un conteggio dei riferimenti per un puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.  
  
### <a name="runtimeclass"></a>RuntimeClass  
 [RuntimeClass](../windows/runtimeclass-class.md) rappresenta un'istanza di classe che eredita un set di interfacce specificate. Oggetto `RuntimeClass` oggetto può fornire una combinazione di supporto per una o più interfacce COM di Windows Runtime o un riferimento debole a un componente.  
  
### <a name="module"></a>Modulo  
 [Modulo](../windows/module-class.md) rappresenta una raccolta di oggetti correlati. Un oggetto `Module` gestisce le class factory, che creano oggetti, e la registrazione, che consente alle altre applicazioni di utilizzare un oggetto.  
  
### <a name="callback"></a>Callback  
 Il [Callback](../windows/callback-function-windows-runtime-cpp-template-library.md) funzione crea un oggetto la cui funzione membro è un gestore eventi (un metodo di callback). Utilizzare la funzione `Callback` per scrivere operazioni asincrone.  
  
### <a name="eventsource"></a>EventSource  
 [EventSource](../windows/eventsource-class.md) viene utilizzato per gestire *delegato* gestori eventi. Libreria di modelli di Windows Runtime C++ consente di implementare un delegato e utilizzare `EventSource` per aggiungere, rimuovere e richiamare delegati.  
  
### <a name="asyncbase"></a>AsyncBase  
 [AsyncBase](../windows/asyncbase-class.md) fornisce metodi virtuali che rappresentano il modello di programmazione asincrona di Windows Runtime. Eseguire l'override dei membri di questa classe per creare una classe personalizzata che consente di avviare, arrestare o controllare lo stato di avanzamento di un'operazione asincrona.  
  
### <a name="ftmbase"></a>FtmBase  
 [FtmBase](../windows/ftmbase-class.md) rappresenta un oggetto gestore del marshalling a thread libero. `FtmBase` crea una tabella globale (GIT) dell'interfaccia e aiuta a gestire il marshalling e gli oggetti proxy.  
  
### <a name="weakref"></a>WeakRef  
 [WeakRef](../windows/weakref-class.md) è un tipo di puntatore intelligente che rappresenta un *riferimento debole*, che fa riferimento a un oggetto che può o non sia accessibile. Oggetto `WeakRef` oggetto può essere utilizzato solo da Windows Runtime e non da COM classico.  
  
 Un oggetto `WeakRef` in genere rappresenta un oggetto la cui esistenza è controllata da un thread o da un'applicazione esterna. Ad esempio, un oggetto `WeakRef` può fare riferimento a un oggetto file. Quando il file viene aperto, `WeakRef` è valido e il file a cui si fa riferimento è accessibile. Ma quando il file viene chiuso, `WeakRef` non è valido e il file non è accessibile.  
  
## <a name="related-topics"></a>Argomenti correlati  
  
|||  
|-|-|  
|[Modello di progetto libreria di classi](../windows/wrl-class-library-project-template.md)|Viene descritto come accedere al modello di progetto Libreria di classi WRL. Questo modello consente di semplificare l'attività di utilizzo di Visual Studio per creare componenti Windows Runtime.|  
|[API chiave per categoria](../windows/key-wrl-apis-by-category.md)|Evidenzia i tipi, funzioni e macro primario libreria modelli C++ per Windows Runtime.|  
|[Riferimento](../windows/wrl-reference.md)|Contiene informazioni di riferimento per la libreria di modelli di Windows Runtime C++.|  
|[Riferimento rapido (Windows Runtime e Visual C++)](http://go.microsoft.com/fwlink/p/?linkid=229180)|Vengono descritti brevemente C + + funzionalità CX che supportano Windows Runtime.|  
|[Utilizzo di componenti Windows Runtime in Visual C++](http://go.microsoft.com/fwlink/p/?linkid=229155)|Viene illustrato come utilizzare C + + CX per creare un componente Windows Runtime di base.|