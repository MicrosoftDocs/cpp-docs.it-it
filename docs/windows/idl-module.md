---
title: idl_module | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.idl_module
dev_langs:
- C++
helpviewer_keywords:
- idl_module attribute
ms.assetid: 3578b337-e38a-4334-b747-15404c02dbc0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 11547a3fb1bd46a1e2edb8ce9dd0a6547464f796
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="idlmodule"></a>idl_module
Specifica un punto di ingresso in un file con estensione dll.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ idl_module (   
   name=module_name,   
   dllname=dll,   
   uuid="uuid",   
   helpstring="help text",   
   helpstringcontext=helpcontextID,   
   helpcontext=helpcontext,   
   hidden,   
   restricted  
) ]  
function declaration  
```  
  
#### <a name="parameters"></a>Parametri  
 **name**  
 Un nome definito dall'utente per il blocco di codice che verrà visualizzato nel file IDL.  
  
 **NomeDLL** (facoltativo)  
 Il file DLL che contiene l'esportazione.  
  
 `uuid` (facoltativo)  
 ID univoco.  
  
 **HelpString** (facoltativo)  
 Una stringa di caratteri utilizzata per descrivere la libreria dei tipi.  
  
 **helpstringcontext** (facoltativo)  
 L'ID di un argomento della Guida in un file hlp o chm.  
  
 **helpcontext** (facoltativo)  
 L'ID Guida per questa libreria dei tipi.  
  
 **hidden** (facoltativo)  
 Un parametro che impedisce la libreria di visualizzazione. Per altre informazioni, vedere l'attributo MIDL [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) .  
  
 ***con restrizioni*** (facoltativo)  
 I membri della raccolta possono essere chiamati in modo arbitrario. Per altre informazioni, vedere l'attributo MIDL [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) .  
  
 *dichiarazione di funzione*  
 La funzione che verrà definita.  
  
## <a name="remarks"></a>Note  
 Il `idl_module` attributo C++ consente di specificare il punto di ingresso in un file con estensione dll, che consente di importare da un file con estensione dll.  
  
 Il **idl_module** presenta funzionalità simili a quelle di [modulo](http://msdn.microsoft.com/library/windows/desktop/aa367099) attributo MIDL.  
  
 È possibile esportare qualsiasi elemento da un oggetto COM che è possibile esportare da un file DLL inserendo un punto di ingresso DLL nel blocco di libreria di un file IDL.  
  
 Il deve utilizzare `idl_module` in due passaggi. In primo luogo, è necessario definire una coppia nome/DLL. Quindi, quando si utilizza `idl_module` per specificare un punto di ingresso, specificare il nome e gli altri attributi.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato come utilizzare il `idl_module` attributo:  
  
```  
// cpp_attr_ref_idl_module.cpp  
// compile with: /LD  
[idl_quote("midl_pragma warning(disable:2461)")];  
[module(name="MyLibrary"), idl_module(name="MyLib", dllname="xxx.dll")];  
[idl_module(name="MyLib"), entry(4), usesgetlasterror]  
void FuncName(int i);  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [entry](../windows/entry.md)   
