---
description: Altre informazioni sulla direttiva include_alias pragma in Microsoft C/C++
title: include_alias pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.include_alias
- include_alias_CPP
helpviewer_keywords:
- pragma, include_alias
- include_alias pragma
no-loc:
- pragma
ms.openlocfilehash: a9586748794704b3b3bcaf3d8ede7ef2f2f74545
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713597"
---
# <a name="include_alias-no-locpragma"></a>`include_alias` pragma

Specifica che quando viene trovato *alias_filename* in una `#include` direttiva, il compilatore sostituisce *actual_filename* al suo posto.

## <a name="syntax"></a>Sintassi

<!-- localization note - it's important to have the italic and bold characters immediately adjacent here. -->
> **`#pragma include_alias(`** "*alias_filename*" **`,`** "*actual_filename*" **`)`**\
> **`#pragma include_alias(`** \<*alias_filename*> **`,`** \<*actual_filename*> **`)`**

## <a name="remarks"></a>Osservazioni

La **`include_alias`** pragma direttiva consente di sostituire i file con nomi o percorsi diversi per i nomi di file inclusi nei file di origine. Alcuni file System, ad esempio, consentono nomi di file di intestazione più lunghi rispetto al limite di file system FAT 8,3. Il compilatore non può semplicemente troncare i nomi più lunghi a 8,3, perché i primi otto caratteri dei nomi file di intestazione più lunghi potrebbero non essere univoci. Ogni volta che il compilatore vede la stringa *alias_filename* in una `#include` direttiva, sostituisce invece il nome *actual_filename* . Quindi carica il file di intestazione *actual_filename* . pragmaDeve essere presente prima delle `#include` direttive corrispondenti. Ad esempio:

```cpp
// First eight characters of these two files not unique.
#pragma include_alias( "AppleSystemHeaderQuickdraw.h", "quickdra.h" )
#pragma include_alias( "AppleSystemHeaderFruit.h", "fruit.h" )

#pragma include_alias( "GraphicsMenu.h", "gramenu.h" )

#include "AppleSystemHeaderQuickdraw.h"
#include "AppleSystemHeaderFruit.h"
#include "GraphicsMenu.h"
```

L'alias da cercare deve corrispondere esattamente alla specifica. Il caso, l'ortografia e l'utilizzo delle virgolette doppie o delle parentesi angolari devono corrispondere. **`include_alias`** pragma Esegue una semplice corrispondenza di stringhe sui nomi di file. Non viene eseguita alcuna convalida del nome file. Se si considerando, ad esempio, le seguenti direttive,

```cpp
#pragma include_alias("mymath.h", "math.h")
#include "./mymath.h"
#include "sys/mymath.h"
```

non viene eseguita alcuna sostituzione di alias, perché le stringhe del file di intestazione non corrispondono esattamente. Inoltre, i nomi di file di intestazione usati come argomenti per le **`/Yu`** **`/Yc`** Opzioni del compilatore e, o `hdrstop` pragma , non vengono sostituiti. Ad esempio, se il file di origine contiene la seguente direttiva,

```cpp
#include <AppleSystemHeaderStop.h>
```

l'opzione del compilatore corrispondente deve essere

> **`/YcAppleSystemHeaderStop.h`**

È possibile utilizzare per eseguire il **`include_alias`** pragma mapping di qualsiasi nome file di intestazione a un altro. Ad esempio:

```cpp
#pragma include_alias( "api.h", "c:\version1.0\api.h" )
#pragma include_alias( <stdio.h>, <newstdio.h> )
#include "api.h"
#include <stdio.h>
```

Non combinare i nomi file racchiusi tra virgolette doppie con nomi file racchiusi tra parentesi angolari. Ad esempio, date le due `#pragma include_alias` direttive precedenti, il compilatore non esegue alcuna sostituzione sulle `#include` direttive seguenti:

```cpp
#include <api.h>
#include "stdio.h"
```

Inoltre, la seguente diretta genera un errore:

```cpp
#pragma include_alias(<header.h>, "header.h")  // Error
```

Il nome file indicato nei messaggi di errore o come valore della `__FILE__` macro predefinita è il nome del file al termine della sostituzione. Ad esempio, vedere l'output dopo le direttive seguenti:

```cpp
#pragma include_alias( "VERYLONGFILENAME.H", "myfile.h" )
#include "VERYLONGFILENAME.H"
```

Un errore in *`VERYLONGFILENAME.H`* genera il messaggio di errore seguente:

```Output
myfile.h(15) : error C2059 : syntax error
```

Si noti inoltre che la transitività non è supportata. Date le seguenti direttive,

```cpp
#pragma include_alias( "one.h", "two.h" )
#pragma include_alias( "two.h", "three.h" )
#include "one.h"
```

il compilatore cerca il file *`two.h`* anziché *`three.h`* .

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
