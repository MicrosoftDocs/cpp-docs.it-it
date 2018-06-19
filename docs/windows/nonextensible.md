---
title: nonextensible | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.nonextensible
dev_langs:
- C++
helpviewer_keywords:
- nonextensible attribute
ms.assetid: c7ef1554-809f-4ea0-a7cd-dc7786d40c3e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 87cdbf66676ed2a3e6054006270b39ad80325857
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33881601"
---
# <a name="nonextensible"></a>nonextensible
Specifica che il `IDispatch` implementazione include solo le proprietà e metodi elencati nella descrizione dell'interfaccia e non possono essere esteso con altri membri in fase di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[nonextensible]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **nonextensible** attributo C++ ha la stessa funzionalità come il [nonextensible](http://msdn.microsoft.com/library/windows/desktop/aa367120) attributo MIDL.  
  
 Utilizzo di **nonextensible** richiede anche il [oleautomation](../windows/oleautomation.md) attributo.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato uno degli utilizzi di **nonextensible** attributo:  
  
```  
// cpp_attr_ref_nonextensible.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="ATLFIRELib")];  
[export] typedef long HRESULT;  
  
[dual, nonextensible, ms_union, oleautomation,   
uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl  
{  
   HRESULT procedure (int i);   
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**dual** e **oleautomation**, o **interfaccia dispatch**|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
