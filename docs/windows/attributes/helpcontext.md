---
title: HelpContext (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpcontext
helpviewer_keywords:
- helpcontext attribute
ms.assetid: 6fbb022d-a4b7-4989-a02f-7f18a9b0ad96
ms.openlocfilehash: 8ec13d785ae491a4082d0bbdc908448cb1b8a49c
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69490908"
---
# <a name="helpcontext"></a>helpcontext

Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento nel file della **Guida** .

## <a name="syntax"></a>Sintassi

```cpp
[ helpcontext(id) ]
```

### <a name="parameters"></a>Parametri

*id*<br/>
ID del contesto dell'argomento della guida. Vedere [la Guida HTML: Guida sensibile al contesto per i programmi](../../mfc/html-help-context-sensitive-help-for-your-programs.md) per ulteriori informazioni sugli ID di contesto.

## <a name="remarks"></a>Note

L'attributo **HelpContext** C++ ha la stessa funzionalità dell'attributo MIDL di [HelpContext](/windows/win32/Midl/helpcontext) .

## <a name="example"></a>Esempio

Vedere l'esempio per [DefaultValue](defaultvalue.md) per un esempio di come usare **HelpContext**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**Interface**, **typedef**, **Class**, Method, Property|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[helpfile](helpfile.md)<br/>
[helpstring](helpstring.md)