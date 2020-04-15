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
ms.openlocfilehash: 7bcf0f2eb2bef08757250999d0a6696b256fb15c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81322189"
---
# <a name="j-default-char-type-is-unsigned"></a>/J (Il tipo char predefinito è unsigned)

Modifica il tipo `char` predefinito da `signed char` a `unsigned char` e il tipo `char` ha estensione zero quando viene ampliato a un tipo `int`.

## <a name="syntax"></a>Sintassi

```
/J
```

## <a name="remarks"></a>Osservazioni

Se `char` un valore viene `signed`dichiarato in modo esplicito come , l'opzione **/J** non influisce `int` su di esso e il valore viene esteso con segno quando viene ampliato a un tipo.

L'opzione **/J** definisce `_CHAR_UNSIGNED`, `#ifndef` utilizzata con nel file LIMITS.h `char` per definire l'intervallo del tipo predefinito.

Non è necessaria un'implementazione specifica del `char` tipo. Questa opzione è utile quando si lavora con dati di tipo carattere che alla fine verranno tradotti in una lingua diversa dall'inglese.

> [!NOTE]
> Se si utilizza questa opzione del compilatore con ATL/MFC è possibile che venga generato un errore. Benché sia possibile disabilitare questo errore definendo `_ATL_ALLOW_CHAR_UNSIGNED`, questa soluzione alternativa non è supportata e potrebbe non funzionare.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.

1. Nella finestra di dialogo **Pagine delle proprietà** del progetto, nel riquadro sinistro in Proprietà di **configurazione,** espandere **C/C,** quindi selezionare **Riga di comando**.

1. Nel riquadro **Opzioni aggiuntive** specificare l'opzione del compilatore **/J.**

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DefaultCharIsUnsigned%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Impostare il compilatore e le proprietà di compilazione C++ in Visual Studio](../working-with-project-properties.md)
