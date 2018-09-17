---
title: -F (imposta la dimensione dello Stack) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /f
dev_langs:
- C++
helpviewer_keywords:
- set stack size compiler option
- F compiler option [C++]
- -F compiler option [C++]
- /F compiler option [C++]
- stack, setting size
ms.assetid: 17320b6f-8305-445b-9ec2-75833f4b29e0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 244fea4b776f0713b6fb2281563e39d27a910a2d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45704249"
---
# <a name="f-set-stack-size"></a>/F (Imposta la dimensione dello stack)

Imposta la dimensione dello stack di programma in byte.

## <a name="syntax"></a>Sintassi

> **/F** *numero*

## <a name="arguments"></a>Argomenti

*Numero*<br/>
La dimensione dello stack in byte.

## <a name="remarks"></a>Note

Senza questa opzione la dimensione predefinita è pari a 1 MB. Il *numero* argomento può essere nella notazione decimale o del linguaggio C. L'argomento è compresa tra 1 e la dimensione massima dello stack accettata dal linker. Il linker viene arrotondato per eccesso il valore specificato per i più vicini 4 byte. Lo spazio tra **/F** e *numero* è facoltativo.

Potrebbe essere necessario aumentare la dimensione dello stack se il programma riceve i messaggi di overflow dello stack.

È anche possibile impostare la dimensione dello stack:

- Usando il **/stack** l'opzione del linker. Per altre informazioni, vedere [/stack](../../build/reference/stack.md).

- Utilizzo di EDITBIN sul file .exe. Per altre informazioni, vedere [riferimenti a EDITBIN](../../build/reference/editbin-reference.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)