---
title: voce | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.entry
dev_langs: C++
helpviewer_keywords: entry attribute
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3d586e2ceaeb922d5f9f96aaa175a5e33ad6ed64
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="entry"></a>entry
Specifica una costante o alla funzione esportata in un modulo identificando il punto di ingresso nella DLL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ entry(  
   id  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `id`  
 L'ID del punto di ingresso.  
  
## <a name="remarks"></a>Note  
 Il **voce** attributo C++ ha la stessa funzionalità come il [voce](http://msdn.microsoft.com/library/windows/desktop/aa366815) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [idl_module](../windows/idl-module.md) per ad esempio **voce**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Attributo `idl_module`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
