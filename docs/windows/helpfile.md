---
title: HelpFile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.helpfile
dev_langs: C++
helpviewer_keywords: helpfile attribute
ms.assetid: d75161c1-1363-4019-ae09-e7e3b8a3971e
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 63987b4e1427f12925b55fa3570d80b9e3a4686d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="helpfile"></a>helpfile
Imposta il nome del file della Guida per una libreria dei tipi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ helpfile(  
   "filename"  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *filename*  
 Il nome del file che contiene gli argomenti della Guida.  
  
## <a name="remarks"></a>Note  
 Il **helpfile** attributo C++ ha la stessa funzionalità come il [helpfile](http://msdn.microsoft.com/library/windows/desktop/aa366853) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [modulo](../windows/module-cpp.md) per un esempio di come utilizzare **helpfile**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`, `typedef`, **classe**, metodo, proprietà|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [HelpContext](../windows/helpcontext.md)   
 [helpstring](../windows/helpstring.md)   
