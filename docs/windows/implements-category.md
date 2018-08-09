---
title: implements_category | Microsoft Docs
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
ms.openlocfilehash: 28df44096f3b61eb4ada17ec824292281edee602
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013714"
---
# <a name="implementscategory"></a>implements_category
Specifica le categorie di componenti implementate dalla classe di destinazione.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ implements_category(  
   implements_category="uuid"  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *implements_category*  
 L'ID della categoria implementata.  
  
## <a name="remarks"></a>Note  
 Il **implements_category** attributo C++ specifica le categorie di componenti implementate dalla classe di destinazione. Questa operazione viene eseguita creando una mappa di categoria e aggiungendo separare le voci specificate per il **implements_category** attributo. Per altre informazioni, vedere [quali sono le categorie di componenti e come eseguire operazioni They Work?](http://msdn.microsoft.com/library/windows/desktop/ms694322).  
  
 Questo attributo richiede che anche l'attributo [coclass](../windows/coclass.md), [progid](../windows/progid.md)o [vi_progid](../windows/vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se `progid` viene applicata `vi_progid` e `coclass` vengono applicati anche.  
  
## <a name="example"></a>Esempio  
 Il codice seguente specifica che l'oggetto seguente implementa il `Control` categoria.  
  
```cpp  
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
|**Si applica a**|**classe**, **struct**|  
|**Ripetibile**|Yes|  
|**Attributi obbligatori**|Uno dei seguenti: `coclass`, `progid`, o `vi_progid`|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi COM](../windows/com-attributes.md)   
 [Attributi della classe](../windows/class-attributes.md)   
 [IMPLEMENTED_CATEGORY](../atl/reference/category-macros.md#implemented_category)   