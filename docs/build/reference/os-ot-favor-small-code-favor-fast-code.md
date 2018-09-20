---
title: -Os, -Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLWCECompilerTool.FavorSizeOrSpeed
- /os
- VC.Project.VCCLCompilerTool.FavorSizeOrSpeed
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d74f313caec7ecb98faa3988e8e0dd59847917d5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381517"
---
# <a name="os-ot-favor-small-code-favor-fast-code"></a>/Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocità codice)

Riduce al minimo o aumenta la dimensione di exe e DLL.

## <a name="syntax"></a>Sintassi

```
/Os
/Ot
```

## <a name="remarks"></a>Note

**/OS** (Ottimizza per dimensione codice) consente di ridurre la dimensione di exe e DLL indicando al compilatore per favorire la riduzione delle dimensioni rispetto alla velocità. Il compilatore può ridurre molti costrutti di C e C++ per le sequenze simili a livello funzionale di codice macchina. Talvolta queste differenze offrono compromessi della dimensione e la velocità. Il **/Os** e **/Ot** opzioni consentono di specificare una preferenza per uno di essi:

**/Ot** (Ottimizza per velocità codice) Massimizza la velocità di exe e DLL indicando al compilatore di ottimizzare la velocità rispetto a dimensioni. (Questo è il valore predefinito). Il compilatore può ridurre molti costrutti di C e C++ per le sequenze simili a livello funzionale di codice macchina. In alcuni casi, queste differenze rappresentano un compromesso tra la dimensione e velocità. È implicita l'opzione /Ot Ottimizza velocità ([/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md)) opzione. Il **/O2** opzione combina diverse opzioni per produrre codice molto veloce.

Se si usa **/Os** oppure **/Ot**, quindi è necessario specificare anche [/Og](../../build/reference/og-global-optimizations.md) per ottimizzare il codice.

> [!NOTE]
>  Informazioni raccolte dalle esecuzioni dei test di profilatura sostituiranno le ottimizzazioni che verrebbero altrimenti effetto se si specifica **/Ob**, **/Os**, o **/Ot**. Per altre informazioni, [le ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md).

**x86 specifico**

Esempio di codice seguente illustra la differenza tra Ottimizza per dimensione codice (**/Os**) le opzioni e Ottimizza per velocità codice (**/Ot**) opzione:

> [!NOTE]
>  Di seguito viene descritto il comportamento previsto quando si usa **/Os** oppure **/Ot**. Tuttavia, il comportamento del compilatore nelle diverse versioni possono comportare diverse ottimizzazioni per il codice seguente.

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

Come illustrato nel frammento di codice macchina riportato di seguito, quando DIFFER per dimensioni (**/Os**), il compilatore implementa il moltiplicare l'espressione nell'istruzione return in modo esplicito come una moltiplicazione per produrre una sequenza breve ma più lenta del codice:

```
mov    eax, DWORD PTR _x$[ebp]
imul   eax, 71                  ; 00000047H
```

In alternativa, quando DIFFER per la velocità di (**/Ot**), il compilatore implementa il moltiplicare l'espressione nell'istruzione return come una serie di MAIUSC e `LEA` istruzioni per produrre una sequenza più lunga, ma veloce di codice:

```
mov    eax, DWORD PTR _x$[ebp]
mov    ecx, eax
shl    eax, 3
lea    eax, DWORD PTR [eax+eax*8]
sub    eax, ecx
```

**FINE x86 specifico**

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **ottimizzazione** pagina delle proprietà.

1. Modificare il **Ottimizza per dimensione o velocità** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.FavorSizeOrSpeed%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](../../build/reference/o-options-optimize-code.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)