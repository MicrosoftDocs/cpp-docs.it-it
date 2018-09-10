---
title: 'Classe di valori platform:: GUID | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Guid
dev_langs:
- C++
helpviewer_keywords:
- Platform::Guid Struct
ms.assetid: 25c0bfb2-7f93-44d8-bdf4-ef4fbac3424a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e115cf74eaac194c9e5b7154898cc23e10b220eb
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44100431"
---
# <a name="platformguid-value-class"></a>Classe di valori Platform::Guid

Rappresenta un [GUID](https://msdn.microsoft.com/library/windows/desktop/aa373931\(v=vs.85\).aspx) tipo nel sistema di tipi Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
public value struct Guid
```

### <a name="members"></a>Membri

Il GUID dispone dei metodi Equals(), GetHashCode() e ToString() derivati dalla [Platform::Object Class](../cppcx/platform-object-class.md)e del metodo GetTypeCode() derivato dalla [Platform::Type Class](../cppcx/platform-type-class.md). Il GUID dispone inoltre dei membri seguenti.

|Member|Descrizione|
|------------|-----------------|
|[Guid](#ctor)|Inizializza una nuova istanza dello struct Guid.|
|[operator==](#operator-equality)|Operatore di uguaglianza.|
|[operator!=](#operator-not-equal)|Operatore di disuguaglianza.|
|[operator()](#operator-call)|Converte Guid in GUID.|

### <a name="remarks"></a>Note

Per un esempio di come generare un nuovo platform:: GUID tramite la funzione di Windows [CoCreateGuid](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateguid), vedere [componente WinRT: come generare un GUID?](http://blogs.msdn.com/b/eternalcoding/archive/2013/03/25/winrt-component-how-to-generate-a-guid.aspx)

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd

## <a name="ctor"></a> Costruttori GUID:: GUID

Inizializza una nuova istanza di uno struct Guid.

### <a name="syntax"></a>Sintassi

```cpp
Guid(
    unsigned int a,
    unsigned short b,
    unsigned short c,
    unsigned char d,
    unsigned char e,
    unsigned char f,
    unsigned char g,
    unsigned char h,
    unsigned char i,
    unsigned char j,
    unsigned char k );

Guid(GUID m);

Guid(
    unsigned int a,
    unsigned short b,
    unsigned short c,
    Array<unsigned char>^ n );
```

### <a name="parameters"></a>Parametri

*a*<br/>
Primi 4 byte del GUID.

*b*<br/>
I 2 byte successivi del GUID.

*c*<br/>
I 2 byte successivi del GUID.

*d*<br/>
Byte successivo del GUID.

*e*<br/>
Byte successivo del GUID.

*f*<br/>
Byte successivo del GUID.

*g*<br/>
Byte successivo del GUID.

*h*<br/>
Byte successivo del GUID.

*i*<br/>
Byte successivo del GUID.

*J*<br/>
Byte successivo del GUID.

*k*<br/>
Byte successivo del GUID.

*m*<br/>
Un GUID come definito.

*n*<br/>
Gli 8 byte rimanenti del GUID.

## <a name="operator-equality"></a> GUID::operator Operator = =

Confronta due GUID.

### <a name="syntax"></a>Sintassi

```cpp
Platform::Guid::operator==
```

### <a name="return-value"></a>Valore restituito

True se i due GUID sono uguali.

## <a name="operator-inequality"></a> GUID::operator! = (operatore)

Confronta due GUID.

### <a name="syntax"></a>Sintassi

```cpp
Platform::Guid::operator!=
```

### <a name="return-value"></a>Valore restituito

True se i due GUID non sono uguali.

## <a name="operator-call"></a> Operatore GUID

Converte in modo implicito una [struttura GUID](https://msdn.microsoft.com/library/windows/desktop/aa373931\(v=vs.85\).aspx)GUID da un platform:: GUID.

### <a name="syntax"></a>Sintassi

```cpp
Platform::Guid operator();
```

### <a name="return-value"></a>Valore restituito

Struct Guid.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)