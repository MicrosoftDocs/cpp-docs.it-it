---
title: interfaccia dispatch | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.dispinterface
dev_langs: C++
helpviewer_keywords: dispinterface attribute
ms.assetid: 61c5a4a1-ae92-47e9-8ee4-f847be90172b
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e52d050b9b05ccb72969c531297367e729c258b1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dispinterface"></a>dispinterface
Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[dispinterface]  
  
```  
  
## <a name="remarks"></a>Note  
 Quando l'attributo **dispinterface** di C++ precede un'interfaccia, quest'ultima viene inserita nel blocco della libreria nel file con estensione idl generato.  
  
 A meno che non si specifichi una classe di base, un'interfaccia di dispatch deriverà da `IDispatch`. È necessario specificare un [id](../windows/id.md) per i membri di un'interfaccia di dispatch.  
  
 L'esempio d'uso relativo a [dispinterface](http://msdn.microsoft.com/library/windows/desktop/aa366802) nella documentazione di MIDL:  
  
```  
dispinterface helloPro   
   { interface hello; };   
```  
  
 non è valido per l'attributo **dispinterface** .  
  
## <a name="example"></a>Esempio  
 Per informazioni su come usare [dispinterface](../windows/bindable.md) , vedere l'esempio relativo a **bindable**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|**dual**, **object**, **oleautomation**, `local`, **ms_union**|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi dall'utilizzo](../windows/attributes-by-usage.md)   
 [UUID](../windows/uuid-cpp-attributes.md)   
 [doppia](../windows/dual.md)   
 [personalizzato](../windows/custom-cpp.md)   
 [object](../windows/object-cpp.md)   
 [__interface](../cpp/interface.md)   
