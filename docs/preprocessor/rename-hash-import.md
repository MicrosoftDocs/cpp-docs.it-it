---
title: Rinomina (#import) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- Rename
dev_langs:
- C++
helpviewer_keywords:
- rename attribute
ms.assetid: 5c5c6153-1087-4b7b-87fb-fc59b90b9975
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5bad195e0885c18748ddd39d2ed6e7a565606398
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33840433"
---
# <a name="rename-import"></a>rename (#import)
**Sezione specifica C++**  
  
 Risolve i problemi di conflitto di nomi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
rename("OldName","NewName")  
```  
  
#### <a name="parameters"></a>Parametri  
 `OldName`  
 Nome precedente nella libreria di tipi.  
  
 `NewName`  
 Nome da utilizzare al posto del nome precedente.  
  
## <a name="remarks"></a>Note  
 Se questo attributo viene specificato, il compilatore sostituisce tutte le occorrenze di *OldName* in una libreria dei tipi con fornito dall'utente *NewName* nei file di intestazione risultante.  
  
 Questo attributo può essere utilizzato quando un nome nella libreria di tipi coincide con una definizione macro nei file di intestazione del sistema. Se non viene risolto il problema, quindi si verranno generati i diversi errori di sintassi, ad esempio [errore del compilatore C2059](../error-messages/compiler-errors-1/compiler-error-c2059.md) e [errore del compilatore C2061](../error-messages/compiler-errors-1/compiler-error-c2061.md).  
  
> [!NOTE]
>  La sostituzione riguarda un nome utilizzato nella libreria di tipi, non un nome utilizzato nel file di intestazione risultante.  
  
 Ad esempio, si supponga che una proprietà denominata `MyParent` esiste in una libreria di tipi e che una macro `GetMyParent` è definita in un file di intestazione e viene utilizzata prima di `#import`. Poiché `GetMyParent` è il nome predefinito di una funzione wrapper per la gestione degli errori **ottenere** proprietà, si verifica un conflitto di nomi. Per ovviare al problema, utilizzare il seguente attributo nell'istruzione `#import` :  
  
```  
rename("MyParent","MyParentX")  
```  
  
 il quale rinomina il nome `MyParent` nella libreria di tipi. Il tentativo di rinominare il nome del wrapper `GetMyParent` non riuscirà:  
  
```  
rename("GetMyParent","GetMyParentX")  
```  
  
 Questo perché il nome `GetMyParent` ricorre solo nel file di intestazione della libreria di tipi risultante.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)