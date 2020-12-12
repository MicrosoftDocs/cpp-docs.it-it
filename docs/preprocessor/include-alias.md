---
description: 'Altre informazioni su: include_alias pragma'
title: Pragma include_alias
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.include_alias
- include_alias_CPP
helpviewer_keywords:
- pragmas, include_alias
- include_alias pragma
ms.assetid: 3256d589-12b3-4af0-a586-199e96eabacc
ms.openlocfilehash: 1a1855ce4c908c6678cfce7617c98aa671c57fac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236516"
---
# <a name="include_alias-pragma"></a>Pragma include_alias

Specifica che quando viene trovato *alias_filename* in una `#include` direttiva, il compilatore sostituisce *actual_filename* al suo posto.

## <a name="syntax"></a>Sintassi

<!-- localization note - it's important to have the italic and bold characters immediately adjacent here. -->
> **#pragma include_alias (** "*alias_filename*" **,** "*actual_filename*" **)**\
> **#pragma include_alias (** \<*alias_filename*> **,** \<*actual_filename*> **)**

## <a name="remarks"></a>Commenti

La direttiva **include_alias** pragma consente di sostituire i file con nomi o percorsi diversi per i nomi di file inclusi nei file di origine. Alcuni file System, ad esempio, consentono nomi di file di intestazione più lunghi rispetto al limite di file system FAT 8,3. Il compilatore non può semplicemente troncare i nomi più lunghi a 8,3, perché i primi otto caratteri dei nomi file di intestazione più lunghi potrebbero non essere univoci. Ogni volta che il compilatore vede la stringa *alias_filename* in una `#include` direttiva, sostituisce invece il nome *actual_filename* . Quindi carica il file di intestazione *actual_filename* . Questo pragma deve essere visualizzato prima delle direttive `#include` corrispondenti. Ad esempio:

```cpp
// First eight characters of these two files not unique.
#pragma include_alias( "AppleSystemHeaderQuickdraw.h", "quickdra.h" )
#pragma include_alias( "AppleSystemHeaderFruit.h", "fruit.h" )

#pragma include_alias( "GraphicsMenu.h", "gramenu.h" )

#include "AppleSystemHeaderQuickdraw.h"
#include "AppleSystemHeaderFruit.h"
#include "GraphicsMenu.h"
```

L'alias da cercare deve corrispondere esattamente alla specifica. Il caso, l'ortografia e l'utilizzo delle virgolette doppie o delle parentesi angolari devono corrispondere. Il **include_alias** pragma esegue una corrispondenza di stringa semplice nei nomi dei file. Non viene eseguita alcuna convalida del nome file. Se si considerando, ad esempio, le seguenti direttive,

```cpp
#pragma include_alias("mymath.h", "math.h")
#include "./mymath.h"
#include "sys/mymath.h"
```

non viene eseguita alcuna sostituzione di alias, perché le stringhe del file di intestazione non corrispondono esattamente. Inoltre, i nomi di file di intestazione usati come argomenti per le `/Yu` `/Yc` Opzioni del compilatore e o per il `hdrstop` pragma non vengono sostituiti. Ad esempio, se il file di origine contiene la seguente direttiva,

```cpp
#include <AppleSystemHeaderStop.h>
```

l'opzione del compilatore corrispondente deve essere

> **/YcAppleSystemHeaderStop.h**

È possibile utilizzare il pragma **include_alias** per eseguire il mapping di qualsiasi nome file di intestazione a un altro. Ad esempio:

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

Errore in *VERYLONGFILENAME. H* genera il messaggio di errore seguente:

```Output
myfile.h(15) : error C2059 : syntax error
```

Si noti inoltre che la transitività non è supportata. Date le seguenti direttive,

```cpp
#pragma include_alias( "one.h", "two.h" )
#pragma include_alias( "two.h", "three.h" )
#include "one.h"
```

il compilatore cerca il file *due. h* anziché *tre. h*.

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
