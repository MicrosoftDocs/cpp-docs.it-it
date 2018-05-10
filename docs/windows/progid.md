---
title: ProgID | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.progid
dev_langs:
- C++
helpviewer_keywords:
- progid attribute
ms.assetid: afcf559c-e432-481f-aa9a-bd3bb72c02a8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f2b2d2168b568c74c5404cc83bab1e5f77570773
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="progid"></a>progid
Specifica il ProgID di un oggetto COM.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ progid(  
   name  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 Il valore ProgID che rappresenta l'oggetto.  
  
 ProgID è presente una versione leggibile dell'identificatore di classe (CLSID) utilizzato per identificare gli oggetti COM/ActiveX.  
  
## <a name="remarks"></a>Note  
 Il **progid** attributo C++ consente di specificare il ProgID di un oggetto COM. Un ProgID ha il formato *name1.name2.version*. Se non si specifica un *versione* per un ProgID, la versione predefinita è 1. Se non si specifica *name1.name2*, il nome predefinito è *classname.classname*. Se non si specifica **progid** e si specifica **vi_progid**, *name1.name2* vengono prelevati **vi_progid** e di (successivo sequenziale versione numero) viene aggiunto.  
  
 Se un blocco di attributi che utilizza **progid** non utilizzare inoltre `uuid`, il compilatore controlla il Registro di sistema per verificare se un `uuid` esiste per l'oggetto specificato **progid**. Se **progid** non viene specificato, la versione (e il nome coclasse se la creazione di una coclasse) verrà utilizzati per generare un **progid**.  
  
 **ProgID** implica la **coclasse** dell'attributo, vale a dire, se si specifica **progid**, è lo stesso risultato che specifica il **coclasse** e  **ProgID** attributi.  
  
 Il **progid** attributo consente a una classe di essere registrati automaticamente con il nome specificato. Il file IDL generato non verrà visualizzato il **progid** valore.  
  
 Quando questo attributo viene utilizzato all'interno di un progetto che utilizza ATL, viene modificato il comportamento dell'attributo. Oltre al comportamento precedente, le informazioni specificate con questo attributo viene utilizzate nel **GetProgID** inserito dalla funzione di **coclasse** attributo. Per ulteriori informazioni, vedere il [coclasse](../windows/coclass.md) attributo.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [coclasse](../windows/coclass.md) per un esempio dell'uso di **progid**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Chiave progID](http://msdn.microsoft.com/library/windows/desktop/dd542719)   
