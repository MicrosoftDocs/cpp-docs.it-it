---
title: call_as | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.call_as
dev_langs:
- C++
helpviewer_keywords:
- call_as attribute
ms.assetid: a09d7f1f-353b-4870-9b45-f0284161695d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 68707ea7e00665d12165c7838b1a2ad3440f944d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="callas"></a>call_as
Consente un [locale](../windows/local-cpp.md) funzione può essere mappata a una funzione remota in modo che quando viene chiamata la funzione remota, la funzione locale viene richiamata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ call_as(  
   function  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *function*  
 La funzione locale che si desidera essere chiamato quando viene richiamata una funzione remota.  
  
## <a name="remarks"></a>Note  
 Il **call_as** attributo C++ ha la stessa funzionalità come il [call_as](http://msdn.microsoft.com/library/windows/desktop/aa366748) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Nel codice seguente viene illustrato come utilizzare **call_as** per eseguire il mapping di una funzione nonremotable (**f1**) a una funzione utilizzabile in remoto (**Remf1**):  
  
```  
// cpp_attr_ref_call_as.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="MyLib")];  
[dual, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMInterface {  
   [local] HRESULT f1 ( int i );  
   [call_as(f1)] HRESULT Remf1 ( int i );   
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [local](../windows/local-cpp.md)   
