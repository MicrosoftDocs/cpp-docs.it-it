---
title: UUID (attributi C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.uuid
dev_langs:
- C++
helpviewer_keywords:
- uuid attribute
ms.assetid: 90562a94-5e28-451b-a4b0-cadda7f66efe
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ba35dc89ae2567a499d4623f0c74293d2dbdcca2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 *UUID*  
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
|**Si applica a**|**classe**, `struct`, `interface`, **unione**,`enum`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [UUID](http://msdn.microsoft.com/library/windows/desktop/aa367302)   
