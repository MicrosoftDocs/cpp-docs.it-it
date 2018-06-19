---
title: UUID (attributi C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.uuid
dev_langs:
- C++
helpviewer_keywords:
- uuid attribute
ms.assetid: 90562a94-5e28-451b-a4b0-cadda7f66efe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e56793855b278e0631c39ebfcdc51669a001a24b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33891532"
---
# <a name="uuid-c-attributes"></a>uuid (attributi C++)
Specifica l'ID univoco per una classe o interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ uuid(  
   "uuid"  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *uuid*  
 Un identificatore univoco a 128 bit.  
  
## <a name="remarks"></a>Note  
 Se la definizione di un'interfaccia o classe non specifica il `uuid` attributo C++, quindi il compilatore Visual C++ fornirà uno. Quando si specifica un `uuid`, è necessario includere le virgolette.  
  
 Se non si specifica `uuid`, il compilatore genererà lo stesso GUID per le interfacce o classi con lo stesso nome in progetti diversi attributi in un computer.  
  
 È possibile utilizzare Uuidgen.exe o Guidgen.exe per generare il proprio ID univoci. (Per eseguire uno di questi strumenti, fare clic su **avviare** e fare clic su **eseguire** dal menu. Quindi immettere il nome dello strumento richiesto.)  
  
 Quando utilizzato in un progetto che non utilizzano ATL, specificando il `uuid` attributo corrisponde a quello ottenuto specificando il [uuid](../cpp/uuid-cpp.md) modificatore declspec. Per recuperare il `uuid` di una classe, è possibile utilizzare [uuidof](../cpp/uuidof-operator.md)  
  
## <a name="example"></a>Esempio  
 Vedere il [associabili](../windows/bindable.md) esempio per un esempio dell'uso di `uuid`.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, `struct`, `interface`, **unione**, `enum`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [uuid](http://msdn.microsoft.com/library/windows/desktop/aa367302)   
