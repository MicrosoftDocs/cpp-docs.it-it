---
title: versione (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.version
dev_langs:
- C++
helpviewer_keywords:
- version attribute
- version information, version attribute
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 43da63d75d3541915eba3e561ee08fe1048fa579
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890609"
---
# <a name="version-c"></a>version (C++)
Identifica una particolare versione tra più versioni di una classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ version(  
   "version"  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *version*  
 Il numero di versione della coclasse. Se non specificato, 1.0 verrà inserito nel file IDL.  
  
## <a name="remarks"></a>Note  
 Il **versione** attributo C++ ha la stessa funzionalità come il [versione](http://msdn.microsoft.com/library/windows/desktop/aa367306) attributo MIDL e viene passato al file IDL generato.  
  
## <a name="example"></a>Esempio  
 Vedere il [associabili](../windows/bindable.md) esempio per un esempio dell'uso di **versione**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**coclass**|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
