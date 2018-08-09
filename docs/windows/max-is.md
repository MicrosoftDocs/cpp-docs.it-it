---
title: max_is | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.max_is
dev_langs:
- C++
helpviewer_keywords:
- max_is attribute
ms.assetid: 7c851f5c-6649-4d77-a792-247c37d8f560
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2799039aa2c198bcea3784876d8299fcaec59b20
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40012449"
---
# <a name="maxis"></a>max_is
Definisce il valore massimo per un indice di matrice valida.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ max_is(  
   "expression"  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *Espressione*  
 Una o più espressioni del linguaggio C. Gli slot di argomenti vuoto sono consentiti.  
  
## <a name="remarks"></a>Note  
 Il **max_is** attributi di C++ ha la stessa funzionalità come la [max_is](http://msdn.microsoft.com/library/windows/desktop/aa367074) attributo MIDL.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Nel campo **struct** oppure **union**, parametro di interfaccia, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|**size_is**|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="example"></a>Esempio  
 Visualizzare [first_is](../windows/first-is.md) per un esempio di come specificare una sezione di una matrice.  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [TypeDef, Enum, Union e struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [first_is](../windows/first-is.md)   
 [last_is](../windows/last-is.md)   
 [length_is](../windows/length-is.md)   
 [size_is](../windows/size-is.md)   