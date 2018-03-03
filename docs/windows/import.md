---
title: importare | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.import
dev_langs:
- C++
helpviewer_keywords:
- import attribute
ms.assetid: ebf07cae-39fb-4047-8b57-54af0a9a83de
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 011cabb37f388d4be6a9a69f685a7c711f0209a6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="import"></a>importazione
Specifica un altro file di intestazione, ODL o IDL contenente le definizioni che si desidera fare riferimento dal principale IDL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ import(  
   idl_file  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 `idl_file`  
 Il nome di un file IDL che si desidera importare nella libreria dei tipi del progetto corrente.  
  
## <a name="remarks"></a>Note  
 Il **importare** attributo C++ causa un `#import` istruzione inserita sotto la `import "docobj.idl"` istruzione nel file IDL generato. Il **importare** presenta la stessa funzionalità come il [importare](http://msdn.microsoft.com/library/windows/desktop/aa367047) attributo MIDL.  
  
 Il **importare** attributo colloca solo il file specificato nel file IDL che verrà generato dal progetto; il **importare** attributo non è possibile chiamare costrutti nel file specificato dal codice sorgente nel progetto.  Per chiamare costrutti nel file specificato dal codice sorgente nel progetto, utilizzare [#import](../preprocessor/hash-import-directive-cpp.md) e `embedded_idl` attributo oppure è possibile includere il file h di `idl_file`, se esiste un file con estensione h.  
  
## <a name="example"></a>Esempio  
 Il codice seguente:  
  
```  
// cpp_attr_ref_import.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[import(import.idl)];  
```  
  
 Genera il seguente codice nel file IDL generato:  
  
```  
import "docobj.idl";  
import "import.idl";  
  
[ uuid(EED3644C-8488-3ECD-BA97-147DB3CDB499), version(1.0) ]  
library MyLib {  
   importlib("stdole2.tlb");  
   importlib("olepro32.dll");  
...  
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
 [importidl](../windows/importidl.md)   
 [importlib](../windows/importlib.md)   
 [includere](../windows/include-cpp.md)   
 [includelib](../windows/includelib-cpp.md)   
