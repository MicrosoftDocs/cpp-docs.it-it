---
title: -PROFILE (Profiler strumenti di prestazioni) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.Profile
dev_langs:
- C++
helpviewer_keywords:
- -PROFILE linker option
- /PROFILE linker option
ms.assetid: e676baa1-5063-47a3-a357-ba0d1f0d1699
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 859ea4091502fa6c339a809a5b9e439c91462bd7
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707765"
---
# <a name="profile-performance-tools-profiler"></a>/PROFILE (Profiler strumenti di prestazioni)

Produce un file di output che può essere usato con il profiler di Strumenti per le prestazioni.

## <a name="syntax"></a>Sintassi

```
/PROFILE
```

## <a name="remarks"></a>Note

/ PROFILE implica le seguenti opzioni del linker:

- [/OPT: REF](../../build/reference/opt-optimizations.md)

- /OPT: NOICF

- [/INCREMENTAL: NO](../../build/reference/incremental-link-incrementally.md)

- [/FIXED: NO](../../build/reference/fixed-fixed-base-address.md)

O il profilo indica al linker generare una sezione di rilocazione nell'immagine del programma.  Una sezione di rilocazione consente al profiler di trasformare l'immagine del programma per ottenere i dati del profilo.

**/ PROFILO** è solo disponibile solo nelle versioni Enterprise per team di sviluppo.  Per altre informazioni su PREfast, vedere [analisi del codice per C/C++ Panoramica](/visualstudio/code-quality/code-analysis-for-c-cpp-overview).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **avanzate** pagina delle proprietà.

1. Modificare il **profilo** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Profile%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)