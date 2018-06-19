---
title: HelpContext | Documenti Microsoft
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
ms.openlocfilehash: 317e204c7292c4a7cccb1f81f6bc9d2a2fbfd407
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33877215"
---
# <a name="helpcontext"></a>helpcontext
Specifica un ID di contesto che consente di visualizzare informazioni su questo elemento nel file della Guida.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ helpcontext(  
   id  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `id`  
 L'ID del contesto dell'argomento della Guida. Vedere [della Guida HTML: Guida sensibile al contesto per i programmi](../mfc/html-help-context-sensitive-help-for-your-programs.md) per ulteriori informazioni sull'ID di contesto.  
  
## <a name="remarks"></a>Note  
 Il **helpcontext** attributo C++ ha la stessa funzionalità come il [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [defaultvalue](../windows/defaultvalue.md) per un esempio di come utilizzare **helpcontext**.  
  
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
 [HelpFile](../windows/helpfile.md)   
 [helpstring](../windows/helpstring.md)   
