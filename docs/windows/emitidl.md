---
title: emitidl | Documenti Microsoft
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
ms.openlocfilehash: e4c66ba8c49a405f9fdd93b1652626ab47488a53
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="emitidl"></a>emitidl
Specifica se tutti gli attributi IDL successivi vengono elaborati e inseriti nel file IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```
[ emitidl(state, defaultimports=boolean) ];
```  
  
### <a name="parameters"></a>Parametri  
*state*  
Uno di questi valori possibili: **true**, **false**, **forzato**, **limitato**, **push**, o **pop**.  
  
-   Se **true**, eventuali attributi categoria IDL rilevati in un file di codice sorgente vengono inseriti nel file IDL generato. Questo è l'impostazione predefinita per **emitidl**.  
  
-   Se **false**, eventuali attributi categoria IDL rilevati in un file di codice sorgente non vengono inseriti nel file IDL generato.  
  
-   Se **limitato**, consente di attributi IDL in file senza un [modulo](../windows/module-cpp.md) attributo. Il compilatore non genera un file IDL.  
  
-   Se **forzato**, esegue l'override di una successiva **limitato** attributo, che richiede un file per un **modulo** attributo se esistono IDL attributi nel file.  
  
-   **push** consente di salvare corrente **emitidl** le impostazioni a un interno **emitidl** stack, e **pop** consente di configurare **emitidl**a qualsiasi valore si trovi all'inizio dell'oggetto interno **emitidl** dello stack.  
  
`defaultimports=`*booleano* \(facoltativo)  
-   Se *booleano* è **true**, docobj.idl viene importato in un file IDL generato. Inoltre, se un file IDL con lo stesso nome di un'estensione h di file che si `#include` in origine codice si trova nella stessa directory del file con estensione h, quindi il file IDL generato contiene un'istruzione di importazione per il file IDL.  
  
-   Se *booleano* è **false**, docobj.idl non è stato importato nel file IDL generato. È necessario importare in modo esplicito il file IDL con [importare](../windows/import.md).  
  
## <a name="remarks"></a>Note  
Dopo il **emitidl** viene rilevato l'attributo di C++ in un file di codice sorgente, gli attributi di categoria IDL vengono inseriti nel file IDL generato. Se è presente alcun **emitidl** attributi, gli attributi IDL in file di codice sorgente sono output nel file IDL generato.  
  
È possibile avere più **emitidl** attributi in un file di codice sorgente. Se `[emitidl(false)];` viene rilevato in un file senza una successiva `[emitidl(true)];`, attributi non vengono elaborate nel file IDL generato.  
  
Ogni volta che il compilatore incontra un nuovo file, **emitidl** è impostato in modo implicito su **true**.  
  
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
[Attributi del compilatore](../windows/compiler-attributes.md)   
[Attributi autonomi](../windows/stand-alone-attributes.md)   
[Esempi di attributi](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)