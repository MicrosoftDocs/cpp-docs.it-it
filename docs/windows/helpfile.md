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
ms.openlocfilehash: f4f25a8f3d5cc76d1b2b8d9a3d9996449f449466
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39570447"
---
# <a name="helpfile"></a>helpfile
Imposta il nome del file della Guida per una libreria dei tipi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
 [Attributi della classe](../windows/class-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [TypeDef, Enum, Union e struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [HelpContext](../windows/helpcontext.md)   
 [helpstring](../windows/helpstring.md)   