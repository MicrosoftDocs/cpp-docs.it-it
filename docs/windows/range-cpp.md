---
title: intervallo (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.range
dev_langs: C++
helpviewer_keywords: range attribute
ms.assetid: f352f79e-ecb3-4cdd-9cdd-8406ef473594
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b95b1bfd093a12bca5398c266d6a7c8236140105
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="range-c"></a>range (C++)
Specifica un intervallo di valori consentiti per gli argomenti o i campi i cui valori sono impostati in fase di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ range(  
   low,   
   high  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *low*  
 Il valore minimo dell'intervallo.  
  
 *high*  
 Il valore massimo dell'intervallo.  
  
## <a name="remarks"></a>Note  
 Il **intervallo** attributo C++ ha la stessa funzionalità come il [intervallo](http://msdn.microsoft.com/library/windows/desktop/aa367151) attributo MIDL.  
  
## <a name="example"></a>Esempio  
  
```  
// cpp_attr_ref_range.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
  
[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]  
__interface ICustom {  
   HRESULT Custom([in] long l, [out, retval] long *pLong);  
   HRESULT length_is1([in, range(0, 999)] long f, [in, length_is(f)] char array[10]);  
   HRESULT length_is2([in, range(-99, -1)] long f, [in, length_is("f"), size_is(10)] char *array);  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Metodo di interfaccia, il parametro di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [Attributi di membro dati](../windows/data-member-attributes.md)   
