---
title: ComPtr (classe)
ms.date: 10/01/2018
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
ms.openlocfilehash: da6d0761b60257bc4b0232123d179e9c04465844
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336636"
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
L'interfaccia che il `ComPtr` rappresenta.

*U*<br/>
Una classe alla quale corrente `ComPtr` è un elemento friend. (Il modello che usa questo parametro è protetto.)

## <a name="remarks"></a>Note

`ComPtr<>` dichiara un tipo che rappresenta il puntatore di interfaccia sottostante. Usare `ComPtr<>` per dichiarare una variabile e quindi usare l'operatore freccia di accesso ai membri (`->`) per accedere a una funzione membro di interfaccia.

Per altre informazioni sui puntatori intelligenti, vedere la sottosezione "Puntatori intelligenti COM" del [COM Coding Practices](/windows/desktop/LearnWin32/com-coding-practices) argomento in MSDN Library.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome            | Descrizione
--------------- | ---------------------------------------------------------------
`InterfaceType` | Un sinonimo per il tipo specificato per il *T* parametro di modello.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                             | Descrizione
-------------------------------- | --------------------------------------------------------------------------------------------------------------------
[ComPtr::ComPtr](#comptr)        | Inizializza una nuova istanza della classe `ComPtr`. Gli overload forniscono costruttori predefiniti, di copia, di spostamento e di conversione.
[ComPtr:: ~ ComPtr](#tilde-comptr) | Deinizializza un'istanza di `ComPtr`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                      | Descrizione
--------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ComPtr::As](#as)                                         | Restituisce un `ComPtr` oggetto che rappresenta l'interfaccia identificata dal parametro di modello specificato.
[ComPtr::AsIID](#asiid)                                   | Restituisce un `ComPtr` oggetto che rappresenta l'interfaccia identificata dall'ID dell'interfaccia specificata.
[ComPtr::AsWeak](#asweak)                                 | Restituisce un riferimento debole all'oggetto corrente.
[ComPtr::Attach](#attach)                                 | Associa questo `ComPtr` con il tipo di interfaccia specificato dal parametro del tipo di modello corrente.
[ComPtr::CopyTo](#copyto)                                 | Copia l'interfaccia corrente o specificata associato a questo `ComPtr` al puntatore di output specificato.
[ComPtr::Detach](#detach)                                 | Rimuove l'associazione di questo `ComPtr` dall'interfaccia da essa rappresentato.
[ComPtr::Get](#get)                                       | Recupera un puntatore all'interfaccia associata a questo `ComPtr`.
[ComPtr::GetAddressOf](#getaddressof)                     | Recupera l'indirizzo del [PTR _](#ptr) membro dei dati, che contiene un puntatore all'interfaccia rappresentata da questo `ComPtr`.
[ComPtr::ReleaseAndGetAddressOf](#releaseandgetaddressof) | Rilascia l'interfaccia associato a questo `ComPtr` e quindi recupera l'indirizzo del [PTR _](#ptr) membro dei dati, che contiene un puntatore a interfaccia che è stata rilasciata.
[ComPtr::Reset](#reset)                                   | Rilascia tutti i riferimenti del puntatore all'interfaccia associata a questo `ComPtr`.
[ComPtr::Swap](#swap)                                     | Scambia l'interfaccia gestita dall'oggetto corrente `ComPtr` con l'interfaccia gestita dall'oggetto specificato `ComPtr`.

### <a name="protected-methods"></a>Metodi protetti

Nome                                        | Descrizione
------------------------------------------- | --------------------------------------------------------------------------------
[ComPtr::InternalAddRef](#internaladdref)   | Incrementa il conteggio dei riferimenti dell'interfaccia associato a questo `ComPtr`.
[ComPtr::InternalRelease](#internalrelease) | Esegue un'operazione di rilascio COM sull'interfaccia associata a questo `ComPtr`.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                                                           | Descrizione
---------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------
[ComPtr::operator&](#operator-ampersand)                                                       | Recupera l'indirizzo dell'oggetto corrente `ComPtr`.
[ComPtr::operator->](#operator-arrow)                                                          | Recupera un puntatore al tipo specificato dal parametro di modello corrente.
[ComPtr::operator=](#operator-assign)                                                          | Assegna un valore all'oggetto corrente `ComPtr`.
[ComPtr::operator==](#operator-equality)                                                       | Indica se due oggetti `ComPtr` sono uguali.
[ComPtr::operator!=](#operator-inequality)                                                     | Indica se due oggetti `ComPtr` non sono uguali.
[Operatore comptr:: booltype](#operator-microsoft-wrl-details-booltype) | Indica o meno un `ComPtr` gestisce la durata dell'oggetto di un'interfaccia.

### <a name="protected-data-members"></a>Membri dati protetti

nome                 | Descrizione
-------------------- | ------------------------------------------------------------------------------------------
[ComPtr::ptr_](#ptr) | Contiene un puntatore a interfaccia che viene associato e gestito tramite questa `ComPtr`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="tilde-comptr"></a>ComPtr:: ~ ComPtr

Deinizializza un'istanza di `ComPtr`.

```cpp
WRL_NOTHROW ~ComPtr();
```

## <a name="as"></a>ComPtr::As

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
L'interfaccia per essere rappresentato dal parametro *p*.

*p*<br/>
Oggetto `ComPtr` oggetto che rappresenta l'interfaccia specificata dal parametro *U*. Parametro *p* non deve fare riferimento all'oggetto corrente `ComPtr` oggetto.

### <a name="remarks"></a>Note

Il primo modello è il form da usare nel codice. Il secondo modello è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../../cpp/auto-cpp.md) .

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="asiid"></a>ComPtr::AsIID

Restituisce un `ComPtr` oggetto che rappresenta l'interfaccia identificata dall'ID dell'interfaccia specificata.

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
Se l'oggetto presenta un'interfaccia il cui ID corrisponde *riid*, un puntatore indiretto doppio a un'interfaccia specificata per il *riid* parametro; in caso contrario, un puntatore a `IUnknown`.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="asweak"></a>ComPtr::AsWeak

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

## <a name="attach"></a>ComPtr::Attach

Associa questo `ComPtr` con il tipo di interfaccia specificato dal parametro del tipo di modello corrente.

```cpp
void Attach(
   _In_opt_ InterfaceType* other
);
```

### <a name="parameters"></a>Parametri

*other*<br/>
Un tipo di interfaccia.

## <a name="comptr"></a>ComPtr::ComPtr

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
   typename ENABLE_IF<__is_convertible_to(U*,
   T*),
   void *>;
WRL_NOTHROW ComPtr(
   _Inout_ ComPtr &&other
);
template<class U>
WRL_NOTHROW ComPtr(
   _Inout_ ComPtr<U>&& other,
   typename ENABLE_IF<__is_convertible_to(U*,
   T*),
   void *>;
```

### <a name="parameters"></a>Parametri

*U*<br/>
Il tipo dei *altri* parametro.

*other*<br/>
Un oggetto di tipo *U*.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Il primo costruttore è il costruttore predefinito, quale modo implicito crea un oggetto vuoto. Il secondo costruttore viene specificato [nullptr](../nullptr-cpp-component-extensions.md), che crea in modo esplicito un oggetto vuoto.

Il terzo costruttore crea un oggetto dall'oggetto specificato da un puntatore.

Il quarto e quinto costruttore sono costruttori di copia. Il quinto costruttore copia un oggetto se è convertibile nel tipo corrente.

Il sesto e il settimo costruttore sono costruttori di spostamento. Il settimo costruttore sposta un oggetto se è convertibile nel tipo corrente.

## <a name="copyto"></a>ComPtr::CopyTo

Copia l'interfaccia corrente o specificata associato a questo `ComPtr` all'indicatore di misura specificata.

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
Quando questa operazione viene completata, un puntatore all'interfaccia richiesta.

*riid*<br/>
ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che indica il motivo implicito `QueryInterface` operazione non riuscita.

### <a name="remarks"></a>Note

La prima funzione restituisce una copia di un puntatore all'interfaccia associato a questo `ComPtr`. Questa funzione restituisce sempre S_OK.

La seconda funzione viene eseguita una `QueryInterface` operazione sull'interfaccia associato a questo `ComPtr` per l'interfaccia specificata dalle *riid* parametro.

La terza funzione esegue una `QueryInterface` operazione sull'interfaccia associato a questo `ComPtr` per l'interfaccia sottostante del *U* parametro.

## <a name="detach"></a>ComPtr::Detach

Rimuove l'associazione di questo oggetto `ComPtr` dall'interfaccia da esso rappresentata.

```cpp
T* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia rappresentata da questo oggetto `ComPtr`.

## <a name="get"></a>ComPtr::Get

Recupera un puntatore all'interfaccia associata a questo `ComPtr`.

```cpp
T* Get() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia associata a questo `ComPtr`.

## <a name="getaddressof"></a>ComPtr::GetAddressOf

Recupera l'indirizzo del [PTR _](#ptr) membro dei dati, che contiene un puntatore all'interfaccia rappresentata da questo `ComPtr`.

```cpp
T* const* GetAddressOf() const;
T** GetAddressOf();
```

### <a name="return-value"></a>Valore restituito

L'indirizzo di una variabile.

## <a name="internaladdref"></a>ComPtr::InternalAddRef

Incrementa il conteggio dei riferimenti dell'interfaccia associato a questo `ComPtr`.

```cpp
void InternalAddRef() const;
```

### <a name="remarks"></a>Note

Questo metodo è protetto.

## <a name="internalrelease"></a>ComPtr::InternalRelease

Esegue un'operazione di rilascio COM sull'interfaccia associata a questo `ComPtr`.

```cpp
void InternalRelease();
```

### <a name="remarks"></a>Note

Questo metodo è protetto.

## <a name="operator-ampersand"></a>ComPtr::operator&amp;

Rilascia l'interfaccia associato a questo `ComPtr` dell'oggetto e quindi recupera l'indirizzo del `ComPtr` oggetto.

```cpp
Details::ComPtrRef<WeakRef> operator&()

const Details::ComPtrRef<const WeakRef> operator&() const
```

### <a name="return-value"></a>Valore restituito

Un riferimento debole all'oggetto corrente `ComPtr`.

### <a name="remarks"></a>Note

Questo metodo è diverso da [comptr:: Getaddressof](#getaddressof) in quanto questo metodo rilascia un riferimento al puntatore a interfaccia. Usare `ComPtr::GetAddressOf` quando si richiedono l'indirizzo del puntatore a interfaccia ma non si desidera rilasciare tale interfaccia.

## <a name="operator-arrow"></a>ComPtr::operator-&gt;

Recupera un puntatore al tipo specificato dal parametro di modello corrente.

```cpp
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al tipo specificato dal nome del tipo di modello corrente.

### <a name="remarks"></a>Note

Questa funzione di supporto rimuove un sovraccarico non necessario quando si utilizza lo STDMETHOD (macro). Questa funzione rende `IUnknown` tipi `private` invece di `virtual`.

## <a name="operator-assign"></a>ComPtr::operator=

Assegna un valore all'oggetto corrente `ComPtr`.

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
Una classe.

*other*<br/>
Un puntatore, riferimento o riferimento rvalue a un tipo o un altro `ComPtr`.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto corrente `ComPtr`.

### <a name="remarks"></a>Note

La prima versione di questo operatore assegna un valore vuoto all'attuale `ComPtr`.

Nella seconda versione, se il puntatore di interfaccia di assegnazione non è quello utilizzato per l'oggetto corrente `ComPtr` puntatore a interfaccia, il secondo puntatore a interfaccia viene assegnato all'oggetto corrente `ComPtr`.

Nella terza versione, il puntatore a interfaccia assegnazione viene assegnato all'oggetto corrente `ComPtr`.

Nella quarta versione, se il puntatore di interfaccia del valore di assegnazione non è quello utilizzato per l'oggetto corrente `ComPtr` puntatore a interfaccia, il secondo puntatore a interfaccia viene assegnato all'oggetto corrente `ComPtr`.

La quinta versione è un operatore di copia. un riferimento a un `ComPtr` viene assegnato all'oggetto corrente `ComPtr`.

La sesta versione è un operatore di copia che usa la semantica; di spostamento un riferimento rvalue a un `ComPtr` se è statico qualsiasi tipo di cast e quindi assegnata all'oggetto corrente `ComPtr`.

La versione del settima è un operatore di copia che usa la semantica; di spostamento un riferimento rvalue a un `ComPtr` typu *U* è static cast quindi e assegnato all'oggetto corrente `ComPtr`.

## <a name="operator-equality"></a>ComPtr::operator==

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
Un riferimento a un altro `ComPtr` oggetto.

### <a name="return-value"></a>Valore restituito

Primo operatore rese `true` se oggetti *una* è uguale all'oggetto *b*; in caso contrario, `false`.

Il secondo e terzo operatore yield `true` se oggetti *una* è uguale a `nullptr`; in caso contrario, `false`.

## <a name="operator-inequality"></a>ComPtr::operator!=

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
Un riferimento a un altro `ComPtr` oggetto.

### <a name="return-value"></a>Valore restituito

Primo operatore rese `true` se oggetti *una* non è uguale all'oggetto *b*; in caso contrario, `false`.

Il secondo e terzo operatore yield `true` se oggetti *una* non è uguale a `nullptr`; in caso contrario, `false`.

## <a name="operator-microsoft-wrl-details-booltype"></a>Operatore comptr:: booltype

Indica o meno un `ComPtr` gestisce la durata dell'oggetto di un'interfaccia.

```cpp
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;
```

### <a name="return-value"></a>Valore restituito

Se un'interfaccia è associata a questo `ComPtr`, l'indirizzo del [boolstruct::](boolstruct-structure.md#member) membro dati; in caso contrario, `nullptr`.

## <a name="ptr"></a>ComPtr::ptr_

Contiene un puntatore a interfaccia che viene associato e gestito tramite questa `ComPtr`.

```cpp
InterfaceType *ptr_;
```

### <a name="remarks"></a>Note

`ptr_` è un membro dati protetta, interna.

## <a name="releaseandgetaddressof"></a>ComPtr::ReleaseAndGetAddressOf

Rilascia l'interfaccia associato a questo `ComPtr` e quindi recupera l'indirizzo del [PTR _](#ptr) membro dei dati, che contiene un puntatore a interfaccia che è stata rilasciata.

```cpp
T** ReleaseAndGetAddressOf();
```

### <a name="return-value"></a>Valore restituito

L'indirizzo del [PTR _](#ptr) membro dati di questo `ComPtr`.

## <a name="reset"></a>ComPtr::Reset

Rilascia tutti i riferimenti del puntatore all'interfaccia associata a questo `ComPtr`.

```cpp
unsigned long Reset();
```

### <a name="return-value"></a>Valore restituito

Numero di riferimenti rilasciati, se presenti.

## <a name="swap"></a>ComPtr::Swap

Scambia l'interfaccia gestita dall'oggetto corrente `ComPtr` con l'interfaccia gestita dall'oggetto specificato `ComPtr`.

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
Oggetto `ComPtr`.

