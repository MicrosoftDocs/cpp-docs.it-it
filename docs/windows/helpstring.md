---
title: HelpString | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.helpstring
dev_langs:
- C++
helpviewer_keywords:
- helpstring attribute [C++]
ms.assetid: 0401e905-a63e-4fad-98d0-d1efea111966
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ae2d5121e17a9325ec45143e7e90e7d2a211f380
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43223098"
---
# <a name="helpstring"></a>helpstring

Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.

## <a name="syntax"></a>Sintassi

```cpp
[ helpstring(
   "string"
) ]
```

### <a name="parameters"></a>Parametri

*string*  
Il testo della stringa della Guida.

## <a name="remarks"></a>Note

Il **helpstring** attributi di C++ ha la stessa funzionalità come la [helpstring](/windows/desktop/Midl/helpstring) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [defaultvalue](../windows/defaultvalue.md) per un esempio di come usare **helpstring**.

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
[helpcontext](../windows/helpcontext.md)  