---
title: HelpContext (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpcontext
helpviewer_keywords:
- helpcontext attribute
ms.assetid: 6fbb022d-a4b7-4989-a02f-7f18a9b0ad96
ms.openlocfilehash: 921e5370303cb62830ec281bcefd7c03331efaeb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50552750"
---
# <a name="helpcontext"></a>helpcontext

Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel **aiutare** file.

## <a name="syntax"></a>Sintassi

```cpp
[ helpcontext(id) ]
```

### <a name="parameters"></a>Parametri

*ID*<br/>
L'ID del contesto dell'argomento della Guida. Visualizzare [della Guida HTML: Guida sensibile al contesto per i programmi](../../mfc/html-help-context-sensitive-help-for-your-programs.md) per altre informazioni sul contesto ID.

## <a name="remarks"></a>Note

Il **helpcontext** attributi di C++ ha la stessa funzionalità come la [helpcontext](/windows/desktop/Midl/helpcontext) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [defaultvalue](defaultvalue.md) per un esempio di come usare **helpcontext**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, **typedef**, **classe**, metodo, proprietà|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[helpfile](helpfile.md)<br/>
[helpstring](helpstring.md)