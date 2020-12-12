---
description: 'Altre informazioni su: spazio dei nomi Platform (C++/CX)'
title: Platform (spazio dei nomi) (C++/CX)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- Platform/Platform
helpviewer_keywords:
- Platform Namespace (C++/CX)
ms.assetid: b160e822-d424-43d2-ba60-57b0e81f259c
ms.openlocfilehash: 80f1b82ed39212812c8d316d4b7de09bf20ccad8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97308315"
---
# <a name="platform-namespace-ccx"></a>Platform (spazio dei nomi) (C++/CX)

Contiene tipi incorporati che sono compatibili con Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
using namespace Platform;
```

### <a name="members"></a>Members

**Attributes (Attributi)**

Lo spazio dei nomi Platform contiene attributi, classi, enumerazioni, interfacce e strutture. Platform contiene anche spazi dei nomi annidati.

|Attributo|Descrizione|
|---------------|-----------------|
|Flags|Indica che un'enumerazione può essere gestita come un campo di bit, ovvero un set di flag.|
|MTAThread|Indica che il modello di threading per un'applicazione è un apartment a thread multipli (MTA).|
|STAThread|Indica che il modello di threading per un'applicazione è di tipo apartment a thread singolo (STA, Single-Threaded Apartment).|

**Classi**

Lo spazio dei nomi Platform presenta le seguenti classi.

|Classe|Descrizione|
|-----------|-----------------|
|[Classe Platform:: AccessDeniedException](../cppcx/platform-accessdeniedexception-class.md)|Generata quando viene negato l'accesso a una risorsa o a una funzionalità.|
|[Classe Platform:: agile](../cppcx/platform-agile-class.md)|Rappresenta un oggetto non Agile come oggetto Agile.|
|[Classe Platform:: Array](../cppcx/platform-array-class.md)|Rappresenta una matrice unidimensionale modificabile.|
|[Classe Platform:: ArrayReference](../cppcx/platform-arrayreference-class.md)|Rappresenta una matrice la cui inizializzazione è ottimizzata per ridurre le operazioni di copia.|
|[Classe Platform:: box](../cppcx/platform-box-class.md)|Utilizzata per dichiarare un tipo boxed che incapsula un tipo di valore quale Windows::Foundation::DateTime o int64 quando il tipo viene passato tramite l'interfaccia ABI (Application Binary Interface) o archiviato in una variabile di tipo [Platform::Object^](../cppcx/platform-object-class.md).|
|[Classe Platform:: ChangedStateException](../cppcx/platform-changedstateexception-class.md)|Generata quando i metodi di un iteratore di raccolta o di una visualizzazione di raccolta vengono chiamati dopo che la raccolta padre è stata modificata, invalidando così i risultati del metodo.|
|[Classe Platform:: ClassNotRegisteredException](../cppcx/platform-classnotregisteredexception-class.md)|Generata quando una classe COM non è stata registrata.|
|[Classe Platform:: COMException](../cppcx/platform-comexception-class.md)|Rappresenta l'eccezione che viene generata quando un valore non riconosciuto viene restituito da una chiamata a un metodo COM.|
|[Platform::D classe elegate](../cppcx/platform-delegate-class.md)|Rappresenta la firma di una funzione di callback.|
|[Platform::D classe di connessioneexception](../cppcx/platform-disconnectedexception-class.md)|L'oggetto viene disconnesso dai relativi client.|
|[Classe Platform:: Exception](../cppcx/platform-exception-class.md)|Rappresenta gli errori che si verificano durante l'esecuzione dell'applicazione. Classe base per le eccezioni.|
|[Classe Platform:: FailureException](../cppcx/platform-failureexception-class.md)|Generata quando l'operazione non viene completata correttamente. È l'equivalente di HRESULT E_FAIL.|
|[Classe di valori Platform::Guid](../cppcx/platform-guid-value-class.md)|Rappresenta un GUID nel sistema di tipi di Windows Runtime.|
|[Classe Platform:: InvalidArgumentException](../cppcx/platform-invalidargumentexception-class.md)|Generata quando uno degli argomenti forniti a un metodo non è valido.|
|[Classe Platform:: InvalidCastException](../cppcx/platform-invalidcastexception-class.md)|Generato nei casi di conversione esplicita o cast non valido.|
|[Classe Platform:: MTAThreadAttribute](../cppcx/platform-mtathreadattribute-class.md)|Indica che il modello di threading per un'applicazione è un apartment a thread multipli (MTA).|
|[Classe Platform:: NotImplementedException](../cppcx/platform-notimplementedexception-class.md)|Generata se un metodo di interfaccia non è stato implementato nella classe.|
|[Classe Platform:: NullReferenceException](../cppcx/platform-nullreferenceexception-class.md)|Generata quando viene effettuato un tentativo di dereferenziare un riferimento di oggetto null.|
|[Classe Platform:: Object](../cppcx/platform-object-class.md)|Classe di base che fornisce il comportamento comune.|
|[Classe Platform:: ObjectDisposedException](../cppcx/platform-objectdisposedexception-class.md)|Generata quando viene eseguita un'operazione su un oggetto eliminato.|
|[Classe Platform:: OperationCanceledException](../cppcx/platform-operationcanceledexception-class.md)|Generata quando un'operazione viene interrotta.|
|[Classe Platform:: OutOfBoundsException](../cppcx/platform-outofboundsexception-class.md)|Generata quando un'operazione tenta di accedere a dati memorizzati al di fuori dell'intervallo valido.|
|[Classe Platform:: OutOfMemoryException](../cppcx/platform-outofmemoryexception-class.md)|Generata quando la memoria disponibile non è sufficiente per completare l'operazione.|
|[Classe Platform:: STAThreadAttribute](../cppcx/platform-stathreadattribute-class.md)|Indica che il modello di threading per un'applicazione è di tipo apartment a thread singolo (STA, Single-Threaded Apartment).|
|[Classe Platform:: String](../cppcx/platform-string-class.md)|Raccolta sequenziale di caratteri Unicode, utilizzata per rappresentare del testo.|
|[Classe Platform:: StringReference](../cppcx/platform-stringreference-class.md)|Consente l'accesso ai buffer di stringa con un sovraccarico di copia minimo.|
|[Classe Platform:: Type](../cppcx/platform-type-class.md)|Identifica un tipo incorporato in base a un'enumerazione di categoria.|
|[Classe Platform:: ValueType](../cppcx/platform-valuetype-class.md)|Classe di base per istanze di tipi di valore.|
|[Classe Platform:: WeakReference](../cppcx/platform-weakreference-class.md)|Fornisce un riferimento debole agli oggetti della classe di riferimento che non incrementano il numero dei riferimenti.|
|[Classe Platform:: WriteOnlyArray](../cppcx/platform-writeonlyarray-class.md)|Rappresenta una matrice di sola scrittura unidimensionale usata come parametro di input sui metodi che implementano il modello FillArray.|
|[Classe Platform:: WrongThreadException](../cppcx/platform-wrongthreadexception-class.md)|Generata quando un thread esegue una chiamata tramite un puntatore a interfaccia che è per un oggetto proxy che non appartiene all'apartment del thread.|

**Implementazioni di interfacce**

Lo spazio dei nomi Platform definisce le seguenti interfacce.

|Interfaccia|Descrizione|
|---------------|-----------------|
|[Interfaccia Platform:: IBox](../cppcx/platform-ibox-interface.md)|Usato per passare tipi di valore alle funzioni i cui parametri sono tipizzati come Platform::Object^.|
|[Interfaccia Platform:: IBoxArray](../cppcx/platform-iboxarray-interface.md)|Interfaccia usata per passare matrici di tipi di valore alle funzioni i cui parametri sono tipizzati come Platform::Array.|
|[Interfaccia Platform:: IDisposable](../cppcx/platform-idisposable-interface.md)|Utilizzata per rilasciare le risorse non gestite.|

**Enumerazioni**

Lo spazio dei nomi Platform presenta le seguenti enumerazioni.

|Interfaccia|Descrizione|
|---------------|-----------------|
|[Enumerazione Platform::CallbackContext](../cppcx/platform-callbackcontext-enumeration.md)|Enumerazione utilizzata come parametro del costruttore di delegato. Determina se il callback deve essere sottoposto a marshalling al thread di origine o al thread chiamante.|
|[Enumerazione Platform::TypeCode](../cppcx/platform-typecode-enumeration.md)|Specifica una categoria numerica che rappresenta un tipo incorporato.|

**Strutture**

Lo spazio dei nomi Platform presenta le seguenti strutture.

|Struttura|Description|
|---------------|-----------------|
|[Classe Platform:: enum](../cppcx/platform-enum-class.md)|Rappresenta una costante denominata.|
|[Classe di valori Platform::Guid](../cppcx/platform-guid-value-class.md)|Rappresenta un GUID.|
|[Classe di valori Platform::IntPtr](../cppcx/platform-intptr-value-class.md)|Puntatore con segno la cui dimensione è adatta alla piattaforma (32 bit o 64 bit).|
|[Classe di valori Platform::SizeT](../cppcx/platform-sizet-value-class.md)|Tipo di dati senza segno utilizzato per rappresentare la dimensione di un oggetto.|
|[Classe di valori Platform::UIntPtr](../cppcx/platform-uintptr-value-class.md)|Puntatore senza segno la cui dimensione è adatta alla piattaforma (32 bit o 64 bit).|

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform:: Collections](../cppcx/platform-collections-namespace.md)<br/>
[Spazio dei nomi Platform:: Runtime:: CompilerServices](../cppcx/platform-runtime-compilerservices-namespace.md)<br/>
[Spazio dei nomi Platform:: Runtime:: InteropServices](../cppcx/platform-runtime-interopservices-namespace.md)<br/>
[Spazio dei nomi Platform:: Metadata](../cppcx/platform-metadata-namespace.md)
