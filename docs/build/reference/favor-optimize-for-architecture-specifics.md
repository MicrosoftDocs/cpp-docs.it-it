---
title: /favor (ottimizzato per le specifiche di architettura)
ms.date: 11/04/2016
f1_keywords:
- /favor
helpviewer_keywords:
- -favor compiler option [C++]
- /favor compiler option [C++]
ms.assetid: ad264df2-e30f-4d68-8bd0-10d6bee71a2a
ms.openlocfilehash: 1f76164468375e84380c6f02050c6c7a35b32412
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57418984"
---
# <a name="favor-optimize-for-architecture-specifics"></a>/favor (ottimizzato per le specifiche di architettura)

**/favor:** `option` genera codice ottimizzato per un'architettura specifica o per le specifiche delle microarchitetture nelle architetture Intel e AMD.

## <a name="syntax"></a>Sintassi

> **/favor:**{**blend** | **ATOM** | **AMD64** | **INTEL64**}

## <a name="remarks"></a>Note

**/favor:blend**<br/>
(x86 e x64) genera il codice che viene ottimizzato per le specifiche di micro-architetture nelle architetture AMD ed Intel. Sebbene **/favor:blend** non offra le migliori prestazioni possibili su un processore specifico, è progettato per offrire le migliori prestazioni in un'ampia gamma di processori x86 e x64. Per impostazione predefinita **/favor:blend** è attiva.

**/favor:ATOM**<br/>
(x86 e x64) genera codice ottimizzato per le specifiche del processore Intel Atom e della tecnologia del processore Intel Centrino Atom. Codice generato mediante **/favor:ATOM** può anche produrre le istruzioni di Intel SSSE3, SSE3, SSE2 e SSE per processori Intel.

**/favor:AMD64**<br/>
(solo x64) ottimizza il codice generato per i processori AMD Opteron e Athlon che supportano estensioni a 64 bit. Il codice ottimizzato può essere eseguito su tutte le piattaforme compatibili con x64. Codice generato mediante **/favor:AMD64** potrebbe compromettere le prestazioni su processori Intel che supportano Intel64.

**/favor:INTEL64**<br/>
(solo x64) ottimizza il codice generato per processori Intel che supportano Intel64, garantendo in genere prestazioni migliori per la piattaforma specifica. Il codice risultante può essere eseguito su qualsiasi piattaforma x64. Codice generato con **/favor:INTEL64** potrebbe compromettere le prestazioni su processori AMD Opteron e Athlon che supportano estensioni a 64 bit.

> [!NOTE]
> Architettura Intel64 era noto in precedenza come Extended Memory 64 Technology e l'opzione del compilatore corrispondente è stata **/favor:EM64T**.

Per informazioni su come programmare per x64 architettura, vedere [x64 convenzioni del software](../../build/x64-software-conventions.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **C/C++** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Immettere l'opzione del compilatore nel **opzioni aggiuntive** casella.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
