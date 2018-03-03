---
title: importidl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.importidl
dev_langs:
- C++
helpviewer_keywords:
- importidl attribute
ms.assetid: 4b0a4b55-6c57-4e6e-bc7b-a12cc8063941
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cd3fb56898107b1eca7cd30e06d75d253a02655e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="importidl"></a>importidl
Inserisce il file IDL specificato nel file IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ importidl(  
   idl_file  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 `idl_file`  
 Identifica il nome del file IDL che si desidera unire con il file IDL che verrà generato per l'applicazione.  
  
## <a name="remarks"></a>Note  
 Il **importidl** attributo C++ posiziona la sezione all'esterno del blocco di libreria (in `idl_file`) nel file IDL generato del programma e la sezione relativa alla libreria (in `idl_file`) nella sezione della libreria del programma file IDL generato.  
  
 Si consiglia di utilizzare **importidl**, ad esempio, se si desidera utilizzare un file IDL codificati manualmente con il file IDL generato.  
  
## <a name="example"></a>Esempio  
  
```  
// cpp_attr_ref_importidl.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[importidl("import.idl")];  
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
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [importazione](../windows/import.md)   
 [importlib](../windows/importlib.md)   
 [includere](../windows/include-cpp.md)   
 [includelib](../windows/includelib-cpp.md)   
