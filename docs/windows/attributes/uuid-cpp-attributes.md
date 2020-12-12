---
description: 'Altre informazioni su: UUID (attributi C++)'
title: uuid (attributi C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.uuid
helpviewer_keywords:
- uuid attribute
ms.assetid: 90562a94-5e28-451b-a4b0-cadda7f66efe
ms.openlocfilehash: 25c84b435fe86af1e56b17568301752a4795a0ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327226"
---
# <a name="uuid-c-attributes"></a>uuid (attributi C++)

Specifica l'ID univoco per una classe o un'interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
[ uuid( "uuid" ) ]
```

### <a name="parameters"></a>Parametri

*UUID*<br/>
Identificatore univoco a 128 bit.

## <a name="remarks"></a>Commenti

Se la definizione di un'interfaccia o di una classe non specifica l' `uuid` attributo c++, il compilatore Microsoft c++ ne fornirà uno. Quando si specifica un oggetto `uuid` , è necessario includere le virgolette.

Se non si specifica `uuid` , il compilatore genererà lo stesso GUID per le interfacce o le classi con lo stesso nome in progetti attribute diversi in un computer.

È possibile usare Uuidgen.exe o Guidgen.exe per generare ID univoci. Per eseguire uno di questi strumenti, fare clic sul pulsante **Start** , quindi scegliere **Esegui** nel menu. Immettere quindi il nome dello strumento richiesto.

Se usato in un progetto che non usa anche ATL, specificare l' `uuid` attributo equivale a specificare il [](../../cpp/uuid-cpp.md) **`__declspec`** modificatore UUID. Per recuperare l'oggetto `uuid` di una classe, è possibile usare [__uuidof](../../cpp/uuidof-operator.md)

## <a name="example"></a>Esempio

Vedere l'esempio [associabile](bindable.md) per un esempio di utilizzo di `uuid` .

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|`class`, `struct`, `interface`, `union`, `enum`|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[UUID](/windows/win32/Midl/uuid)
