---
description: 'Altre informazioni su: classe modulo'
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
ms.openlocfilehash: 00063bca4d35ca2d7eab09ad9d03d57dcdc85593
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186389"
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
Combinazione di uno o più valori di enumerazione [ModuleType](moduletype-enumeration.md) .

## <a name="members"></a>Membri

### <a name="protected-classes"></a>Classi protette

Nome                                                                                | Description
----------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------
[Module:: GenericReleaseNotifier](module-genericreleasenotifier-class.md) | Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da su un lambda, un functor o un puntatore a funzione.
[Module:: MethodReleaseNotifier](module-methodreleasenotifier-class.md)   | Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e dal relativo membro puntatore a metodo.
[Module:: ReleaseNotifier](module-releasenotifier-class.md)               | Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                             | Description
-------------------------------- | -----------------------------------------------------------
[Modulo Module:: ~](#tilde-module) | Consente di deinizializzare l'istanza corrente della `Module` classe.

### <a name="protected-constructors"></a>Costruttori protetti

Nome                      | Description
------------------------- | ---------------------------------------------------
[Module:: module](#module) | Inizializza una nuova istanza della classe `Module`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                    | Description
------------------------------------------------------- | --------------------------------------------------------------------------------------------------
[Module:: create](#create)                               | Crea un'istanza di un modulo.
[Modulo::D ecrementObjectCount](#decrementobjectcount)   | Decrementa il numero di oggetti rilevati dal modulo.
[Module:: GetActivationFactory](#getactivationfactory)   | Ottiene una factory di attivazione per il modulo.
[Module:: GetClassObject](#getclassobject)               | Recupera una cache di class factory.
[Module:: GetModule](#getmodule)                         | Crea un'istanza di un modulo.
[Module:: GetObjectCount](#getobjectcount)               | Recupera il numero di oggetti gestiti da questo modulo.
[Module:: IncrementObjectCount](#incrementobjectcount)   | Incrementa il numero di oggetti rilevati dal modulo.
[Module:: RegisterCOMObject](#registercomobject)         | Registra uno o più oggetti COM in modo che le altre applicazioni possano connettersi a esse.
[Module:: RegisterObjects](#registerobjects)             | Registra gli oggetti COM o Windows Runtime in modo che possano connettersi ad altre applicazioni.
[Module:: RegisterWinRTObject](#registerwinrtobject)     | Registra uno o più oggetti Windows Runtime in modo che le altre applicazioni possano connettersi a esse.
[Module:: terminate](#terminate)                         | Causa l'arresto di tutte le factory di cui è stata creata un'istanza dal modulo.
[Module:: UnregisterCOMObject](#unregistercomobject)     | Annulla la registrazione di uno o più oggetti COM, che impedisce ad altre applicazioni di connettersi a esse.
[Module:: UnregisterObjects](#unregisterobjects)         | Annulla la registrazione degli oggetti nel modulo specificato in modo che le altre applicazioni non possano connettersi a esse.
[Module:: UnregisterWinRTObject](#unregisterwinrtobject) | Annulla la registrazione di uno o più oggetti Windows Runtime in modo che le altre applicazioni non possano connettersi a esse.

### <a name="protected-methods"></a>Metodi protetti

Nome                      | Description
------------------------- | --------------------------------
[Module:: create](#create) | Crea un'istanza di un modulo.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                                         | Description
-------------------------------------------- | --------------------------------------------------------------------------------------------------------
[Modulo:: objectCount_](#objectcount)         | Tiene traccia del numero di classi create con la funzione [make](make-function.md) .
[Modulo:: releaseNotifier_](#releasenotifier) | Include un puntatore a un `ReleaseNotifier` oggetto.

### <a name="macros"></a>Macro

Nome                                                                   | Description
---------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ActivatableClass](activatableclass-macros.md)              | Popola una cache interna che contiene una factory in grado di creare un'istanza della classe specificata. Questa macro specifica i parametri predefiniti di Factory e ID gruppo.
[ActivatableClassWithFactory](activatableclass-macros.md)   | Popola una cache interna che contiene una factory in grado di creare un'istanza della classe specificata. Questa macro consente di specificare un determinato parametro Factory.
[ActivatableClassWithFactoryEx](activatableclass-macros.md) | Popola una cache interna che contiene una factory in grado di creare un'istanza della classe specificata. Questa macro consente di specificare determinati parametri di Factory e ID di gruppo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ModuleBase`

`Module`

`Module`

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="modulemodule"></a><a name="tilde-module"></a> Modulo Module:: ~

Consente di deinizializzare l'istanza corrente della `Module` classe.

```cpp
virtual ~Module();
```

## <a name="modulecreate"></a><a name="create"></a> Module:: create

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
I parametri *oggetto* e *Metodo* vengono utilizzati in combinazione. Punta all'ultimo oggetto istanza quando viene rilasciato l'ultimo oggetto istanza del modulo.

*Metodo*<br/>
I parametri *oggetto* e *Metodo* vengono utilizzati in combinazione. Punta al metodo dell'ultimo oggetto istanza quando viene rilasciato l'ultimo oggetto istanza del modulo.

### <a name="return-value"></a>Valore restituito

Riferimento al modulo.

## <a name="moduledecrementobjectcount"></a><a name="decrementobjectcount"></a> Modulo::D ecrementObjectCount

Decrementa il numero di oggetti rilevati dal modulo.

```cpp
virtual long DecrementObjectCount();
```

### <a name="return-value"></a>Valore restituito

Conteggio prima dell'operazione di decremento.

## <a name="modulegetactivationfactory"></a><a name="getactivationfactory"></a> Module:: GetActivationFactory

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
IID di una classe di Runtime.

*ppIFactory*<br/>
IActivationFactory per la classe di runtime specificata.

*serverName*<br/>
Nome di un subset di class factory nel modulo corrente. Specificare il nome del server utilizzato nella macro [ActivatableClassWithFactoryEx](activatableclass-macros.md) oppure specificare **`nullptr`** per ottenere il nome del server predefinito.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, HRESULT restituito da GetActivationFactory.

## <a name="modulegetclassobject"></a><a name="getclassobject"></a> Module:: GetClassObject

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

*CLSID*<br/>
ID classe.

*riid*<br/>
ID di interfaccia richiesta.

*PPV*<br/>
Puntatore all'oggetto restituito.

*serverName*<br/>
Nome del server specificato nella macro, o oppure `ActivatableClassWithFactory` `ActivatableClassWithFactoryEx` `ActivatableClass` **`nullptr`** per ottenere il nome del server predefinito.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Usare questo metodo solo per COM, non per il Windows Runtime. Questo metodo espone solo i `IClassFactory` metodi.

## <a name="modulegetmodule"></a><a name="getmodule"></a> Module:: GetModule

Crea un'istanza di un modulo.

```cpp
static Module& GetModule();
WRL_NOTHROW static Module& GetModule();
```

### <a name="return-value"></a>Valore restituito

Riferimento a un modulo.

## <a name="modulegetobjectcount"></a><a name="getobjectcount"></a> Module:: GetObjectCount

Recupera il numero di oggetti gestiti da questo modulo.

```cpp
virtual long GetObjectCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero corrente di oggetti gestiti da questo modulo.

## <a name="moduleincrementobjectcount"></a><a name="incrementobjectcount"></a> Module:: IncrementObjectCount

Incrementa il numero di oggetti rilevati dal modulo.

```cpp
virtual long IncrementObjectCount();
```

### <a name="return-value"></a>Valore restituito

Conteggio prima dell'operazione di incremento.

## <a name="modulemodule"></a><a name="module"></a> Module:: module

Inizializza una nuova istanza della classe `Module`.

```cpp
Module();
```

### <a name="remarks"></a>Commenti

Questo costruttore è protetto e non può essere chiamato con la **`new`** parola chiave. Chiamare invece [Module:: GetModule](#getmodule) o [Module:: create](#create).

## <a name="moduleobjectcount_"></a><a name="objectcount"></a> Modulo:: objectCount_

Tiene traccia del numero di classi create con la funzione [make](make-function.md) .

```cpp
volatile long objectCount_;
```

## <a name="moduleregistercomobject"></a><a name="registercomobject"></a> Module:: RegisterCOMObject

Registra uno o più oggetti COM in modo che le altre applicazioni possano connettersi a esse.

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

*CLSID*<br/>
Matrice di CLSID da registrare.

*factories*<br/>
Matrice di interfacce IUnknown degli oggetti classe la cui disponibilità è in corso di pubblicazione.

*cookie*<br/>
Al termine dell'operazione, una matrice di puntatori a valori che identificano gli oggetti classe registrati. Questi valori vengono usati in seguito per revocare la registrazione.

*count*<br/>
Numero di CLSID da registrare.

### <a name="return-value"></a>Valore restituito

S_OK se successfu; in caso contrario, un HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per cui l'operazione non è riuscita.

### <a name="remarks"></a>Commenti

Gli oggetti COM vengono registrati con l'enumeratore CLSCTX_LOCAL_SERVER dell'enumerazione CLSCTX.

Il tipo di connessione agli oggetti registrati viene specificato da una combinazione del parametro di modello *comflag* corrente e dell'enumeratore REGCLS_SUSPENDED dell'enumerazione REGCLS.

## <a name="moduleregisterobjects"></a><a name="registerobjects"></a> Module:: RegisterObjects

Registra gli oggetti COM o Windows Runtime in modo che possano connettersi ad altre applicazioni.

```cpp
HRESULT RegisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### <a name="parameters"></a>Parametri

*modulo*<br/>
Matrice di oggetti COM o Windows Runtime.

*serverName*<br/>
Nome del server che ha creato gli oggetti.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, valore HRESULT che indica il motivo per cui l'operazione non è riuscita.

## <a name="moduleregisterwinrtobject"></a><a name="registerwinrtobject"></a> Module:: RegisterWinRTObject

Registra uno o più oggetti Windows Runtime in modo che le altre applicazioni possano connettersi a esse.

```cpp
HRESULT RegisterWinRTObject(const wchar_t* serverName,
   wchar_t** activatableClassIds,
   WINRT_REGISTRATION_COOKIE* cookie,
   unsigned int count)
```

### <a name="parameters"></a>Parametri

*serverName*<br/>
Nome che specifica un subset di oggetti interessati da questa operazione.

*activatableClassIds*<br/>
Matrice di CLSID attivabile da registrare.

*cookie*<br/>
Valore che identifica gli oggetti classe registrati. Questo valore viene usato in un secondo momento per revocare la registrazione.

*count*<br/>
Numero di oggetti da registrare.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un errore HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per cui l'operazione non è riuscita.

## <a name="modulereleasenotifier_"></a><a name="releasenotifier"></a> Modulo:: releaseNotifier_

Include un puntatore a un `ReleaseNotifier` oggetto.

```cpp
ReleaseNotifier *releaseNotifier_;
```

## <a name="moduleterminate"></a><a name="terminate"></a> Module:: terminate

Causa l'arresto di tutte le factory di cui è stata creata un'istanza dal modulo.

```cpp
void Terminate();
```

### <a name="remarks"></a>Commenti

Rilascia le Factory nella cache.

## <a name="moduleunregistercomobject"></a><a name="unregistercomobject"></a> Module:: UnregisterCOMObject

Annulla la registrazione di uno o più oggetti COM, che impedisce ad altre applicazioni di connettersi a esse.

```cpp
virtual HRESULT UnregisterCOMObject(
   const wchar_t* serverName,
   DWORD* cookies,
   unsigned int count
```

### <a name="parameters"></a>Parametri

*serverName*<br/>
Inutilizzati

*cookie*<br/>
Matrice di puntatori a valori che identificano gli oggetti della classe di cui annullare la registrazione. La matrice è stata creata dal metodo [RegisterCOMObject](#registercomobject) .

*count*<br/>
Numero di classi di cui annullare la registrazione.

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione ha esito positivo; in caso contrario, un errore HRESULT che indica il motivo per cui l'operazione non è riuscita.

## <a name="moduleunregisterobjects"></a><a name="unregisterobjects"></a> Module:: UnregisterObjects

Annulla la registrazione degli oggetti nel modulo specificato in modo che le altre applicazioni non possano connettersi a esse.

```cpp
HRESULT UnregisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### <a name="parameters"></a>Parametri

*modulo*<br/>
Puntatore a un modulo.

*serverName*<br/>
Nome completo che specifica un subset di oggetti interessati da questa operazione.

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione ha esito positivo; in caso contrario, un errore HRESULT che indica il motivo per cui l'operazione non è riuscita.

## <a name="moduleunregisterwinrtobject"></a><a name="unregisterwinrtobject"></a> Module:: UnregisterWinRTObject

Annulla la registrazione di uno o più oggetti Windows Runtime in modo che le altre applicazioni non possano connettersi a esse.

```cpp
virtual HRESULT UnregisterWinRTObject(
   unsigned int,
   _Inout_ WINRT_REGISTRATION_COOKIE* cookie
);
```

### <a name="parameters"></a>Parametri

*cookie*<br/>
Puntatore a un valore che identifica l'oggetto della classe la cui registrazione deve essere revocata.
