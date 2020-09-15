---
title: /headerUnit (usare l'unità di intestazione IFC)
description: Usare l'opzione del compilatore/headerUnit per specificare un'unità di intestazione IFC esistente da importare nella compilazione corrente.
ms.date: 09/13/2020
f1_keywords:
- /headerUnit
helpviewer_keywords:
- /headerUnit
- Use header unit IFC
ms.openlocfilehash: 2734df728b188dcfbbe5f475cfc67715a070975d
ms.sourcegitcommit: b492516cc65120250b9ea23f96f7f63f37f99fae
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/14/2020
ms.locfileid: "90079091"
---
# <a name="headerunit-use-header-unit-ifc"></a>`/headerUnit` (Usare l'unità di intestazione IFC)

Indica al compilatore di convertire le `#include` direttive per un nome di intestazione importabile in una `import header-name;` direttiva, anziché utilizzare l'inclusione testuale.

## <a name="syntax"></a>Sintassi

> **`/headerUnit`** *`header-filename`*=*`ifc-filename`*

### <a name="arguments"></a>Argomenti

*`header-filename`*\
Nome di un file in cui il compilatore risolve un `header-name` . Durante `import header-name ;` il compilatore `header-name` si risolve in un file su disco. Usare *`header-filename`* per specificare il file. Una volta corrispondente, il compilatore apre l'IFC corrispondente denominato da *`ifc-filename`* per l'importazione.

*`ifc-filename`*\
Nome di un file che contiene *dati IFC*, informazioni sui moduli predefiniti. Per importare più di un'unità di intestazione, includere un' **`/headerUnit`** opzione separata per ogni file.

## <a name="remarks"></a>Osservazioni

L' **`/headerUnit`** opzione del compilatore richiede l'abilitazione del supporto dei moduli sperimentali con l'opzione del [`/experimental:module`](experimental-module.md) compilatore, insieme all'opzione [/std: c + + Latest](std-specify-language-standard-version.md) . Questa opzione è disponibile a partire da Visual Studio 2019 versione 16,8.

Il compilatore non è in grado di eseguire il mapping di un singolo *`header-name`* a più file IFC. Sebbene *`header-name`* sia possibile eseguire il mapping di più argomenti a una singola IFC, non è consigliabile. Il contenuto della IFC viene importato come se fosse solo l'intestazione specificata da *`header-name`* .

### <a name="examples"></a>Esempi

Dato un progetto che fa riferimento a due file di intestazione e alle relative unità di intestazione, elencati in questa tabella:

| File di intestazione | File IFC |
|--|--|
| *`C:\utils\util.h`* | *`C:\util.h.ifc`* |
| *`C:\app\app.h`* | *`C:\app.h.ifc`* |

Le opzioni del compilatore per fare riferimento alle unità di intestazione per questi file di intestazione particolari potrebbero essere simili a questo esempio:

```CMD
cl ... /experimental:module /translateInclude /headerUnit C:\utils\util.h=C:\util.h.ifc /headerUnit C:\app\app.h=C:\app.h.ifc
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Impostare l'elenco a discesa **configurazione** su **tutte le configurazioni**.

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** per aggiungere le *`/headerUnit`* Opzioni e gli argomenti. Scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[`/experimental:module` (Abilita supporto modulo)](experimental-module.md)\
[`/module:exportHeader` (Creare unità di intestazione)](module-exportheader.md)\
[`/module:reference` (Usare il modulo denominato IFC)](module-reference.md)\
[`/translateInclude` (Tradurre le direttive include nelle direttive Import)](translateinclude.md)\
