---
title: HelpContext | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.helpcontext
dev_langs:
- C++
helpviewer_keywords:
- helpcontext attribute
ms.assetid: 6fbb022d-a4b7-4989-a02f-7f18a9b0ad96
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c505d6ebf62e6c01ecd3c2f750cec1c95775f53d
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642428"
---
# <a name="helpcontext"></a>helpcontext
Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel **aiutare** file.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ helpcontext(  
   id  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *ID*  
 L'ID del contesto dell'argomento della Guida. Visualizzare [della Guida HTML: Guida sensibile al contesto per i programmi](../mfc/html-help-context-sensitive-help-for-your-programs.md) per altre informazioni sul contesto ID.  
  
## <a name="remarks"></a>Note  
 Il **helpcontext** attributi di C++ ha la stessa funzionalità come la [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo [defaultvalue](../windows/defaultvalue.md) per un esempio di come usare **helpcontext**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**interfaccia**, **typedef**, **classe**, metodo, proprietà|  
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
 [HelpFile](../windows/helpfile.md)   
 [helpstring](../windows/helpstring.md)   