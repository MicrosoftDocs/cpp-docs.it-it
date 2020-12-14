---
description: Altre informazioni su:/VMB,/VMG (metodo di rappresentazione)
title: /vmb, /vmg (Metodo di rappresentazione)
ms.date: 11/04/2016
f1_keywords:
- /vmb
- /vmg
helpviewer_keywords:
- vmb compiler option [C++]
- -vmg compiler option [C++]
- vmg compiler option [C++]
- -vmb compiler option [C++]
- /vmb compiler option [C++]
- representation method compiler options [C++]
- /vmg compiler option [C++]
ms.assetid: ecdb391c-7dab-40b1-916b-673d10889fd4
ms.openlocfilehash: 19d183ef8d1dd152043d7249d907c9d5b48de230
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254284"
---
# <a name="vmb-vmg-representation-method"></a>/vmb, /vmg (Metodo di rappresentazione)

Consente di selezionare il metodo utilizzato dal compilatore per rappresentare i puntatori ai membri della classe.

Usare **/VMB** se si definisce sempre una classe prima di dichiarare un puntatore a un membro della classe.

Usare **/VMG** per dichiarare un puntatore a un membro di una classe prima di definire la classe. Questa esigenza può verificarsi se si definiscono membri in due classi diverse che fanno riferimento l'una all'altra. Per le classi che fanno riferimento a vicenda, è necessario fare riferimento a una classe prima che venga definita.

## <a name="syntax"></a>Sintassi

```
/vmb
/vmg
```

## <a name="remarks"></a>Osservazioni

È inoltre possibile utilizzare [pointers_to_members](../../preprocessor/pointers-to-members.md) o [parole chiave di ereditarietà](../../cpp/inheritance-keywords.md) nel codice per specificare una rappresentazione del puntatore.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
