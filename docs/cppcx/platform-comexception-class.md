---
title: Platform::COMException (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::COMException
- VCCORLIB/Platform::Exception::HResult
- VCCORLIB/Platform::Exception::Message
helpviewer_keywords:
- Platform::COMException Class
ms.assetid: 44fda4e5-574f-4d12-ab5f-4ff3f277448d
ms.openlocfilehash: eb6f3e0e4860687d0d47294e11b7741294abac20
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500540"
---
# <a name="platformcomexception-class"></a>Platform::COMException (classe)

Rappresenta errori COM che si verificano durante l'esecuzione dell'applicazione. COMException è la classe di base per un set di eccezioni standard predefinite.

## <a name="syntax"></a>Sintassi

```cpp
public ref class COMException : Exception,    IException,    IPrintable,    IEquatable
```

### <a name="members"></a>Members

La classe COMException eredita dalla classe Object e dalle interfacce IException, IPrintable e IEquatable.

COMException include anche i seguenti tipi di membri.

**Costruttori**

|Member|Descrizione|
|------------|-----------------|
|[COMException](#ctor)|Inizializza una nuova istanza della classe COMException.|

**Metodi**

La classe COMException eredita i metodi Equals(), Finalize(), GetHashCode(), GetType(), MemberwiseClose() e ToString() da [Platform::Object Class](../cppcx/platform-object-class.md).

**Proprietà**

La classe COMException presenta le proprietà seguenti:

|Member|DESCRIZIONE|
|------------|-----------------|
|[Eccezione:: HResult](#hresult)|Valore HRESULT corrispondente all'eccezione.|
|[Eccezione:: Message](#message)|Messaggio in cui viene descritta l'eccezione.|

## <a name="derived-exceptions"></a>Eccezioni derivate

Le seguenti eccezioni predefinite sono derivate da COMException. Differiscono da COMException solo nel nome, nel nome del costruttore e nel valore di HRESULT sottostante.

|Name|HRESULT sottostante|DESCRIZIONE|
|----------|------------------------|-----------------|
|COMException|*HRESULT definito dall'utente*|Generata quando viene restituito un HRESULT non riconosciuto da una chiamata a un metodo COM.|
|AccessDeniedException|E_ACCESSDENIED|Generata quando viene negato l'accesso a una risorsa o a una funzionalità.|
|ChangedStateException|E_CHANGED_STATE|Generata quando i metodi di un iteratore di raccolta o di una visualizzazione di raccolta vengono chiamati dopo che la raccolta padre è stata modificata, invalidando così i risultati del metodo.|
|ClassNotRegisteredException|REGDB_E_CLASSNOTREG|Generata quando una classe COM non è stata registrata.|
|DisconnectedException|RPC_E_DISCONNECTED|Generata quando un oggetto viene disconnesso dai relativi client.|
|FailureException|E_FAIL|Generata quando un'operazione non viene completata correttamente.|
|InvalidArgumentException|E_INVALIDARG|Generata quando uno degli argomenti forniti a un metodo non è valido.|
|InvalidCastException|E_NOINTERFACE|Generata quando non è possibile eseguire il cast di un tipo a un altro tipo.|
|NotImplementedException|E_NOTIMPL|Generata se un metodo di interfaccia non è stato implementato in una classe.|
|NullReferenceException|E_POINTER|Generata quando viene effettuato un tentativo di dereferenziare un riferimento di oggetto null.|
|OperationCanceledException|E_ABORT|Generata quando un'operazione viene interrotta.|
|OutOfBoundsException|E_BOUNDS|Generata quando un'operazione tenta di accedere a dati memorizzati al di fuori dell'intervallo valido.|
|OutOfMemoryException|E_OUTOFMEMORY|Generata quando la memoria disponibile non è sufficiente per completare l'operazione.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Metadati:** platform.winmd

## <a name="ctor"></a>COMException:: COMException (costruttore)

Inizializza una nuova istanza della classe COMException.

### <a name="syntax"></a>Sintassi

```cpp
COMException( int hresult )
```

### <a name="parameters"></a>Parametri

*hresult*<br/>
Errore HRESULT rappresentato dall'eccezione.

## <a name="hresult"></a>COMException:: HResult (proprietà)

Valore HRESULT corrispondente all'eccezione.

### <a name="syntax"></a>Sintassi

```cpp
public:
    property int HResult { int get();}
```

## <a name="property-value"></a>Valore proprietà

Valore HRESULT che specifica l'errore.

### <a name="remarks"></a>Note

Per ulteriori informazioni su come interpretare il valore HRESULT, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/win32/com/structure-of-com-error-codes).

## <a name="message"></a>COMException:: Message (proprietà)

Messaggio in cui viene descritta l'eccezione.

### <a name="syntax"></a>Sintassi

```cpp
public:property String^ Message {    String^ get();}
```

### <a name="property-value"></a>Valore proprietà

Descrizione dell'eccezione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
