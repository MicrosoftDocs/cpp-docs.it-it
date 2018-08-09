---
title: versione (C++) | Microsoft Docs
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
ms.openlocfilehash: 2c2d0c72ffbb805b526429562a5f39a09285b70f
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642279"
---
# <a name="version-c"></a>version (C++)
Identifica una particolare versione tra più versioni di una classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[ version(  
   "version"  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *version*  
 Il numero di versione il `coclass`. Se non specificato, 1.0 verrà inserita nel file IDL.  
  
## <a name="remarks"></a>Note  
 Il **versione** attributi di C++ ha la stessa funzionalità come la [versione](http://msdn.microsoft.com/library/windows/desktop/aa367306) attributo MIDL e viene passato al file con estensione IDL generato.  
  
## <a name="example"></a>Esempio  
 Vedere le [associabile](../windows/bindable.md) per un esempio dell'uso di esempio **versione**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, **struct**|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**coclass**|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   