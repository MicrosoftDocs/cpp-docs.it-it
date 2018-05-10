---
title: origine (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.source
dev_langs:
- C++
helpviewer_keywords:
- source attribute
ms.assetid: 1878d05d-7709-4e97-b114-c62f38f5140e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 11ee58fb2d500a7194fb08ee18b1af5cc7897830
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="source-c"></a>source (C++)
In una classe, specifica le interfacce di origine dell'oggetto COM per i punti di connessione. In un metodo o proprietà, indica che il membro restituisce un oggetto o una variante di un'origine di eventi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ source(  
   interfaces  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `interfaces`  
 Una o più interfacce di specificare quando si applica l'origine dell'attributo a una classe. Questo parametro non viene utilizzato quando l'origine viene applicata a una proprietà o metodo.  
  
## <a name="remarks"></a>Note  
 Il **origine** attributo C++ ha la stessa funzionalità come il [origine](http://msdn.microsoft.com/library/windows/desktop/aa367166) attributo MIDL.  
  
 È possibile utilizzare il [predefinito](../windows/default-cpp.md) attributo per specificare l'interfaccia di origine predefinito per un oggetto.  
  
## <a name="example"></a>Esempio  
  
```  
// cpp_attr_ref_source.cpp  
// compile with: /LD  
#include "windows.h"  
#include "unknwn.h"  
[module(name="MyLib")];  
  
[object, uuid(11111111-1111-1111-1111-111111111111)]  
__interface b  
{  
   [id(0), propget, bindable, displaybind, defaultbind, requestedit]  
   HRESULT get_I([out, retval]long *i);  
};  
  
[object, uuid(11111111-1111-1111-1111-111111111131)]  
__interface c  
{  
   [id(0), propget, bindable, displaybind, defaultbind, requestedit]   
   HRESULT et_I([out, retval]long *i);  
};  
  
[coclass, default(c), uuid(11111111-1111-1111-1111-111111111132)]  
class N : public b  
{  
};  
  
[coclass, source(c), default(b, c), uuid(11111111-1111-1111-1111-111111111133)]  
class NN : public b  
{  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, `struct`, `interface`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**Coclasse** (quando applicato alla classe o struct)|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [coclass](../windows/coclass.md)   
