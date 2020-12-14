---
description: Ulteriori informazioni su:/YD (inserire le informazioni di debug nel file oggetto)
title: /Yd (Inserisce le informazioni di debug nel file oggetto)
ms.date: 11/04/2016
f1_keywords:
- /yd
helpviewer_keywords:
- /Yd compiler option [C++]
- -Yd compiler option [C++]
- debugging [C++], debug information files
- Yd compiler option [C++]
ms.assetid: c5a699fe-65ce-461e-964c-7f5eb2a8320a
ms.openlocfilehash: 7716d5ca1893faefac9186f97e2f7439a3887343
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243588"
---
# <a name="yd-place-debug-information-in-object-file"></a>/Yd (Inserisce le informazioni di debug nel file oggetto)

Consente di completare le informazioni di debug in tutti i file oggetto creati da un file di intestazione precompilata (PCH) se utilizzato con le opzioni [/YC](yc-create-precompiled-header-file.md) e [/Z7](z7-zi-zi-debug-information-format.md) . Deprecato.

## <a name="syntax"></a>Sintassi

```
/Yd
```

## <a name="remarks"></a>Osservazioni

**/YD** è deprecato; Visual C++ supporta ora più oggetti che scrivono in un unico file con estensione PDB, utilizzare **/Zi** in alternativa. Per un elenco delle opzioni del compilatore deprecate, vedere Opzioni del compilatore **deprecate e rimosse** nelle [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

A meno che non sia necessario distribuire una libreria contenente le informazioni di debug, utilizzare l'opzione [/Zi](z7-zi-zi-debug-information-format.md) anziché **/Z7** e **/YD**.

L'archiviazione delle informazioni di debug complete in ogni file obj è necessaria solo per distribuire le librerie che contengono informazioni di debug. Il rallentamento della compilazione richiede una notevole quantità di spazio su disco. Quando **/YC** e **/Z7** vengono usati senza **/YD**, il compilatore archivia le informazioni di debug comuni nel primo file con estensione obj creato dal file PCH. Il compilatore non inserisce queste informazioni nei file obj creati successivamente dal file PCH; inserisce riferimenti incrociati alle informazioni. Indipendentemente dal numero di file con estensione obj che usano il file PCH, solo un file con estensione obj contiene le informazioni di debug comuni.

Anche se questo comportamento predefinito comporta tempi di compilazione più rapidi e riduce le richieste di spazio su disco, non è auspicabile se una modifica di piccole dimensioni richiede la ricompilazione del file con estensione obj contenente le informazioni di debug comuni. In questo caso, il compilatore deve ricompilare tutti i file con estensione obj contenenti riferimenti incrociati al file obj originale. Inoltre, se un file con estensione PCH comune viene usato da progetti diversi, è difficile affidarsi a riferimenti incrociati a un singolo file obj.

Per ulteriori informazioni sulle intestazioni precompilate, vedere:

- [/Y (intestazioni precompilate)](y-precompiled-headers.md)

- [File di intestazione precompilata](../creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="examples"></a>Esempio

Si supponga di avere due file di base, F. cpp e G. cpp, ognuno dei quali contiene le istruzioni **#include** :

```
#include "windows.h"
#include "etc.h"
```

Il comando seguente crea il file di intestazione precompilata e così via. pch e il file oggetto F. obj:

```
CL /YcETC.H /Z7 F.CPP
```

Il file oggetto F. obj include informazioni sul tipo e sui simboli per WINDOWS. h e così via. h (e qualsiasi altro file di intestazione incluso). È ora possibile usare l'intestazione precompilata e così via PCH per compilare il file di origine G. cpp:

```
CL /YuETC.H /Z7 G.CPP
```

Il file oggetto G. obj non include le informazioni di debug per l'intestazione precompilata, ma fa semplicemente riferimento a tali informazioni nel file F. obj. Si noti che è necessario collegare il file F. obj.

Se l'intestazione precompilata non è stata compilata con **/Z7**, è comunque possibile utilizzarla nelle compilazioni successive utilizzando **/Z7**. Tuttavia, le informazioni di debug vengono inserite nel file oggetto corrente e i simboli locali per le funzioni e i tipi definiti nell'intestazione precompilata non sono disponibili per il debugger.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
