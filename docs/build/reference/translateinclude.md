---
title: /translateInclude (traduce le direttive include nelle direttive Import)
description: "Usare l'opzione del compilatore/translateInclude per tradurre le direttive #include per un nome di intestazione importabile in una direttiva Import-Name."
ms.date: 09/13/2020
f1_keywords:
- /translateInclude
helpviewer_keywords:
- /translateInclude
- Translate include directives into import directives
ms.openlocfilehash: 0050f2cb117e48d69cf97a587ef128b9b45790af
ms.sourcegitcommit: b492516cc65120250b9ea23f96f7f63f37f99fae
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/14/2020
ms.locfileid: "90079080"
---
# <a name="translateinclude-translate-include-directives-into-import-directives"></a>`/translateInclude` (Tradurre le direttive include nelle direttive Import)

Indica al compilatore di convertire le `#include` direttive per un nome di intestazione importabile in una `import header-name;` direttiva, anziché utilizzare l'inclusione testuale.

## <a name="syntax"></a>Sintassi

> **`/translateInclude`**

## <a name="remarks"></a>Osservazioni

L' **`/translateInclude`** opzione del compilatore richiede l'abilitazione del supporto dei moduli sperimentali con l'opzione del [`/experimental:module`](experimental-module.md) compilatore, insieme all'opzione [/std: c + + Latest](std-specify-language-standard-version.md) . Questa opzione è disponibile a partire da Visual Studio 2019 versione 16,8.

L' **`/translateInclude`** opzione rende efficace la trasformazione seguente, in cui l'esempio `<vector>` è un'unità di intestazione importabile:

```cpp
#include <vector>
```

Il compilatore sostituisce questa direttiva con:

```cpp
import <vector> ;
```

In MSVC un'unità di intestazione importabile è una denominata da un **`/headerUnit`** riferimento. Per altre informazioni, vedere [ `/headerUnit` (usare l'unità di intestazione IFC)](headerunit.md).

### <a name="examples"></a>Esempi

Dato un progetto che fa riferimento a due file di intestazione e alle relative unità di intestazione, elencati in questa tabella:

| File di intestazione | File IFC |
|--|--|
| *`C:\utils\util.h`* | *`C:\util.h.ifc`* |
| *`C:\app\app.h`* | *`C:\app.h.ifc`* |

E un file di origine *`.cpp`* che include le intestazioni,

```cpp
#include "utils/util.h"
#include "app/app.h"

int main() { }
```

L' **`/translateInclude`** opzione consente al compilatore di importare le unità di intestazione anziché compilare di nuovo le intestazioni. Di seguito è riportato un esempio di riga di comando che converte le direttive include per *`util.h`* e *`app.h`* nelle importazioni delle unità di intestazione:

```CMD
cl /IC:\ /experimental:module /translateInclude /headerUnit C:\utils\util.h=C:\util.h.ifc /headerUnit C:\app\app.h=C:\app.h.ifc
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Impostare l'elenco a discesa **configurazione** su **tutte le configurazioni**.

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** per aggiungere l' *`/translateInclude`* opzione. Scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[`/experimental:module` (Abilita supporto modulo)](experimental-module.md)\
[ `/headerUnit` (Usare l'unità di intestazione IFC)](headerunit.md). \
[`/module:exportHeader` (Creare unità di intestazione)](module-exportheader.md)\
[`/module:reference` (Usare il modulo denominato IFC)](module-reference.md)
