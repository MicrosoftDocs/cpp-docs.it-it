---
title: /sourceDependencies (report dipendenze a livello di origine)
description: Guida di riferimento all'opzione del compilatore/sourceDependencies in Microsoft C++.
ms.date: 07/29/2020
f1_keywords:
- /sourceDependencies
helpviewer_keywords:
- /sourceDependencies compiler option
- /sourceDependencies
ms.openlocfilehash: 3198353ea7569c426a556522d6b931fe23c7f12c
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87528072"
---
# <a name="sourcedependencies-report-source-level-dependencies"></a>`/sourceDependencies`(Report dipendenze a livello di origine)

Indica al compilatore di generare un file JSON che detaili le dipendenze a livello di origine utilizzate durante la compilazione.

Il file JSON contiene un elenco delle dipendenze di origine, tra cui:
- File di intestazione (intestazioni transitive e incluse direttamente).
- Il PCH usato (se **`/Yu`** è specificato).
- Moduli importati e unità di intestazione importata (sia transitiva che direttamente, moduli/unità di intestazione).

## <a name="syntax"></a>Sintassi

> **`/sourceDependencies`***nome file*\
> **`/sourceDependencies`***directory* di

## <a name="arguments"></a>Argomenti

*filename*\
Il compilatore scrive l'output delle dipendenze di origine nel nome file specificato, che può includere un percorso relativo o assoluto.

*Directory*\
Se l'argomento è una directory, il compilatore genera i file delle dipendenze di origine nella directory specificata. Il nome del file di output è basato sul nome completo del file di input, con un'estensione accodata *`.json`* . Se, ad esempio, il file fornito al compilatore è *`main.cpp`* , il nome file di output generato è *`main.cpp.json`* .

## <a name="remarks"></a>Commenti

L' **`/sourceDependencies`** opzione del compilatore è disponibile a partire da Visual Studio 2019 versione 16,7. Non è abilitato per impostazione predefinita.

Quando si specifica l' **`/MP`** opzione del compilatore, è consigliabile usare **`/sourceDependencies`** con un argomento di directory. Se si specifica un singolo argomento filename, due istanze del compilatore possono tentare di aprire contemporaneamente il file di output e causare un errore. Per ulteriori informazioni su **`/MP`** , vedere [ `/MP` (compilazione con più processi)](mp-build-with-multiple-processes.md).

Quando si verifica un errore non irreversibile del compilatore, le informazioni sulle dipendenze vengono comunque scritte nel file di output.

Tutti i percorsi dei file vengono visualizzati come percorsi assoluti nell'output.

### <a name="examples"></a>Esempi

Dato il codice di esempio seguente:

```cpp
// main.cpp
#include "header.h"
import m;
import "other.h";

int main() { }
```

È possibile usare **`/sourceDependencies`** insieme alle altre opzioni del compilatore:

> `cl ... /sourceDependencies output.json ... main.cpp`

dove `...` rappresenta le altre opzioni del compilatore. Questa riga di comando produce un file JSON *`output.json`* con contenuto simile al seguente:

```JSON
{
    "Version": "1.0",
    "Data": {
        "Source": "C:\\...\\main.cpp",
        "PCH": "C:\\...\\pch.pch",
        "Includes": [
            "C:\\...\\header.h"
        ],
        "Modules": [
            "C:\\...\\m.ifc",
            "C:\\...\\other.h.ifc"
        ]
    }
}
```

Abbiamo usato `...` per abbreviare i percorsi segnalati. il report contiene i percorsi assoluti. I percorsi restituiti dipendono dalla posizione in cui il compilatore trova le dipendenze. Se i risultati sono imprevisti, è consigliabile controllare le impostazioni del percorso di inclusione del progetto.

### <a name="to-set-the-sourcedependencies-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore/sourceDependencies in Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Nella casella **Opzioni aggiuntive** aggiungere, *`/sourceDependencies: <filename>`* quindi scegliere **OK** o **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
