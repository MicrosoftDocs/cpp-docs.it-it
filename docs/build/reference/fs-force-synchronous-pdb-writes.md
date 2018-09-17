---
title: -FS (forza scritture PDB sincrone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /FS
dev_langs:
- C++
helpviewer_keywords:
- -FS compiler option [C++]
- /FS compiler option [C++]
ms.assetid: b2caaffe-f6e1-4963-b068-648f06b105e0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b332782cb9bcd929bcd67d4d81b7a7d0259f53cc
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45714597"
---
# <a name="fs-force-synchronous-pdb-writes"></a>/FS (Forza scritture PDB sincrone)

Forza le scritture di file di database (PDB) del programma, ovvero creati da [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) oppure [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md), ovvero per la serializzazione tramite MSPDBSRV. FILE EXE.

## <a name="syntax"></a>Sintassi

```
/FS
```

## <a name="remarks"></a>Note

Per impostazione predefinita, quando **/Zi** oppure **/ZI** viene specificato, il compilatore consente di bloccare file PDB di scrivere le informazioni sul tipo e informazioni sul debug simbolici. Ciò può ridurre notevolmente il tempo richiesto il compilatore per generare informazioni sui tipi quando il numero di tipi è di grandi dimensioni. Se un altro processo blocca temporaneamente il file PDB, ad esempio un programma antivirus, le scritture da parte del compilatore potrebbero non riuscire e potrebbe verificarsi un errore irreversibile. Questo problema può verificarsi anche quando più copie di cl.exe accedono allo stesso file PDB, ad esempio se la soluzione è costituita da progetti indipendenti che utilizzano le stesse directory intermedie o directory di output e sono abilitate le compilazioni parallele. Il **/FS** opzione del compilatore impedisce al compilatore di bloccare il file PDB e forza le scritture a passare attraverso MSPDBSRV. EXE, che serializza l'accesso. Ciò rende le compilazioni significativamente più lunghe e non impedisce a tutti gli errori che possono verificarsi quando più istanze di cl.exe accedono al file PDB contemporaneamente. Si consiglia di modificare la soluzione in modo che i progetti indipendenti scrivano in posizioni intermedie e output separati o in modo da rendere uno dei progetti dipendente dagli altri al fine di forzare compilazioni del progetto serializzate.

Il [/MP](../../build/reference/mp-build-with-multiple-processes.md) opzione Abilita **/FS** per impostazione predefinita.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **C/C++** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere `/FS` e quindi scegliere **OK**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)