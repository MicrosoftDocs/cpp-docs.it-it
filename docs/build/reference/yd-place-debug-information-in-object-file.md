---
title: -Yd (inserisce le informazioni di Debug nel File oggetto) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /yd
dev_langs:
- C++
helpviewer_keywords:
- /Yd compiler option [C++]
- -Yd compiler option [C++]
- debugging [C++], debug information files
- Yd compiler option [C++]
ms.assetid: c5a699fe-65ce-461e-964c-7f5eb2a8320a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 39b03b0faf975caba8c5a287c88afcdf53f7a71f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378233"
---
# <a name="yd-place-debug-information-in-object-file"></a>/Yd (Inserisce le informazioni di debug nel file oggetto)
Inserisce informazioni di debug in tutti i file oggetto completo creato da un file di intestazione precompilata (PCH) quando si utilizza il [/Yc](../../build/reference/yc-create-precompiled-header-file.md) e [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md) opzioni. Deprecato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Yd  
```  
  
## <a name="remarks"></a>Note  
 **/Yd** è obsoleta. [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] ora supporta più oggetti, la scrittura in un unico file PDB, usare **/Zi** invece. Per un elenco di opzioni del compilatore obsolete, vedere **deprecate o rimosse le opzioni del compilatore** in [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
 A meno che non è necessario distribuire le informazioni di debug contiene una raccolta, utilizzare il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione anziché **/Z7** e **/Yd**.  
  
 L'archiviazione delle informazioni di debug complete in tutti i file con estensione obj è necessaria solo per distribuire librerie che contengono informazioni di debug. Rallenta la compilazione e richiede spazio su disco considerevole. Quando **/Yc** e **/Z7** vengono utilizzati senza **/Yd**, il compilatore archivia le informazioni di debug comuni nel primo file obj creato dal file pch. Il compilatore non inserire queste informazioni nei file obj successivamente creati dal file pch. Inserisce riferimenti incrociati per le informazioni. Indipendentemente dal numero di file con estensione obj utilizza il file pch, un solo file con estensione obj contiene le informazioni di debug comuni.  
  
 Sebbene più velocemente, questo comportamento predefinito determini tempi di compilazione e riduca le esigenze di spazio su disco, non è auspicabile se una piccola modifica richiede la ricompilazione del file obj contenente le informazioni di debug comuni. In questo caso, il compilatore deve ricompilare tutti i file obj contenenti riferimenti incrociati al file con estensione obj originale. Inoltre, se un file pch comune viene usato da progetti diversi, l'affidabilità dei riferimenti incrociati per un singolo file obj è difficile.  
  
 Per ulteriori informazioni sulle intestazioni precompilate, vedere:  
  
-   [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="examples"></a>Esempi  
 Si supponga di avere due file di base, f. cpp e g. cpp, ciascuno contenente queste **#include** istruzioni:  
  
```  
#include "windows.h"  
#include "etc.h"  
```  
  
 Il comando seguente crea l'intestazione precompilata file etc. pch e il file oggetto obj:  
  
```  
CL /YcETC.H /Z7 F.CPP  
```  
  
 Il file oggetto obj è di tipo e informazioni sui simboli di Windows. h ed etc. h (e qualsiasi altro file di intestazione che sono incluse). È ora possibile utilizzare l'intestazione precompilata ETC. pch per compilare il file di origine g. cpp:  
  
```  
CL /YuETC.H /Z7 G.CPP  
```  
  
 Il file oggetto g. obj non include le informazioni di debug per l'intestazione precompilata ma fa semplicemente riferimento tali informazioni nel file obj. Si noti che è necessario collegare il file obj.  
  
 Se l'intestazione precompilata non è stato compilato con **/Z7**, è comunque possibile utilizzarla in compilazioni successive mediante **/Z7**. Tuttavia, le informazioni di debug viene inserite nel file oggetto corrente e i simboli locali per le funzioni e tipi definiti nell'intestazione precompilata non sono disponibili per il debugger.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)