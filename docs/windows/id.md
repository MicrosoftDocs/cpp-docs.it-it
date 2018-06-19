---
title: ID | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.id
dev_langs:
- C++
helpviewer_keywords:
- id attribute
ms.assetid: a48d2c99-c5d2-4f46-bf96-5ac88dcb5d0c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6c674765a0dfc06648d64a2b3b4e820bb467e700
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33882447"
---
# <a name="id"></a>ID
Specifica un `dispid` parametro per una funzione membro (una proprietà o un metodo, in un'interfaccia o interfaccia dispatch).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ id(  
   dispid  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `dispid`  
 ID di invio per il metodo di interfaccia.  
  
## <a name="remarks"></a>Note  
 Il **id** attributo C++ ha la stessa funzionalità come il [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [associabili](../windows/bindable.md) per un esempio di come utilizzare **id**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [Attributi del membro dati](../windows/data-member-attributes.md)   
 [DefaultValue](../windows/defaultvalue.md)   
 [in](../windows/in-cpp.md)   
 [out](../windows/out-cpp.md)   
