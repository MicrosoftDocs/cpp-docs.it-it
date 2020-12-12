---
description: 'Altre informazioni su: local (C++)'
title: local (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.local
helpviewer_keywords:
- local attribute
ms.assetid: 35cdd668-bd8e-492a-b7b8-263e7b662437
ms.openlocfilehash: 7fa1366b78576224f8fcc0d91392fe1fc6cb8af9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327518"
---
# <a name="local-c"></a>local (C++)

Quando viene usato nell'intestazione dell'interfaccia, consente di usare il compilatore MIDL come generatore di intestazioni. Se utilizzata in una singola funzione, definisce una procedura locale per la quale non vengono generati stub.

## <a name="syntax"></a>Sintassi

```cpp
[local]
```

## <a name="remarks"></a>Osservazioni

L'attributo C++ **locale** ha la stessa funzionalità dell'attributo MIDL [locale](/windows/win32/Midl/local) .

## <a name="example"></a>Esempio

Per un esempio su come usare **local**, vedere [call_as](call-as.md) .

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interfaccia**, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|`dispinterface`|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[call_as](call-as.md)
