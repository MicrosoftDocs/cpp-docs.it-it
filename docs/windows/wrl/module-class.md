---
title: Module (classe)
ms.date: 10/18/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module
- module/Microsoft::WRL::Module::Create
- module/Microsoft::WRL::Module::DecrementObjectCount
- module/Microsoft::WRL::Module::GetActivationFactory
- module/Microsoft::WRL::Module::GetClassObject
- module/Microsoft::WRL::Module::GetModule
- module/Microsoft::WRL::Module::GetObjectCount
- module/Microsoft::WRL::Module::IncrementObjectCount
- module/Microsoft::WRL::Module::Module
- module/Microsoft::WRL::Module::objectCount_Data
- module/Microsoft::WRL::Module::RegisterCOMObject
- module/Microsoft::WRL::Module::RegisterObjects
- module/Microsoft::WRL::Module::RegisterWinRTObject
- module/Microsoft::WRL::Module::releaseNotifier_
- module/Microsoft::WRL::Module::Terminate
- module/Microsoft::WRL::Module::~Module
- module/Microsoft::WRL::Module::UnregisterCOMObject
- module/Microsoft::WRL::Module::UnregisterObjects
- module/Microsoft::WRL::Module::UnregisterWinRTObject
helpviewer_keywords:
- Microsoft::WRL::Module class
- Microsoft::WRL::Module::Create method
- Microsoft::WRL::Module::DecrementObjectCount method
- Microsoft::WRL::Module::GetActivationFactory method
- Microsoft::WRL::Module::GetClassObject method
- Microsoft::WRL::Module::GetModule method
- Microsoft::WRL::Module::GetObjectCount method
- Microsoft::WRL::Module::IncrementObjectCount method
- Microsoft::WRL::Module::Module, constructor
- Microsoft::WRL::Module::objectCount_ data member
- Microsoft::WRL::Module::RegisterCOMObject method
- Microsoft::WRL::Module::RegisterObjects method
- Microsoft::WRL::Module::RegisterWinRTObject method
- Microsoft::WRL::Module::releaseNotifier_ data member
- Microsoft::WRL::Module::Terminate method
- Microsoft::WRL::Module::~Module, destructor
- Microsoft::WRL::Module::UnregisterCOMObject method
- Microsoft::WRL::Module::UnregisterObjects method
- Microsoft::WRL::Module::UnregisterWinRTObject method
ms.assetid: dd67e3b8-c2e1-4f53-8c0f-565a140ba649
ms.openlocfilehash: db3eb123382ac70f6198d094c5eb3fe44d3bbcd9
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336635"
---
# <a name="module-class"></a>Module (classe)

Rappresenta una raccolta di oggetti correlati.

## <a name="syntax"></a>Sintassi

```cpp
template<ModuleType moduleType>
class Module;

template<>
class Module<InProc> : public Details::ModuleBase;

template<>
class Module<OutOfProc> : public Module<InProc>;
```

### <a name="parameters"></a>Parametri

*moduleType*<br/>
Una combinazione di uno o più [ModuleType](moduletype-enumeration.md) valori di enumerazione.

## <a name="members"></a>Membri

### <a name="protected-classes"></a>Classi protette

nome                                                                                | Descrizione
----------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------
[Module:: genericreleasenotifier](module-genericreleasenotifier-class.md) | Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore dell'evento è specificato da un'espressione lambda, funtore o puntatore a funzione.
[Module:: methodreleasenotifier](module-methodreleasenotifier-class.md)   | Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e il relativo membro puntatore al metodo.
[Module::ReleaseNotifier](module-releasenotifier-class.md)               | Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                             | Descrizione
-------------------------------- | -----------------------------------------------------------
[Module:: ~ Module](#tilde-module) | Deinizializza l'istanza corrente del `Module` classe.

### <a name="protected-constructors"></a>Costruttori protetti

Nome                      | Descrizione
------------------------- | ---------------------------------------------------
[Module:: module](#module) | Inizializza una nuova istanza della classe `Module`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                    | Descrizione
------------------------------------------------------- | --------------------------------------------------------------------------------------------------
[Module:: Create](#create)                               | Crea un'istanza di un modulo.
[Module::DecrementObjectCount](#decrementobjectcount)   | Decrementa il numero di oggetti registrati dal modulo.
[Module::GetActivationFactory](#getactivationfactory)   | Ottiene una factory di attivazione per il modulo.
[Module::GetClassObject](#getclassobject)               | Recupera una cache di class factory.
[Module::GetModule](#getmodule)                         | Crea un'istanza di un modulo.
[Module::GetObjectCount](#getobjectcount)               | Recupera il numero di oggetti gestiti da questo modulo.
[Module::IncrementObjectCount](#incrementobjectcount)   | Incrementa il numero di oggetti registrati dal modulo.
[Module::RegisterCOMObject](#registercomobject)         | Registra uno o più oggetti COM in modo che altre applicazioni possono connettersi a essi.
[Module::RegisterObjects](#registerobjects)             | Registra gli oggetti COM o Windows Runtime in modo che altre applicazioni possono connettersi a essi.
[Module::RegisterWinRTObject](#registerwinrtobject)     | Registra uno o più oggetti di Windows Runtime in modo che altre applicazioni possono connettersi a essi.
[Module:: Terminate](#terminate)                         | Fa sì che tutte le factory creata un'istanza mediante il modulo da arrestare.
[Module::UnregisterCOMObject](#unregistercomobject)     | Annulla la registrazione di uno o più oggetti COM, che impedisce che altre applicazioni si connettano a essi.
[Module::UnregisterObjects](#unregisterobjects)         | Annulla la registrazione di oggetti nel modulo specificato in modo che altre applicazioni non è possibile connettersi a esse.
[Module::UnregisterWinRTObject](#unregisterwinrtobject) | Annulla la registrazione di uno o più oggetti di Windows Runtime in modo che altre applicazioni non è possibile connettersi a esse.

### <a name="protected-methods"></a>Metodi protetti

Nome                      | Descrizione
------------------------- | --------------------------------
[Module:: Create](#create) | Crea un'istanza di un modulo.

### <a name="protected-data-members"></a>Membri dati protetti

nome                                         | Descrizione
-------------------------------------------- | --------------------------------------------------------------------------------------------------------
[Module::objectCount_](#objectcount)         | Tiene traccia del numero di classi siano stato creato con la [rendere](make-function.md) (funzione).
[Module::releaseNotifier_](#releasenotifier) | Contiene un puntatore a un `ReleaseNotifier` oggetto.

### <a name="macros"></a>Macro

Nome | Descrizione-----| --- [ActivatableClass](activatableclass-macros.md) |  Popola una cache interna che contiene una factory che è possibile creare un'istanza della classe specificata. Questa macro specifica parametri di ID di factory e il gruppo predefinito.
[ActivatableClassWithFactory](activatableclass-macros.md) | Popola una cache interna che contiene una factory che è possibile creare un'istanza della classe specificata. Questa macro consente di specificare un parametro particolare factory.
[ActivatableClassWithFactoryEx](activatableclass-macros.md) | Popola una cache interna che contiene una factory che è possibile creare un'istanza della classe specificata. Questa macro consente di specificare factory particolare e parametri dell'ID del gruppo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ModuleBase`

`Module`

`Module`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="tilde-module"></a>Module:: ~ Module

Deinizializza l'istanza corrente del `Module` classe.

```cpp
virtual ~Module();
```

## <a name="create"></a>Module:: Create

Crea un'istanza di un modulo.

```cpp
WRL_NOTHROW static Module& Create();
template<typename T>
WRL_NOTHROW static Module& Create(
   T callback
);
template<typename T>
WRL_NOTHROW static Module& Create(
   _In_ T* object,
   _In_ void (T::* method)()
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di modulo.

*callback*<br/>
Chiamato quando viene rilasciato l'ultimo oggetto istanza del modulo.

*object*<br/>
Il *oggetti* e *metodo* i parametri vengono utilizzati in combinazione. Punta all'ultimo oggetto dell'istanza quando viene rilasciato l'ultimo oggetto istanza del modulo.

*method*<br/>
Il *oggetti* e *metodo* i parametri vengono utilizzati in combinazione. Punta al metodo dell'oggetto dell'ultima istanza quando viene rilasciato l'ultimo oggetto istanza del modulo.

### <a name="return-value"></a>Valore restituito

Riferimento al modulo.

## <a name="decrementobjectcount"></a>Module::DecrementObjectCount

Decrementa il numero di oggetti registrati dal modulo.

```cpp
virtual long DecrementObjectCount();
```

### <a name="return-value"></a>Valore restituito

Il conteggio prima dell'operazione di decremento.

## <a name="getactivationfactory"></a>Module::GetActivationFactory

Ottiene una factory di attivazione per il modulo.

```cpp
WRL_NOTHROW HRESULT GetActivationFactory(
   _In_ HSTRING pActivatibleClassId,
   _Deref_out_ IActivationFactory **ppIFactory,
   wchar_t* serverName = nullptr
);
```

### <a name="parameters"></a>Parametri

*pActivatibleClassId*<br/>
IID di una classe di runtime.

*ppIFactory*<br/>
IActivationFactory per la classe di runtime specificato.

*serverName*<br/>
Il nome di un subset di class factory nel modulo corrente. Specificare il nome del server usato nel [ActivatableClassWithFactoryEx](activatableclass-macros.md) (macro), oppure specificare `nullptr` per ottenere il nome del server predefinito.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, il valore HRESULT restituito dal GetActivationFactory.

## <a name="getclassobject"></a>Module::GetClassObject

Recupera una cache di class factory.

```cpp
HRESULT GetClassObject(
   REFCLSID clsid,
   REFIID riid,
   _Deref_out_ void **ppv,
   wchar_t* serverName = nullptr
);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
ID della classe.

*riid*<br/>
ID di interfaccia richiesto.

*ppv*<br/>
Puntatore all'oggetto restituito.

*serverName*<br/>
Il nome del server specificato in entrambi i `ActivatableClassWithFactory`, `ActivatableClassWithFactoryEx`, o `ActivatableClass` macro; o `nullptr` per ottenere il nome del server predefinito.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Usare questo metodo solo per COM, non il Runtime di Windows. Questo metodo espone solo `IClassFactory` metodi.

## <a name="getmodule"></a>Module:: GetModule

Crea un'istanza di un modulo.

```cpp
static Module& GetModule();
WRL_NOTHROW static Module& GetModule();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a un modulo.

## <a name="getobjectcount"></a>Module::GetObjectCount

Recupera il numero di oggetti gestiti da questo modulo.

```cpp
virtual long GetObjectCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero corrente di oggetti gestiti da questo modulo.

## <a name="incrementobjectcount"></a>Module::IncrementObjectCount

Incrementa il numero di oggetti registrati dal modulo.

```cpp
virtual long IncrementObjectCount();
```

### <a name="return-value"></a>Valore restituito

Il conteggio prima dell'operazione di incremento.

## <a name="module"></a>Module:: module

Inizializza una nuova istanza della classe `Module`.

```cpp
Module();
```

### <a name="remarks"></a>Note

Questo costruttore è protetto e non può essere chiamato con il `new` (parola chiave). In alternativa, chiamare [Module:: GetModule](#getmodule) oppure [Module:: Create](#create).

## <a name="objectcount"></a>Module::objectCount_

Tiene traccia del numero di classi siano stato creato con la [rendere](make-function.md) (funzione).

```cpp
volatile long objectCount_;
```

## <a name="registercomobject"></a>Module::RegisterCOMObject

Registra uno o più oggetti COM in modo che altre applicazioni possono connettersi a essi.

```cpp
WRL_NOTHROW virtual HRESULT RegisterCOMObject(
   const wchar_t* serverName,
   IID* clsids,
   IClassFactory** factories,
   DWORD* cookies,
   unsigned int count);
```

### <a name="parameters"></a>Parametri

*serverName*<br/>
Nome completo di un server.

*clsids*<br/>
Matrice di CLSID da registrare.

*factories*<br/>
Matrice di interfacce IUnknown degli oggetti classe cui disponibilità è in corso di pubblicazione.

*cookies*<br/>
Al termine dell'operazione, una matrice di puntatori ai valori che identificano la classe di oggetti che sono stati registrati. Questi valori vengono usati in un secondo momento revocare la registrazione.

*count*<br/>
Il numero di CLSID da registrare.

### <a name="return-value"></a>Valore restituito

S_OK se zioni riuscite; in caso contrario, HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per l'operazione non riuscita.

### <a name="remarks"></a>Note

Gli oggetti COM vengono registrati con l'enumeratore CLSCTX_LOCAL_SERVER dell'enumerazione CLSCTX.

Il tipo di connessione per gli oggetti registrati viene specificato tramite la combinazione dell'oggetto corrente *comflag* parametro di modello e l'enumeratore REGCLS_SUSPENDED dell'enumerazione REGCLS.

## <a name="registerobjects"></a>Module::RegisterObjects

Registra gli oggetti COM o Windows Runtime in modo che altre applicazioni possono connettersi a essi.

```cpp
HRESULT RegisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### <a name="parameters"></a>Parametri

*module*<br/>
Una matrice di oggetti COM o Windows Runtime.

*serverName*<br/>
Nome del server che ha creato gli oggetti.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che indica il motivo per l'operazione non riuscita.

## <a name="registerwinrtobject"></a>Module::RegisterWinRTObject

Registra uno o più oggetti di Windows Runtime in modo che altre applicazioni possono connettersi a essi.

```cpp
HRESULT RegisterWinRTObject(const wchar_t* serverName,
   wchar_t** activatableClassIds,
   WINRT_REGISTRATION_COOKIE* cookie,
   unsigned int count)
```

### <a name="parameters"></a>Parametri

*serverName*<br/>
Un nome che specifichi un sottoinsieme degli oggetti interessati da questa operazione.

*activatableClassIds*<br/>
Matrice di attivabile CLSID da registrare.

*cookie*<br/>
Un valore che identifica gli oggetti della classe che sono stati registrati. Questo valore viene utilizzato in un secondo momento per revocare la registrazione.

*count*<br/>
Il numero di oggetti da registrare.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, un errore HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per l'operazione non riuscita.

## <a name="releasenotifier"></a>Module::releaseNotifier_

Contiene un puntatore a un `ReleaseNotifier` oggetto.

```cpp
ReleaseNotifier *releaseNotifier_;
```

## <a name="terminate"></a>Module:: Terminate

Fa sì che tutte le factory creata un'istanza mediante il modulo da arrestare.

```cpp
void Terminate();
```

### <a name="remarks"></a>Note

Rilascia le factory nella cache.

## <a name="unregistercomobject"></a>Module:: unregistercomobject

Annulla la registrazione di uno o più oggetti COM, che impedisce che altre applicazioni si connettano a essi.

```cpp
virtual HRESULT UnregisterCOMObject(
   const wchar_t* serverName,
   DWORD* cookies,
   unsigned int count
```

### <a name="parameters"></a>Parametri

*serverName*<br/>
(Non usato)

*cookies*<br/>
Matrice di puntatori a valori che identificano gli oggetti della classe per cui annullare la registrazione. La matrice è stata creata con il [RegisterCOMObject](#registercomobject) (metodo).

*count*<br/>
Il numero di classi per annullare la registrazione.

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione ha esito positivo. in caso contrario, un errore HRESULT che indica il motivo per l'operazione non riuscita.

## <a name="unregisterobjects"></a>Module:: unregisterobjects

Annulla la registrazione di oggetti nel modulo specificato in modo che altre applicazioni non è possibile connettersi a esse.

```cpp
HRESULT UnregisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### <a name="parameters"></a>Parametri

*module*<br/>
Puntatore a un modulo.

*serverName*<br/>
Nome originale che specifica un subset di oggetti interessati dall'operazione.

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione ha esito positivo. in caso contrario, un errore HRESULT che indica il motivo per questa operazione non riuscita.

## <a name="unregisterwinrtobject"></a>Module::UnregisterWinRTObject

Annulla la registrazione di uno o più oggetti di Windows Runtime in modo che altre applicazioni non è possibile connettersi a esse.

```cpp
virtual HRESULT UnregisterWinRTObject(
   unsigned int,
   _Inout_ WINRT_REGISTRATION_COOKIE* cookie
);
```

### <a name="parameters"></a>Parametri

*cookie*<br/>
Puntatore a un valore che identifica l'oggetto di classe il cui registrazione viene revocato.
