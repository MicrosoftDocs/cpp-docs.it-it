---
title: satype | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.satype
dev_langs: C++
helpviewer_keywords: satype attribute
ms.assetid: 1716590b-6bcb-4aba-b1bc-82f7335f02c3
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 40aa6aa0b8270cf910fe7449af32ae877544a40e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="satype"></a>satype
Specifica il tipo di dati di **SAFEARRAY** struttura.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ satype(  
   data_type  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *data_type*  
 Il tipo di dati per il **SAFEARRAY** struttura dei dati che viene passato come parametro a un metodo di interfaccia.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
## <a name="remarks"></a>Note  
 Il **satype** attributo C++ specifica il tipo di dati di **SAFEARRAY**.  
  
> [!NOTE]
>  Un livello di riferimento indiretto viene eliminato dal **SAFEARRAY** puntatore nel file IDL generato da come viene dichiarato nel file con estensione cpp.  
  
## <a name="example"></a>Esempio  
  
```  
// cpp_attr_ref_satype.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="MyModule")];  
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]  
__interface A {  
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [id](../windows/id.md)   
