---
title: Platform::Type (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Type::GetTypeCode
- VCCORLIB/Platform::Type::FullName
helpviewer_keywords:
- Platform::Type Class
ms.assetid: d6b03f1e-b240-49b9-a08e-53a460030475
ms.openlocfilehash: 7463a2518e6ec5cc84f59db05cfaf60e43eb9fde
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81322085"
---
# <a name="platformtype-class"></a>Platform::Type (classe)

Contiene le informazioni di runtime su un tipo, in particolare un nome di stringa e un codice del tipo. Ottenuto chiamando [Object::GetType](../cppcx/platform-object-class.md#gettype) su qualsiasi oggetto o utilizzando l'operatore [typeid](../extensions/typeid-cpp-component-extensions.md) su un nome di classe o struct.

## <a name="syntax"></a>Sintassi

```cpp
public ref class Platform::Type :
    Platform::Object, Platform::Details::IEquatable,
    Platform::Details::IPrintable
```

### <a name="remarks"></a>Osservazioni

La classe `Type` è utile nelle applicazioni che richiedono l'elaborazione diretta usando un'istruzione `if` o `switch` che si dirama in base al tipo di runtime di un oggetto. Il codice del tipo che descrive la categoria di un tipo viene recuperato utilizzando la funzione membro [Type::GetTypeCode](#gettypecode) .

## <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|[metodo Type::GetTypeCode](#gettypecode)|Restituisce un valore dell'enumerazione [Platform::TypeCode](../cppcx/platform-typecode-enumeration.md) per l'oggetto.|
|[Metodo Type::ToString](#tostring)|Restituisce il nome del tipo come specificato nei relativi metadati.|

## <a name="public-properties"></a>Proprietà pubbliche

|||
|-|-|
|[Tipo::NomeCompleto](#fullname)|Restituisce una classe [Platform::String](../cppcx/platform-string-class.md)^ che rappresenta il nome completo del tipo e usa il punto (punto) come separatore, non :: (due `MyNamespace.MyClass`punti doppi), ad esempio .|

## <a name="conversion-operators"></a>Operatori di conversione

|||
|-|-|
|[Tipo di operatore](../cppcx/operator-type-hat.md)|Consente la conversione da `Windows::UI::Xaml::Interop::TypeName` a `Platform::Type`.|
|[Operatore Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-windows-ui-xaml-interop-typename.md)|Consente la conversione da `Platform::Type` a `Windows::UI::Xaml::Interop::TypeName`.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8 (informazioni in due)

**Server minimo supportato:** Windows Server 2012 (informazioni in due)

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd

## <a name="typefullname-property"></a><a name="fullname"></a>Proprietà Type::FullName

Recupera il nome completo del tipo corrente `Namespace.Type`nel formato .

### <a name="syntax"></a>Sintassi

```cpp
String^ FullName();
```

### <a name="return-value"></a>Valore restituito

Nome del tipo.

### <a name="example"></a>Esempio

```cpp
//  namespace is TestApp
MainPage::MainPage()
{
    InitializeComponent();
    Type^ t = this->GetType();
    auto s = t->FullName; // returns "TestApp.MainPage"
    auto s2 = t->ToString(); //also returns "TestApp.MainPage"
}
```

## <a name="typegettypecode-method"></a><a name="gettypecode"></a>Metodo Type::GetTypeCode

Recupera una categoria di tipo numerico dei tipi incorporati.

### <a name="syntax"></a>Sintassi

```cpp
Platform::TypeCode GetTypeCode();
```

### <a name="return-value"></a>Valore restituito

Uno dei valori enumerati di Platform::TypeCode.

### <a name="remarks"></a>Osservazioni

L'equivalente del metodo del membro GetTypeCode() è proprietà `typeid`.

## <a name="typetostring-method"></a><a name="tostring"></a>Metodo Type::ToString

Recupera un nome del tipo.

### <a name="syntax"></a>Sintassi

```cpp
Platform::String^ ToString();
```

### <a name="return-value"></a>Valore restituito

Un nome del tipo come specificato nei relativi metadati.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
