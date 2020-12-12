---
description: Altre informazioni su:/CGTHREADS (thread del compilatore)
title: /CGTHREADS (thread del compilatore)
ms.date: 11/04/2016
helpviewer_keywords:
- /CGTHREADS linker option
- -CGTHREADS linker option
- CGTHREADS linker option
ms.assetid: 4b52cfdb-3702-470b-9580-fabeb1417488
ms.openlocfilehash: 71c5031c7013ec6f8ddad153d9cc16bee2004751
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179252"
---
# <a name="cgthreads-compiler-threads"></a>/CGTHREADS (thread del compilatore)

Imposta il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice quando si specifica la generazione del codice in fase di collegamento.

## <a name="syntax"></a>Sintassi

```
/CGTHREADS:[1-8]
```

## <a name="arguments"></a>Argomenti

*number*<br/>
Numero massimo di thread per l'uso da parte di cl.exe, nell'intervallo compreso tra 1 e 8.

## <a name="remarks"></a>Commenti

L'opzione **/CGTHREADS** specifica il numero massimo di thread cl.exe USA in parallelo per le fasi di ottimizzazione e generazione di codice della compilazione quando si specifica la generazione del codice in fase di collegamento ([/LTCG](ltcg-link-time-code-generation.md)). Per impostazione predefinita, cl.exe usa quattro thread, come se **/CGTHREADS: 4** fosse specificato. Se sono disponibili più core del processore, un valore `number` maggiore può accelerare i tempi di compilazione.

È possibile specificare più livelli di parallelismo per una compilazione. L'opzione msbuild.exe **/maxcpucount** specifica il numero di processi MSBuild che possono essere eseguiti in parallelo. Il flag del compilatore [/MP (compilazione con più processi)](mp-build-with-multiple-processes.md) specifica il numero di processi di cl.exe che compilano simultaneamente i file di origine. L'opzione del compilatore [/cgthreads](cgthreads-code-generation-threads.md) specifica il numero di thread usati da ogni processo di cl.exe. Dato che il processore può eseguire solo tanti thread simultanei quanti sono i core del processore, non è utile specificare valori maggiori per tutte queste opzioni simultaneamente e potrebbe risultare controproducente. Per ulteriori informazioni su come compilare progetti in parallelo, vedere [compilazione di più progetti in parallelo](/visualstudio/msbuild/building-multiple-projects-in-parallel-with-msbuild).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **proprietà di configurazione**, **linker** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/CGTHREADS:** `number` , dove `number` è un valore compreso tra 1 e 8, quindi scegliere **OK**.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del linker MSVC](linker-options.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)
