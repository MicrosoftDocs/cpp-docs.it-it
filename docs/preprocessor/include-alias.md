---
title: include_alias | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.include_alias
- include_alias_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, include_alias
- include_alias pragma
ms.assetid: 3256d589-12b3-4af0-a586-199e96eabacc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 84e09b51d6f234bdc17353c358e378f18e153567
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="includealias"></a>include_alias

Specifica che *short_filename* deve essere utilizzato come alias per *short_filename*.

## <a name="syntax"></a>Sintassi

> #<a name="pragma-includealiaslongfilename-shortfilename"></a>pragma include_alias("*long_filename*", "*short_filename*")  
> #<a name="pragma-includealiaslongfilename-shortfilename"></a>pragma include_alias (*short_filename*, *short_filename*)

## <a name="remarks"></a>Note

Alcuni file system consentono nomi file di intestazione più lunghi rispetto al limite del file system FAT di 8,3. Il compilatore non può semplicemente troncare i nomi più lunghi a 8,3, perché i primi otto caratteri dei nomi file di intestazione più lunghi non possono essere univoci. Ogni volta che il compilatore rileva la *short_filename* stringa sostituisce *short_filename*e cerca il file di intestazione *short_filename* invece. Questo pragma deve essere visualizzato prima delle direttive `#include` corrispondenti. Ad esempio:

```cpp
// First eight characters of these two files not unique.
#pragma include_alias( "AppleSystemHeaderQuickdraw.h", "quickdra.h" )
#pragma include_alias( "AppleSystemHeaderFruit.h", "fruit.h" )

#pragma include_alias( "GraphicsMenu.h", "gramenu.h" )

#include "AppleSystemHeaderQuickdraw.h"
#include "AppleSystemHeaderFruit.h"
#include "GraphicsMenu.h"
```

L'alias cercato deve corrispondere esattamente alla specifica, sia per quanto riguarda le maiuscole/minuscole sia per l'ortografia, sia per l'utilizzo delle virgolette che per le parentesi quadre. Il **include_alias** pragma esegue una semplice corrispondenza di stringhe nei nomi dei file; viene eseguita nessun'altra convalida di nome file. Se si considerando, ad esempio, le seguenti direttive,

```cpp
#pragma include_alias("mymath.h", "math.h")
#include "./mymath.h"
#include "sys/mymath.h"
```

non viene eseguito nessun alias (sostituzione), poiché le stringhe del file di intestazione non corrispondono esattamente. Inoltre, i nomi di intestazione utilizzati come argomenti alle opzioni del compilatore /Yu e /Yc, o **hdrstop** pragma, non vengono sostituiti. Ad esempio, se il file di origine contiene la seguente direttiva,
  
```cpp
#include <AppleSystemHeaderStop.h>
```

l'opzione del compilatore corrispondente deve essere

> /YcAppleSystemHeaderStop.h

È possibile utilizzare il **include_alias** pragma da mappare qualsiasi nome di file di intestazione. Ad esempio:

```cpp
#pragma include_alias( "api.h", "c:\version1.0\api.h" )
#pragma include_alias( <stdio.h>, <newstdio.h> )
#include "api.h"
#include <stdio.h>
```

Non combinare i nomi file racchiusi tra virgolette doppie con i nomi file racchiusi tra parentesi quadre. Ad esempio, poiché i due precedenti **#pragma include_alias** direttive, il compilatore non esegue alcuna sostituzione nei seguenti `#include` direttive:

```cpp
#include <api.h>
#include "stdio.h"
```

Inoltre, la seguente diretta genera un errore:

```cpp
#pragma include_alias(<header.h>, "header.h")  // Error
```

Si noti che il nome del file indicato nei messaggi di errore o uguale al valore dell'oggetto predefinito **&#95; &#95;FILE&#95; &#95;** (macro), è il nome del file dopo che è stata eseguita la sostituzione. Ad esempio, vedere l'output dopo le direttive seguenti:

```cpp
#pragma include_alias( "VeryLongFileName.H", "myfile.h" )
#include "VeryLongFileName.H"
```

Un errore in VERYLONGFILENAME. H produce il seguente messaggio di errore:

```Output
myfile.h(15) : error C2059 : syntax error
```

Si noti inoltre che la transitività non è supportata. Date le seguenti direttive,

```cpp
#pragma include_alias( "one.h", "two.h" )
#pragma include_alias( "two.h", "three.h" )
#include "one.h"
```

il compilatore cerca il file TWO.H piuttosto che THREE.H.  

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)