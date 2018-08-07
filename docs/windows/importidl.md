---
title: importidl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.importidl
dev_langs:
- C++
helpviewer_keywords:
- importidl attribute
ms.assetid: 4b0a4b55-6c57-4e6e-bc7b-a12cc8063941
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bd930ef70e5bb2b87c584c1d821cdf4528580a31
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39607183"
---
# <a name="importidl"></a>importidl
Inserisce il file con estensione idl specificato nel file con estensione IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[ importidl(  
   idl_file  
) ];  
```  
  
### <a name="parameters"></a>Parametri  
 *idl_file*  
 Identifica il nome del file con estensione idl che si desidera eseguire il merge con il file con estensione idl che verrà generato per l'applicazione.  
  
## <a name="remarks"></a>Note  
 Il **importidl** attributo C++ inserisce la sezione all'esterno del blocco di libreria (in *idl_file*) nel file IDL generato del programma e la sezione della libreria (in *idl_file*) nella libreria sezione del programma generati file con estensione idl.  
  
 È possibile usare **importidl**, ad esempio, se si desidera utilizzare un file con estensione idl codificato manualmente con il file con estensione IDL generato.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cpp_attr_ref_importidl.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[importidl("import.idl")];  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [Importazione](../windows/import.md)   
 [importlib](../windows/importlib.md)   
 [includere](../windows/include-cpp.md)   
 [includelib](../windows/includelib-cpp.md)   