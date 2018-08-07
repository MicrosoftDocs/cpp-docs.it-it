---
title: RDX | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.rdx
dev_langs:
- C++
helpviewer_keywords:
- rdx attribute
ms.assetid: ff8e4312-c1ad-4934-bdaa-86f54409651e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3908a8f06d25416999fbf2c95dd258fbc19d456d
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39603120"
---
# <a name="rdx"></a>rdx
Crea una chiave del Registro di sistema o modifica una chiave del Registro di sistema esistente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[ rdx(   
   key,   
   valuename=NULL,   
   regtype   
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *key*  
 Il nome della chiave può essere creato o aperto.  
  
 *VALUENAME* (facoltativo)  
 Specifica il campo del valore da impostare. Se un campo del valore con lo stesso nome esiste già nella chiave, viene aggiunto.  
  
 *regtype*  
 Il tipo di chiave del Registro di sistema da aggiungere. Può essere uno dei seguenti: `text`, `dword`, `binary`, o `CString`.  
  
## <a name="remarks"></a>Note  
 Il **rdx** attributo C++ crea o modifica una chiave del Registro di sistema esistente per un componente COM. L'attributo aggiunge una macro BEGIN_RDX_MAP all'oggetto che implementa il membro di destinazione. `RegistryDataExchange`, una funzione inserita come risultato la macro BEGIN_RDX_MAP, può essere usata per trasferire dati tra il Registro di sistema e i membri dati  
  
 Questo attributo può essere utilizzato in combinazione con il [coclasse](../windows/coclass.md), [progid](../windows/progid.md), o [vi_progid](../windows/vi-progid.md) attributi o altri attributi che implica uno di questi.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe** oppure **struct** membro|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="example"></a>Esempio  
 Il codice seguente aggiunge una chiave del Registro di sistema denominata MyValue per il sistema che descrive il componente COM CMyClass.  
  
```cpp  
// cpp_attr_ref_rdx.cpp  
// compile with: /LD /link /OPT:NOREF  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
  
[module (name="MyLib")];  
  
class CMyClass {  
public:  
   CMyClass() {  
      strcpy_s(m_sz, "SomeValue");  
   }  
  
   [ rdx(key = "HKCR\\MyApp.MyApp.1", valuename = "MyValue", regtype = "text")]   
   char m_sz[256];  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi COM](../windows/com-attributes.md)   
 [registration_script](../windows/registration-script.md)   