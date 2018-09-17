---
title: -vmb, - vmg (metodo di rappresentazione) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /vmb
- /vmg
dev_langs:
- C++
helpviewer_keywords:
- vmb compiler option [C++]
- -vmg compiler option [C++]
- vmg compiler option [C++]
- -vmb compiler option [C++]
- /vmb compiler option [C++]
- representation method compiler options [C++]
- /vmg compiler option [C++]
ms.assetid: ecdb391c-7dab-40b1-916b-673d10889fd4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a95081dfb417711002039727b04d1916c5fe0a14
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45720577"
---
# <a name="vmb-vmg-representation-method"></a>/vmb, /vmg (Metodo di rappresentazione)

Selezionare il metodo usato dal compilatore per rappresentare i puntatori ai membri della classe.

Uso **/vmb** se sempre definire una classe prima di dichiarare un puntatore a un membro della classe.

Uso **/vmg** per dichiarare un puntatore a un membro di una classe prima della definizione della classe. Questa esigenza può verificarsi se si definiscano i membri in due diverse classi che fanno riferimento a altro. Per queste classi di riferimento si escludono a vicenda, una classe deve fare riferimento prima che sia definita.

## <a name="syntax"></a>Sintassi

```
/vmb
/vmg
```

## <a name="remarks"></a>Note

È anche possibile usare [pointers_to_members](../../preprocessor/pointers-to-members.md) oppure [parole chiave di ereditarietà](../../cpp/inheritance-keywords.md) nel codice per specificare una rappresentazione del puntatore.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)