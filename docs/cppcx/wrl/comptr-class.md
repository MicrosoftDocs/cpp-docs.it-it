---
title: Classe ComPtr
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
ms.openlocfilehash: 1e20a991c8f32027aeea6a17df0534aa6e1c2c43
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865711"
---
# <a name="comptr-class"></a>Classe ComPtr

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
Interfaccia rappresentata dal `ComPtr`.

*U*<br/>
Classe a cui l'`ComPtr` corrente è un elemento Friend. (Il modello che usa questo parametro è protetto.)

## <a name="remarks"></a>Osservazioni

`ComPtr<>` dichiara un tipo che rappresenta il puntatore di interfaccia sottostante. Usare `ComPtr<>` per dichiarare una variabile e quindi usare l'operatore freccia di accesso ai membri (`->`) per accedere a una funzione membro di interfaccia.

Per ulteriori informazioni sui puntatori intelligenti, vedere la sottosezione "puntatori intelligenti COM" dell'argomento [procedure di codifica com](/windows/win32/LearnWin32/com-coding-practices) in MSDN Library.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

Nome            | Descrizione
--------------- | ---------------------------------------------------------------
`InterfaceType` | Sinonimo del tipo specificato dal parametro di modello *T* .

### <a name="public-constructors"></a>Costruttori pubblici

Nome                             | Descrizione
-------------------------------- | --------------------------------------------------------------------------------------------------------------------
[ComPtr:: ComPtr](#comptr)        | Inizializza una nuova istanza della classe `ComPtr`. Gli overload forniscono costruttori predefiniti, di copia, di spostamento e di conversione.
[ComPtr:: ~ ComPtr](#tilde-comptr) | Consente di deinizializzare un'istanza di `ComPtr`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                      | Descrizione
--------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ComPtr:: As](#as)                                         | Restituisce un `ComPtr` oggetto che rappresenta l'interfaccia identificata dal parametro di modello specificato.
[ComPtr:: AsIID](#asiid)                                   | Restituisce un `ComPtr` oggetto che rappresenta l'interfaccia identificata dall'ID di interfaccia specificato.
[ComPtr:: AsWeak](#asweak)                                 | Restituisce un riferimento debole all'oggetto corrente.
[ComPtr:: Connetti](#attach)                                 | Associa questa `ComPtr` al tipo di interfaccia specificato dal parametro del tipo di modello corrente.
[ComPtr:: CopyTo](#copyto)                                 | Copia l'interfaccia corrente o specificata associata a questo `ComPtr` al puntatore di output specificato.
[ComPtr::D etach](#detach)                                 | Annulla l'associazione di questo `ComPtr` dall'interfaccia che rappresenta.
[ComPtr:: Get](#get)                                       | Recupera un puntatore all'interfaccia associata a questo `ComPtr`.
[ComPtr:: GetAddressOf](#getaddressof)                     | Recupera l'indirizzo del membro dati [ptr_](#ptr) , che contiene un puntatore all'interfaccia rappresentata da questo `ComPtr`.
[ComPtr:: ReleaseAndGetAddressOf](#releaseandgetaddressof) | Rilascia l'interfaccia associata a questo `ComPtr`, quindi recupera l'indirizzo del membro dati [ptr_](#ptr) , che contiene un puntatore all'interfaccia rilasciata.
[ComPtr::Reset](#reset)                                   | Rilascia tutti i riferimenti per il puntatore all'interfaccia associata a questo `ComPtr`.
[ComPtr:: swap](#swap)                                     | Scambia l'interfaccia gestita dal `ComPtr` corrente con l'interfaccia gestita dalla `ComPtr`specificata.

### <a name="protected-methods"></a>Metodi protetti

Nome                                        | Descrizione
------------------------------------------- | --------------------------------------------------------------------------------
[ComPtr:: InternalAddRef](#internaladdref)   | Incrementa il conteggio dei riferimenti dell'interfaccia associata a questo `ComPtr`.
[ComPtr:: InternalRelease](#internalrelease) | Esegue un'operazione di rilascio COM sull'interfaccia associata a questo `ComPtr`.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                                                           | Descrizione
---------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------
[& ComPtr:: operator](#operator-ampersand)                                                       | Recupera l'indirizzo del `ComPtr`corrente.
[ComPtr:: operator->](#operator-arrow)                                                          | Recupera un puntatore al tipo specificato dal parametro di modello corrente.
[ComPtr:: operator =](#operator-assign)                                                          | Assegna un valore al `ComPtr`corrente.
[ComPtr:: operator = =](#operator-equality)                                                       | Indica se due oggetti `ComPtr` sono uguali.
[ComPtr:: operator! =](#operator-inequality)                                                     | Indica se due oggetti `ComPtr` non sono uguali.
[Operatore ComPtr:: operator Microsoft:: WRL::D etails:: BoolType](#operator-microsoft-wrl-details-booltype) | Indica se un `ComPtr` gestisce o meno la durata degli oggetti di un'interfaccia.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                 | Descrizione
-------------------- | ------------------------------------------------------------------------------------------
[ComPtr: tr_:p](#ptr) | Contiene un puntatore all'interfaccia associata a e gestita da questo `ComPtr`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="tilde-comptr"></a>ComPtr:: ~ ComPtr

Consente di deinizializzare un'istanza di `ComPtr`.

```cpp
WRL_NOTHROW ~ComPtr();
```

## <a name="as"></a>ComPtr:: As

Restituisce un `ComPtr` oggetto che rappresenta l'interfaccia identificata dal parametro di modello specificato.

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

*p*<br/>
Oggetto `ComPtr` che rappresenta l'interfaccia specificata dal parametro *U*. Il parametro *p* non deve fare riferimento all'oggetto `ComPtr` corrente.

### <a name="remarks"></a>Osservazioni

Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../../cpp/auto-cpp.md) .

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="asiid"></a>ComPtr:: AsIID

Restituisce un `ComPtr` oggetto che rappresenta l'interfaccia identificata dall'ID di interfaccia specificato.

```cpp
WRL_NOTHROW HRESULT AsIID(
   REFIID riid,
   _Out_ ComPtr<IUnknown>* p
) const;
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*p*<br/>
Se l'oggetto ha un'interfaccia il cui ID è uguale a *riid*, un puntatore doppiamente indiretto all'interfaccia specificata dal parametro *riid* . in caso contrario, un puntatore a `IUnknown`.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="asweak"></a>ComPtr:: AsWeak

Restituisce un riferimento debole all'oggetto corrente.

```cpp
HRESULT AsWeak(
   _Out_ WeakRef* pWeakRef
);
```

### <a name="parameters"></a>Parametri

*pWeakRef*<br/>
Quando questa operazione viene completata, un puntatore a un oggetto di riferimento debole.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="attach"></a>ComPtr:: Connetti

Associa questa `ComPtr` al tipo di interfaccia specificato dal parametro del tipo di modello corrente.

```cpp
void Attach(
   _In_opt_ InterfaceType* other
);
```

### <a name="parameters"></a>Parametri

*other*<br/>
Tipo di interfaccia.

## <a name="comptr"></a>ComPtr:: ComPtr

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
Tipo dell' *altro* parametro.

*other*<br/>
Oggetto di tipo *U*.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Il primo costruttore è il costruttore predefinito, che modo implicito crea un oggetto vuoto. Il secondo costruttore specifica [__nullptr](../../extensions/nullptr-cpp-component-extensions.md), che consente di creare in modo esplicito un oggetto vuoto.

Il terzo costruttore crea un oggetto dall'oggetto specificato da un puntatore. Il ComPtr è ora proprietario della memoria puntata e mantiene un conteggio dei riferimenti.

Il quarto e il quinto costruttore sono costruttori di copia. Il quinto costruttore copia un oggetto se è convertibile nel tipo corrente.

Il sesto e il settimo costruttore sono costruttori di spostamento. Il settimo costruttore sposta un oggetto se è convertibile nel tipo corrente.

## <a name="copyto"></a>ComPtr:: CopyTo

Copia l'interfaccia corrente o specificata associata a questo `ComPtr` al puntatore specificato.

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

*ptr*<br/>
Al termine di questa operazione, puntatore all'interfaccia richiesta.

*riid*<br/>
ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, valore HRESULT che indica il motivo per cui l'operazione `QueryInterface` implicita non è riuscita.

### <a name="remarks"></a>Osservazioni

La prima funzione restituisce una copia di un puntatore all'interfaccia associata a questo `ComPtr`. Questa funzione restituisce sempre S_OK.

La seconda funzione esegue un'operazione di `QueryInterface` sull'interfaccia associata a questo `ComPtr` per l'interfaccia specificata dal parametro *riid* .

La terza funzione esegue un'operazione di `QueryInterface` sull'interfaccia associata a questo `ComPtr` per l'interfaccia sottostante del parametro *U* .

## <a name="detach"></a>ComPtr::D etach

Rimuove l'associazione di questo oggetto `ComPtr` dall'interfaccia da esso rappresentata.

```cpp
T* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia rappresentata da questo oggetto `ComPtr`.

## <a name="get"></a>ComPtr:: Get

Recupera un puntatore all'interfaccia associata a questo `ComPtr`.

```cpp
T* Get() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia associata a questo `ComPtr`.

## <a name="getaddressof"></a>ComPtr:: GetAddressOf

Recupera l'indirizzo del membro dati [ptr_](#ptr) , che contiene un puntatore all'interfaccia rappresentata da questo `ComPtr`.

```cpp
T* const* GetAddressOf() const;
T** GetAddressOf();
```

### <a name="return-value"></a>Valore restituito

Indirizzo di una variabile.

## <a name="internaladdref"></a>ComPtr:: InternalAddRef

Incrementa il conteggio dei riferimenti dell'interfaccia associata a questo `ComPtr`.

```cpp
void InternalAddRef() const;
```

### <a name="remarks"></a>Osservazioni

Questo metodo è protetto.

## <a name="internalrelease"></a>ComPtr:: InternalRelease

Esegue un'operazione di rilascio COM sull'interfaccia associata a questo `ComPtr`.

```cpp
void InternalRelease();
```

### <a name="remarks"></a>Osservazioni

Questo metodo è protetto.

## <a name="operator-ampersand"></a>&amp; ComPtr:: operator

Rilascia l'interfaccia associata a questo oggetto `ComPtr`, quindi recupera l'indirizzo dell'oggetto `ComPtr`.

```cpp
Details::ComPtrRef<WeakRef> operator&()

const Details::ComPtrRef<const WeakRef> operator&() const
```

### <a name="return-value"></a>Valore restituito

Riferimento debole alla `ComPtr`corrente.

### <a name="remarks"></a>Osservazioni

Questo metodo differisce da [ComPtr:: GetAddressOf](#getaddressof) in quanto questo metodo rilascia un riferimento al puntatore a interfaccia. Usare `ComPtr::GetAddressOf` quando è richiesto l'indirizzo del puntatore a interfaccia ma non si vuole rilasciare tale interfaccia.

## <a name="operator-arrow"></a>ComPtr:: operator-&gt;

Recupera un puntatore al tipo specificato dal parametro di modello corrente.

```cpp
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al tipo specificato dal nome del tipo di modello corrente.

### <a name="remarks"></a>Osservazioni

Questa funzione helper rimuove il sovraccarico non necessario causato dall'utilizzo della macro STDMETHOD. Questa funzione rende i tipi di `IUnknown` `private` invece di `virtual`.

## <a name="operator-assign"></a>ComPtr:: operator =

Assegna un valore al `ComPtr`corrente.

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
Classe.

*other*<br/>
Un puntatore, un riferimento o un riferimento rvalue a un tipo o a un altro `ComPtr`.

### <a name="return-value"></a>Valore restituito

Riferimento all'`ComPtr`corrente.

### <a name="remarks"></a>Osservazioni

La prima versione di questo operatore assegna un valore vuoto all'`ComPtr`corrente.

Nella seconda versione, se il puntatore all'interfaccia di assegnazione non è uguale al puntatore di interfaccia `ComPtr` corrente, il secondo puntatore di interfaccia viene assegnato alla `ComPtr`corrente.

Nella terza versione, il puntatore all'interfaccia di assegnazione viene assegnato alla `ComPtr`corrente.

Nella quarta versione, se il puntatore di interfaccia del valore di assegnazione non è uguale al puntatore di interfaccia `ComPtr` corrente, il secondo puntatore di interfaccia viene assegnato alla `ComPtr`corrente.

La Quinta versione è un operatore di copia; un riferimento a un `ComPtr` viene assegnato alla `ComPtr`corrente.

La sesta versione è un operatore di copia che usa la semantica di spostamento; riferimento rvalue a un `ComPtr` se un tipo è un cast statico e quindi assegnato alla `ComPtr`corrente.

La settima versione è un operatore di copia che usa la semantica di spostamento; un riferimento rvalue a un `ComPtr` di tipo *U* è il cast statico e assegnato al `ComPtr`corrente.

## <a name="operator-equality"></a>ComPtr:: operator = =

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

*a*<br/>
Riferimento a un oggetto `ComPtr`.

*b*<br/>
Riferimento a un altro oggetto `ComPtr`.

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce `true` se l'oggetto *a* è uguale all'oggetto *b*; in caso contrario, `false`.

Il secondo e il terzo operatore producono `true` se l'oggetto *a* è uguale a `nullptr`; in caso contrario, `false`.

## <a name="operator-inequality"></a>ComPtr:: operator! =

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

*a*<br/>
Riferimento a un oggetto `ComPtr`.

*b*<br/>
Riferimento a un altro oggetto `ComPtr`.

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce `true` se l'oggetto *a* non è uguale all'oggetto *b*; in caso contrario, `false`.

Il secondo e il terzo operatore producono `true` se l'oggetto *a* è diverso da `nullptr`; in caso contrario, `false`.

## <a name="operator-microsoft-wrl-details-booltype"></a>Operatore ComPtr:: operator Microsoft:: WRL::D etails:: BoolType

Indica se un `ComPtr` gestisce o meno la durata degli oggetti di un'interfaccia.

```cpp
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;
```

### <a name="return-value"></a>Valore restituito

Se un'interfaccia è associata a questo `ComPtr`, l'indirizzo del membro dati [BoolStruct:: member](boolstruct-structure.md#member) ; in caso contrario, `nullptr`.

## <a name="ptr"></a>ComPtr: tr_:p

Contiene un puntatore all'interfaccia associata a e gestita da questo `ComPtr`.

```cpp
InterfaceType *ptr_;
```

### <a name="remarks"></a>Osservazioni

`ptr_` è un membro dati interno protetto.

## <a name="releaseandgetaddressof"></a>ComPtr:: ReleaseAndGetAddressOf

Rilascia l'interfaccia associata a questo `ComPtr`, quindi recupera l'indirizzo del membro dati [ptr_](#ptr) , che contiene un puntatore all'interfaccia rilasciata.

```cpp
T** ReleaseAndGetAddressOf();
```

### <a name="return-value"></a>Valore restituito

Indirizzo del membro dati [ptr_](#ptr) di questo `ComPtr`.

## <a name="reset"></a>ComPtr:: Reset

Rilascia tutti i riferimenti per il puntatore all'interfaccia associata a questo `ComPtr`.

```cpp
unsigned long Reset();
```

### <a name="return-value"></a>Valore restituito

Numero di riferimenti rilasciati, se presenti.

## <a name="swap"></a>ComPtr:: swap

Scambia l'interfaccia gestita dal `ComPtr` corrente con l'interfaccia gestita dalla `ComPtr`specificata.

```cpp
void Swap(
   _Inout_ ComPtr&& r
);

void Swap(
   _Inout_ ComPtr& r
);
```

### <a name="parameters"></a>Parametri

*r*<br/>
`ComPtr`.

