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
ms.openlocfilehash: afd2edacefdf5d62b50a03c0a8c37f13ee5d9c9f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371323"
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

*moduleType (Tipo modulo)*<br/>
Combinazione di uno o più [ModuleType](moduletype-enumeration.md) valori di enumerazione.

## <a name="members"></a>Membri

### <a name="protected-classes"></a>Classi protette

Nome                                                                                | Descrizione
----------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------
[Modulo::GenericReleaseNotifier](module-genericreleasenotifier-class.md) | Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi è specificato da in un'espressione lambda, un funtore o un puntatore a funzione.
[Modulo::MethodReleaseNotifier](module-methodreleasenotifier-class.md)   | Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e dal relativo membro puntatore a un metodo.
[Modulo::ReleaseNotifier](module-releasenotifier-class.md)               | Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                             | Descrizione
-------------------------------- | -----------------------------------------------------------
[Modulo:: .](#tilde-module) | Deinizializza l'istanza corrente `Module` della classe.

### <a name="protected-constructors"></a>Costruttori protetti

Nome                      | Descrizione
------------------------- | ---------------------------------------------------
[Modulo::Modulo](#module) | Inizializza una nuova istanza della classe `Module`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                    | Descrizione
------------------------------------------------------- | --------------------------------------------------------------------------------------------------
[Modulo::Crea](#create)                               | Crea un'istanza di un modulo.
[Modulo::DecrementObjectCount](#decrementobjectcount)   | Decrementa il numero di oggetti rilevati dal modulo.
[Modulo::GetActivationFactory](#getactivationfactory)   | Ottiene una factory di attivazione per il modulo.
[Modulo::GetClassObject](#getclassobject)               | Recupera una cache di class factory.
[Modulo::GetModule](#getmodule)                         | Crea un'istanza di un modulo.
[Modulo::GetObjectCount](#getobjectcount)               | Recupera il numero di oggetti gestiti da questo modulo.
[Modulo::IncrementObjectCount](#incrementobjectcount)   | Incrementa il numero di oggetti rilevati dal modulo.
[Modulo::RegisterCOMObject](#registercomobject)         | Registra uno o più oggetti COM in modo che altre applicazioni possano connettersi a essi.
[Modulo::RegisterObjects](#registerobjects)             | Registra gli oggetti COM o Windows Runtime in modo che altre applicazioni possano connettersi a essi.
[Modulo::RegisterWinRTObject](#registerwinrtobject)     | Registra uno o più oggetti Windows Runtime in modo che altre applicazioni possano connettersi a essi.
[Modulo::Termina](#terminate)                         | Determina l'arresto di tutte le factory di cui è stata creata un'istanza dal modulo.
[Modulo::UnregisterCOMObject](#unregistercomobject)     | Annulla la registrazione di uno o più oggetti COM, impedendo ad altre applicazioni di connettersi ad essi.
[Modulo::UnregisterObjects](#unregisterobjects)         | Annulla la registrazione degli oggetti nel modulo specificato in modo che altre applicazioni non possano connettersi ad essi.
[Modulo::UnregisterWinRTObject](#unregisterwinrtobject) | Annulla la registrazione di uno o più oggetti Windows Runtime in modo che altre applicazioni non possano connettersi a essi.

### <a name="protected-methods"></a>Metodi protetti

Nome                      | Descrizione
------------------------- | --------------------------------
[Modulo::Crea](#create) | Crea un'istanza di un modulo.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                                         | Descrizione
-------------------------------------------- | --------------------------------------------------------------------------------------------------------
[Modulo::objectCount_](#objectcount)         | Tiene traccia di quante classi sono state create con la funzione [Make.](make-function.md)
[Modulo::releaseNotifier_](#releasenotifier) | Contiene un puntatore a un `ReleaseNotifier` oggetto.

### <a name="macros"></a>Macro

Nome                                                                   | Descrizione
---------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ActivatableClass](activatableclass-macros.md)              | Popola una cache interna che contiene una factory in grado di creare un'istanza della classe specificata. Questa macro specifica i parametri predefiniti di tipo factory e ID gruppo.
[ActivatableClassWithFactory](activatableclass-macros.md)   | Popola una cache interna che contiene una factory in grado di creare un'istanza della classe specificata. Questa macro consente di specificare un particolare parametro factory.
[ActivatableClassWithFactoryEx](activatableclass-macros.md) | Popola una cache interna che contiene una factory in grado di creare un'istanza della classe specificata. Questa macro consente di specificare particolari parametri di ID di gruppo e di fabbrica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ModuleBase`

`Module`

`Module`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="modulemodule"></a><a name="tilde-module"></a>Modulo:: .

Deinizializza l'istanza corrente `Module` della classe.

```cpp
virtual ~Module();
```

## <a name="modulecreate"></a><a name="create"></a>Modulo::Crea

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

*Oggetto*<br/>
I parametri *dell'oggetto* e del *metodo* vengono utilizzati in combinazione. Punta all'ultimo oggetto di istanza quando viene rilasciato l'ultimo oggetto istanza nel modulo.

*Metodo*<br/>
I parametri *dell'oggetto* e del *metodo* vengono utilizzati in combinazione. Punta al metodo dell'ultimo oggetto istanza quando viene rilasciato l'ultimo oggetto istanza nel modulo.

### <a name="return-value"></a>Valore restituito

Riferimento al modulo.

## <a name="moduledecrementobjectcount"></a><a name="decrementobjectcount"></a>Modulo::DecrementObjectCount

Decrementa il numero di oggetti rilevati dal modulo.

```cpp
virtual long DecrementObjectCount();
```

### <a name="return-value"></a>Valore restituito

Conteggio prima dell'operazione di decremento.

## <a name="modulegetactivationfactory"></a><a name="getactivationfactory"></a>Modulo::GetActivationFactory

Ottiene una factory di attivazione per il modulo.

```cpp
WRL_NOTHROW HRESULT GetActivationFactory(
   _In_ HSTRING pActivatibleClassId,
   _Deref_out_ IActivationFactory **ppIFactory,
   wchar_t* serverName = nullptr
);
```

### <a name="parameters"></a>Parametri

*pActivatibleClassId (informazioni in stato inoperato in questo stato)*<br/>
IID di una classe di runtime.

*PpIFactory (file ppIFactory)*<br/>
Oggetto IActivationFactory per la classe di runtime specificata.

*Nomeserver*<br/>
Nome di un sottoinsieme di class factory nel modulo corrente. Specificare il nome del server utilizzato nella macro `nullptr` [ActivatableClassWithFactoryEx](activatableclass-macros.md) oppure specificare di ottenere il nome del server predefinito.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, il valore HRESULT restituito da GetActivationFactory.

## <a name="modulegetclassobject"></a><a name="getclassobject"></a>Modulo::GetClassObject

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
ID classe.

*Riid*<br/>
ID interfaccia richiesto.

*Ppv*<br/>
Puntatore all'oggetto restituito.

*Nomeserver*<br/>
Il nome del server specificato `ActivatableClassWithFactory` `ActivatableClassWithFactoryEx`nella `ActivatableClass` macro , , o ; o `nullptr` per ottenere il nome del server predefinito.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo per COM, non Windows Runtime. Questo metodo espone `IClassFactory` solo metodi.

## <a name="modulegetmodule"></a><a name="getmodule"></a>Modulo::GetModule

Crea un'istanza di un modulo.

```cpp
static Module& GetModule();
WRL_NOTHROW static Module& GetModule();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a un modulo.

## <a name="modulegetobjectcount"></a><a name="getobjectcount"></a>Modulo::GetObjectCount

Recupera il numero di oggetti gestiti da questo modulo.

```cpp
virtual long GetObjectCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero corrente di oggetti gestiti da questo modulo.

## <a name="moduleincrementobjectcount"></a><a name="incrementobjectcount"></a>Modulo::IncrementObjectCount

Incrementa il numero di oggetti rilevati dal modulo.

```cpp
virtual long IncrementObjectCount();
```

### <a name="return-value"></a>Valore restituito

Conteggio prima dell'operazione di incremento.

## <a name="modulemodule"></a><a name="module"></a>Modulo::Modulo

Inizializza una nuova istanza della classe `Module`.

```cpp
Module();
```

### <a name="remarks"></a>Osservazioni

Questo costruttore è protetto e `new` non può essere chiamato con la parola chiave . Chiamare invece [Module::GetModule](#getmodule) o [Module::Create](#create).

## <a name="moduleobjectcount_"></a><a name="objectcount"></a>Modulo::objectCount_

Tiene traccia di quante classi sono state create con la funzione [Make.](make-function.md)

```cpp
volatile long objectCount_;
```

## <a name="moduleregistercomobject"></a><a name="registercomobject"></a>Modulo::RegisterCOMObject

Registra uno o più oggetti COM in modo che altre applicazioni possano connettersi a essi.

```cpp
WRL_NOTHROW virtual HRESULT RegisterCOMObject(
   const wchar_t* serverName,
   IID* clsids,
   IClassFactory** factories,
   DWORD* cookies,
   unsigned int count);
```

### <a name="parameters"></a>Parametri

*Nomeserver*<br/>
Nome completo di un server.

*Clsid*<br/>
Matrice di CLSID da registrare.

*factories*<br/>
Matrice di interfacce IUnknown degli oggetti di classe la cui disponibilità viene pubblicata.

*Biscotti*<br/>
Al termine dell'operazione, matrice di puntatori a valori che identificano gli oggetti classe registrati. Questi valori vengono successivamente utilizzati revocare la registrazione.

*count*<br/>
Numero di CLSID da registrare.

### <a name="return-value"></a>Valore restituito

S_OK se successfu; in caso contrario, un HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per cui l'operazione non è riuscita.

### <a name="remarks"></a>Osservazioni

Gli oggetti COM vengono registrati con l'enumeratore CLSCTX_LOCAL_SERVER di Enumerazione CLSCTX.

Il tipo di connessione agli oggetti registrati è specificato da una combinazione del parametro di modello *comflag* corrente e dell'enumeratore REGCLS_SUSPENDED dell'enumerazione REGCLS.

## <a name="moduleregisterobjects"></a><a name="registerobjects"></a>Modulo::RegisterObjects

Registra gli oggetti COM o Windows Runtime in modo che altre applicazioni possano connettersi a essi.

```cpp
HRESULT RegisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### <a name="parameters"></a>Parametri

*Modulo*<br/>
Matrice di oggetti COM o Windows Runtime.

*Nomeserver*<br/>
Nome del server che ha creato gli oggetti.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un HRESULT che indica il motivo dell'operazione non riuscita.

## <a name="moduleregisterwinrtobject"></a><a name="registerwinrtobject"></a>Modulo::RegisterWinRTObject

Registra uno o più oggetti Windows Runtime in modo che altre applicazioni possano connettersi a essi.

```cpp
HRESULT RegisterWinRTObject(const wchar_t* serverName,
   wchar_t** activatableClassIds,
   WINRT_REGISTRATION_COOKIE* cookie,
   unsigned int count)
```

### <a name="parameters"></a>Parametri

*Nomeserver*<br/>
Nome che specifica un sottoinsieme di oggetti interessati da questa operazione.

*activatableClassIds*<br/>
Matrice di CLSID attivabili da registrare.

*Cookie*<br/>
Valore che identifica gli oggetti classe registrati. Questo valore viene utilizzato in un secondo momento per revocare la registrazione.

*count*<br/>
Numero di oggetti da registrare.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un errore HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per cui l'operazione non è riuscita.

## <a name="modulereleasenotifier_"></a><a name="releasenotifier"></a>Modulo::releaseNotifier_

Contiene un puntatore a un `ReleaseNotifier` oggetto.

```cpp
ReleaseNotifier *releaseNotifier_;
```

## <a name="moduleterminate"></a><a name="terminate"></a>Modulo::Termina

Determina l'arresto di tutte le factory di cui è stata creata un'istanza dal modulo.

```cpp
void Terminate();
```

### <a name="remarks"></a>Osservazioni

Rilascia le factory nella cache.

## <a name="moduleunregistercomobject"></a><a name="unregistercomobject"></a>Modulo::UnregisterCOMObject

Annulla la registrazione di uno o più oggetti COM, impedendo ad altre applicazioni di connettersi ad essi.

```cpp
virtual HRESULT UnregisterCOMObject(
   const wchar_t* serverName,
   DWORD* cookies,
   unsigned int count
```

### <a name="parameters"></a>Parametri

*Nomeserver*<br/>
(Inutilizzato)

*Biscotti*<br/>
Matrice di puntatori a valori che identificano gli oggetti classe di cui annullare la registrazione. La matrice è stata creata dal [metodo RegisterCOMObject.](#registercomobject)

*count*<br/>
Numero di classi di cui annullare la registrazione.

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione ha esito positivo; in caso contrario, un HRESULT di errore che indica il motivo per cui l'operazione non è riuscita.

## <a name="moduleunregisterobjects"></a><a name="unregisterobjects"></a>Modulo::UnregisterObjects

Annulla la registrazione degli oggetti nel modulo specificato in modo che altre applicazioni non possano connettersi ad essi.

```cpp
HRESULT UnregisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### <a name="parameters"></a>Parametri

*Modulo*<br/>
Puntatore a un modulo.

*Nomeserver*<br/>
Un nome di qualificazione che specifica un sottoinsieme di oggetti interessati da questa operazione.

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione ha esito positivo; in caso contrario, un Errore HRESULT che indica il motivo per cui l'operazione non è riuscita.

## <a name="moduleunregisterwinrtobject"></a><a name="unregisterwinrtobject"></a>Modulo::UnregisterWinRTObject

Annulla la registrazione di uno o più oggetti Windows Runtime in modo che altre applicazioni non possano connettersi a essi.

```cpp
virtual HRESULT UnregisterWinRTObject(
   unsigned int,
   _Inout_ WINRT_REGISTRATION_COOKIE* cookie
);
```

### <a name="parameters"></a>Parametri

*Cookie*<br/>
Puntatore a un valore che identifica l'oggetto classe la cui registrazione deve essere revocata.
