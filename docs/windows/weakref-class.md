---
title: Classe WeakRef | Microsoft Docs
ms.custom: ''
ms.date: 09/07/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef
- client/Microsoft::WRL::WeakRef::~WeakRef
- client/Microsoft::WRL::WeakRef::As
- client/Microsoft::WRL::WeakRef::AsIID
- client/Microsoft::WRL::WeakRef::CopyTo
- client/Microsoft::WRL::WeakRef::operator&
- client/Microsoft::WRL::WeakRef::WeakRef
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::WeakRef class
- Microsoft::WRL::WeakRef::~WeakRef, destructor
- Microsoft::WRL::WeakRef::As method
- Microsoft::WRL::WeakRef::AsIID method
- Microsoft::WRL::WeakRef::CopyTo method
- Microsoft::WRL::WeakRef::operator& operator
- Microsoft::WRL::WeakRef::WeakRef, constructor
ms.assetid: 572be703-c641-496c-8af5-ad6164670ba1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 12fd66c7ff5a6f6fee7588aa7bd51ae2053ba7e8
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46386977"
---
# <a name="weakref-class"></a>Classe WeakRef

Rappresenta un *riferimento debole* che può essere usato solamente da Windows Runtime, non da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.

## <a name="syntax"></a>Sintassi

```cpp
class WeakRef : public ComPtr<IWeakReference>
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore WeakRef::WeakRef](#weakref)|Inizializza una nuova istanza della classe `WeakRef`.|
|[Distruttore WeakRef::~WeakRef](#tilde-weakref)|Deinizializza l'istanza corrente del `WeakRef` classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo WeakRef::As](#as)|Imposta l'oggetto specificato `ComPtr` parametro del puntatore per rappresentare l'interfaccia specificata.|
|[Metodo WeakRef::AsIID](#asiid)|Imposta l'oggetto specificato `ComPtr` parametro del puntatore per rappresentare l'ID di interfaccia specificato.|
|[Metodo WeakRef::CopyTo](#copyto)|Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore WeakRef::operator&](#operator-ampersand-operator)|Restituisce un `ComPtrRef` oggetto che rappresenta l'oggetto corrente `WeakRef` oggetto.|

## <a name="remarks"></a>Note

Oggetto `WeakRef` oggetto mantiene una *riferimento sicuro*, associata a un oggetto che può essere valido o non valido. Chiamare il `As()` o `AsIID()` metodo per ottenere un riferimento sicuro. Quando il riferimento sicuro è valido, può accedere all'oggetto associato. Quando il riferimento sicuro non è valido (`nullptr`), l'oggetto associato è inaccessibile.

Oggetto `WeakRef` oggetto viene in genere usato per rappresentare un oggetto la cui esistenza è controllata da un'applicazione o un thread esterno. Ad esempio, costruire un `WeakRef` oggetto da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.

Si noti che si verifica un cambiamento di comportamento nel [come](#as), [AsIID](#asiid) e [CopyTo](#copyto) metodi in Windows 10 SDK. In precedenza, dopo aver chiamato uno di questi metodi, si potrebbe verificare se il `WeakRef` per `nullptr` per determinare se un riferimento sicuro era stato ottenuto correttamente, come nel codice seguente:

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

Il codice riportato sopra non funziona quando si usa Windows 10 SDK o versioni successive. Controllare invece il puntatore passato per `nullptr`.

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

## <a name="tilde-weakref"></a>WeakRef:: ~ WeakRef distruttore

Deinizializza l'istanza corrente del `WeakRef` classe.

```cpp
~WeakRef();
```

## <a name="as"></a>Metodo weakref:: As

Imposta l'oggetto specificato `ComPtr` parametro del puntatore per rappresentare l'interfaccia specificata.

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
Al termine di questa operazione, un oggetto che rappresenta i parametri *U*.

### <a name="return-value"></a>Valore restituito

- S_OK se l'operazione riesce; in caso contrario, HRESULT che indica il motivo dell'errore dell'operazione e *ptr* è impostata su `nullptr`.

- S_OK se l'operazione riesce, ma corrente `WeakRef` oggetto è già stato rilasciato. Parametro *ptr* è impostata su `nullptr`.

- S_OK se l'operazione riesce, ma l'oggetto corrente `WeakRef` oggetto non è derivato dal parametro *U*. Parametro *ptr* è impostata su `nullptr`.

### <a name="remarks"></a>Note

Viene generato un errore se parametro *U* viene `IWeakReference`, o non è derivato da `IInspectable`.

Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../cpp/auto-cpp.md) .

A partire da Windows 10 SDK, questo metodo non imposta il `WeakRef` istanza `nullptr` se non è stato possibile ottenere il riferimento debole, pertanto, evitare codice controllo degli errori che verifica la `WeakRef` per `nullptr`. Controllare invece *ptr* per `nullptr`.

## <a name="asiid"></a>Metodo weakref:: Asiid

Imposta l'oggetto specificato `ComPtr` parametro del puntatore per rappresentare l'ID di interfaccia specificato.

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
Al termine di questa operazione, un oggetto che rappresenta i parametri *riid*.

### <a name="return-value"></a>Valore restituito

- S_OK se l'operazione riesce; in caso contrario, HRESULT che indica il motivo dell'errore dell'operazione e *ptr* è impostata su `nullptr`.

- S_OK se l'operazione riesce, ma corrente `WeakRef` oggetto è già stato rilasciato. Parametro *ptr* è impostata su `nullptr`.

- S_OK se l'operazione riesce, ma l'oggetto corrente `WeakRef` oggetto non è derivato dal parametro *riid*. Parametro *ptr* è impostata su `nullptr`. Per altre informazioni, vedere Note.

### <a name="remarks"></a>Note

Viene generato un errore se parametro *riid* non è derivato da `IInspectable`. Questo errore sostituisce il valore restituito.

Il primo modello è il form da usare nel codice. Il secondo modello (non illustrato di seguito, ma dichiarato nel file di intestazione) è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../cpp/auto-cpp.md) .

A partire da Windows 10 SDK, questo metodo non imposta il `WeakRef` istanza `nullptr` se non è stato possibile ottenere il riferimento debole, pertanto, evitare codice controllo degli errori che verifica la `WeakRef` per `nullptr`. Controllare invece *ptr* per `nullptr`.

## <a name="copyto"></a>Metodo weakref:: CopyTo

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
Puntatore a un `IInspectable` interfaccia. Viene generato un errore se *U* non è derivato da `IInspectable`.

*riid*<br/>
ID di interfaccia. Viene generato un errore se *riid* non è derivato da `IWeakReference`.

*ptr*<br/>
Un puntatore indiretto doppio `IInspectable` o `IWeakReference`.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. Per altre informazioni, vedere **Note**.

### <a name="remarks"></a>Note

Il valore restituito S_OK indica che l'operazione è riuscita, ma non se il riferimento debole è stato risolto in un riferimento forte. Se viene restituito S_OK, verificare che il parametro *p* è un forte riferimento, vale a dire parametro *p* non è uguale a `nullptr`.

A partire da Windows 10 SDK, questo metodo non imposta il `WeakRef` istanza `nullptr` se non è stato possibile ottenere il riferimento debole, pertanto, evitare codice che verifica degli errori le `WeakRef` per `nullptr`. Controllare invece *ptr* per `nullptr`.

## <a name="operator-ampersand-operator"></a>Weakref:: operator&amp; operatore

Restituisce un `ComPtrRef` oggetto che rappresenta l'oggetto corrente `WeakRef` oggetto.

```cpp
Details::ComPtrRef<WeakRef> operator&() throw()  
```

### <a name="return-value"></a>Valore restituito

Oggetto `ComPtrRef` oggetto che rappresenta l'oggetto corrente `WeakRef` oggetto.

### <a name="remarks"></a>Note

Si tratta di un operatore di helper interna che non deve essere usato nel codice.

## <a name="weakref"></a>Costruttore weakref:: Weakref

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
Un puntatore, riferimento o riferimento rvalue a un oggetto esistente che inizializza l'oggetto corrente `WeakRef` oggetto.

### <a name="remarks"></a>Note

Il primo costruttore inizializza un oggetto vuoto `WeakRef` oggetto. Il secondo costruttore inizializza un `WeakRef` da un puntatore a oggetto di `IWeakReference` interfaccia. Il terzo costruttore inizializza un `WeakRef` oggetto da un riferimento a un `ComPtr<IWeakReference>` oggetto. Il quarto e quinto costruttore inizializza un `WeakRef` da un altro oggetto `WeakRef` oggetto.
