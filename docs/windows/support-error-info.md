---
title: support_error_info | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.support_error_info
dev_langs:
- C++
helpviewer_keywords:
- support_error_info attribute
ms.assetid: 20a2b55c-4738-4b35-a71d-e5e9c3a7e3bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0c366a379d15e50aabdc3c2157f57f85b6b5b33b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33889930"
---
# <a name="supporterrorinfo"></a>support_error_info
Implementa il supporto per la restituzione di errori dettagliati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ support_error_info(  
   error_interface=uuid  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 **error_interface**  
 L'identificatore dell'interfaccia che implementa **IErrorInfo**.  
  
## <a name="remarks"></a>Note  
 L'attributo **support_error_info** di C++ implementa il supporto per la restituzione di errori contestuali e dettagliati rilevati dall'oggetto di destinazione al client. Perché l'oggetto supporti gli errori, i metodi dell'interfaccia **IErrorInfo** devono essere implementati dall'oggetto. Per altre informazioni, vedere [Supporto di IDispatch e IErrorInfo](../atl/supporting-idispatch-and-ierrorinfo.md).  
  
 Questo attributo aggiunge la classe [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) come classe base per l'oggetto di destinazione. Questo genera un'implementazione predefinita di **ISupportErrorInfo** e può essere usato quando una singola interfaccia genera errori in un oggetto.  
  
## <a name="example"></a>Esempio  
 Il codice seguente aggiunge il supporto predefinito per l'interfaccia **ISupportErrorInfo** all'oggetto `CMyClass` .  
  
```  
// cpp_attr_ref_support_error_info.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module (name="mymod")];  
[object, uuid("f0b17d66-dc6e-4662-baaf-76758e09c878")]  
__interface IMyErrors  
{  
};  
  
[ coclass, support_error_info("IMyErrors"),  
  uuid("854dd392-bdc7-4781-8667-8757936f2a4f") ]  
class CMyClass  
{  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**|  
|**Ripetibile**|Yes|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi COM](../windows/com-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
