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
ms.openlocfilehash: c21bb7cf58c3c397237768942d60f79958f3278a
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013561"
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
  
 Il **includono** attributi di C++ ha la stessa funzionalità come la [includono](http://msdn.microsoft.com/library/windows/desktop/aa367052) attributo MIDL.  
  
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
 [Importazione](../windows/import.md)   
 [importidl](../windows/importidl.md)   
 [includelib](../windows/includelib-cpp.md)   
 [importlib](../windows/importlib.md)   