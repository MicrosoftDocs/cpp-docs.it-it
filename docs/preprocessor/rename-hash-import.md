---
title: Rinomina (#import) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: Rename
dev_langs: C++
helpviewer_keywords: rename attribute
ms.assetid: 5c5c6153-1087-4b7b-87fb-fc59b90b9975
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fe5efd48867d5911a6512c32c3e91d80201d03ba
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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