---
title: Classe Platform::Object
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Object::Object
- VCCORLIB/Platform::Object::Equals
- VCCORLIB/Platform::Object::GetHashCode
- VCCORLIB/Platform::Object::ReferenceEquals
- VCCORLIB/Platform::ToString
- VCCORLIB/Platform::GetType
helpviewer_keywords:
- Object class
ms.assetid: 709e84a8-0bff-471b-bc14-63e424080b5a
ms.openlocfilehash: 00f2b57bdf63f9f8bcfd9e544bebab2805ff7f65
ms.sourcegitcommit: bd637e9c39650cfd530520ea978a22fa4caa0e42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/07/2019
ms.locfileid: "55850091"
---
# <a name="platformobject-class"></a>Classe Platform::Object

Fornisce il comportamento comune per le classi e struct di riferimento nelle app di Windows Runtime. Tutte le istanze delle classi e degli struct di riferimento sono implicitamente convertibili a Platform::Object^ e possono eseguire l'override del relativo metodo ToString virtuale.

## <a name="syntax"></a>Sintassi

```cpp
public ref class Object : Object
```

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Object::Object](#ctor)|Inizializza una nuova istanza della classe Object.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Object::Equals](#equals)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|
|[Object::GetHashCode](#gethashcode)|Restituisce il codice hash per l'istanza.|
|[Object::ReferenceEquals](#referenceequals)|Determina se le istanze di Object specificate rappresentano la stessa istanza.|
|[ToString](#tostring)|Restituisce una stringa che rappresenta l'oggetto corrente. È possibile eseguirne l'override.|
|[GetType](#gettype)|Ottiene un oggetto [Platform::Type](../cppcx/platform-type-class.md) che descrive l'istanza corrente.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Object`

`Object`

### <a name="requirements"></a>Requisiti

**Intestazione:** vccorlib.h

**Spazio dei nomi:** Piattaforma

## <a name="equals"></a> Metodo Object:: Equals

Determina se l'oggetto specificato è uguale all'oggetto corrente.

### <a name="syntax"></a>Sintassi

```cpp
bool Equals(
    Object^ obj
)
```

### <a name="parameters"></a>Parametri

*obj*<br/>
Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti sono uguali, in caso contrario **false**.

## <a name="gethashcode"></a>  Metodo Object:: GetHashCode

Restituisce il valore di identità `IUnknown`* per questa istanza se è un oggetto COM, oppure un valore hash calcolato se non è un oggetto COM.

### <a name="syntax"></a>Sintassi

```cpp
public:int GetHashCode();
```

### <a name="return-value"></a>Valore restituito

Valore numerico che identifica in modo univoco l'oggetto.

### <a name="remarks"></a>Note

Puoi usare GetHashCode per creare chiavi per gli oggetti nella mappa. È possibile confrontare i codici hash usando [Object:: Equals](#equals). Se il percorso del codice è estremamente critico e `GetHashCode` e `Equals` non sono sufficientemente veloci, puoi passare al livello COM sottostante ed effettuare confronti tra puntatori `IUnknown` nativi.

## <a name="gettype"></a>  Metodo Object:: GetType

Restituisce un [platform:: Type](../cppcx/platform-type-class.md) oggetto che descrive il tipo di runtime di un oggetto.

### <a name="syntax"></a>Sintassi

```cpp
Object::GetType();
```

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Oggetto [platform:: Type](../cppcx/platform-type-class.md) oggetto che descrive il tipo di runtime dell'oggetto.

### <a name="remarks"></a>Note

Il metodo statico [Type:: GetTypeCode](../cppcx/platform-type-class.md#gettypecode) può essere utilizzato per ottenere un [enumerazione platform:: TypeCode](../cppcx/platform-typecode-enumeration.md) valore che rappresenta il tipo corrente. Questa funzionalità è particolarmente utile per i tipi predefiniti. Il codice del tipo per qualsiasi classe di riferimento oltre [platform:: String](../cppcx/platform-string-class.md) è Object (1).

Il [Windows::UI::Xaml::Interop::TypeName](https://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) classe viene usata nelle API Windows come modo indipendente dal linguaggio passando informazioni sul tipo tra componenti di Windows e delle app. L'elemento T[classe platform:: Type](../cppcx/platform-type-class.md) dispone di operatori per la conversione tra `Type` e `TypeName`.

Usare la [typeid](../windows/typeid-cpp-component-extensions.md) operatore per restituire un `Platform::Type` oggetto per un nome di classe, ad esempio quando si sposti tra pagine XAML:

```
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);
```

## <a name="ctor"></a>  Costruttore Object:: Object

Inizializza una nuova istanza della classe Object.

### <a name="syntax"></a>Sintassi

```cpp
public:Object();
```

## <a name="referenceequals"></a>  Metodo Object:: ReferenceEquals

Determina se le istanze di Object specificate rappresentano la stessa istanza.

### <a name="syntax"></a>Sintassi

```cpp
public:static bool ReferenceEquals(  Object^ obj1,   Object^ obj2);
```

### <a name="parameters"></a>Parametri

*obj1*<br/>
Primo oggetto da confrontare.

*obj2*<br/>
Secondo oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se i due oggetti sono uguali; in caso contrario, **false**.

## <a name="tostring"></a>  Metodo Object:: ToString (C + c++ /CX)

Restituisce una stringa che rappresenta l'oggetto corrente.

### <a name="syntax"></a>Sintassi

```cpp
public:
virtual String^ ToString();
```

### <a name="return-value"></a>Valore restituito

Stringa che rappresenta l'oggetto corrente. Puoi eseguire l'override di questo metodo per fornire un messaggio stringa personalizzato in ref class o struct:

```cpp
public ref class Tree sealed
{
public:
    Tree(){}
    virtual Platform::String^ ToString() override
    {
      return "I’m a Tree";
    };
};
```

## <a name="see-also"></a>Vedere anche

[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Classe Platform::Type](platform-type-class.md)<br/>
[Sistema di tipi](type-system-c-cx.md)
