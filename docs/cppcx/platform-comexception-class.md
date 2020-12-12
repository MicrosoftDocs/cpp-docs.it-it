---
description: 'Altre informazioni su: classe Platform:: COMException'
title: Platform::COMException (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::COMException
- VCCORLIB/Platform::COMException::HResult
- VCCORLIB/Platform::COMException::Message
helpviewer_keywords:
- Platform::COMException Class
ms.assetid: 44fda4e5-574f-4d12-ab5f-4ff3f277448d
ms.openlocfilehash: 71f6c3fa6d29a884627f2bf5aae07fbc0349ec9b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176119"
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

|Membro|Descrizione|
|------------|-----------------|
|[COMException](#ctor)|Inizializza una nuova istanza della classe COMException.|

**Metodi**

La classe COMException eredita i metodi Equals(), Finalize(), GetHashCode(), GetType(), MemberwiseClose() e ToString() da [Platform::Object Class](../cppcx/platform-object-class.md).

**Proprietà**

La classe COMException presenta le proprietà seguenti:

|Membro|Descrizione|
|------------|-----------------|
|[Eccezione:: HResult](#hresult)|Valore HRESULT corrispondente all'eccezione.|
|[Eccezione:: Message](#message)|Messaggio in cui viene descritta l'eccezione.|

## <a name="derived-exceptions"></a>Eccezioni derivate

Le seguenti eccezioni predefinite sono derivate da COMException. Differiscono da COMException solo nel nome, nel nome del costruttore e nel valore di HRESULT sottostante.

|Nome|HRESULT sottostante|Description|
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

**Spazio dei nomi:** Platform

**Metadati:** Platform. winmd

## <a name="comexceptioncomexception-constructor"></a><a name="ctor"></a> COMException:: COMException (costruttore)

Inizializza una nuova istanza della classe COMException.

### <a name="syntax"></a>Sintassi

```cpp
COMException( int hresult )
```

### <a name="parameters"></a>Parametri

*HRESULT*<br/>
Errore HRESULT rappresentato dall'eccezione.

## <a name="comexceptionhresult-property"></a><a name="hresult"></a> COMException:: HResult (proprietà)

Valore HRESULT corrispondente all'eccezione.

### <a name="syntax"></a>Sintassi

```cpp
public:
    property int HResult { int get();}
```

## <a name="property-value"></a>Valore della proprietà

Valore HRESULT che specifica l'errore.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni su come interpretare il valore HRESULT, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/win32/com/structure-of-com-error-codes).

## <a name="comexceptionmessage-property"></a><a name="message"></a> COMException:: Message (proprietà)

Messaggio in cui viene descritta l'eccezione.

### <a name="syntax"></a>Sintassi

```cpp
public:property String^ Message {    String^ get();}
```

### <a name="property-value"></a>Valore della proprietà

Descrizione dell'eccezione.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
