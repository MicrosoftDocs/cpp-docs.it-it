---
title: "Libreria di modelli di Windows Runtime C++ (WRL) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: b915afce-553b-44a7-b8dc-0ab601758eb0
caps.latest.revision: 32
caps.handback.revision: 32
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Libreria di modelli di Windows Runtime C++ (WRL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] ([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]) è una libreria di modelli che fornisce una modalità di basso livello per creare e utilizzare i componenti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] .  
  
## <a name="benefits"></a>Vantaggi  
 [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] consente di implementare e utilizzare componenti COM (Component Object Model) più semplicemente. Vengono illustrate le tecniche di gestione come il conteggio dei riferimenti per gestire la durata degli oggetti e verificare i valori `HRESULT` per determinare se un'operazione ha avuto esito positivo o negativo. Per poter utilizzare correttamente [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)], è necessario seguire attentamente queste regole e tecniche.  
  
 [!INCLUDE[cppwrt](../build/reference/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)]) è una modalità di alto livello basata su linguaggio per utilizzare i componenti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] . Sia [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] che [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] semplificano la scrittura di codice per [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] eseguendo automaticamente le attività di gestione per conto dell'utente.  
  
 [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] e [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] offrono diversi vantaggi. Ecco alcuni motivi per cui è possibile che si desideri utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] anziché [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)]:  
  
-   [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] aggiunge una piccola astrazione sull'interfaccia applicativa binaria (ABI) [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], offrendo la possibilità di controllare il codice sottostante per creare o utilizzare le API [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
-   [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] rappresenta i valori COM `HRESULT` come eccezioni. Se è stata ereditata una codebase che utilizza COM o una che non utilizza le eccezioni, è possibile che [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] sia un modo più semplice per utilizzare [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] perché non è necessario utilizzare eccezioni.  
  
    > [!NOTE]
    >  [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] utilizza i valori `HRESULT` e non genera eccezioni. Inoltre, [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] utilizza i puntatori intelligenti e il modello RAII che consentono di garantire che gli oggetti vengano eliminati correttamente quando il codice dell'applicazione genera un'eccezione. Per ulteriori informazioni sui puntatori intelligenti e il modello RAII, vedere [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md) e [risorse propri oggetti (RAII)](../cpp/objects-own-resources-raii.md).  
  
-   Lo scopo e la progettazione di [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] sono ispirati dalla libreria ATL (Active Template Library), ovvero un set di classi C++ basate su modelli che semplificano la programmazione di oggetti COM. Poiché [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] utilizza lo standard C++ per eseguire il wrapping di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], è possibile trasferire più facilmente e interagire con molti componenti COM esistenti scritti in ATL a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]. Se si conosce già ATL, è possibile che la programmazione [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] sia più semplice.  
  
## <a name="getting-started"></a>Introduzione  
 Di seguito sono riportate alcune risorse che consentono di ottenere immediatamente l'utilizzo di [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] .  
  
 [La libreria Windows Runtime (WRL)](http://channel9.msdn.com/Events/Windows-Camp/Developing-Windows-8-Metro-style-apps-in-Cpp/The-Windows-Runtime-Library-WRL-)  
 In questo video Channel 9, acquisire ulteriori informazioni su come [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] consente la scrittura di applicazioni [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] e come creare e utilizzare i componenti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] .  
  
 [Procedura: attivare e utilizzare un componente Windows Runtime](../windows/how-to-activate-and-use-a-windows-runtime-component-using-wrl.md)  
 Viene illustrato come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per inizializzare [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e attivare e utilizzare un componente [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] .  
  
 [Procedura: completare operazioni asincrone](../windows/how-to-complete-asynchronous-operations-using-wrl.md)  
 Viene illustrato come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per avviare le operazioni asincrone ed eseguirle quando le operazioni vengono completate.  
  
 [Procedura: gestire gli eventi](../windows/how-to-handle-events-using-wrl.md)  
 Viene illustrato come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per sottoscrivere e gestire gli eventi di un oggetto [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] .  
  
 [Procedura dettagliata: Creazione di un componente di Runtime di base di Windows](../windows/walkthrough-creating-a-basic-windows-runtime-component-using-wrl.md)  
 Viene illustrato come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per creare un componente di base [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] che somma due numeri. Viene inoltre illustrato come generare eventi e utilizzare il componente di un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] che utilizza JavaScript.  
  
 [Procedura dettagliata: Creazione di un'applicazione Windows Store mediante WRL e Media Foundation](../windows/walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation.md)  
 Informazioni sulla creazione di un'app [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] che usa [Microsoft Media Foundation](http://msdn.microsoft.com/library/windows/apps/ms694197).  
  
 [Procedura: creare un componente COM classico](../windows/how-to-create-a-classic-com-component-using-wrl.md)  
 Viene illustrato come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per creare un componente COM di base e un metodo di base per registrare e utilizzare il componente COM da un'applicazione desktop.  
  
 [Procedura: creare direttamente un'istanza dei componenti WRL](../windows/how-to-instantiate-wrl-components-directly.md)  
 Informazioni sull'utilizzo delle funzioni [Microsoft::WRL::Details::MakeAndInitialize](../windows/make-function.md) e [Microsoft::WRL::Make](../windows/makeandinitialize-function.md) per creare un'istanza di un componente dal modulo che lo definisce.  
  
 [Procedura: utilizzare winmdidl.exe e midlrt.exe per creare file con estensione h dai metadati di windows](../windows/use-winmdidl-and-midlrt-to-create-h-files-from-windows-metadata.md)  
 Viene illustrato come utilizzare i componenti personalizzati di Windows Runtime da WRL creando un file IDL dai metadati di .winmd.  
  
 [Procedura dettagliata: Connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)  
 Viene illustrato come utilizzare le interfacce [IXMLHTTPRequest2](http://msdn.microsoft.com/it-it/bbc11c4a-aecf-4d6d-8275-3e852e309908) e [IXMLHTTPRequest2Callback](http://msdn.microsoft.com/it-it/aa4b3f4c-6e28-458b-be25-6cce8865fc71) insieme alle attività per inviare richieste HTTP GET e POST a un servizio Web in un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] .  
  
 [Esempio di ottimizzazione dei viaggi Bing Maps](http://code.msdn.microsoft.com/Bing-Maps-trip-optimizer-c4e037f7)  
 Utilizza la `HttpRequest` classe definita in [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md) nel contesto di un completo [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app.  
  
 [Creazione di un componente DLL Windows Runtime con esempio di C++](http://code.msdn.microsoft.com/windowsapps/Creating-a-Windows-Runtime-6c399797)  
 Viene illustrato come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per creare un componente DLL in processo e il relativo utilizzo da C++/CX, da JavaScript e da C#.  
  
 [Esempio di gioco marble maze DirectX](http://code.msdn.microsoft.com/windowsapps/DirectX-Marble-Maze-Game-e4806345)  
 Viene illustrato come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per gestire la durata di componenti COM come DirectX e Media Foundation nel contesto di un gioco tridimensionale completo.  
  
 [L'invio di notifiche popup tratto dall'esempio di applicazioni desktop](http://code.msdn.microsoft.com/windowsdesktop/Sending-toast-notifications-71e230a2)  
 Viene illustrato come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per utilizzare le notifiche di tipo avviso popup da un'applicazione desktop.  
  
## <a name="includecppwrlshorttokencppwrlshortmdmd-compared-to-atl"></a>[!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] Confronto con ATL  
 [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] assomiglia alla libreria ATL (Active Template Library) in quanto è possibile utilizzarlo per creare oggetti COM piccoli e veloci. [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] e ATL condividono i concetti di definizione di oggetti in moduli, registrazione esplicita delle interfacce e creazione aperta di oggetti tramite le factory. È possibile che si sia in grado di utilizzare agevolmente [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] se si ha già dimestichezza con ATL.  
  
 [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] supporta la funzionalità COM necessaria per le applicazioni [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)]. Di conseguenza, differisce da ATL in quanto non include il supporto diretto alle funzionalità COM come:  
  
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
 [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] fornisce tipi che rappresentano alcuni concetti di base. Nelle seguenti sezioni vengono descritti questi tipi.  
  
### <a name="comptr"></a>ComPtr  
 [ComPtr](../windows/comptr-class.md) è un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. Utilizzare `ComPtr` per dichiarare una variabile che può accedere ai membri di un oggetto derivato dall'interfaccia. `ComPtr` mantiene automaticamente un conteggio dei riferimenti per un puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.  
  
### <a name="runtimeclass"></a>RuntimeClass  
 [RuntimeClass](../windows/runtimeclass-class.md) rappresenta una classe di cui è stata creata un'istanza che eredita un set di interfacce specificate. Un oggetto `RuntimeClass` può fornire una combinazione di supporto per una o più interfacce COM [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] o un riferimento debole a un componente.  
  
### <a name="module"></a>Modulo  
 [Modulo](../windows/module-class.md) rappresenta una raccolta di oggetti correlati. Un oggetto `Module` gestisce le class factory, che creano oggetti, e la registrazione, che consente alle altre applicazioni di utilizzare un oggetto.  
  
### <a name="callback"></a>Callback  
 La funzione [Callback](../windows/callback-function-windows-runtime-cpp-template-library.md) crea un oggetto la cui funzione membro è un gestore eventi (un metodo di callback). Utilizzare la funzione `Callback` per scrivere operazioni asincrone.  
  
### <a name="eventsource"></a>EventSource  
 [EventSource](../windows/eventsource-class.md) viene utilizzato per gestire i gestori eventi del *delegato* . Utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per implementare un delegato e utilizzare `EventSource` per aggiungere, rimuovere e richiamare delegati.  
  
### <a name="asyncbase"></a>AsyncBase  
 [AsyncBase](../windows/asyncbase-class.md) fornisce metodi virtuali che rappresentano il modello di programmazione asincrono [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] . Eseguire l'override dei membri di questa classe per creare una classe personalizzata che consente di avviare, arrestare o controllare lo stato di avanzamento di un'operazione asincrona.  
  
### <a name="ftmbase"></a>FtmBase  
 [FtmBase](../windows/ftmbase-class.md) rappresenta un oggetto di gestore del marshalling con modello di threading Free. `FtmBase` crea una tabella globale (GIT) dell'interfaccia e aiuta a gestire il marshalling e gli oggetti proxy.  
  
### <a name="weakref"></a>WeakRef  
 [WeakRef](../windows/weakref-class.md) è un tipo di puntatore intelligente che rappresenta un *riferimento debole*che fa riferimento a un oggetto che potrebbe essere accessibile o meno. Un oggetto `WeakRef` può essere utilizzato solo da [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]e non da COM classico.  
  
 Un oggetto `WeakRef` in genere rappresenta un oggetto la cui esistenza è controllata da un thread o da un'applicazione esterna. Ad esempio, un oggetto `WeakRef` può fare riferimento a un oggetto file. Quando il file viene aperto, `WeakRef` è valido e il file a cui si fa riferimento è accessibile. Ma quando il file viene chiuso, `WeakRef` non è valido e il file non è accessibile.  
  
## <a name="related-topics"></a>Argomenti correlati  
  
|||  
|-|-|  
|[Modello di progetto libreria di classi](../windows/wrl-class-library-project-template.md)|Viene descritto come accedere al modello di progetto Libreria di classi WRL. Questo modello consente di semplificare l'attività di utilizzo di Visual Studio per creare componenti [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] .|  
|[API chiave per categoria](../windows/key-wrl-apis-by-category.md)|Evidenzia i tipi, le funzioni e le macro primari di [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] .|  
|[Riferimento](../windows/wrl-reference.md)|Sono incluse informazioni di riferimento per [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)].|  
|[Riferimento rapido (Windows Runtime e Visual C++)](http://go.microsoft.com/fwlink/?LinkId=229180)|Vengono brevemente descritte le funzionalità [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] che supportano [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].|  
|[Utilizzo di componenti Windows Runtime in Visual C++](http://go.microsoft.com/fwlink/?LinkId=229155)|Viene illustrato come utilizzare [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] per creare un componente di base [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] .|