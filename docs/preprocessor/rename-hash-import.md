---
title: Rinomina (#import) | Microsoft Docs
ms.custom: ''
ms.date: 10/18/2018
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
ms.openlocfilehash: 2b8525a321f56ab5e9bfe2f8e8cee7be9cd26788
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49808186"
---
# <a name="rename-import"></a>Rinomina (\#importazione)

**Sezione specifica C++**

Risolve i problemi di conflitto di nomi.

## <a name="syntax"></a>Sintassi

```
rename("OldName","NewName")
```

### <a name="parameters"></a>Parametri

*OldName*<br/>
Nome precedente nella libreria di tipi.

*NewName*<br/>
Nome da utilizzare al posto del nome precedente.

## <a name="remarks"></a>Note

Se questo attributo è specificato, il compilatore sostituisce tutte le occorrenze di *OldName* in una libreria dei tipi con il fornito dall'utente *NewName* nei file di intestazione risultante.

Questo attributo può essere utilizzato quando un nome nella libreria di tipi coincide con una definizione macro nei file di intestazione del sistema. Se non viene risolto il problema, diversi errori di sintassi non verranno generati, ad esempio [errore del compilatore C2059](../error-messages/compiler-errors-1/compiler-error-c2059.md) e [errore del compilatore C2061](../error-messages/compiler-errors-1/compiler-error-c2061.md).

> [!NOTE]
> La sostituzione riguarda un nome utilizzato nella libreria di tipi, non un nome utilizzato nel file di intestazione risultante.

Ad esempio, si supponga che una proprietà denominata `MyParent` esiste in una libreria di tipi e che una macro `GetMyParent` è definita in un file di intestazione e viene utilizzata prima di `#import`. Poiché `GetMyParent` è il nome predefinito di una funzione wrapper per la gestione degli errori `get` proprietà, si verifica un conflitto di nomi. Per ovviare al problema, utilizzare il seguente attributo nell'istruzione `#import` :

```cpp
rename("MyParent","MyParentX")
```

il quale rinomina il nome `MyParent` nella libreria di tipi. Il tentativo di rinominare il nome del wrapper `GetMyParent` non riuscirà:

```cpp
rename("GetMyParent","GetMyParentX")
```

Questo perché il nome `GetMyParent` ricorre solo nel file di intestazione della libreria di tipi risultante.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)