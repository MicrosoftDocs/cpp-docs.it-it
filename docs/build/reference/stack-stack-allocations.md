---
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
ms.openlocfilehash: 27de554e1933b2753f641be358461c8d7ff4fffa
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57813799"
---
# <a name="stack-stack-allocations"></a>/STACK (Allocazioni stack)

```
/STACK:reserve[,commit]
```

## <a name="remarks"></a>Note

Essa è imposta la dimensione dello stack in byte. Usare questa opzione solo quando si compila un file .exe.

Il `reserve` valore consente di specificare l'allocazione totale dello stack nella memoria virtuale. Per ARM, x86 e x64 computer, la dimensione predefinita è 1 MB.

`commit` viene interpretato dal sistema operativo. In WindowsRT specifica la quantità di memoria fisica da allocare alla volta. Memoria virtuale vincolata fa sì che lo spazio da riservare nel file di paging. Un valore di `commit` più alto fa risparmiare tempo quando nell'applicazione è necessario maggior spazio per lo stack, ma aumenta i requisiti di memoria e in alcuni casi il tempo di avvio. Per ARM, x86 e x64 computer, il valore di commit predefinito è 4 KB.

Specificare i valori `reserve` e `commit` in notazione decimale o in linguaggio C.

Un altro modo per impostare le dimensioni dello stack è con il [STACKSIZE](stacksize.md) istruzione in un file di definizione moduli (def). **STACKSIZE** sostituisce le allocazioni di Stack (/stack) se vengono specificati entrambi. È possibile modificare la dimensione dello stack dopo che il file .exe viene compilato con il [EDITBIN](editbin-reference.md) dello strumento.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **sistema** pagina delle proprietà.

1. Modificare una delle seguenti proprietà:

   - **Dimensione stack Commit**

   - **Dimensione stack riservata**

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackCommitSize%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackReserveSize%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
