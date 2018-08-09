---
title: length_is | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.length_is
dev_langs:
- C++
helpviewer_keywords:
- length_is attribute
ms.assetid: 1d99b883-84bb-4b1e-b098-eb780fc94f40
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d30a467bd929c68c35e06861087ec7f47d1f2d51
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40011907"
---
# <a name="lengthis"></a>length_is
Specifica il numero di elementi della matrice deve essere trasmesso.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ length_is(  
   "expression"  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *Espressione*  
 Una o più espressioni del linguaggio C. Gli slot di argomenti vuoto sono consentiti.  
  
## <a name="remarks"></a>Note  
 Il **length_is** attributi di C++ ha la stessa funzionalità come la [length_is](http://msdn.microsoft.com/library/windows/desktop/aa367068) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Visualizzare [first_is](../windows/first-is.md) per un esempio di come specificare una sezione di una matrice.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Nel campo **struct** oppure **union**, parametro di interfaccia, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [TypeDef, Enum, Union e struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [first_is](../windows/first-is.md)   
 [max_is](../windows/max-is.md)   
 [last_is](../windows/last-is.md)   
 [size_is](../windows/size-is.md)   