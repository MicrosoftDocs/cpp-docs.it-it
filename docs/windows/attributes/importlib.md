---
description: 'Altre informazioni su: importlib'
title: importlib (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.importlib
helpviewer_keywords:
- importlib attribute
ms.assetid: f129e459-b8d3-4aca-a0bc-ee53e18b62ed
ms.openlocfilehash: f3000be3415ed944d621ebcd36442e33951efc84
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114949"
---
# <a name="importlib"></a>importlib

Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.

## <a name="syntax"></a>Sintassi

```cpp
[ importlib("tlb_file") ];
```

### <a name="parameters"></a>Parametri

*tlb_file*<br/>
Nome di un file tlb, racchiuso tra virgolette, che si desidera importare nella libreria dei tipi del progetto corrente.

## <a name="remarks"></a>Commenti

L'attributo C++ **importlib** fa sì `importlib` che un'istruzione venga inserita nel blocco della libreria del file IDL generato. L'attributo **importlib** ha la stessa funzionalità dell'attributo MIDL di [importlib](/windows/win32/Midl/importlib) .

## <a name="example"></a>Esempio

Il codice seguente illustra un esempio di come usare **importlib**:

```cpp
// cpp_attr_ref_importlib.cpp
// compile with: /LD
[module(name="MyLib")];
[importlib("importlib.tlb")];
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[includere](include-cpp.md)<br/>
[includelib (](includelib-cpp.md)
