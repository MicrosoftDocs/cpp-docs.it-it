---
title: importlib | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.importlib
dev_langs:
- C++
helpviewer_keywords:
- importlib attribute
ms.assetid: f129e459-b8d3-4aca-a0bc-ee53e18b62ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c21b97e50fa03861245a0c0881963387dd8a3102
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="importlib"></a>importlib
Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ importlib(  
   "tlb_file"  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 *tlb_file*  
 Nome di un file tlb, racchiuso tra virgolette, che si desidera importare nella libreria dei tipi del progetto corrente.  
  
## <a name="remarks"></a>Note  
 Il **importlib** attributo C++ causa un `importlib` istruzione posizionati nel blocco di libreria del file IDL generato. Il **importlib** presenta la stessa funzionalità come il [importlib](http://msdn.microsoft.com/library/windows/desktop/aa367050) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato un esempio di come utilizzare **importlib**:  
  
```  
// cpp_attr_ref_importlib.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[importlib("importlib.tlb")];  
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
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [Importazione](../windows/import.md)   
 [importidl](../windows/importidl.md)   
 [Includere](../windows/include-cpp.md)   
 [includelib](../windows/includelib-cpp.md)