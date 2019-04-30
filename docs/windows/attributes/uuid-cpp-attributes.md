---
title: uuid (attributi C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.uuid
helpviewer_keywords:
- uuid attribute
ms.assetid: 90562a94-5e28-451b-a4b0-cadda7f66efe
ms.openlocfilehash: 8d9d55fc2a340165480cab4036ad1e5323e6b625
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407198"
---
# <a name="uuid-c-attributes"></a>uuid (attributi C++)

Specifica l'ID univoco per una classe o interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
[ uuid(
   "uuid"
) ]
```

### <a name="parameters"></a>Parametri

*uuid*<br/>
Un identificatore univoco a 128 bit.

## <a name="remarks"></a>Note

Se la definizione di un'interfaccia o classe non specifica la **uuid** attributo C++, quindi il compilatore Visual C++ fornisce uno. Quando si specifica un **uuid**, è necessario includere le virgolette.

Se non si specifica **uuid**, il compilatore genererà lo stesso GUID per le interfacce o classi con lo stesso nome nei progetti di attributo diverso in un computer.

È possibile utilizzare Uuidgen.exe o Guidgen.exe per generare il proprio ID univoci. (Per eseguire uno di questi strumenti, fare clic su **avviare** e fare clic su **eseguire** nel menu. Immettere quindi il nome dello strumento obbligatorio.)

Se usato in un progetto che non utilizza inoltre ATL, specificando il **uuid** attributo corrisponde a quello ottenuto specificando la [uuid](../../cpp/uuid-cpp.md) **declspec** modificatore. Per recuperare il **uuid** di una classe, è possibile usare [uuidof](../../cpp/uuidof-operator.md)

## <a name="example"></a>Esempio

Vedere le [associabile](bindable.md) per un esempio dell'uso di esempio **uuid**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**, **interfaccia**, **union**, **enum**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[uuid](/windows/desktop/Midl/uuid)