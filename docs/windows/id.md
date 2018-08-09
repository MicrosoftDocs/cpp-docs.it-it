---
title: ID | Microsoft Docs
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
ms.openlocfilehash: 5a89758933aef4646aaf11d08d7193d48a44f468
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013545"
---
# <a name="id"></a>ID
Specifica un *dispid* parametro per una funzione membro (una proprietà o un metodo, in un'interfaccia o interfaccia dispatch).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ id(  
   dispid  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *DISPID*  
 L'ID di invio per il metodo di interfaccia.  
  
## <a name="remarks"></a>Note  
 Il **id** attributi di C++ ha la stessa funzionalità come la [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo [associabile](../windows/bindable.md) per un esempio di come usare **id**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [Attributi del membro dati](../windows/data-member-attributes.md)   
 [DefaultValue](../windows/defaultvalue.md)   
 [in](../windows/in-cpp.md)   
 [out](../windows/out-cpp.md)   