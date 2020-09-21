---
title: Platform::Exception (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Exception::Exception
- VCCORLIB/Platform::Exception::CreateException
- VCCORLIB/Platform::Exception::HResult
- VCCORLIB/Platform::Exception::Message
helpviewer_keywords:
- Platform::Exception Class
ms.assetid: ca1d5a67-3a5a-48fe-8099-f9c38a2d2dce
ms.openlocfilehash: bfdd8b3df720073e6b4a19cdb5b34db23e659fd0
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90741969"
---
# <a name="platformexception-class"></a>Platform::Exception (classe)

Rappresenta gli errori che si verificano durante l'esecuzione dell'applicazione. Le classi di eccezione personalizzate non possono essere derivate da `Platform::Exception`. Se devi utilizzare un'eccezione personalizzata, puoi utilizzare `Platform::COMException` e specificare un valore HRESULT specifico dell'applicazione.

## <a name="syntax"></a>Sintassi

```cpp
public ref class Exception : Object,    IException,    IPrintable,    IEquatable
```

### <a name="members"></a>Members

La classe `Exception` eredita dalla classe `Object` e dalle interfacce `IException`, `IPrintable`e `IEquatable` .

La classe `Exception` dispone dei seguenti generi di membri.

### <a name="constructors"></a>Costruttori

|Membro|Descrizione|
|------------|-----------------|
|[Eccezione:: Exception](#ctor)|Inizializza una nuova istanza della classe `Exception`.|

### <a name="methods"></a>Metodi

La classe `Exception` eredita i metodi `Equals()`, `Finalize()`,`GetHashCode()`,`GetType()`,`MemberwiseClose()`e `ToString()` da [Platform::Object Class](../cppcx/platform-object-class.md). La classe `Exception` include anche il metodo seguente.

|Membro|Descrizione|
|------------|-----------------|
|[Eccezione:: CreateException](#createexception)|Crea un'eccezione che rappresenta il valore HRESULT specificato.|

### <a name="properties"></a>Proprietà

La classe Exception presenta inoltre le proprietà seguenti.

|Membro|Descrizione|
|------------|-----------------|
|[Eccezione:: HResult](#hresult)|Valore HRESULT corrispondente all'eccezione.|
|[Eccezione:: Message](#message)|Messaggio che descrive l'eccezione. Questo valore è di sola lettura e non può essere modificato una volta costruito `Exception` .|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** Platform. winmd

## <a name="exceptioncreateexception-method"></a><a name="createexception"></a> Metodo Exception:: CreateException

Crea Platform::Exception^ da un valore HRESULT specificato.

### <a name="syntax"></a>Sintassi

```cpp
Exception^ CreateException(int32 hr);
Exception^ CreateException(int32 hr, Platform::String^ message);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Valore HRESULT che in genere si ottiene da una chiamata a un metodo COM. Se il valore è 0, che è uguale a S_OK, questo metodo genera [Platform:: InvalidArgumentException](../cppcx/platform-invalidargumentexception-class.md) perché i metodi com con esito positivo non devono generare eccezioni.

*message*<br/>
Stringa che descrive l'errore.

### <a name="return-value"></a>Valore restituito

Eccezione che rappresenta il valore HRESULT dell'errore.

### <a name="remarks"></a>Osservazioni

Utilizza questo metodo per creare un'eccezione da un valore HRESULT restituito, ad esempio, da una chiamata a un metodo di un'interfaccia COM. Puoi utilizzare l'overload che accetta un parametro String^ per fornire un messaggio personalizzato.

Si consiglia vivamente di utilizzare CreateException per creare un'eccezione fortemente tipizzata anziché creare un oggetto [Platform:: COMException](../cppcx/platform-comexception-class.md) che contiene semplicemente HRESULT.

## <a name="exceptionexception-constructor"></a><a name="ctor"></a> Costruttore Exception:: Exception

Inizializza una nuova istanza della classe Exception.

### <a name="syntax"></a>Sintassi

```cpp
Exception(int32 hresult);
Exception(int32 hresult, ::Platform::String^ message);
```

### <a name="parameters"></a>Parametri

*HRESULT*<br/>
Errore HRESULT rappresentato dall'eccezione.

*message*<br/>
Messaggio specifico dell'utente, ad esempio del testo prescrittivo, associato all'eccezione. In genere dovresti preferire il secondo overload per fornire un messaggio descrittivo che sia il più possibile specifico su come e perché si è verificato l'errore.

## <a name="exceptionhresult-property"></a><a name="hresult"></a> Proprietà Exception:: HResult

Valore HRESULT corrispondente all'eccezione.

### <a name="syntax"></a>Sintassi

```cpp
public:
    property int HResult { int get(); }
```

### <a name="property-value"></a>Valore della proprietà

Valore HRESULT.

### <a name="remarks"></a>Osservazioni

La maggior parte delle eccezioni inizia come errori COM, che vengono restituiti come valori HRESULT. C++/CX converte questi valori in oggetti Platform::Exception^ e la proprietà archivia il valore del codice di errore originale.

## <a name="exceptionmessage-property"></a><a name="message"></a> Proprietà Exception:: Message

Messaggio in cui viene descritto l'errore.

### <a name="syntax"></a>Sintassi

```cpp
public:property String^ Message;
```

### <a name="property-value"></a>Valore della proprietà

Nelle eccezioni originate da Windows Runtime, si tratta di una descrizione dell'errore fornita dal sistema.

### <a name="remarks"></a>Osservazioni

In Windows 8, questa proprietà è di sola lettura perché le eccezioni in tale versione del Windows Runtime vengono trasferite nell'interfaccia ABI solo come HRESULT. In Windows 8.1 e versioni successive le informazioni sull'eccezione più dettagliate viene trasportate tramite ABI ed puoi fornire un messaggio personalizzato a cui altri componenti possono accedere a livello di codice. Per ulteriori informazioni, vedere [eccezioni (C++/CX)](../cppcx/exceptions-c-cx.md).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
