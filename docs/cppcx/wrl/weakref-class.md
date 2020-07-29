---
title: Classe WeakRef
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef
- client/Microsoft::WRL::WeakRef::~WeakRef
- client/Microsoft::WRL::WeakRef::As
- client/Microsoft::WRL::WeakRef::AsIID
- client/Microsoft::WRL::WeakRef::CopyTo
- client/Microsoft::WRL::WeakRef::operator&
- client/Microsoft::WRL::WeakRef::WeakRef
helpviewer_keywords:
- Microsoft::WRL::WeakRef class
- Microsoft::WRL::WeakRef::~WeakRef, destructor
- Microsoft::WRL::WeakRef::As method
- Microsoft::WRL::WeakRef::AsIID method
- Microsoft::WRL::WeakRef::CopyTo method
- Microsoft::WRL::WeakRef::operator& operator
- Microsoft::WRL::WeakRef::WeakRef, constructor
ms.assetid: 572be703-c641-496c-8af5-ad6164670ba1
ms.openlocfilehash: 715a823784aaa75f9abe349ef0a7ddc9e5d607d1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218351"
---
# <a name="weakref-class"></a>Classe WeakRef

Rappresenta un *riferimento debole* che può essere usato solamente da Windows Runtime, non da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.

## <a name="syntax"></a>Sintassi

```cpp
class WeakRef : public ComPtr<IWeakReference>;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore WeakRef::WeakRef](#weakref)|Inizializza una nuova istanza della classe `WeakRef`.|
|[Distruttore WeakRef::~WeakRef](#tilde-weakref)|Consente di deinizializzare l'istanza corrente della `WeakRef` classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo WeakRef::As](#as)|Imposta il `ComPtr` parametro del puntatore specificato per rappresentare l'interfaccia specificata.|
|[Metodo WeakRef::AsIID](#asiid)|Imposta il `ComPtr` parametro del puntatore specificato per rappresentare l'ID di interfaccia specificato.|
|[Metodo WeakRef::CopyTo](#copyto)|Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore WeakRef::operator&](#operator-ampersand-operator)|Restituisce un `ComPtrRef` oggetto che rappresenta l' `WeakRef` oggetto corrente.|

## <a name="remarks"></a>Osservazioni

Un `WeakRef` oggetto mantiene un *riferimento sicuro*che è associato a un oggetto e può essere valido o non valido. Chiamare il `As()` `AsIID()` metodo o per ottenere un riferimento sicuro. Quando il riferimento sicuro è valido, può accedere all'oggetto associato. Quando il riferimento sicuro non è valido ( **`nullptr`** ), l'oggetto associato è inaccessibile.

Un `WeakRef` oggetto viene in genere utilizzato per rappresentare un oggetto la cui esistenza è controllata da un'applicazione o da un thread esterno. Ad esempio, costruire un `WeakRef` oggetto da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.

Tenere presente che si verifica un cambiamento di comportamento nei metodi [As](#as), [AsIID](#asiid) e [CopyTo](#copyto) in Windows 10 SDK. In precedenza, dopo aver chiamato uno di questi metodi, era possibile controllare `WeakRef` per **`nullptr`** per determinare se un riferimento sicuro è stato ottenuto correttamente, come nel codice seguente:

```cpp
WeakRef wr;
strongComptrRef.AsWeak(&wr);

// Now suppose that the object strongComPtrRef points to no longer exists
// and the following code tries to get a strong ref from the weak ref:
ComPtr<ISomeInterface> strongRef;
HRESULT hr = wr.As(&strongRef);

// This check won't work with the Windows 10 SDK version of the library.
// Check the input pointer instead.
if(wr == nullptr)
{
    wprintf(L"Couldn’t get strong ref!");
}
```

Il codice riportato sopra non funziona quando si usa Windows 10 SDK o versioni successive. Controllare invece il puntatore passato per **`nullptr`** .

```cpp
if (strongRef == nullptr)
{
    wprintf(L"Couldn't get strong ref!");
}
```

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtr`

`WeakRef`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="weakrefweakref-destructor"></a><a name="tilde-weakref"></a>Distruttore WeakRef:: ~ WeakRef

Consente di deinizializzare l'istanza corrente della `WeakRef` classe.

```cpp
~WeakRef();
```

## <a name="weakrefas-method"></a><a name="as"></a>Metodo WeakRef:: As

Imposta il `ComPtr` parametro del puntatore specificato per rappresentare l'interfaccia specificata.

```cpp
template<typename U>
HRESULT As(
   _Out_ ComPtr<U>* ptr
);

template<typename U>
HRESULT As(
   _Out_ Details::ComPtrRef<ComPtr<U>> ptr
);
```

### <a name="parameters"></a>Parametri

*U*<br/>
ID di interfaccia.

*ptr*<br/>
Al termine di questa operazione, oggetto che rappresenta il parametro *U*.

### <a name="return-value"></a>Valore restituito

- S_OK se l'operazione ha esito positivo; in caso contrario, HRESULT che indica il motivo dell'esito negativo dell'operazione e *ptr* è impostato su **`nullptr`** .

- S_OK se l'operazione ha esito positivo, ma l' `WeakRef` oggetto corrente è già stato rilasciato. Il parametro *ptr* è impostato su **`nullptr`** .

- S_OK se l'operazione ha esito positivo, ma l' `WeakRef` oggetto corrente non è derivato dal parametro *U*. Il parametro *ptr* è impostato su **`nullptr`** .

### <a name="remarks"></a>Osservazioni

Viene generato un errore se il parametro *U* è `IWeakReference` o non è derivato da `IInspectable` .

Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../../cpp/auto-cpp.md) .

A partire da Windows 10 SDK, questo metodo non imposta l' `WeakRef` istanza su **`nullptr`** se non è stato possibile ottenere il riferimento debole, quindi è consigliabile evitare il codice di controllo degli errori che controlla la `WeakRef` per **`nullptr`** . Al contrario, controllare *ptr* per **`nullptr`** .

## <a name="weakrefasiid-method"></a><a name="asiid"></a>Metodo WeakRef:: AsIID

Imposta il `ComPtr` parametro del puntatore specificato per rappresentare l'ID di interfaccia specificato.

```cpp
HRESULT AsIID(
   REFIID riid,
   _Out_ ComPtr<IInspectable>* ptr
);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*ptr*<br/>
Al termine di questa operazione, oggetto che rappresenta il parametro *riid*.

### <a name="return-value"></a>Valore restituito

- S_OK se l'operazione ha esito positivo; in caso contrario, HRESULT che indica il motivo dell'esito negativo dell'operazione e *ptr* è impostato su **`nullptr`** .

- S_OK se l'operazione ha esito positivo, ma l' `WeakRef` oggetto corrente è già stato rilasciato. Il parametro *ptr* è impostato su **`nullptr`** .

- S_OK se l'operazione ha esito positivo, ma l' `WeakRef` oggetto corrente non è derivato dal parametro *riid*. Il parametro *ptr* è impostato su **`nullptr`** . Per altre informazioni, vedere Note.

### <a name="remarks"></a>Osservazioni

Se il parametro *riid* non deriva da, viene generato un errore `IInspectable` . Questo errore sostituisce il valore restituito.

Il primo modello è il form da usare nel codice. Il secondo modello (non illustrato di seguito, ma dichiarato nel file di intestazione) è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../../cpp/auto-cpp.md) .

A partire da Windows 10 SDK, questo metodo non imposta l' `WeakRef` istanza su **`nullptr`** se non è stato possibile ottenere il riferimento debole, quindi è consigliabile evitare il codice di controllo degli errori che controlla la `WeakRef` per **`nullptr`** . Al contrario, controllare *ptr* per **`nullptr`** .

## <a name="weakrefcopyto-method"></a><a name="copyto"></a>Metodo WeakRef:: CopyTo

Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.

```cpp
HRESULT CopyTo(
   REFIID riid,
   _Deref_out_ IInspectable** ptr
);

template<typename U>
HRESULT CopyTo(
   _Deref_out_ U** ptr
);

HRESULT CopyTo(
   _Deref_out_ IWeakReference** ptr
);
```

### <a name="parameters"></a>Parametri

*U*<br/>
Puntatore a un' `IInspectable` interfaccia. Se *U* non deriva da, viene generato un errore `IInspectable` .

*riid*<br/>
ID di interfaccia. Se *riid* non è derivato da, viene generato un errore `IWeakReference` .

*ptr*<br/>
Puntatore doppiamente indiretto a `IInspectable` o `IWeakReference` .

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. Per ulteriori informazioni, vedere la **sezione Osservazioni**.

### <a name="remarks"></a>Osservazioni

Il valore restituito S_OK indica che l'operazione è riuscita, ma non se il riferimento debole è stato risolto in un riferimento forte. Se viene restituito S_OK, verificare che il parametro *p* sia un riferimento sicuro; ovvero il parametro *p* non è uguale a **`nullptr`** .

A partire da Windows 10 SDK, questo metodo non imposta l' `WeakRef` istanza di su **`nullptr`** se non è stato possibile ottenere il riferimento debole, quindi è consigliabile evitare il controllo del codice di errore che controlla la `WeakRef` per **`nullptr`** . Al contrario, controllare *ptr* per **`nullptr`** .

## <a name="weakrefoperatoramp-operator"></a><a name="operator-ampersand-operator"></a>Operatore WeakRef:: operator &amp;

Restituisce un `ComPtrRef` oggetto che rappresenta l' `WeakRef` oggetto corrente.

```cpp
Details::ComPtrRef<WeakRef> operator&() throw()
```

### <a name="return-value"></a>Valore restituito

`ComPtrRef`Oggetto che rappresenta l'oggetto corrente `WeakRef` .

### <a name="remarks"></a>Osservazioni

Si tratta di un operatore helper interno che non deve essere utilizzato nel codice.

## <a name="weakrefweakref-constructor"></a><a name="weakref"></a>Costruttore WeakRef:: WeakRef

Inizializza una nuova istanza della classe `WeakRef`.

```cpp
WeakRef();
WeakRef(
   decltype(__nullptr)
);

WeakRef(
   _In_opt_ IWeakReference* ptr
);

WeakRef(
   const ComPtr<IWeakReference>& ptr
);

WeakRef(
   const WeakRef& ptr
);

WeakRef(
   _Inout_ WeakRef&& ptr
);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Un puntatore, un riferimento o un riferimento rvalue a un oggetto esistente che Inizializza l' `WeakRef` oggetto corrente.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza un `WeakRef` oggetto vuoto. Il secondo costruttore inizializza un `WeakRef` oggetto da un puntatore all' `IWeakReference` interfaccia. Il terzo costruttore inizializza un `WeakRef` oggetto da un riferimento a un `ComPtr<IWeakReference>` oggetto. Il quarto e il quinto costruttore inizializzano un `WeakRef` oggetto da un altro `WeakRef` oggetto.
