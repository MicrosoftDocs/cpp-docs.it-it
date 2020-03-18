---
title: Rinomina attributo importazione
ms.date: 08/29/2019
helpviewer_keywords:
- rename attribute
ms.assetid: 5c5c6153-1087-4b7b-87fb-fc59b90b9975
ms.openlocfilehash: 520369f0308078fead2947e27a512f25a3ad3fab
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447491"
---
# <a name="rename-import-attribute"></a>Rinomina attributo importazione

**C++Specifico**

Risolve i problemi di conflitto di nomi.

## <a name="syntax"></a>Sintassi

> **#import** rinominare la *libreria di tipi* **(** "*OldName*" **,** "*newname*" **)**

### <a name="parameters"></a>Parametri

\ *OldName*
Nome precedente nella libreria di tipi.

\ *newname*
Nome da utilizzare al posto del nome precedente.

## <a name="remarks"></a>Osservazioni

Quando si specifica l'attributo **Rename** , il compilatore sostituisce tutte le occorrenze di *OldName* nella *libreria dei tipi* con il *newname* fornito dall'utente nei file di intestazione risultanti.

L'attributo **Rename** può essere utilizzato quando un nome nella libreria dei tipi coincide con una definizione di macro nei file di intestazione di sistema. Se questa situazione non viene risolta, il compilatore può inviare diversi errori di sintassi, ad esempio [errore del compilatore C2059](../error-messages/compiler-errors-1/compiler-error-c2059.md) e [errore del compilatore C2061](../error-messages/compiler-errors-1/compiler-error-c2061.md).

> [!NOTE]
> La sostituzione riguarda un nome utilizzato nella libreria di tipi, non un nome utilizzato nel file di intestazione risultante.

Ad esempio, si supponga che una proprietà denominata `MyParent` esiste in una libreria di tipi e che una macro `GetMyParent` è definita in un file di intestazione e viene utilizzata prima di `#import`. Poiché `GetMyParent` è il nome predefinito di una funzione wrapper per la proprietà `get` di gestione degli errori, si verificherà un conflitto di nomi. Per ovviare al problema, utilizzare il seguente attributo nell'istruzione `#import` :

```cpp
#import MyTypeLib.tlb rename("MyParent","MyParentX")
```

il quale rinomina il nome `MyParent` nella libreria di tipi. Il tentativo di rinominare il nome del wrapper `GetMyParent` non riuscirà:

```cpp
#import MyTypeLib.tlb rename("GetMyParent","GetMyParentX")
```

Poiché il nome `GetMyParent` si verifica solo nel file di intestazione della libreria dei tipi risultante.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
