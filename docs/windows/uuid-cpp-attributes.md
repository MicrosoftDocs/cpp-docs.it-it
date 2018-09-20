---
title: UUID (attributi C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.uuid
dev_langs:
- C++
helpviewer_keywords:
- uuid attribute
ms.assetid: 90562a94-5e28-451b-a4b0-cadda7f66efe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 37e5db99d97bc65f1f4a75e2e56e1f0e719dd9ab
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46427173"
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

Se usato in un progetto che non utilizza inoltre ATL, specificando il **uuid** attributo corrisponde a quello ottenuto specificando la [uuid](../cpp/uuid-cpp.md) **declspec** modificatore. Per recuperare il **uuid** di una classe, è possibile usare [uuidof](../cpp/uuidof-operator.md)

## <a name="example"></a>Esempio

Vedere le [associabile](../windows/bindable.md) per un esempio dell'uso di esempio **uuid**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**, **interfaccia**, **union**, **enum**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi di interfaccia](../windows/interface-attributes.md)<br/>
[Attributi di classe](../windows/class-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)<br/>
[uuid](/windows/desktop/Midl/uuid)  