---
title: ComPtr (classe)
ms.date: 07/26/2019
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr
- client/Microsoft::WRL::ComPtr::As
- client/Microsoft::WRL::ComPtr::AsIID
- client/Microsoft::WRL::ComPtr::AsWeak
- client/Microsoft::WRL::ComPtr::Attach
- client/Microsoft::WRL::ComPtr::ComPtr
- client/Microsoft::WRL::ComPtr::CopyTo
- client/Microsoft::WRL::ComPtr::Detach
- client/Microsoft::WRL::ComPtr::Get
- client/Microsoft::WRL::ComPtr::GetAddressOf
- client/Microsoft::WRL::ComPtr::InternalAddRef
- client/Microsoft::WRL::ComPtr::InternalRelease
- client/Microsoft::WRL::ComPtr::operator&
- client/Microsoft::WRL::ComPtr::operator->
- client/Microsoft::WRL::ComPtr::operator=
- client/Microsoft::WRL::ComPtr::operator==
- client/Microsoft::WRL::ComPtr::operator!=
- client/Microsoft::WRL::ComPtr::operator Microsoft::WRL::Details::BoolType
- client/Microsoft::WRL::ComPtr::ptr_
- client/Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf
- client/Microsoft::WRL::ComPtr::Reset
- client/Microsoft::WRL::ComPtr::Swap
- client/Microsoft::WRL::ComPtr::~ComPtr
helpviewer_keywords:
- Microsoft::WRL::ComPtr class
- Microsoft::WRL::ComPtr::As method
- Microsoft::WRL::ComPtr::AsIID method
- Microsoft::WRL::ComPtr::AsWeak method
- Microsoft::WRL::ComPtr::Attach method
- Microsoft::WRL::ComPtr::ComPtr, constructor
- Microsoft::WRL::ComPtr::CopyTo method
- Microsoft::WRL::ComPtr::Detach method
- Microsoft::WRL::ComPtr::Get method
- Microsoft::WRL::ComPtr::GetAddressOf method
- Microsoft::WRL::ComPtr::InternalAddRef method
- Microsoft::WRL::ComPtr::InternalRelease method
- Microsoft::WRL::ComPtr::operator& operator
- Microsoft::WRL::ComPtr::operator-> operator
- Microsoft::WRL::ComPtr::operator= operator
- Microsoft::WRL::ComPtr::operator== operator
- Microsoft::WRL::ComPtr::operator!= operator
- Microsoft::WRL::ComPtr::operator Microsoft::WRL::Details::BoolType operator
- Microsoft::WRL::ComPtr::ptr_ data member
- Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf method
- Microsoft::WRL::ComPtr::Reset method
- Microsoft::WRL::ComPtr::Swap method
- Microsoft::WRL::ComPtr::~ComPtr, destructor
ms.assetid: a6551902-6819-478a-8df7-b6f312ab1fb0
ms.openlocfilehash: 89c09ede972f5bdd5da1dde810cad31733bdf338
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372646"
---
# <a name="comptr-class"></a>ComPtr (classe)

Crea un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. `ComPtr` mantiene automaticamente un conteggio dei riferimenti per un puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
class ComPtr;

template<class T>
friend class ComPtr;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Interfaccia che `ComPtr` l'oggetto rappresenta.

*U*<br/>
Classe a cui `ComPtr` la corrente è un amico. (Il modello che usa questo parametro è protetto.)

## <a name="remarks"></a>Osservazioni

`ComPtr<>`dichiara un tipo che rappresenta il puntatore a interfaccia sottostante. Utilizzare `ComPtr<>` per dichiarare una variabile e quindi utilizzare`->`l'operatore di accesso ai membri freccia ( ) per accedere a una funzione membro di interfaccia.

Per ulteriori informazioni sui puntatori intelligenti, vedere la sottosezione "COM Smart Pointers" dell'argomento [COM Coding Practices](/windows/win32/LearnWin32/com-coding-practices) in MSDN Library.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome            | Descrizione
--------------- | ---------------------------------------------------------------
`InterfaceType` | Sinonimo del tipo specificato dal parametro di modello *T.*

### <a name="public-constructors"></a>Costruttori pubblici

Nome                             | Descrizione
-------------------------------- | --------------------------------------------------------------------------------------------------------------------
[ComPtr::ComPtrComPtr::ComPtr](#comptr)        | Inizializza una nuova istanza della classe `ComPtr`. Gli overload forniscono costruttori predefiniti, di copia, di spostamento e di conversione.
[ComPtr::](#tilde-comptr) | Deinizializza un'istanza `ComPtr`di .

### <a name="public-methods"></a>Metodi pubblici

Nome                                                      | Descrizione
--------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ComPtr::As](#as)                                         | Restituisce `ComPtr` un oggetto che rappresenta l'interfaccia identificata dal parametro di modello specificato.
[ComPtr::AsIIDComPtr::AsIID](#asiid)                                   | Restituisce `ComPtr` un oggetto che rappresenta l'interfaccia identificata dall'ID di interfaccia specificato.
[ComPtr::AsWeakComPtr::AsWeak](#asweak)                                 | Restituisce un riferimento debole all'oggetto corrente.
[ComPtr::Associare](#attach)                                 | `ComPtr` Lo associa al tipo di interfaccia specificato dal parametro del tipo di modello corrente.
[ComPtr::CopyTo](#copyto)                                 | Copia l'interfaccia corrente o `ComPtr` specificata associata al puntatore di output specificato.
[ComPtr::Detach](#detach)                                 | Disassocia questo `ComPtr` dall'interfaccia che rappresenta.
[ComPtr::Get](#get)                                       | Recupera un puntatore all'interfaccia associata a questo `ComPtr`oggetto .
[ComPtr::GetAddressOfComPtr::GetAddressOf](#getaddressof)                     | Recupera l'indirizzo del membro dati [ptr_,](#ptr) che contiene un `ComPtr`puntatore all'interfaccia rappresentata da questo oggetto .
[ComPtr::ReleaseAndGetAddressOf](#releaseandgetaddressof) | Rilascia l'interfaccia `ComPtr` associata a this e quindi recupera l'indirizzo del membro dati [ptr_,](#ptr) che contiene un puntatore all'interfaccia rilasciata.
[ComPtr::Reset](#reset)                                   | Rilascia tutti i riferimenti per il puntatore `ComPtr`all'interfaccia associata a questo oggetto .
[ComPtr::Swap](#swap)                                     | Scambia l'interfaccia gestita dall'oggetto `ComPtr` corrente `ComPtr`con l'interfaccia gestita dall'oggetto specificato.

### <a name="protected-methods"></a>Metodi protetti

Nome                                        | Descrizione
------------------------------------------- | --------------------------------------------------------------------------------
[ComPtr::InternalAddRef](#internaladdref)   | Incrementa il conteggio dei riferimenti `ComPtr`dell'interfaccia associata a questo oggetto .
[ComPtr::InternalReleaseComPtr::InternalRelease](#internalrelease) | Esegue un'operazione di rilascio `ComPtr`COM sull'interfaccia associata a questo oggetto .

### <a name="public-operators"></a>Operatori pubblici

Nome                                                                                           | Descrizione
---------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------
[ComPtr::operatore&](#operator-ampersand)                                                       | Recupera l'indirizzo dell'oggetto corrente. `ComPtr`
[ComPtr::operator->](#operator-arrow)                                                          | Recupera un puntatore al tipo specificato dal parametro di modello corrente.
[ComPtr::operatore](#operator-assign)                                                          | Assegna un valore all'oggetto corrente. `ComPtr`
[ComPtr::operator](#operator-equality)                                                       | Indica se due oggetti `ComPtr` sono uguali.
[ComPtr::operator!](#operator-inequality)                                                     | Indica se due oggetti `ComPtr` non sono uguali.
[ComPtr::operatorMicrosoft::WRL::Details::BoolType](#operator-microsoft-wrl-details-booltype) | Indica se un `ComPtr` oggetto gestisce o meno la durata dell'oggetto di un'interfaccia.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                 | Descrizione
-------------------- | ------------------------------------------------------------------------------------------
[ComPtr::ptr_](#ptr) | Contiene un puntatore all'interfaccia associata e `ComPtr`gestita da questo oggetto .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="comptrcomptr"></a><a name="tilde-comptr"></a>ComPtr::

Deinizializza un'istanza `ComPtr`di .

```cpp
WRL_NOTHROW ~ComPtr();
```

## <a name="comptras"></a><a name="as"></a>ComPtr::As

Restituisce `ComPtr` un oggetto che rappresenta l'interfaccia identificata dal parametro di modello specificato.

```cpp
template<typename U>
HRESULT As(
   _Out_ ComPtr<U>* p
) const;

template<typename U>
HRESULT As(
   _Out_ Details::ComPtrRef<ComPtr<U>> p
) const;
```

### <a name="parameters"></a>Parametri

*U*<br/>
Interfaccia che deve essere rappresentata dal parametro *p*.

*P*<br/>
Oggetto `ComPtr` che rappresenta l'interfaccia specificata dal parametro *U*. Il parametro *p* non `ComPtr` deve fare riferimento all'oggetto corrente.

### <a name="remarks"></a>Osservazioni

Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../../cpp/auto-cpp.md) .

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="comptrasiid"></a><a name="asiid"></a>ComPtr::AsIIDComPtr::AsIID

Restituisce `ComPtr` un oggetto che rappresenta l'interfaccia identificata dall'ID di interfaccia specificato.

```cpp
WRL_NOTHROW HRESULT AsIID(
   REFIID riid,
   _Out_ ComPtr<IUnknown>* p
) const;
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
ID di interfaccia.

*P*<br/>
Se l'oggetto dispone di un'interfaccia il cui ID è uguale a *riid*, un puntatore doppiamente indiretto all'interfaccia specificata dal parametro *riid;* in caso contrario, un puntatore a `IUnknown`.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="comptrasweak"></a><a name="asweak"></a>ComPtr::AsWeakComPtr::AsWeak

Restituisce un riferimento debole all'oggetto corrente.

```cpp
HRESULT AsWeak(
   _Out_ WeakRef* pWeakRef
);
```

### <a name="parameters"></a>Parametri

*pWeakRef (in modo pWeakRef)*<br/>
Quando questa operazione viene completata, un puntatore a un oggetto di riferimento debole.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="comptrattach"></a><a name="attach"></a>ComPtr::Associare

`ComPtr` Lo associa al tipo di interfaccia specificato dal parametro del tipo di modello corrente.

```cpp
void Attach(
   _In_opt_ InterfaceType* other
);
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Un tipo di interfaccia.

## <a name="comptrcomptr"></a><a name="comptr"></a>ComPtr::ComPtrComPtr::ComPtr

Inizializza una nuova istanza della classe `ComPtr`. Gli overload forniscono costruttori predefiniti, di copia, di spostamento e di conversione.

```cpp
WRL_NOTHROW ComPtr();

WRL_NOTHROW ComPtr(
   decltype(__nullptr)
);

template<class U>
WRL_NOTHROW ComPtr(
   _In_opt_ U *other
);

WRL_NOTHROW ComPtr(
   const ComPtr& other
);

template<class U>
WRL_NOTHROW ComPtr(
   const ComPtr<U> &other,
   typename ENABLE_IF<__is_convertible_to(U*, T*), void *>
);

WRL_NOTHROW ComPtr(
   _Inout_ ComPtr &&other
);

template<class U>
WRL_NOTHROW ComPtr(
   _Inout_ ComPtr<U>&& other, typename ENABLE_IF<__is_convertible_to(U*, T*), void *>
);
```

### <a name="parameters"></a>Parametri

*U*<br/>
Tipo *dell'altro* parametro.

*Altro*<br/>
Oggetto di tipo *U*.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Il primo costruttore è il costruttore predefinito, che crea in modo implicito un oggetto vuoto. Il secondo costruttore specifica [__nullptr](../../extensions/nullptr-cpp-component-extensions.md), che crea in modo esplicito un oggetto vuoto.

Il terzo costruttore crea un oggetto dall'oggetto specificato da un puntatore. Il ComPtr ora possiede la memoria a punta e mantiene un conteggio dei riferimenti ad esso.

Il quarto e il quinto costruttore sono costruttori di copia. Il quinto costruttore copia un oggetto se è convertibile nel tipo corrente.

Il sesto e il settimo costruttore sono costruttori di spostamento. Il settimo costruttore sposta un oggetto se è convertibile nel tipo corrente.

## <a name="comptrcopyto"></a><a name="copyto"></a>ComPtr::CopyTo

Copia l'interfaccia corrente o `ComPtr` specificata associata al puntatore specificato.

```cpp
HRESULT CopyTo(
   _Deref_out_ InterfaceType** ptr
);

HRESULT CopyTo(
   REFIID riid,
   _Deref_out_ void** ptr
) const;

template<typename U>
HRESULT CopyTo(
   _Deref_out_ U** ptr
) const;
```

### <a name="parameters"></a>Parametri

*U*<br/>
Un nome di tipo.

*Ptr*<br/>
Al termine dell'operazione, un puntatore all'interfaccia richiesta.

*Riid*<br/>
ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un HRESULT che indica il motivo per cui l'operazione implicita `QueryInterface` non riuscita.

### <a name="remarks"></a>Osservazioni

La prima funzione restituisce una copia di `ComPtr`un puntatore all'interfaccia associata a questo oggetto . Questa funzione restituisce sempre S_OK.

La seconda funzione `QueryInterface` esegue un'operazione `ComPtr` sull'interfaccia associata a questo per l'interfaccia specificata dal *riid* parametro.

La terza funzione `QueryInterface` esegue un'operazione `ComPtr` sull'interfaccia associata a questo per l'interfaccia sottostante del *U* parametro.

## <a name="comptrdetach"></a><a name="detach"></a>ComPtr::Detach

Rimuove l'associazione di questo oggetto `ComPtr` dall'interfaccia da esso rappresentata.

```cpp
T* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia rappresentata da questo oggetto `ComPtr`.

## <a name="comptrget"></a><a name="get"></a>ComPtr::Get

Recupera un puntatore all'interfaccia associata a questo `ComPtr`oggetto .

```cpp
T* Get() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia associata `ComPtr`a questo oggetto .

## <a name="comptrgetaddressof"></a><a name="getaddressof"></a>ComPtr::GetAddressOfComPtr::GetAddressOf

Recupera l'indirizzo del membro dati [ptr_,](#ptr) che contiene un `ComPtr`puntatore all'interfaccia rappresentata da questo oggetto .

```cpp
T* const* GetAddressOf() const;
T** GetAddressOf();
```

### <a name="return-value"></a>Valore restituito

Indirizzo di una variabile.

## <a name="comptrinternaladdref"></a><a name="internaladdref"></a>ComPtr::InternalAddRef

Incrementa il conteggio dei riferimenti `ComPtr`dell'interfaccia associata a questo oggetto .

```cpp
void InternalAddRef() const;
```

### <a name="remarks"></a>Osservazioni

Questo metodo è protetto.

## <a name="comptrinternalrelease"></a><a name="internalrelease"></a>ComPtr::InternalReleaseComPtr::InternalRelease

Esegue un'operazione di rilascio `ComPtr`COM sull'interfaccia associata a questo oggetto .

```cpp
void InternalRelease();
```

### <a name="remarks"></a>Osservazioni

Questo metodo è protetto.

## <a name="comptroperatoramp"></a><a name="operator-ampersand"></a>ComPtr::operatore&amp;

Rilascia l'interfaccia `ComPtr` associata a questo oggetto `ComPtr` e quindi recupera l'indirizzo dell'oggetto.

```cpp
Details::ComPtrRef<WeakRef> operator&()

const Details::ComPtrRef<const WeakRef> operator&() const
```

### <a name="return-value"></a>Valore restituito

Un debole riferimento `ComPtr`all'attuale .

### <a name="remarks"></a>Osservazioni

Questo metodo è diverso da [ComPtr::GetAddressOf](#getaddressof) in quanto questo metodo rilascia un riferimento al puntatore a interfaccia. Utilizzare `ComPtr::GetAddressOf` quando si richiede l'indirizzo del puntatore a interfaccia ma non si desidera rilasciare tale interfaccia.

## <a name="comptroperator-gt"></a><a name="operator-arrow"></a>ComPtr::operator-&gt;

Recupera un puntatore al tipo specificato dal parametro di modello corrente.

```cpp
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al tipo specificato dal nome del tipo di modello corrente.

### <a name="remarks"></a>Osservazioni

Questa funzione di supporto rimuove l'overhead non necessario causato dall'utilizzo della macro STDMETHOD. Questa funzione `IUnknown` `private` crea `virtual`tipi anziché .

## <a name="comptroperator"></a><a name="operator-assign"></a>ComPtr::operatore

Assegna un valore all'oggetto corrente. `ComPtr`

```cpp
WRL_NOTHROW ComPtr& operator=(
   decltype(__nullptr)
);
WRL_NOTHROW ComPtr& operator=(
   _In_opt_ T *other
);
template <typename U>
WRL_NOTHROW ComPtr& operator=(
   _In_opt_ U *other
);
WRL_NOTHROW ComPtr& operator=(
   const ComPtr &other
);
template<class U>
WRL_NOTHROW ComPtr& operator=(
   const ComPtr<U>& other
);
WRL_NOTHROW ComPtr& operator=(
   _Inout_ ComPtr &&other
);
template<class U>
WRL_NOTHROW ComPtr& operator=(
   _Inout_ ComPtr<U>&& other
);
```

### <a name="parameters"></a>Parametri

*U*<br/>
Un corso.

*Altro*<br/>
Riferimento a un puntatore, un riferimento `ComPtr`o un riferimento rvalue a un tipo o a un altro oggetto .

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto corrente. `ComPtr`

### <a name="remarks"></a>Osservazioni

La prima versione di questo operatore assegna `ComPtr`un valore vuoto all'oggetto corrente.

Nella seconda versione, se il puntatore a interfaccia `ComPtr` di assegnazione non corrisponde al puntatore a interfaccia corrente, il secondo puntatore a interfaccia viene assegnato all'oggetto corrente. `ComPtr`

Nella terza versione, il puntatore a interfaccia `ComPtr`di assegnazione viene assegnato all'oggetto corrente.

Nella quarta versione, se il puntatore a interfaccia del valore `ComPtr` di assegnazione non corrisponde al `ComPtr`puntatore a interfaccia corrente, il secondo puntatore a interfaccia viene assegnato all'oggetto corrente.

La quinta versione è un operatore di copia; un riferimento `ComPtr` a a è `ComPtr`assegnato alla corrente .

La sesta versione è un operatore di copia che utilizza la semantica di spostamento; un riferimento rvalue `ComPtr` a un se un tipo è `ComPtr`cast statico e quindi assegnato all'oggetto corrente.

La settima versione è un operatore di copia che usa la semantica di spostamento; un riferimento rvalue `ComPtr` a a di tipo *U* è `ComPtr`quindi un cast statico e assegnato all'oggetto corrente.

## <a name="comptroperator"></a><a name="operator-equality"></a>ComPtr::operator

Indica se due oggetti `ComPtr` sono uguali.

```cpp
bool operator==(
   const ComPtr<T>& a,
   const ComPtr<U>& b
);

bool operator==(
   const ComPtr<T>& a,
   decltype(__nullptr)
);

bool operator==(
   decltype(__nullptr),
   const ComPtr<T>& a
);
```

### <a name="parameters"></a>Parametri

*Un*<br/>
Riferimento a un oggetto `ComPtr`.

*B*<br/>
Riferimento a `ComPtr` un altro oggetto.

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce `true` se l'oggetto *a* è uguale all'oggetto *b*; in `false`caso contrario, .

Il secondo e `true` il terzo operatore `nullptr`producono se l'oggetto *a* è uguale a ; in `false`caso contrario, .

## <a name="comptroperator"></a><a name="operator-inequality"></a>ComPtr::operator!

Indica se due oggetti `ComPtr` non sono uguali.

```cpp
bool operator!=(
   const ComPtr<T>& a,
   const ComPtr<U>& b
);

bool operator!=(
   const ComPtr<T>& a,
   decltype(__nullptr)
);

bool operator!=(
   decltype(__nullptr),
   const ComPtr<T>& a
);
```

### <a name="parameters"></a>Parametri

*Un*<br/>
Riferimento a un oggetto `ComPtr`.

*B*<br/>
Riferimento a `ComPtr` un altro oggetto.

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce `true` se l'oggetto *a* non è uguale all'oggetto *b*; in `false`caso contrario, .

Il secondo e `true` il terzo operatore `nullptr`producono se l'oggetto *a* non è uguale a ; in `false`caso contrario, .

## <a name="comptroperator-microsoftwrldetailsbooltype"></a><a name="operator-microsoft-wrl-details-booltype"></a>ComPtr::operatorMicrosoft::WRL::Details::BoolType

Indica se un `ComPtr` oggetto gestisce o meno la durata dell'oggetto di un'interfaccia.

```cpp
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;
```

### <a name="return-value"></a>Valore restituito

Se a questa `ComPtr`interfaccia è associata un'interfaccia , l'indirizzo del membro dati [BoolStruct::Member;](boolstruct-structure.md#member) in `nullptr`caso contrario, .

## <a name="comptrptr_"></a><a name="ptr"></a>ComPtr::ptr_

Contiene un puntatore all'interfaccia associata e `ComPtr`gestita da questo oggetto .

```cpp
InterfaceType *ptr_;
```

### <a name="remarks"></a>Osservazioni

`ptr_`è un membro dati interno e protetto.

## <a name="comptrreleaseandgetaddressof"></a><a name="releaseandgetaddressof"></a>ComPtr::ReleaseAndGetAddressOf

Rilascia l'interfaccia `ComPtr` associata a this e quindi recupera l'indirizzo del membro dati [ptr_,](#ptr) che contiene un puntatore all'interfaccia rilasciata.

```cpp
T** ReleaseAndGetAddressOf();
```

### <a name="return-value"></a>Valore restituito

L'indirizzo [ptr_](#ptr) del membro dati `ComPtr`ptr_ di questo oggetto .

## <a name="comptrreset"></a><a name="reset"></a>ComPtr::Reset

Rilascia tutti i riferimenti per il puntatore `ComPtr`all'interfaccia associata a questo oggetto .

```cpp
unsigned long Reset();
```

### <a name="return-value"></a>Valore restituito

Numero di riferimenti rilasciati, se presenti.

## <a name="comptrswap"></a><a name="swap"></a>ComPtr::Swap

Scambia l'interfaccia gestita dall'oggetto `ComPtr` corrente `ComPtr`con l'interfaccia gestita dall'oggetto specificato.

```cpp
void Swap(
   _Inout_ ComPtr&& r
);

void Swap(
   _Inout_ ComPtr& r
);
```

### <a name="parameters"></a>Parametri

*R*<br/>
`ComPtr`.
