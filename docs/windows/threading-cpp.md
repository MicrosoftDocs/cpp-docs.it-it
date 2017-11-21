---
title: Threading (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.threading
dev_langs: C++
helpviewer_keywords: threading attribute
ms.assetid: 9b558cd6-fbf0-4602-aed5-31c068550ce3
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c85287a590dfa9cf3c931ce358dca8b303f4737a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="threading-c"></a>threading (C++)
Specifica il modello di threading per un oggetto COM.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ threading(  
   model=enumeration  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 ***modello*** (facoltativo)  
 Uno dei modelli di threading seguenti:  
  
-   **apartment** (modello di threading apartment)  
  
-   **neutro** (componenti .NET Framework senza interfaccia utente)  
  
-   **singolo** (threading semplice)  
  
-   **libera** (gratuito di threading)  
  
-   **entrambi** (threading apartment e free)  
  
 Il valore predefinito è **apartment**.  
  
## <a name="remarks"></a>Note  
 Il **threading** attributo C++ non è visualizzato nel file IDL generato ma verrà utilizzato nell'implementazione dell'oggetto COM.  
  
 In ATL (progetti), se il [coclasse](../windows/coclass.md) attributo è presente, anche il modello di threading specificato da *modello* viene passato come parametro di modello per il [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) classe , inserito tramite il **coclasse** attributo.  
  
 Il **threading** attributo protegge anche l'accesso a un [event_source](../windows/event-source.md).  
  
## <a name="example"></a>Esempio  
 Vedere il [concesso in licenza](../windows/licensed.md) esempio per un esempio dell'uso di **threading**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**coclass**|  
|**Attributi non validi**|Nessuna|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi COM](../windows/com-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Supporto del multithreading per il codice precedente (Visual C++)](../parallel/multithreading-support-for-older-code-visual-cpp.md)   
 [Neutro apartment](http://msdn.microsoft.com/library/windows/desktop/ms681813)   
