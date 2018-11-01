---
title: Local (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.local
helpviewer_keywords:
- local attribute
ms.assetid: 35cdd668-bd8e-492a-b7b8-263e7b662437
ms.openlocfilehash: 377d6ffbddb5f88533c8b4f054f0d658a9b19573
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50489089"
---
# <a name="local-c"></a>local (C++)

Quando usato nell'intestazione dell'interfaccia, consente di usare il compilatore MIDL come generatore di intestazione. Se usato in una singola funzione, designa una procedura locale per cui non gli stub vengono generati.

## <a name="syntax"></a>Sintassi

```cpp
[local]
```

## <a name="remarks"></a>Note

Il **locale** attributi di C++ ha la stessa funzionalità come la [locale](/windows/desktop/Midl/local) attributo MIDL.

## <a name="example"></a>Esempio

Visualizzare [call_as](call-as.md) per un esempio di come usare **locale**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`dispinterface`|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[call_as](call-as.md)