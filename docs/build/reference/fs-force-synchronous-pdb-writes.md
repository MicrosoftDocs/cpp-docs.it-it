---
description: Altre informazioni su:/FS (forza scritture PDB sincrone)
title: /FS (Forza scritture PDB sincrone)
ms.date: 11/04/2016
f1_keywords:
- /FS
helpviewer_keywords:
- -FS compiler option [C++]
- /FS compiler option [C++]
ms.assetid: b2caaffe-f6e1-4963-b068-648f06b105e0
ms.openlocfilehash: 2dcddd046cc7232f40be5a54d73e659ed099e85d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192031"
---
# <a name="fs-force-synchronous-pdb-writes"></a>/FS (Forza scritture PDB sincrone)

Forza le scritture nel file del database di programma (PDB), creato da [/Zi](z7-zi-zi-debug-information-format.md) o [/Zi](z7-zi-zi-debug-information-format.md), per la serializzazione tramite MSPDBSRV.EXE.

## <a name="syntax"></a>Sintassi

```
/FS
```

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, quando viene specificato **/Zi** o **/Zi** , il compilatore blocca i file PDB per scrivere le informazioni sul tipo e le informazioni di debug simboliche. Ciò può ridurre notevolmente il tempo richiesto il compilatore per generare informazioni sui tipi quando il numero di tipi è di grandi dimensioni. Se un altro processo blocca temporaneamente il file PDB, ad esempio un programma antivirus, le scritture da parte del compilatore potrebbero non riuscire e potrebbe verificarsi un errore irreversibile. Questo problema può verificarsi anche quando più copie di cl.exe accedono allo stesso file PDB, ad esempio se la soluzione è costituita da progetti indipendenti che utilizzano le stesse directory intermedie o directory di output e sono abilitate le compilazioni parallele. L'opzione del compilatore **/FS** impedisce al compilatore di bloccare il file PDB e forza le Scritture a passare attraverso MSPDBSRV.EXE, che serializza l'accesso. Ciò rende le compilazioni significativamente più lunghe e non impedisce a tutti gli errori che possono verificarsi quando più istanze di cl.exe accedono al file PDB contemporaneamente. Si consiglia di modificare la soluzione in modo che i progetti indipendenti scrivano in posizioni intermedie e output separati o in modo da rendere uno dei progetti dipendente dagli altri al fine di forzare compilazioni del progetto serializzate.

L'opzione [/MP](mp-build-with-multiple-processes.md) Abilita **/FS** per impostazione predefinita.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **C/C++** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere `/FS` , quindi scegliere **OK**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
