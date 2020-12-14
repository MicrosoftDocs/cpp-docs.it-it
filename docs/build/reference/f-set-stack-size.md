---
description: Altre informazioni su:/F (Imposta dimensione stack)
title: /F (Imposta la dimensione dello stack)
ms.date: 11/04/2016
f1_keywords:
- /f
helpviewer_keywords:
- set stack size compiler option
- F compiler option [C++]
- -F compiler option [C++]
- /F compiler option [C++]
- stack, setting size
ms.assetid: 17320b6f-8305-445b-9ec2-75833f4b29e0
ms.openlocfilehash: 5bf8b0855c65fc39caf8935b06a877c62a4e0df0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200780"
---
# <a name="f-set-stack-size"></a>/F (Imposta la dimensione dello stack)

Imposta la dimensione dello stack del programma in byte.

## <a name="syntax"></a>Sintassi

>  *Numero* /f

## <a name="arguments"></a>Argomenti

*number*<br/>
Dimensioni dello stack in byte.

## <a name="remarks"></a>Commenti

Senza questa opzione, il valore predefinito per le dimensioni dello stack è 1 MB. L'argomento *Number* può essere in notazione decimale o in linguaggio C. L'argomento può essere compreso tra 1 e la dimensione massima dello stack accettata dal linker. Il linker arrotonda il valore specificato ai 4 byte più vicini. Lo spazio tra **/f** e *Number* è facoltativo.

Potrebbe essere necessario aumentare le dimensioni dello stack se il programma ottiene messaggi di overflow dello stack.

È anche possibile impostare le dimensioni dello stack per:

- Utilizzando l'opzione del linker **/stack** . Per ulteriori informazioni, vedere [/stack](stack.md).

- Utilizzo di EDITBIN) nel file con estensione exe. Per ulteriori informazioni, vedere [editbin) Reference](editbin-reference.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
