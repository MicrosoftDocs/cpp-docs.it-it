---
title: / /FILEALIGN (allineamento sezioni nel file) | Documenti Microsoft
ms.date: 10/23/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /filealign
dev_langs:
- C++
helpviewer_keywords:
- linker align sections
- /FILEALIGN linker option
- -FILEALIGN linker option
- FILEALIGN linker option
ms.assetid: c1017a35-8d71-4ad9-934b-a3e3ea037fa0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c8a737801663a2c7c1e896166291a1635fbbe6c4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="filealign-align-sections-in-files"></a>/ /FILEALIGN (allineamento sezioni nel file)

Il **/FILEALIGN** l'opzione del linker consente di specificare l'allineamento delle sezioni del file di output scritti sotto forma di un multiplo di dimensioni specificato.

## <a name="syntax"></a>Sintassi

> __/ /FILEALIGN:__*dimensioni*

### <a name="parameters"></a>Parametri

*size*  
La dimensione di allineamento della sezione in byte, che deve essere una potenza di due.

## <a name="remarks"></a>Note

Il **/FILEALIGN** opzione indica al linker di ogni sezione nel file di output in un limite è un multiplo di allineare il *dimensioni* valore. Per impostazione predefinita, il linker non utilizza una dimensione fissa di allineamento.

Il **/FILEALIGN** opzione può essere utilizzata per rendere più efficiente l'utilizzo del disco o di pagina viene caricato dal disco più velocemente. Una dimensione più piccola di sezione può essere utile per App eseguite in dispositivi di piccole dimensioni, o per evitare download più piccoli. Allineamento sezioni su disco non influenza l'allineamento in memoria.

Usare [DUMPBIN](dumpbin-reference.md) per visualizzare informazioni sulle sezioni nel file di output.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **riga di comando** pagina delle proprietà di **Linker** cartella.

1. Digitare il nome dell'opzione **/FILEALIGN:** e la dimensione nel **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
[Opzioni del linker](../../build/reference/linker-options.md)