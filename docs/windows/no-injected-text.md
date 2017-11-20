---
title: no_injected_text | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.no_injected_text
dev_langs: C++
helpviewer_keywords: no_injected_text attribute
ms.assetid: 5256f808-e41e-4f4a-9ea5-e447919f5696
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7856da95c8bd7563d66fc901bdac1f2a931b7384
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="noinjectedtext"></a>no_injected_text
Impedisce al compilatore di codice in seguito a uso dell'attributo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ no_injected_text(  
   boolean  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 `boolean`(facoltativo)  
 **true** se non si desidera alcun codice inserito, **false** per consentire al codice di essere inseriti. **true** è l'impostazione predefinita.  
  
## <a name="remarks"></a>Note  
 L'utilizzo più comune del **no_injected_text** attributo C++ è il [/Fx](../build/reference/fx-merge-injected-code.md) opzione del compilatore, che inserisce il **no_injected_text** attributo nel file mrg.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuna|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
