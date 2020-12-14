---
description: Altre informazioni su:/STACK (Allocazioni stack)
title: /STACK (Allocazioni stack)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.StackReserveSize
- VC.Project.VCLinkerTool.StackCommitSize
- /stack
helpviewer_keywords:
- STACK linker option
- -STACK linker option
- memory allocation, stack
- /STACK linker option
- stack, setting size
ms.assetid: 73283660-e4bd-47cc-b5ca-04c5d739034c
ms.openlocfilehash: 6e74b508d8cdb2340c73360bf35272d9113a0f75
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224466"
---
# <a name="stack-stack-allocations"></a>/STACK (Allocazioni stack)

```
/STACK:reserve[,commit]
```

## <a name="remarks"></a>Commenti

L'opzione/STACK consente di impostare le dimensioni in byte dello stack. Usare questa opzione solo quando si compila un file con estensione exe.

Il `reserve` valore specifica l'allocazione totale dello stack nella memoria virtuale. Per i computer ARM, x86 e x64, le dimensioni predefinite dello stack sono pari a 1 MB.

`commit` è soggetto all'interpretazione del sistema operativo. In WindowsRT specifica la quantità di memoria fisica da allocare alla volta. La memoria virtuale di cui è stato eseguito il commit causa la riservatezza dello spazio nel file di paging. Un valore di `commit` più alto fa risparmiare tempo quando nell'applicazione è necessario maggior spazio per lo stack, ma aumenta i requisiti di memoria e in alcuni casi il tempo di avvio. Per i computer ARM, x86 e x64, il valore predefinito del commit è 4 KB.

Specificare i valori `reserve` e `commit` in notazione decimale o in linguaggio C.

Un altro modo per impostare le dimensioni dello stack è con l'istruzione [STACKSIZE](stacksize.md) in un file di definizione del modulo (con estensione def). **STACKSIZE** esegue l'override dell'opzione di allocazione dello stack (/stack) se sono specificati entrambi. È possibile modificare le dimensioni dello stack dopo aver compilato il file con estensione exe mediante lo strumento [editbin)](editbin-reference.md) .

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **linker** .

1. Selezionare la pagina delle proprietà **sistema** .

1. Modificare una delle proprietà seguenti:

   - **Dimensioni commit dello stack**

   - **Dimensioni riserva dello stack**

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackCommitSize%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackReserveSize%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
