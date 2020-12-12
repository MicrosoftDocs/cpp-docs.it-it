---
description: Altre informazioni su:/favor (Ottimizza per le specifiche di architettura)
title: /favor (ottimizzato per le specifiche di architettura)
ms.date: 11/04/2016
f1_keywords:
- /favor
helpviewer_keywords:
- -favor compiler option [C++]
- /favor compiler option [C++]
ms.assetid: ad264df2-e30f-4d68-8bd0-10d6bee71a2a
ms.openlocfilehash: 184e81e1007214a09088601b6c579692a0dd20a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192304"
---
# <a name="favor-optimize-for-architecture-specifics"></a>/favor (ottimizzato per le specifiche di architettura)

**/favor:** `option` produce il codice ottimizzato per un'architettura specifica o per le specifiche di micro-architetture nelle architetture AMD e Intel.

## <a name="syntax"></a>Sintassi

> **/favor:**{**Blend**  |  **Atom**  |  **amd64**  |  **Intel64**}

## <a name="remarks"></a>Commenti

**/favor: Blend**<br/>
(x86 e x64) genera il codice che viene ottimizzato per le specifiche di micro-architetture nelle architetture AMD ed Intel. Sebbene **/favor: Blend** non fornisca le migliori prestazioni possibili su un processore specifico, è progettato per offrire le prestazioni migliori in un'ampia gamma di processori x86 e x64. Per impostazione predefinita, **/favor: Blend** è attivo.

**/favor: ATOM**<br/>
(x86 e x64) genera codice ottimizzato per le specifiche del processore Intel Atom e della tecnologia del processore Intel Centrino Atom. Il codice generato con **/favor: Atom** può produrre anche le istruzioni Intel SSSE3, SSE3, SSE2 e SSE per i processori Intel.

**/favor: AMD64**<br/>
(solo x64) ottimizza il codice generato per i processori AMD Opteron e Athlon che supportano estensioni a 64 bit. Il codice ottimizzato può essere eseguito su tutte le piattaforme compatibili con x64. Il codice generato con **/favor: amd64** può causare prestazioni peggiori sui processori Intel che supportano Intel64.

**/favor: INTEL64**<br/>
(solo x64) ottimizza il codice generato per processori Intel che supportano Intel64, garantendo in genere prestazioni migliori per la piattaforma specifica. Il codice risultante può essere eseguito su qualsiasi piattaforma x64. Il codice generato con **/favor: Intel64** può causare un peggioramento delle prestazioni nei processori AMD Opteron e Athlon che supportano le estensioni a 64 bit.

> [!NOTE]
> L'architettura Intel64 era nota in precedenza come tecnologia Extended Memory 64 e l'opzione del compilatore corrispondente era **/favor: EM64T**.

Per informazioni sulla programmazione per l'architettura x64, vedere la pagina relativa alle [convenzioni software x64](../x64-software-conventions.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **C/C++** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Immettere l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
