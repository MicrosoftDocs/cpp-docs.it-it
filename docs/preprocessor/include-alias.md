---
title: include_alias
ms.date: 12/16/2018
f1_keywords:
- vc-pragma.include_alias
- include_alias_CPP
helpviewer_keywords:
- pragmas, include_alias
- include_alias pragma
ms.assetid: 3256d589-12b3-4af0-a586-199e96eabacc
ms.openlocfilehash: 187fa94f7c2a5457df655081b87a7f49d38adfa2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384042"
---
# <a name="includealias"></a>include_alias

Specifica che quando *alias_filename* si trova un `#include` direttiva, il compilatore sostituisce *actual_filename* al suo posto.

## <a name="syntax"></a>Sintassi

> #<a name="pragma-includealiasaliasfilename-actualfilename"></a>pragma include_alias ("*alias_filename*","*actual_filename*")
> #<a name="pragma-includealiasaliasfilename-actualfilename"></a>pragma include_alias (\<*alias_filename*>, \< *actual_filename*>)

## <a name="remarks"></a>Note

Il **include_alias** direttiva pragma consente di sostituire i file con nomi diversi o i percorsi per i nomi di file inclusi per i file di origine. Ad esempio, alcuni file System consentono nomi file di intestazione più lunghi rispetto al limite di sistema di file system FAT 8.3. Il compilatore non può semplicemente troncare i nomi più lunghi a 8,3, perché i primi otto caratteri dei nomi file di intestazione più lunghi non possono essere univoci. Ogni volta che il compilatore rileva il *alias_filename* stringa, sostituisce *actual_filename*e cerca il file di intestazione *actual_filename* invece. Questo pragma deve essere visualizzato prima delle direttive `#include` corrispondenti. Ad esempio:

```cpp
// First eight characters of these two files not unique.
#pragma include_alias( "AppleSystemHeaderQuickdraw.h", "quickdra.h" )
#pragma include_alias( "AppleSystemHeaderFruit.h", "fruit.h" )

#pragma include_alias( "GraphicsMenu.h", "gramenu.h" )

#include "AppleSystemHeaderQuickdraw.h"
#include "AppleSystemHeaderFruit.h"
#include "GraphicsMenu.h"
```

L'alias cercato deve corrispondere esattamente alla specifica, sia per quanto riguarda le maiuscole/minuscole sia per l'ortografia, sia per l'utilizzo delle virgolette che per le parentesi quadre. Il **include_alias** pragma esegue semplice corrispondenza di stringhe nei nomi dei file, viene eseguita alcuna altra convalida nome file. Se si considerando, ad esempio, le seguenti direttive,

```cpp
#pragma include_alias("mymath.h", "math.h")
#include "./mymath.h"
#include "sys/mymath.h"
```

non viene eseguito nessun alias (sostituzione), poiché le stringhe del file di intestazione non corrispondono esattamente. Inoltre, nomi file di intestazione utilizzati come argomenti per il `/Yu` e `/Yc` opzioni del compilatore, o `hdrstop` pragma, non vengono sostituiti. Ad esempio, se il file di origine contiene la seguente direttiva,

```cpp
#include <AppleSystemHeaderStop.h>
```

l'opzione del compilatore corrispondente deve essere

> /YcAppleSystemHeaderStop.h

È possibile usare la **include_alias** pragma per mappare qualsiasi nome di file di intestazione a un altro. Ad esempio:

```cpp
#pragma include_alias( "api.h", "c:\version1.0\api.h" )
#pragma include_alias( <stdio.h>, <newstdio.h> )
#include "api.h"
#include <stdio.h>
```

Non combinare i nomi file racchiusi tra virgolette doppie con i nomi file racchiusi tra parentesi quadre. Si consideri ad esempio i due precedenti `#pragma include_alias` direttive, il compilatore esegue alcuna sostituzione alle seguenti `#include` direttive:

```cpp
#include <api.h>
#include "stdio.h"
```

Inoltre, la seguente diretta genera un errore:

```cpp
#pragma include_alias(<header.h>, "header.h")  // Error
```

Si noti che il nome del file indicato nei messaggi di errore o come valore dell'oggetto predefinito `__FILE__` (macro), è il nome del file dopo la sostituzione è stata eseguita. Ad esempio, vedere l'output dopo le direttive seguenti:

```cpp
#pragma include_alias( "VERYLONGFILENAME.H", "myfile.h" )
#include "VERYLONGFILENAME.H"
```

Un errore in VERYLONGFILENAME. H Genera il messaggio di errore seguente:

```Output
myfile.h(15) : error C2059 : syntax error
```

Si noti inoltre che la transitività non è supportata. Date le seguenti direttive,

```cpp
#pragma include_alias( "one.h", "two.h" )
#pragma include_alias( "two.h", "three.h" )
#include "one.h"
```

il compilatore cerca il file Two piuttosto che three.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
