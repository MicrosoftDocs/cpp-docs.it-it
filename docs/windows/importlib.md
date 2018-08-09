---
title: importlib | Microsoft Docs
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
ms.openlocfilehash: c9676c6c28e9f142f0ec376fae31c3d26f1a2083
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40011666"
---
# <a name="importlib"></a>importlib
Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ importlib(  
   "tlb_file"  
) ];  
```  
  
### <a name="parameters"></a>Parametri  
 *tlb_file*  
 Nome di un file tlb, racchiuso tra virgolette, che si desidera importare nella libreria dei tipi del progetto corrente.  
  
## <a name="remarks"></a>Note  
 Il **importlib** C++ attributo provoca un `importlib` informativa per essere inserito nel blocco di libreria del file con estensione IDL generato. Il **importlib** attributo ha la stessa funzionalità come la [importlib](http://msdn.microsoft.com/library/windows/desktop/aa367050) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato un esempio d'uso **importlib**:  
  
```cpp  
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
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [Importazione](../windows/import.md)   
 [importidl](../windows/importidl.md)   
 [includere](../windows/include-cpp.md)   
 [includelib](../windows/includelib-cpp.md)