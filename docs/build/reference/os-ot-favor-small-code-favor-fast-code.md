---
title: /Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice)
description: Le opzioni del compilatore MSVC/OS e/OT specificano se prediligere le dimensioni o la velocità durante l'ottimizzazione del codice.
ms.date: 07/08/2020
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
ms.openlocfilehash: 384019ddf7b80b8dd4e00197d73d1e4ac536634c
ms.sourcegitcommit: 80c8a512b361bd84e38958beb1a1bf6db7434021
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2020
ms.locfileid: "86180825"
---
# <a name="os-ot-favor-small-code-favor-fast-code"></a>`/Os`, `/Ot` (Ottimizza per dimensione codice, ottimizza per velocità codice)

Riduce al minimo o ingrandisce le dimensioni di exe e dll.

## <a name="syntax"></a>Sintassi

> **`/Os`**\
> **`/Ot`**

## <a name="remarks"></a>Osservazioni

**`/Os`**(Predilige Small Code) consente di ridurre al minimo le dimensioni di exe e DLL indicando al compilatore di preferire le dimensioni rispetto alla velocità. Il compilatore è in grado di ridurre molti costrutti C e C++ per sequenze di codice macchina funzionalmente simili. Occasionalmente, queste differenze offrono compromessi di dimensioni rispetto alla velocità. Le **`/Os`** **`/Ot`** Opzioni e consentono di specificare una preferenza per uno rispetto all'altro:

**`/Ot`**(Ottimizza codice rapido) massimizza la velocità di exe e DLL indicando al compilatore di preferire la velocità rispetto alla dimensione. **`/Ot`** è il valore predefinito quando sono abilitate le ottimizzazioni. Il compilatore è in grado di ridurre molti costrutti C e C++ per sequenze di codice macchina funzionalmente simili. In alcuni casi, queste differenze offrono compromessi di dimensioni rispetto alla velocità. L' **`/Ot`** opzione è implicita nell' [`/O2`](o1-o2-minimize-size-maximize-speed.md) opzione (Ottimizza velocità). L' **`/O2`** opzione combina diverse opzioni per produrre codice più veloce.

> [!NOTE]
> Le informazioni raccolte dalle esecuzioni dei test di profilatura sostituiscono eventuali ottimizzazioni che altrimenti sarebbero attive se si specifica **`/Ob`** , **`/Os`** o **`/Ot`** . Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md).

### <a name="x86-specific-example"></a>esempio specifico di x86

Nell'esempio di codice riportato di seguito viene illustrata la differenza tra l' **`/Os`** opzione (prediligi codice piccolo) e l' **`/Ot`** opzione (Ottimizza per il codice rapido):

> [!NOTE]
> Questo esempio descrive il comportamento previsto quando si usa **`/Os`** o **`/Ot`** . Tuttavia, il comportamento del compilatore da release a release può causare diverse ottimizzazioni per il codice riportato di seguito.

```c
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

Come illustrato nel frammento di codice macchina seguente, quando *`differ.c`* viene compilato per size ( **`/Os`** ), il compilatore implementa l'espressione multiply nell'istruzione return in modo esplicito come moltiplicatore per produrre una sequenza di codice breve ma più lenta:

```asm
mov    eax, DWORD PTR _x$[ebp]
imul   eax, 71                  ; 00000047H
```

In alternativa, quando *`differ.c`* viene compilato per Speed ( **`/Ot`** ), il compilatore implementa l'espressione multiply nell'istruzione return come una serie di turni e `LEA` istruzioni per produrre una sequenza di codice veloce ma più lunga:

```asm
mov    eax, DWORD PTR _x$[ebp]
mov    ecx, eax
shl    eax, 3
lea    eax, DWORD PTR [eax+eax*8]
sub    eax, ecx
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà di  >  **ottimizzazione C/C++**  >  **Optimization** .

1. Modificare la proprietà **ottimizza dimensione o velocità** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.FavorSizeOrSpeed%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (Ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
