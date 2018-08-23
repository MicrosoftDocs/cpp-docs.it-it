---
title: HelpFile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.helpfile
dev_langs:
- C++
helpviewer_keywords:
- helpfile attribute
ms.assetid: d75161c1-1363-4019-ae09-e7e3b8a3971e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 37309f9170a1fe78c7db802ca13cc81112be9cbb
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42607377"
---
# <a name="helpfile"></a>helpfile

Imposta il nome del file della Guida per una libreria dei tipi.

## <a name="syntax"></a>Sintassi

```cpp
[ helpfile(
   "filename"
) ]
```

### <a name="parameters"></a>Parametri

*filename*  
Il nome del file che contiene gli argomenti della Guida.

## <a name="remarks"></a>Note

Il **helpfile** attributi di C++ ha la stessa funzionalità come la [helpfile](http://msdn.microsoft.com/library/windows/desktop/aa366853) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [module](../windows/module-cpp.md) per un esempio di come usare **helpfile**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, **typedef**, **classe**, metodo, **proprietà**|
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
[helpcontext](../windows/helpcontext.md)  
[helpstring](../windows/helpstring.md)  