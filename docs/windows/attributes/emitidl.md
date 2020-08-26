---
title: emitidl (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.emitidl
helpviewer_keywords:
- emitidl attribute
ms.assetid: 85b80c56-578e-4392-ac03-8443c74ebb7d
ms.openlocfilehash: 32362f287320e69d1680cbe07ca050143b507514
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88846329"
---
# <a name="emitidl"></a>emitidl

Specifica se tutti gli attributi IDL successivi vengono elaborati e inseriti nel file con estensione IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ emitidl(state, defaultimports=boolean) ];
```

### <a name="parameters"></a>Parametri

*state*<br/>
Uno di questi valori possibili: **`true`** , **`false`** , `forced` , `restricted` , `push` o `pop` .

- Se **`true`** , tutti gli attributi di categoria IDL rilevati in un file di codice sorgente vengono inseriti nel file con estensione IDL generato. Questa è l'impostazione predefinita per **emitidl**.

- Se **`false`** , qualsiasi attributo di categoria IDL rilevato in un file di codice sorgente non viene inserito nel file con estensione IDL generato.

- Se `restricted` , consente che gli attributi IDL siano presenti nel file senza un attributo del [modulo](module-cpp.md) . Il compilatore non genera un file con estensione IDL.

- Se `forced` , esegue l'override di un `restricted` attributo successivo, che richiede un file con un `module` attributo se nel file sono presenti attributi IDL.

- `push` consente di salvare le impostazioni **emitidl** correnti in uno stack **emitidl** interno e `pop` di impostare **emitidl** su qualsiasi valore nella parte superiore dello stack interno di **emitidl** .

`defaultimports=`*valore booleano* \( opzionale

- Se il *valore Boolean* è **`true`** , docobj. idl viene importato nel file con estensione IDL generato. Inoltre, se un file con estensione IDL con lo stesso nome di un file con estensione h `#include` nel codice sorgente si trova nella stessa directory del file con estensione h, il file IDL generato contiene un'istruzione Import per il file con estensione IDL.

- Se *booleano* è **`false`** , docobj. idl non viene importato nel file con estensione IDL generato. È necessario importare in modo esplicito i file IDL con l' [importazione](import.md).

## <a name="remarks"></a>Osservazioni

Dopo che l'attributo **emitidl** C++ è stato rilevato in un file di codice sorgente, gli attributi di categoria IDL vengono inseriti nel file con estensione IDL generato. Se non è presente alcun attributo **emitidl** , gli attributi IDL nel file di codice sorgente vengono restituiti al file IDL generato.

È possibile avere più attributi **emitidl** in un file di codice sorgente. Se `[emitidl(false)];` viene rilevato in un file senza una successiva `[emitidl(true)];` , nessun attributo viene elaborato nel file con estensione IDL generato.

Ogni volta che il compilatore rileva un nuovo file, **emitidl** viene impostato in modo implicito su **`true`** .

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)
