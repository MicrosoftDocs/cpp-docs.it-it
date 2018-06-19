---
title: sincronizzare | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.synchronize
dev_langs:
- C++
helpviewer_keywords:
- synchronize attribute
ms.assetid: 15fc8544-955d-4765-b3d5-0f619c8b3f40
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 304ceece506465df0a51c56b247407d351fd23b3
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33889797"
---
# <a name="synchronize"></a>synchronize
Sincronizza l'accesso al metodo di destinazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[synchronize]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **sincronizzare** attributo C++ implementa il supporto per il metodo di destinazione di un oggetto di sincronizzazione. Sincronizzazione consente più oggetti da utilizzare una risorsa comune (ad esempio un metodo di una classe) per il controllo dell'accesso del metodo di destinazione.  
  
 Il codice inserito da questo attributo chiama appropriate `Lock` metodo (determinata dal modello di threading) all'inizio del metodo di destinazione. Quando il metodo viene terminato, `Unlock` viene chiamato automaticamente. Per ulteriori informazioni su queste funzioni, vedere [CComAutoThreadModule::Lock](../atl/reference/ccomautothreadmodule-class.md#lock)  
  
 Questo attributo richiede che anche l'attributo [coclass](../windows/coclass.md), [progid](../windows/progid.md)o [vi_progid](../windows/vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se viene usato **progid** , vengono applicati anche **vi_progid** e **coclass** .  
  
## <a name="example"></a>Esempio  
 Il codice seguente fornisce la sincronizzazione per il `UpdateBalance` metodo il `CMyClass` oggetto.  
  
```  
// cpp_attr_ref_synchronize.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module(name="SYNC")];  
  
[coclass,  
 threading(both),  
 vi_progid("MyProject.MyClass"),  
 progid("MyProject.MyClass.1"),  
 uuid("7a7baa0d-59b8-4576-b754-79d07e1d1cc3")  
]  
class CMyClass {  
   float m_nBalance;  
  
   [synchronize]  
   void UpdateBalance(float nAdjust) {  
      m_nBalance += nAdjust;  
   }  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Metodo della classe, metodo|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Uno o più degli attributi seguenti: **coclass**, **progid**o **vi_progid**.|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi COM](../windows/com-attributes.md)   
