---
title: nonextensible | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.nonextensible
dev_langs: C++
helpviewer_keywords: nonextensible attribute
ms.assetid: c7ef1554-809f-4ea0-a7cd-dc7786d40c3e
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 31aa2bf8572a1a0e8ed785d55bb6960cfe6cf75e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|**Attributi obbligatori**|**doppia** e **oleautomation**, o **interfaccia dispatch**|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
