---
title: vi_progid | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.vi_progid
dev_langs: C++
helpviewer_keywords: vi_progid attribute
ms.assetid: a52449be-b93e-4111-b883-44bb8da53261
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b7581a4a10d9f101526aeb1a17ba7e26c4646b39
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="viprogid"></a>vi_progid
Specifica un formato indipendente dalla versione di ProgID.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ vi_progid(  
   name  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 Il ProgID indipendenti dalla versione che rappresenta l'oggetto.  
  
 ProgID è presente una versione leggibile dell'identificatore di classe (CLSID) utilizzato per identificare gli oggetti COM/ActiveX.  
  
## <a name="remarks"></a>Note  
 Il **vi_progid** attributo C++ consente di specificare un ProgID indipendenti dalla versione per un oggetto COM. Un ProgID ha il formato *name1.name2.version*. Un ProgID indipendenti dalla versione non esiste un *versione*. È possibile specificare sia il **progid** e **vi_progid** gli attributi di una coclasse. Se non si specifica **vi_progid**, il ProgID indipendenti dalla versione è il valore specificato per il [progid](../windows/progid.md) attributo.  
  
 **vi_progid** implica il **coclasse** attributo, ovvero, se si specifica **vi_progid**, è lo stesso risultato che specifica il **coclasse** e **vi_progid** attributi.  
  
 Il **vi_progid** attributo consente a una classe di essere registrati automaticamente con il nome specificato. Il file IDL generato non visualizzerà il valore ProgID.  
  
 In ATL (progetti), se il [coclasse](../windows/coclass.md) attributo inoltre è presente, viene utilizzato il valore ProgID specificato il **GetVersionIndependentProgID** (funzione) (inserito tramite il **coclasse** attributo).  
  
## <a name="example"></a>Esempio  
 Vedere il [coclasse](../windows/coclass.md) esempio per un esempio dell'uso di **vi_progid**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Chiave progID](http://msdn.microsoft.com/library/windows/desktop/dd542719)   
