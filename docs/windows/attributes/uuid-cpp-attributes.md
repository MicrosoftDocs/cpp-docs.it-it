---
title: uuid (attributi C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.uuid
helpviewer_keywords:
- uuid attribute
ms.assetid: 90562a94-5e28-451b-a4b0-cadda7f66efe
ms.openlocfilehash: d644f59ac92bf4e39f191c291dd4fef626411c3d
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514941"
---
# <a name="uuid-c-attributes"></a>uuid (attributi C++)

Specifica l'ID univoco per una classe o un'interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
[ uuid(
   "uuid"
) ]
```

### <a name="parameters"></a>Parametri

*uuid*<br/>
Identificatore univoco a 128 bit.

## <a name="remarks"></a>Note

Se la definizione di un'interfaccia o di una classe non specifica l'attributo **UUID** C++ , il compilatore C++ Microsoft ne fornirà uno. Quando si specifica un **UUID**, è necessario includere le virgolette.

Se non si specifica **UUID**, il compilatore genererà lo stesso GUID per le interfacce o le classi con lo stesso nome in progetti attribute diversi in un computer.

È possibile usare uuidgen. exe o Guidgen. exe per generare ID univoci. Per eseguire uno di questi strumenti, fare clic sul pulsante **Start** , quindi scegliere **Esegui** nel menu. Immettere quindi il nome dello strumento richiesto.

Quando viene usato in un progetto che non usa anche ATL, la specifica dell'attributo **UUID** equivale a specificare il modificatore di **_ declspec** [UUID](../../cpp/uuid-cpp.md) . Per recuperare l' **UUID** di una classe, è possibile usare [__uuidof](../../cpp/uuidof-operator.md)

## <a name="example"></a>Esempio

Vedere l'esempio [associabile](bindable.md) per un esempio di uso di **UUID**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**, **interfaccia**, **unione**, **enum**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[uuid](/windows/win32/Midl/uuid)