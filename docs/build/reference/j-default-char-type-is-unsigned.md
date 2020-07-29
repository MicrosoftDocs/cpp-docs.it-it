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
ms.openlocfilehash: d95fed3d9af81d89ac03a52a1e6433786118430e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223837"
---
# <a name="j-default-char-type-is-unsigned"></a>/J (Il tipo char predefinito è unsigned)

Modifica il **`char`** tipo predefinito da **`signed char`** a **`unsigned char`** e il **`char`** tipo viene esteso a zero quando viene ampliato a un **`int`** tipo.

## <a name="syntax"></a>Sintassi

```
/J
```

## <a name="remarks"></a>Osservazioni

Se un **`char`** valore viene dichiarato in modo esplicito come **`signed`** , l'opzione **/J** non ha effetto e il valore viene esteso con segno quando viene ampliato a un **`int`** tipo.

L'opzione **/J** definisce `_CHAR_UNSIGNED` , che viene usata con `#ifndef` nel file limits. h per definire l'intervallo del tipo predefinito **`char`** .

ANSI C e C++ non richiedono un'implementazione specifica del **`char`** tipo. Questa opzione è utile quando si utilizzano dati di tipo carattere che verranno convertiti in una lingua diversa dall'inglese.

> [!NOTE]
> Se si utilizza questa opzione del compilatore con ATL/MFC è possibile che venga generato un errore. Benché sia possibile disabilitare questo errore definendo `_ATL_ALLOW_CHAR_UNSIGNED`, questa soluzione alternativa non è supportata e potrebbe non funzionare.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.

1. Nella finestra di **dialogo Pagine delle proprietà** del progetto, nel riquadro sinistro in proprietà di **configurazione**, espandere **C/C++** e quindi selezionare **riga di comando**.

1. Nel riquadro **Opzioni aggiuntive** specificare l'opzione del compilatore **/J** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DefaultCharIsUnsigned%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Impostare il compilatore e le proprietà di compilazione C++ in Visual Studio](../working-with-project-properties.md)
