---
title: vi_progid | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.vi_progid
dev_langs:
- C++
helpviewer_keywords:
- vi_progid attribute
ms.assetid: a52449be-b93e-4111-b883-44bb8da53261
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 96843c9d977b15d7fe2c645c8f655cd59a42e401
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642048"
---
# <a name="viprogid"></a>vi_progid
Specifica una forma indipendente dalla versione di ProgID.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[ vi_progid(  
   name  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 Il ProgID indipendenti dalla versione che rappresenta l'oggetto.  
  
 ProgID presentano una versione leggibile dell'identificatore di classe (CLSID) usato per identificare gli oggetti ActiveX/COM.  
  
## <a name="remarks"></a>Note  
 Il **vi_progid** attributo C++ consente di specificare un ProgID indipendenti dalla versione per un oggetto COM. Un ProgID ha il formato *name1.name2.version*. Un ProgID indipendenti dalla versione non è un *versione*. È possibile specificare sia il `progid` e il **vi_progid** attributi su un `coclass`. Se non si specifica **vi_progid**, il ProgID indipendenti dalla versione è il valore specificato per il [progid](../windows/progid.md) attributo.  
  
 **vi_progid** implica la `coclass` dell'attributo, vale a dire, se si specifica **vi_progid**, è la stessa operazione quello ottenuto specificando il `coclass` e **vi_progid** attributi.  
  
 Il **vi_progid** attributo fa sì che una classe da registrare automaticamente sotto il nome specificato. Il file con estensione IDL generato non visualizzerà il valore ProgID.  
  
 Nei progetti ATL, se il [coclasse](../windows/coclass.md) attributo inoltre è presente, il valore ProgID specificato viene usato per il `GetVersionIndependentProgID` (funzione) (inseriti dal `coclass` attributo).  
  
## <a name="example"></a>Esempio  
 Vedere le [coclasse](../windows/coclass.md) per un esempio dell'uso di esempio **vi_progid**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, **struct**|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [TypeDef, Enum, Union e struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributi della classe](../windows/class-attributes.md)   
 [Chiave progID](http://msdn.microsoft.com/library/windows/desktop/dd542719)   