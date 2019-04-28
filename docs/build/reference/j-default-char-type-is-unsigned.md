---
title: /J (Il tipo char predefinito è unsigned)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.DefaultCharIsUnsigned
- VC.Project.VCCLWCECompilerTool.DefaultCharIsUnsigned
- /j
helpviewer_keywords:
- defaults, char type
- char data type
- -J compiler option [C++]
- /J compiler option [C++]
- J compiler option [C++]
- default char type is unsigned
ms.assetid: 50973667-6638-491e-9c41-bff73acae19f
ms.openlocfilehash: ed296d339949814dbd796bb5d8e23a406be71c69
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62269401"
---
# <a name="j-default-char-type-is-unsigned"></a>/J (Il tipo char predefinito è unsigned)

Modifica il tipo `char` predefinito da `signed char` a `unsigned char` e il tipo `char` ha estensione zero quando viene ampliato a un tipo `int`.

## <a name="syntax"></a>Sintassi

```
/J
```

## <a name="remarks"></a>Note

Se un `char` valore viene dichiarato in modo esplicito come `signed`, il **/J** opzione non ha effetto e il valore viene esteso con segno quando viene esteso a un `int` tipo.

Il **/J** opzione definisce `_CHAR_UNSIGNED`, che viene utilizzata con `#ifndef` nel file Limits. h per definire l'intervallo del valore predefinito `char` tipo.

ANSI C e C++ non richiedono un'implementazione specifica del `char` tipo. Questa opzione è utile quando si lavora con dati di tipo carattere alla fine verranno convertiti in una lingua diversa dall'inglese.

> [!NOTE]
>  Se si utilizza questa opzione del compilatore con ATL/MFC è possibile che venga generato un errore. Benché sia possibile disabilitare questo errore definendo `_ATL_ALLOW_CHAR_UNSIGNED`, questa soluzione alternativa non è supportata e potrebbe non funzionare.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.

1. Nel progetto **pagine delle proprietà** finestra di dialogo, nel riquadro sinistro sotto **delle proprietà di configurazione**, espandere **C/C++** e quindi selezionare **dellarigadicomando**.

1. Nel **opzioni aggiuntive** riquadro, specificare il **/J** opzione del compilatore.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DefaultCharIsUnsigned%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md)
