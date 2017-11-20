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
ms.openlocfilehash: 6681f8f47895d94935f9fbbb3d93d379a82f7eb6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [HelpContext](../windows/helpcontext.md)   
 [helpstring](../windows/helpstring.md)   
