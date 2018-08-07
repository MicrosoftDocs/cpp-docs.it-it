---
title: first_is | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.first_is
dev_langs:
- C++
helpviewer_keywords:
- first_is attribute
ms.assetid: 89acbf56-3b38-4d44-83e8-1ce2f6f74ffd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8d11fdaf451ba1e77c997f49726cd9b86f66172f
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39569263"
---
# <a name="firstis"></a>first_is
Specifica l'indice del primo elemento della matrice deve essere trasmesso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[ first_is(  
   "expression"  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *Espressione*  
 Una o più espressioni del linguaggio C. Gli slot di argomenti vuoto sono consentiti.  
  
## <a name="remarks"></a>Note  
 Il **first_is** attributi di C++ ha la stessa funzionalità come la [first_is](http://msdn.microsoft.com/library/windows/desktop/aa366831) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Il codice seguente illustra vari modi per specificare una sezione in una matrice:  
  
```cpp  
// cpp_attr_ref_first_is.cpp  
// compile with: /LD  
#include "windows.h"  
#include "unknwn.h"  
  
[module(name="MyLib")];  
  
[object, uuid(11111111-1111-1111-1111-111111111111)]  
__interface b   
{  
   [id(0), propget, bindable, displaybind, defaultbind,   
requestedit] HRESULT get_I([out, retval]long *i);  
   HRESULT Proc1([in] short First, [in] short Last,   
[first_is(First), last_is(Last), size_is(Last-First)] char Arr1[]);   
   HRESULT Proc2([in] short First, [in] short Last,   
[last_is(First), size_is(Last)] char Arr2[]);  
};  
```  
  
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
 [last_is](../windows/last-is.md)   
 [max_is](../windows/max-is.md)   
 [length_is](../windows/length-is.md)   
 [size_is](../windows/size-is.md)   