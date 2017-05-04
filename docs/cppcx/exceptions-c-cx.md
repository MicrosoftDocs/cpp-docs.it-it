---
title: "Eccezioni (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 6cbdc1f1-e4d7-4707-a670-86365146432f
caps.latest.revision: 22
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 22
---
# Eccezioni (C++/CX)
La gestione degli errori in [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\) si basa sulle eccezioni. Fondamentalmente i componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] segnalano gli errori come valori HRESULT. In [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] questi valori vengono convertiti eccezioni fortemente tipizzate che contengono un valore HRESULT e, in [!INCLUDE[win81](../cppcx/includes/win81-md.md)], una stringa descrittiva a cui puoi possibile accedere a livello di codice.  Le eccezioni vengono implementate come oggetto `ref class` che deriva da `Platform::Exception`.  Lo spazio dei nomi `Platform` definisce le classi distinte di eccezioni per i valori HRESULT più comuni; tutti gli altri valori sono segnalati tramite la classe `Platform::COMException`. Tutte le classi di eccezioni presentano un campo [Exception::HResult Property](../cppcx/exception-hresult-property.md) che puoi utilizzare per recuperare il valore HRESULT originale. In [!INCLUDE[win81](../cppcx/includes/win81-md.md)] puoi anche esaminare le informazioni sullo stack di chiamate per il codice utente nel debugger che possono aiutarti a individuare l'origine dell'eccezione, anche se proviene dal codice scritto in un linguaggio diverso da C\+\+.  
  
## Eccezioni  
 Nel programma C\+\+, puoi generare e intercettare un'eccezione proveniente da un'operazione di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], un'eccezione che deriva da `std::exception` o un tipo definito dall'utente. Devi generare un'eccezione di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] solo quando l'eccezione supera il limite dell'ABI, ad esempio, quando il codice che intercetta la tua eccezione è scritto in JavaScript. Quando un'eccezione C\+\+ non di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] raggiunge il limite dell'ABI, l'eccezione viene convertita in un'eccezione `Platform::FailureException`, che rappresenta un valore HRESULT E\_FAIL. Per ulteriori informazioni su ABI, vedi [Creazione di componenti Windows Runtime in C\+\+](http://msdn.microsoft.com/library/5b7251e6-4271-4f13-af80-c1cf5b1489bf).  
  
 Puoi dichiarare un'eccezione [Platform::Exception](../cppcx/platform-exception-class.md) usando uno di due costruttori che accettano un parametro HRESULT oppure un parametro HRESULT e un parametro [Platform::String](../cppcx/platform-string-class.md)^ che è possibile passare attraverso l'ABI a qualsiasi app Windows Store che la gestisce. In alternativa, puoi dichiarare un'eccezione usando uno di due overload del metodo [Exception::CreateException](../cppcx/exception-createexception-method.md) che accettano un parametro HRESULT o un parametro HRESULT e un parametro `Platform::String^`.  
  
## Eccezioni standard  
 [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] supporta un set di eccezioni standard che rappresentano errori HRESULT tipici. Ogni eccezione standard deriva da [Platform::COMException](../cppcx/platform-comexception-class.md), che a sua volta deriva da `Platform::Exception`. Quando generi un'eccezione che supera il limite dell'ABI, l'eccezione deve essere di tipo standard.  
  
 Non puoi derivare un tipo di eccezione personale da `Platform::Exception`. Per generare un'eccezione personalizzata, utilizza un valore HRESULT definito dall'utente per creare un oggetto `COMException`.  
  
 Nella tabella seguente sono elencate le eccezioni standard.  
  
|Nome|HRESULT sottostante|Descrizione|  
|----------|-------------------------|-----------------|  
|COMException|*HRESULT definito dall'utente*|Generata quando viene restituito un HRESULT non riconosciuto da una chiamata a un metodo COM.|  
|AccessDeniedException|E\_ACCESSDENIED|Generata quando viene negato l'accesso a una risorsa o a una funzionalità.|  
|ChangedStateException|E\_CHANGED\_STATE|Generata quando i metodi di un iteratore di raccolta o di una visualizzazione di raccolta vengono chiamati dopo che la raccolta padre è stata modificata, invalidando così i risultati del metodo.|  
|ClassNotRegisteredException|REGDB\_E\_CLASSNOTREG|Generata quando una classe COM non è stata registrata.|  
|DisconnectedException|RPC\_E\_DISCONNECTED|Generata quando un oggetto viene disconnesso dai relativi client.|  
|FailureException|E\_FAIL|Generata quando un'operazione non viene completata correttamente.|  
|InvalidArgumentException|E\_INVALIDARG|Generata quando uno degli argomenti forniti a un metodo non è valido.|  
|InvalidCastException|E\_NOINTERFACE|Generata quando non è possibile eseguire il cast di un tipo a un altro tipo.|  
|NotImplementedException|E\_NOTIMPL|Generata se un metodo di interfaccia non è stato implementato in una classe.|  
|NullReferenceException|E\_POINTER|Generata quando viene effettuato un tentativo di dereferenziare un riferimento di oggetto null.|  
|ObjectDisposedException|RO\_E\_CLOSED|Generata quando viene eseguita un'operazione su un oggetto eliminato.|  
|OperationCanceledException|E\_ABORT|Generata quando un'operazione viene interrotta.|  
|OutOfBoundsException|E\_BOUNDS|Generata quando un'operazione tenta di accedere a dati memorizzati al di fuori dell'intervallo valido.|  
|OutOfMemoryException|E\_OUTOFMEMORY|Generata quando la memoria disponibile non è sufficiente per completare l'operazione.|  
|WrongThreadException|RPC\_E\_WRONG\_THREAD|Generata quando un thread esegue una chiamata tramite un puntatore a interfaccia che è per un oggetto proxy che non appartiene all'apartment del thread.|  
  
## Proprietà Message e HResult  
 Tutte le eccezioni presentano una proprietà [HResult](../cppcx/comexception-hresult-property.md) e una proprietà [Message](../cppcx/comexception-message-property.md). La proprietà [Exception::HResult](../cppcx/exception-hresult-property.md) ottiene il valore HRESULT numerico sottostante dell'eccezione. La proprietà [Exception::Message](../cppcx/exception-message-property.md) ottiene la stringa fornita dal sistema che descrive l'eccezione. In [!INCLUDE[win8](../cppcx/includes/win8-md.md)] il messaggio è disponibile solo nel debugger ed è di sola lettura. Ciò significa che non puoi modificarlo quando generi di nuovo l'eccezione. In [!INCLUDE[win81](../cppcx/includes/win81-md.md)] puoi accedere alla stringa di messaggio a livello di codice e fornire un nuovo messaggio se generi di nuovo l'eccezione. Migliori informazioni sullo stack di chiamate sono inoltre disponibili nel debugger, inclusi gli stack di chiamate per le chiamate asincrone.  
  
## Esempi  
 In questo esempio viene illustrato come generare un'eccezione di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] per operazioni sincrone:  
  
 [!code-cpp[cx_exceptions#01](../snippets/cpp/VS_Snippets_Misc/cx_exceptions/cpp/class1.cpp#01)]  
  
 Nell'esempio riportato di seguito viene illustrato come intercettare l'eccezione.  
  
 [!code-cpp[cx_exceptions#02](../snippets/cpp/VS_Snippets_Misc/cx_exceptions/cpp/class1.cpp#02)]  
  
 Per intercettare le eccezioni generate durante un'operazione asincrona, utilizza la classe dell'attività e aggiungi una continuazione di gestione degli errori. La continuazione di gestione degli errori effettua il marshalling delle eccezioni generate in altri thread nel thread chiamante affinché tu possa gestire tutte le potenziali eccezioni da un unico punto nel codice. Per altre informazioni, vedere [Programmazione asincrona in C\+\+](http://msdn.microsoft.com/library/windows/apps/Hh780559.aspx).  
  
## Evento UnhandledErrorDetected  
 In [!INCLUDE[win81](../cppcx/includes/win81-md.md)] è possibile sottoscrivere l'evento statico [Windows::ApplicationModel::Core::CoreApplication::UnhandledErrorDetected](http://msdn.microsoft.com/library/windows/apps/windows.applicationmodel.core.coreapplication.unhandlederrordetected.aspx) che fornisce l'accesso agli errori non gestiti che stanno per arrestare il processo. Indipendentemente dall'origine, l'errore raggiunge il gestore come oggetto [Windows::ApplicationModel::Core::UnhandledError](http://msdnstage.redmond.corp.microsoft.com/library/windows/apps/windows.applicationmodel.core.unhandlederror.aspx) passato con gli argomenti dell'evento. Quando chiami `Propagate` sull'oggetto, crea e genera un'eccezione `Platform::*Exception` del tipo corrispondente al codice di errore. Nei blocchi catch puoi salvare lo stato utente, se necessario, quindi consentire il termine del processo chiamando `throw` oppure ripristinare uno stato noto del programma. 'esempio seguente mostra il modello di base:  
  
```  
  
// In app.xaml.h:  
void OnUnhandledException(Platform::Object^ sender, Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs^ e);  
  
// In app.xaml.cpp  
  
// Subscribe to the event, for example in the app class constructor:  
Windows::ApplicationModel::Core::CoreApplication::UnhandledErrorDetected += ref new EventHandler<UnhandledErrorDetectedEventArgs^>(this, &App::OnUnhandledException);  
  
// Event handler implementation:  
void App::OnUnhandledException(Platform::Object^ sender, Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs^ e)  
{  
    auto err = e->UnhandledError;  
  
    if (!err->Handled) //Propagate has not been called on it yet.  
{  
     try  
    {  
        err->Propagate();  
    }  
    // Catch any specific exception types if you know how to handle them  
    catch (AccessDeniedException^ ex)  
    {  
        // TODO: Log error and either take action to recover  
        // or else re-throw exception to continue fail-fast  
    }  
  
}  
  
```  
  
## Note  
 In [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] non viene utilizzata la clausola `finally`.  
  
## Vedere anche  
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)