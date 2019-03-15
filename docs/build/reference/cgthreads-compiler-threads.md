---
title: /CGTHREADS (thread del compilatore)
ms.date: 11/04/2016
helpviewer_keywords:
- /CGTHREADS linker option
- -CGTHREADS linker option
- CGTHREADS linker option
ms.assetid: 4b52cfdb-3702-470b-9580-fabeb1417488
ms.openlocfilehash: b778802d3fffcaafc0cf01ac46ae85c4efbef95c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57809535"
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

## <a name="remarks"></a>Note

Il **/CGTHREADS** opzione specifica il numero massimo di thread cl.exe utilizzi in parallelo per le fasi di ottimizzazione e generazione di codice della compilazione durante in fase di collegamento la generazione di codice ([/LTCG](ltcg-link-time-code-generation.md)) è specificato. Per impostazione predefinita, cl.exe utilizza quattro thread, come se **/CGTHREADS:4** sono state specificate. Se sono disponibili più core del processore, un valore `number` maggiore può accelerare i tempi di compilazione.

È possibile specificare più livelli di parallelismo per una compilazione. Il commutatore msbuild.exe **/maxcpucount** specifica il numero di processi di MSBuild che può essere eseguito in parallelo. Il [/MP (compilazione con più processi)](mp-build-with-multiple-processes.md) flag del compilatore specifica il numero di processi cl.exe che compilano simultaneamente i file di origine. Il [/cgthreads](cgthreads-code-generation-threads.md) opzione del compilatore specifica il numero di thread usati da ogni processo cl.exe. Dato che il processore può eseguire solo tanti thread simultanei quanti sono i core del processore, non è utile specificare valori maggiori per tutte queste opzioni simultaneamente e potrebbe risultare controproducente. Per altre informazioni su come compilare progetti in parallelo, vedere [compilazione di più progetti in parallelo](/visualstudio/msbuild/building-multiple-projects-in-parallel-with-msbuild).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione**, **Linker** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/CGTHREADS:**`number`, dove `number` è un valore compreso tra 1 e 8 e quindi scegliere **OK**.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del linker MSVC](linker-options.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)
