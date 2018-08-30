---
title: includere (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.include
dev_langs:
- C++
helpviewer_keywords:
- include attribute
ms.assetid: d23f8b91-fe5b-48fa-9371-8bd73af7b8e3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 232dfb803e9327b857d26a4294786c2742a1143c
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43215968"
---
# <a name="include-c"></a>include (C++)

Specifica uno o più file di intestazione da includere nel file IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ include(
   header_file
) ];
```

### <a name="parameters"></a>Parametri

*HEADER_FILE*  
Il nome di un file che si desidera incluso nel file con estensione IDL generato.

## <a name="remarks"></a>Note

Il **includono** C++ attributo causa una `#include` istruzione inserita sotto il `import "docobj.idl"` istruzione nel file IDL generato.

Il **includono** attributi di C++ ha la stessa funzionalità come la [includono](/windows/desktop/Midl/include) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato un esempio d'uso **includono**. Per questo esempio, il file include.h contiene solo un `#include` istruzione.

```cpp
// cpp_attr_ref_include.cpp
// compile with: /LD
[module(name="MyLib")];
[include(cpp_attr_ref_include.h)];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi autonomi](../windows/stand-alone-attributes.md)  
[import](../windows/import.md)  
[importidl](../windows/importidl.md)  
[includelib](../windows/includelib-cpp.md)  
[importlib](../windows/importlib.md)  