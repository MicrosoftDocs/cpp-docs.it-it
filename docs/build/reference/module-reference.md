---
title: '/Module: riferimento (usare il modulo denominato IFC)'
description: "Usare l'opzione del compilatore/Module: Reference per creare unità di intestazione del modulo per il nome dell'intestazione o i file di inclusione specificati."
ms.date: 09/13/2020
f1_keywords:
- /module:reference
helpviewer_keywords:
- /module:reference
- Use named module IFC
ms.openlocfilehash: 5f40f6b700c38f3238cc7a621313621085fbc289
ms.sourcegitcommit: b492516cc65120250b9ea23f96f7f63f37f99fae
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/14/2020
ms.locfileid: "90079087"
---
# <a name="modulereference-use-named-module-ifc"></a>`/module:reference` (Usare il modulo denominato IFC)

Indica al compilatore di usare una IFC ( *`.ifc`* ) esistente per la compilazione corrente.

## <a name="syntax"></a>Sintassi

> **`/module:reference`** *`module-name=filename`*\
> **`/module:reference`** *`filename`*

### <a name="arguments"></a>Argomenti

*`filename`*\
Nome di un file che contiene *dati IFC*, informazioni sui moduli predefiniti. Per importare più di un modulo, includere un' **`/module:reference`** opzione separata per ogni file.

*`module-name`*\
Nome valido di un nome di unità di interfaccia del modulo primario esportato o di un nome di partizione del modulo completo.

## <a name="remarks"></a>Osservazioni

L' **`/module:reference`** opzione del compilatore richiede l'abilitazione del supporto dei moduli sperimentali con l'opzione del [`/experimental:module`](experimental-module.md) compilatore, insieme all'opzione [/std: c + + Latest](std-specify-language-standard-version.md) . Questa opzione è disponibile a partire da Visual Studio 2019 versione 16,8.

Se l' **`/module:reference`** argomento è un oggetto *`filename`* senza un oggetto *`module-name`* , il file viene aperto in fase di esecuzione per verificare che i *`filename`* nomi degli argomenti vengano importati in modo specifico. Può comportare prestazioni di runtime più lente in scenari con molti **`/module:reference`** argomenti.

*`module-name`* Deve essere un nome di unità di interfaccia del modulo primario o un nome di partizione del modulo completo valido. Esempi di nomi di interfaccia del modulo primario includono:

- `M`
- `M.N.O`
- `MyModule`
- `my_module`

Esempi di nomi di partizione di moduli completi includono:

- `M:P`
- `M.N.O:P.Q`
- `MyModule:Algorithms`
- `my_module:algorithms`

Se viene creato un riferimento al modulo usando *`module-name`* , altri moduli nella riga di comando non vengono cercati se il compilatore rileva un'importazione di tale nome. Ad esempio, in base a questa riga di comando:

```cmd
cl ... /experimental:module /module:reference m.ifc /module:reference m=n.ifc
```

Nel caso precedente, se il compilatore rileva, `import m;` *`m.ifc`* non viene eseguita la ricerca.

### <a name="examples"></a>Esempi

Dati tre moduli elencati in questa tabella:

| Modulo | File IFC |
|--|--|
| *`M`* | *`m.ifc`* |
| *`M:Part1`* | *`m-part1.ifc`* |
| *`Core.Networking`* | *`Networking.ifc`* |

Le opzioni di riferimento che usano un *`filename`* argomento possono avere un aspetto simile al seguente:

```cmd
cl ... /experimental:module /module:reference m.ifc /module:reference m-part.ifc /module:reference Networking.ifc
```

Le opzioni di riferimento con *`module-name=filename`* possono essere simili alle seguenti:

```cmd
cl ... /experimental:module /module:reference m=m.ifc /module:reference M:Part1=m-part.ifc /module:reference Core.Networking=Networking.ifc
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Impostare l'elenco a discesa **configurazione** su **tutte le configurazioni**.

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** per aggiungere l' *`/module:reference`* opzione e i relativi argomenti. Scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[`/experimental:module` (Abilita supporto modulo)](experimental-module.md)\
[`/headerUnit` (Usare l'unità di intestazione IFC)](headerunit.md)\
[`/module:exportHeader` (Creare unità di intestazione)](module-exportheader.md)\
[`/translateInclude` (Tradurre le direttive include nelle direttive Import)](translateinclude.md)
