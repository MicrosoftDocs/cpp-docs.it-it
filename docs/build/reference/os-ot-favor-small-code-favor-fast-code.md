---
title: /Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.FavorSizeOrSpeed
- /os
- VC.Project.VCCLCompilerTool.FavorSizeOrSpeed
helpviewer_keywords:
- favor fast code compiler option [C++]
- /Os compiler option [C++]
- Ot compiler option [C++]
- /Ot compiler option [C++]
- small machine code
- -Ot compiler option [C++]
- fast code
- favor small code compiler option [C++]
- Os compiler option [C++]
- -Os compiler option [C++]
ms.assetid: 9a340806-fa15-4308-892c-355d83cac0f2
ms.openlocfilehash: 0eda9461b3ef730e0e0a832aa94a688e03c7e1bb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336180"
---
# <a name="os-ot-favor-small-code-favor-fast-code"></a>/Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice)

Riduce al minimo o massimizza le dimensioni di file EXE e DLL.

## <a name="syntax"></a>Sintassi

```
/Os
/Ot
```

## <a name="remarks"></a>Osservazioni

**/Os** (Favor Small Code) riduce al minimo le dimensioni di file EXE e DLL indicando al compilatore di preferire le dimensioni rispetto alla velocità. Il compilatore è in grado di ridurre molti costrutti C e C, a sequenze di codice macchina funzionalmente simili. Occasionalmente queste differenze offrono compromessi tra dimensioni e velocità. Le opzioni **/Os** e **/Ot** consentono di specificare una preferenza per uno rispetto all'altro:

**/Ot** (Favor Fast Code) massimizza la velocità di file ESO e DLL indicando al compilatore di favorire la velocità rispetto alle dimensioni. Questa è l'impostazione predefinita. Il compilatore è in grado di ridurre molti costrutti C e C, a sequenze di codice macchina funzionalmente simili. Occasionalmente, queste differenze offrono compromessi tra dimensioni e velocità. L'opzione **/Ot** è implicita nell'opzione Massimizza velocità ([/O2](o1-o2-minimize-size-maximize-speed.md)). L'opzione **/O2** combina diverse opzioni per produrre codice molto veloce.

Se si utilizza **/Os** o **/Ot**, è necessario specificare anche [/Og](og-global-optimizations.md) per ottimizzare il codice.

> [!NOTE]
> Le informazioni raccolte dalle esecuzioni dei test di profilatura sostituiranno le ottimizzazioni che altrimenti sarebbero attive se si specifica **/Ob**, **/Os**o **/Ot**. Per ulteriori informazioni, [Ottimizzazioni PGO](../profile-guided-optimizations.md).

**Sezione specifico x86**

Nel codice di esempio riportato di seguito viene illustrata la differenza tra le opzioni Favor Small Code (**/Os**) e l'opzione Favor Fast Code (**/Ot**):

> [!NOTE]
> Di seguito viene descritto il comportamento previsto quando si utilizza **/Os** o **/Ot**. Tuttavia, il comportamento del compilatore da release a release può comportare diverse ottimizzazioni per il codice seguente.

```
/* differ.c
  This program implements a multiplication operator
  Compile with /Os to implement multiply explicitly as multiply.
  Compile with /Ot to implement as a series of shift and LEA instructions.
*/
int differ(int x)
{
    return x * 71;
}
```

Come illustrato nel frammento di codice macchina riportato di seguito, quando DIFFER.c viene compilato per la dimensione (**/Os**), il compilatore implementa l'espressione di moltiplicazione nell'istruzione return in modo esplicito come moltiplicazione per produrre una sequenza di codice breve ma più lenta:

```
mov    eax, DWORD PTR _x$[ebp]
imul   eax, 71                  ; 00000047H
```

In alternativa, quando DIFFER.c viene compilato per la velocità (**/Ot**), il compilatore implementa l'espressione di moltiplicazione nell'istruzione return come una serie di spostamenti e `LEA` istruzioni per produrre una sequenza di codice veloce ma più lunga:

```
mov    eax, DWORD PTR _x$[ebp]
mov    ecx, eax
shl    eax, 3
lea    eax, DWORD PTR [eax+eax*8]
sub    eax, ecx
```

**FINE x86 Specifico**

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Ottimizzazione.**

1. Modificare la proprietà **Dimensione favorire o Velocità.**

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.FavorSizeOrSpeed%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (Ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
