---
title: -prediligono (Ottimizza per le specifiche di architettura) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /favor
dev_langs:
- C++
helpviewer_keywords:
- -favor compiler option [C++]
- /favor compiler option [C++]
ms.assetid: ad264df2-e30f-4d68-8bd0-10d6bee71a2a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 91f91373eef29adcb9a632e80520ed6713d3e39b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="favor-optimize-for-architecture-specifics"></a>/favor (ottimizzato per le specifiche di architettura)
**/favor:** `option` genera codice ottimizzato per un'architettura specifica o per le specifiche di micro-architetture nelle architetture Intel e AMD.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/favor:{blend | ATOM | AMD64 | INTEL64}  
```  
  
## <a name="remarks"></a>Note  
 **/favor:blend**  
 (x86 e x64) genera il codice che viene ottimizzato per le specifiche di micro-architetture nelle architetture AMD ed Intel. Mentre **/favor:blend** potrebbero non offrire le migliori prestazioni possibili su un processore specifico, è progettata per offrire le migliori prestazioni in un'ampia gamma di processori x86 e x64. Per impostazione predefinita, **/favor:blend** è attiva.  
  
 **/favor:Atom**  
 (x86 e x64) genera codice ottimizzato per le specifiche del processore Intel Atom e della tecnologia del processore Intel Centrino Atom. Il codice generato utilizzando **/favor:ATOM** può anche produrre Intel SSSE3, SSE3, SSE2 e SSE istruzioni per i processori Intel.  
  
 **/favor:AMD64**  
 (solo x64) ottimizza il codice generato per i processori AMD Opteron e Athlon che supportano estensioni a 64 bit. Il codice ottimizzato può essere eseguito su tutte le piattaforme compatibili con x64. Il codice generato utilizzando **/favor:AMD64** potrebbe compromettere le prestazioni su processori Intel che supportano Intel64.  
  
 **/favor:INTEL64**  
 (solo x64) ottimizza il codice generato per processori Intel che supportano Intel64, garantendo in genere prestazioni migliori per la piattaforma specifica. Il codice risultante può essere eseguito su qualsiasi piattaforma x64. Il codice generato con **/favor:INTEL64** potrebbe compromettere le prestazioni su processori AMD Opteron e Athlon che supportano estensioni a 64 bit.  
  
> [!NOTE]
>  Architettura Intel64 era noto in precedenza come Extended Memory 64 Technology e l'opzione del compilatore corrispondente è stata **/favor:EM64T**.  
  
 Per informazioni su come programmare per il [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] architettura, vedere [x64 convenzioni del Software](../../build/x64-software-conventions.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Immettere l'opzione del compilatore nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)