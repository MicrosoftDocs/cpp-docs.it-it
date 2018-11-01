---
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
ms.openlocfilehash: eda3dd38449f89d9b8d767b460970d659f6c9dc9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50430017"
---
# <a name="yd-place-debug-information-in-object-file"></a>/Yd (Inserisce le informazioni di debug nel file oggetto)

Pazi completa in tutti i file oggetto informazioni di debug creato da un file di intestazione precompilata (PCH) se usato con il [/Yc](../../build/reference/yc-create-precompiled-header-file.md) e [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md) opzioni. Deprecato.

## <a name="syntax"></a>Sintassi

```
/Yd
```

## <a name="remarks"></a>Note

**/Yd** è deprecato. Visual C++ supporta ora più oggetti, la scrittura in un unico file PDB, usare **/Zi** invece. Per un elenco di opzioni del compilatore deprecate, vedere **deprecate o rimosse le opzioni del compilatore** nelle [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).

A meno che non è necessario distribuire le informazioni di debug contenente una libreria, usare il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione invece **/Z7** e **/Yd**.

L'archiviazione delle informazioni di debug complete in tutti i file con estensione obj è necessaria solo per distribuire le librerie che contengono informazioni di debug. Rallenta la compilazione e richiede spazio su disco considerevole. Quando **/Yc** e **/Z7** vengono usate senza **/Yd**, il compilatore archivia le informazioni di debug comuni nel primo file con estensione obj creato dal file con estensione pch. Il compilatore non inserire queste informazioni in file con estensione obj creati successivamente dal file pch. Inserisce riferimenti incrociati per le informazioni. Indipendentemente dal numero di file con estensione obj Usa il file con estensione pch, un solo file con estensione obj contiene le informazioni di debug comuni.

Sebbene questo comportamento predefinito determini più velocemente i tempi di compilazione e riduca le esigenze di spazio su disco, non è auspicabile se una piccola modifica richiede la ricompilazione del file obj contenente le informazioni di debug comuni. In questo caso, il compilatore deve ricompilare tutti i file con estensione obj contenente riferimenti incrociati al file con estensione obj originale. Inoltre, se un file con estensione pch comune viene utilizzato da progetti diversi, è difficile dipendenza dai riferimenti incrociati a un singolo file obj.

Per altre informazioni sulle intestazioni precompilate, vedere:

- [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)

- [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="examples"></a>Esempi

Si supponga di avere due file di base, f. cpp e g. cpp, ognuno dei quali contiene questi **#include** istruzioni:

```
#include "windows.h"
#include "etc.h"
```

Il comando seguente crea l'intestazione precompilata file etc. pch e file oggetto obj:

```
CL /YcETC.H /Z7 F.CPP
```

Il file oggetto obj include tipo e informazioni sui simboli di Windows. h ed etc. h (e qualsiasi altro file di intestazione che inclusi). A questo punto è possibile utilizzare l'intestazione precompilata, etc. pch per compilare il file di origine g. cpp:

```
CL /YuETC.H /Z7 G.CPP
```

Il file oggetto g. obj non include le informazioni di debug per l'intestazione precompilata ma semplicemente fa riferimento a tali informazioni nel file obj. Si noti che è necessario collegarlo con il file obj.

Se l'intestazione precompilata non è stato compilato con **/Z7**, è comunque possibile utilizzarlo nelle compilazioni successive mediante **/Z7**. Tuttavia, le informazioni di debug viene inserite nel file dell'oggetto corrente e simboli locali per le funzioni e tipi definiti nell'intestazione precompilata non sono disponibili al debugger.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)