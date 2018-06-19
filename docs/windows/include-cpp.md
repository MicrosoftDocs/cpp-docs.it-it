---
title: includere (C++) | Documenti Microsoft
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
ms.openlocfilehash: a2c88dd610c1a0b8a8fee4e23da1b5ad844e989c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878424"
---
# <a name="include-c"></a>include (C++)
Specifica uno o più file di intestazione da includere nel file IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ include(  
   header_file  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 *HEADER_FILE5D*  
 Il nome di un file che si desidera incluso nel file IDL generato.  
  
## <a name="remarks"></a>Note  
 Il **includono** attributo C++ causa un `#include` istruzione inserita sotto la `import "docobj.idl"` istruzione nel file IDL generato.  
  
 Il **includono** attributo C++ ha la stessa funzionalità come il [includono](http://msdn.microsoft.com/library/windows/desktop/aa367052) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato un esempio di come utilizzare **includono**. Per questo esempio, include.h il file contiene solo un #include.  
  
```  
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
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [Importazione](../windows/import.md)   
 [importidl](../windows/importidl.md)   
 [includelib](../windows/includelib-cpp.md)   
 [importlib](../windows/importlib.md)   
