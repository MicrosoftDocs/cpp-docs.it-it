---
title: "Platform::COMException (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::COMException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::COMException (classe)"
ms.assetid: 44fda4e5-574f-4d12-ab5f-4ff3f277448d
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Platform::COMException (classe)
Rappresenta errori COM che si verificano durante l'esecuzione dell'applicazione. COMException è la classe di base per un set di eccezioni standard predefinite.  
  
## Sintassi  
  
```cpp  
public ref class COMException : Exception,    IException,    IPrintable,    IEquatable  
```  
  
## Membri  
 La classe COMException eredita dalla classe Object e dalle interfacce IException, IPrintable e IEquatable.  
  
 COMException include anche i seguenti tipi di membri.  
  
 **Costruttori**  
  
|Membro|Descrizione|  
|------------|-----------------|  
|`COMException`|Inizializza una nuova istanza della classe COMException.|  
  
 **Metodi**  
  
 La classe COMException eredita i metodi Equals\(\), Finalize\(\), GetHashCode\(\), GetType\(\), MemberwiseClose\(\) e ToString\(\) da [Classe Platform::Object](../cppcx/platform-object-class.md).  
  
 **Proprietà**  
  
 La classe COMException presenta le proprietà seguenti:  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Exception::HResult \(proprietà\)](../cppcx/exception-hresult-property.md)|Valore HRESULT corrispondente all'eccezione.|  
|[Exception::Message \(proprietà\)](../cppcx/exception-message-property.md)|Messaggio in cui viene descritta l'eccezione.|  
  
## Eccezioni derivate  
 Le seguenti eccezioni predefinite sono derivate da COMException. Differiscono da COMException solo nel nome, nel nome del costruttore e nel valore di HRESULT sottostante.  
  
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
|OperationCanceledException|E\_ABORT|Generata quando un'operazione viene interrotta.|  
|OutOfBoundsException|E\_BOUNDS|Generata quando un'operazione tenta di accedere a dati memorizzati al di fuori dell'intervallo valido.|  
|OutOfMemoryException|E\_OUTOFMEMORY|Generata quando la memoria disponibile non è sufficiente per completare l'operazione.|  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)