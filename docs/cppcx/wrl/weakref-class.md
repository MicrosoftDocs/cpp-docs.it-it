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
ms.openlocfilehash: 681f5a64c3e2902c66facbd4f0ac3a3663a7e79d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374261"
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
|[Distruttore WeakRef::~WeakRef](#tilde-weakref)|Deinizializza l'istanza corrente `WeakRef` della classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo WeakRef::As](#as)|Imposta il `ComPtr` parametro del puntatore specificato per rappresentare l'interfaccia specificata.|
|[Metodo WeakRef::AsIID](#asiid)|Imposta il `ComPtr` parametro del puntatore specificato per rappresentare l'ID di interfaccia specificato.|
|[Metodo WeakRef::CopyTo](#copyto)|Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore WeakRef::operator&](#operator-ampersand-operator)|Restituisce `ComPtrRef` un oggetto `WeakRef` che rappresenta l'oggetto corrente.|

## <a name="remarks"></a>Osservazioni

Un `WeakRef` oggetto mantiene un *riferimento sicuro,* associato a un oggetto e può essere valido o non valido. Chiamare `As()` il `AsIID()` metodo or per ottenere un riferimento sicuro. Quando il riferimento sicuro è valido, può accedere all'oggetto associato. Quando il riferimento sicuro non è valido (`nullptr`), l'oggetto associato è inaccessibile.

Un `WeakRef` oggetto viene in genere utilizzato per rappresentare un oggetto la cui esistenza è controllata da un thread esterno o da un'applicazione. Ad esempio, `WeakRef` costruire un oggetto da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.

Tenere presente che si verifica un cambiamento di comportamento nei metodi [As](#as), [AsIID](#asiid) e [CopyTo](#copyto) in Windows 10 SDK. In precedenza, dopo aver chiamato uno `WeakRef` `nullptr` di questi metodi, è possibile controllare il for per determinare se un riferimento sicuro è stato ottenuto correttamente, come nel codice seguente:Previously, after calling any of these methods, you could check the for to determine if a strong reference was successfully obtained, as in the following code:

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

Il codice riportato sopra non funziona quando si usa Windows 10 SDK o versioni successive. Controllare invece il puntatore `nullptr`passato per .

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

## <a name="weakrefweakref-destructor"></a><a name="tilde-weakref"></a>Distruttore WeakRef::

Deinizializza l'istanza corrente `WeakRef` della classe.

```cpp
~WeakRef();
```

## <a name="weakrefas-method"></a><a name="as"></a>Metodo WeakRef::As

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

*Ptr*<br/>
Al termine dell'operazione, oggetto che rappresenta il parametro *U*.

### <a name="return-value"></a>Valore restituito

- S_OK se l'operazione ha esito positivo; in caso contrario, un HRESULT che *ptr* indica il `nullptr`motivo per cui l'operazione non è riuscita e ptr è impostato su .

- S_OK se l'operazione ha `WeakRef` esito positivo, ma l'oggetto corrente è già stato rilasciato. Il *ptr* parametro `nullptr`ptr è impostato su .

- S_OK se l'operazione ha `WeakRef` esito positivo, ma l'oggetto corrente non è derivato dal parametro *U*. Il *ptr* parametro `nullptr`ptr è impostato su .

### <a name="remarks"></a>Osservazioni

Viene generato un errore se `IWeakReference`il parametro `IInspectable` *U* è o non è derivato da .

Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../../cpp/auto-cpp.md) .

A partire da Windows 10 SDK, `WeakRef` questo `nullptr` metodo non imposta l'istanza su se non è stato `WeakRef` possibile `nullptr`ottenere il riferimento debole, pertanto è consigliabile evitare il codice di controllo degli errori che controlla il for . Controllare invece `nullptr` *ptr* per .

## <a name="weakrefasiid-method"></a><a name="asiid"></a>Metodo WeakRef::AsIID

Imposta il `ComPtr` parametro del puntatore specificato per rappresentare l'ID di interfaccia specificato.

```cpp
HRESULT AsIID(
   REFIID riid,
   _Out_ ComPtr<IInspectable>* ptr
);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
ID di interfaccia.

*Ptr*<br/>
Al termine dell'operazione, oggetto che rappresenta il parametro *riid*.

### <a name="return-value"></a>Valore restituito

- S_OK se l'operazione ha esito positivo; in caso contrario, un HRESULT che *ptr* indica il `nullptr`motivo per cui l'operazione non è riuscita e ptr è impostato su .

- S_OK se l'operazione ha `WeakRef` esito positivo, ma l'oggetto corrente è già stato rilasciato. Il *ptr* parametro `nullptr`ptr è impostato su .

- S_OK se l'operazione ha `WeakRef` esito positivo, ma l'oggetto corrente non è derivato dal parametro *riid*. Il *ptr* parametro `nullptr`ptr è impostato su . Per altre informazioni, vedere Note.

### <a name="remarks"></a>Osservazioni

Se il parametro *riid* non è `IInspectable`derivato da . Questo errore sostituisce il valore restituito.

Il primo modello è il form da usare nel codice. Il secondo modello (non illustrato di seguito, ma dichiarato nel file di intestazione) è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../../cpp/auto-cpp.md) .

A partire da Windows 10 SDK, `WeakRef` questo `nullptr` metodo non imposta l'istanza su se non è stato `WeakRef` possibile `nullptr`ottenere il riferimento debole, pertanto è consigliabile evitare il codice di controllo degli errori che controlla il for . Controllare invece `nullptr` *ptr* per .

## <a name="weakrefcopyto-method"></a><a name="copyto"></a>Metodo WeakRef::CopyTo

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
Puntatore `IInspectable` a un'interfaccia. Se *U* non è derivato `IInspectable`da .

*Riid*<br/>
ID di interfaccia. Se *riid* non deriva da `IWeakReference`.

*Ptr*<br/>
Un puntatore doppiamente indiretto a `IInspectable` o `IWeakReference`.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. Per ulteriori informazioni, vedere **Osservazioni**.

### <a name="remarks"></a>Osservazioni

Il valore restituito S_OK indica che l'operazione è riuscita, ma non se il riferimento debole è stato risolto in un riferimento forte. Se viene restituito S_OK, verificare che il parametro *p* sia un riferimento sicuro; ovvero il parametro *p* non `nullptr`è uguale a .

A partire da Windows 10 SDK, `WeakRef` questo `nullptr` metodo non imposta l'istanza su se non è stato `WeakRef` `nullptr`possibile ottenere il riferimento debole, pertanto è consigliabile evitare il controllo degli errori del codice che controlla il for . Controllare invece `nullptr` *ptr* per .

## <a name="weakrefoperatoramp-operator"></a><a name="operator-ampersand-operator"></a>Operatore WeakRef::operator&amp;

Restituisce `ComPtrRef` un oggetto `WeakRef` che rappresenta l'oggetto corrente.

```cpp
Details::ComPtrRef<WeakRef> operator&() throw()
```

### <a name="return-value"></a>Valore restituito

Oggetto `ComPtrRef` che rappresenta `WeakRef` l'oggetto corrente.

### <a name="remarks"></a>Osservazioni

Si tratta di un operatore di supporto interno che non deve essere utilizzato nel codice.

## <a name="weakrefweakref-constructor"></a><a name="weakref"></a>Costruttore WeakRef::WeakRef

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

*Ptr*<br/>
Puntatore, riferimento o rvalue-riferimento a un oggetto `WeakRef` esistente che inizializza l'oggetto corrente.

### <a name="remarks"></a>Osservazioni

Il primo costruttore `WeakRef` inizializza un oggetto vuoto. Il secondo costruttore `WeakRef` inizializza un oggetto `IWeakReference` da un puntatore all'interfaccia. Il terzo costruttore `WeakRef` inizializza un oggetto `ComPtr<IWeakReference>` da un riferimento a un oggetto. Il quarto e il quinto `WeakRef` costruttore `WeakRef` inizializza un oggetto da un altro oggetto.
