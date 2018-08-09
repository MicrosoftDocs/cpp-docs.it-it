---
title: emitidl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.emitidl
dev_langs:
- C++
helpviewer_keywords:
- emitidl attribute
ms.assetid: 85b80c56-578e-4392-ac03-8443c74ebb7d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5d508c6196ad9b9f32b4bcb0704272a500d0e952
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39643043"
---
# <a name="emitidl"></a>emitidl
Specifica se tutti gli attributi IDL successivi vengono elaborati e inseriti nel file con estensione IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
[ emitidl(state, defaultimports=boolean) ];
```  
  
### <a name="parameters"></a>Parametri  
*state*  
Uno di questi valori possibili: `true`, `false`, `forced`, `restricted`, `push`, o `pop`.  
  
-   Se `true`, eventuali attributi IDL presenti categoria rilevati in un file di codice sorgente vengono inseriti nel file con estensione IDL generato. Questo è l'impostazione predefinita per **emitidl**.  
  
-   Se `false`, eventuali attributi IDL presenti categoria rilevati in un file di codice sorgente non vengono inseriti nel file con estensione IDL generato.  
  
-   Se `restricted`, supporta gli attributi IDL in file senza un [modulo](../windows/module-cpp.md) attributo. Il compilatore non genera un file IDL.  
  
-   Se `forced`, esegue l'override di una successiva `restricted` attributo, che richiede un file per avere una `module` attributi se sono presenti IDL attributi nel file.  
  
-   `push` Consente di salvare l'oggetto corrente **emitidl** le impostazioni per interna **emitidl** stack, e `pop` consente di impostare **emitidl** per qualsiasi valore si trovi all'inizio dell'oggetto interno **emitidl** dello stack.  
  
`defaultimports=`*booleano* \(facoltativo)  
-   Se *booleana* viene **true**, docobj.idl viene importato in un file con estensione IDL generato. Inoltre, se un file con estensione idl con lo stesso nome di un'estensione h file che si `#include` in origine il codice si trova nella stessa directory del file con estensione h, quindi il file con estensione IDL generato contiene un'istruzione di importazione per il file con estensione idl.  
  
-   Se *booleana* viene **false**, docobj.idl non viene importato in file IDL generato. È necessario importare in modo esplicito con i file con estensione idl [importare](../windows/import.md).  
  
## <a name="remarks"></a>Note  
Dopo il **emitidl** attributo C++ viene rilevato in un file di codice sorgente, attributi IDL categoria vengono inseriti nel file con estensione IDL generato. Se è presente alcun **emitidl** attributi, attributi IDL presenti nel file del codice sorgente vengono restituiti come output nel file con estensione IDL generato.  
  
È possibile avere più **emitidl** attributi in un file di codice sorgente. Se `[emitidl(false)];` viene rilevato in un file senza una successiva `[emitidl(true)];`, quindi non sono presenti attributi vengono elaborati nel file IDL generato.  
  
Ogni volta che il compilatore rileva un nuovo file **emitidl** in modo implicito è impostata su **true**.  
  
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
[Esempi di attributi](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)