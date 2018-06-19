---
title: implements_category | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.implements_category
dev_langs:
- C++
helpviewer_keywords:
- implements_category attribute
ms.assetid: fb162df3-1ebe-43dc-a084-668d7ef8c03f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6770f8303af63c66f0d1a656c2b36e034cc2be83
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879035"
---
# <a name="implementscategory"></a>implements_category
Specifica le categorie di componenti implementate dalla classe di destinazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ implements_category(  
   implements_category="uuid"  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 **implements_category**  
 L'ID della categoria di implementazione.  
  
## <a name="remarks"></a>Note  
 Il **implements_category** attributo C++ specifica le categorie di componenti implementate dalla classe di destinazione. Questa operazione viene eseguita creando una mappa di categoria e aggiungendo separare le voci specificate per il **implements_category** attributo. Per ulteriori informazioni, vedere [quali sono le categorie di componenti e come si sono funzionano?](http://msdn.microsoft.com/library/windows/desktop/ms694322).  
  
 Questo attributo richiede che anche l'attributo [coclass](../windows/coclass.md), [progid](../windows/progid.md)o [vi_progid](../windows/vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se viene usato **progid** , vengono applicati anche **vi_progid** e **coclass** .  
  
## <a name="example"></a>Esempio  
 Il codice seguente specifica che l'oggetto seguente implementa la categoria di controllo.  
  
```  
// cpp_attr_ref_implements_category.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module (name="MyLib")];  
[ coclass, implements_category("CATID_Control"),  
  uuid("20a0d0cc-5172-40f5-99ae-5e032f3205ae")]  
class CMyClass {};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|Yes|  
|**Attributi obbligatori**|Uno dei seguenti: **coclass**, **progid**, o **vi_progid**|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi COM](../windows/com-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [IMPLEMENTED_CATEGORY](../atl/reference/category-macros.md#implemented_category)   
 