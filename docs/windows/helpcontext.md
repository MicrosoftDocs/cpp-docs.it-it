---
title: HelpContext | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.helpcontext
dev_langs:
- C++
helpviewer_keywords:
- helpcontext attribute
ms.assetid: 6fbb022d-a4b7-4989-a02f-7f18a9b0ad96
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5644f99e15685f8f1784cc40886709b05a9a06bd
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43221284"
---
# <a name="helpcontext"></a>helpcontext

Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel **aiutare** file.

## <a name="syntax"></a>Sintassi

```cpp
[ helpcontext(
   id
) ]
```

### <a name="parameters"></a>Parametri

*ID*  
L'ID del contesto dell'argomento della Guida. Visualizzare [della Guida HTML: Guida sensibile al contesto per i programmi](../mfc/html-help-context-sensitive-help-for-your-programs.md) per altre informazioni sul contesto ID.

## <a name="remarks"></a>Note

Il **helpcontext** attributi di C++ ha la stessa funzionalità come la [helpcontext](/windows/desktop/Midl/helpcontext) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [defaultvalue](../windows/defaultvalue.md) per un esempio di come usare **helpcontext**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, **typedef**, **classe**, metodo, proprietà|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di interfaccia](../windows/interface-attributes.md)  
[Attributi di classe](../windows/class-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)  
[helpfile](../windows/helpfile.md)  
[helpstring](../windows/helpstring.md)  