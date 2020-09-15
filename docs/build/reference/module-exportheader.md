---
title: '/Module: exportHeader (Crea unità di intestazione)'
description: "Usare l'opzione del compilatore/Module: exportHeader per creare unità di intestazione del modulo per il nome dell'intestazione o i file di inclusione specificati."
ms.date: 09/13/2020
f1_keywords:
- /module:exportHeader
helpviewer_keywords:
- /module:exportHeader
- Create header units
ms.openlocfilehash: f0c0ce1c593df742af77aa36189df1e89de75b6b
ms.sourcegitcommit: b492516cc65120250b9ea23f96f7f63f37f99fae
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/14/2020
ms.locfileid: "90079083"
---
# <a name="moduleexportheader-create-header-units"></a>`/module:exportHeader` (Creare unità di intestazione)

Indica al compilatore di creare le unità di intestazione specificate dagli argomenti di input. Il compilatore genera l'output nei file IFC ( *`.ifc`* ).

## <a name="syntax"></a>Sintassi

> **`/module:exportHeader`** *`header-name`* \[...]\
> **`/module:exportHeader`** *`filename`* \[...]

### <a name="arguments"></a>Argomenti

*`header-name`*\
File di intestazione da esportare. L' *`header-name`* argomento deve avere lo stesso formato di un argomento per una `#include` direttiva.

*`filename`*\
Percorso relativo o assoluto del file di intestazione da cui creare un'unità di intestazione.

## <a name="remarks"></a>Osservazioni

L' **`/module:exportHeader`** opzione del compilatore richiede l'abilitazione del supporto dei moduli sperimentali con l'opzione del [`/experimental:module`](experimental-module.md) compilatore, insieme all'opzione [/std: c + + Latest](std-specify-language-standard-version.md) . Questa opzione è disponibile a partire da Visual Studio 2019 versione 16,8.

Un' **`/module:exportHeader`** opzione del compilatore può specificare tutti gli argomenti del nome di intestazione necessari per la compilazione. Non è necessario specificarli separatamente.

Per impostazione predefinita, il compilatore non genera un file oggetto quando viene compilata un'unità di intestazione. Per produrre un file oggetto, specificare l' **`/Fo`** opzione del compilatore. Per ulteriori informazioni, vedere [ `/Fo` (nome file oggetto)](fo-object-file-name.md).

Il compilatore risolve un oggetto *`header-name`* in base all'ordine di ricerca della directory di inclusione, incluse quelle specificate. Per ulteriori informazioni, vedere [ `/I` (directory di inclusione aggiuntive)](i-additional-include-directories.md).

L'argomento *`header-name`* deve essere specificato nello stesso modo in cui verrebbe visualizzato nell'origine. L'argomento è sensibile alle regole di citazione e agli `<` `>` operatori e nella riga di comando. Il comando di escape corretto per creare un'unità di intestazione, ad esempio `<vector>` l'uso del prompt dei comandi VS2019, potrebbe essere simile al seguente:

```cmd
cl ... /experimental:module /module:exportHeader "<vector>"
```

La compilazione di un'intestazione di progetto locale, ad esempio, `"utils/util.h"` potrebbe essere simile alla seguente:

```cmd
cl ... /experimental:module /module:exportHeader """util/util.h"""
```

Le regole di citazione in altri processori della riga di comando possono essere diverse.

Quando si usa il *`header-name`* modulo di **`/module:exportHeader`** , può risultare utile usare l'opzione complementare **`/module:showResolvedHeader`** . L' **`/module:showResolvedHeader`** opzione stampa un percorso assoluto del file *`header-name`* in cui viene risolto l'argomento.

**`/module:exportHeader`** consente di gestire più input contemporaneamente anche sotto **`/MP`** . Si consiglia di usare **`/module:output <directory>`** per creare un file IFC separato per ogni compilazione.

### <a name="examples"></a>Esempi

Date le intestazioni `"C:\util\util.h"` e `"C:\app\app.h"` , è possibile esportarle come *`header-name`* argomenti usando il comando seguente:

```cmd
cl /IC:\ /experimental:module /module:exportHeader """util/util.h""" """app/app.h""" /FoC:\obj
```

È possibile esportarli come *`filename`* argomenti utilizzando questo comando:

```cmd
cl /IC:\ /experimental:module /module:exportHeader C:\util\util.h C:\app\app.h /FoC:\obj
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Impostare l'elenco a discesa **configurazione** su **tutte le configurazioni**.

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** per aggiungere l' *`/module:exportHeader`* opzione e gli eventuali argomenti. Scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[`/experimental:module` (Abilita supporto modulo)](experimental-module.md)\
[`/headerUnit` (Usare l'unità di intestazione IFC)](headerunit.md)\
[`/module:reference` (Usare il modulo denominato IFC)](module-reference.md)\
[`/translateInclude` (Tradurre le direttive include nelle direttive Import)](translateinclude.md)
