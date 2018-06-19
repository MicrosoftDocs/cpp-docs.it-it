---
title: -arch (x86) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: 9dd5a75d-06e4-4674-aade-33228486078d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 87e1826e324f8e544a791520a3ac035f5ab07100
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374700"
---
# <a name="arch-x86"></a>/arch (x86)
Specifica l'architettura per la generazione del codice su piattaforme x86. Vedere anche [/arch (x64)](../../build/reference/arch-x64.md) e [/arch (ARM)](../../build/reference/arch-arm.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
/arch:[IA32|SSE|SSE2|AVX|AVX2]  
```  
  
## <a name="arguments"></a>Argomenti  
 **/arch:IA32**  
 Non specifica istruzioni avanzate e specifica x87 per i calcoli a virgola mobile.  
  
 **/arch: SSE**  
 Abilita l'uso delle istruzioni SSE.  
  
 **/ arch:SSE2**  
 Abilita l'uso delle istruzioni SSE2. Si tratta dell'istruzione predefinita per x86 piattaforme se nessun **/arch** opzione specificata.  
  
 **/arch: AVX**  
 Abilita l'uso di istruzioni Intel Advanced Vector Extensions.  
  
 **/ arch:avx2**  
 Abilita l'uso di istruzioni Intel Advanced Vector Extensions 2.  
  
## <a name="remarks"></a>Note  
 Le istruzioni SSE ed SSE2 sono presenti in vari processori Intel e AMD. Le istruzioni AVX sono presenti nei processori Sandy Bridge di Intel e nei processori Bulldozer di AMD. Le istruzioni AVX2 sono supportate dai processori Haswalle e Broadwell di Intel e dai processori AMD basati su Excavator.  
  
 Il `_M_IX86_FP`, `__AVX__` e `__AVX2__` macro indicano quale, se presente, **/arch** è stata utilizzata l'opzione del compilatore. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md). Il **/arch: avx2** opzione e `__AVX2__` macro sono state introdotte in Visual Studio 2013 Update 2, versione 12.0.34567.1.  
  
 L'utilità di ottimizzazione sceglie quando e come utilizzare le istruzioni SSE ed SSE2 quando **/arch** specificato. Usa le istruzioni SSE ed SSE2 per alcuni calcoli a virgola mobile scalari, quando stabilisce che l'esecuzione dei calcoli sarà più veloce usando i registri e le istruzioni SSE/SSE2 anziché lo stack di registri a virgola mobile x87. Di conseguenza, nel codice potrebbe essere in uso una combinazione di istruzioni x87 ed SSE/SSE2 per i calcoli a virgola mobile. Inoltre, con **/arch: SSE2**, istruzioni SSE2 possono essere utilizzate per alcune operazioni integer a 64 bit.  
  
 Oltre a usare le istruzioni SSE ed SSE2, il compilatore usa anche altre istruzioni presenti nelle revisioni del processore che supportano SSE ed SSE2. Un esempio è costituito dall'istruzione CMOV che ha fatto la sua prima apparizione nella revisione Pentium Pro dei processori Intel.  
  
 Poiché il compilatore x86 genera codice che Usa istruzioni SSE2 per impostazione predefinita, è necessario specificare **/arch:IA32** per disabilitare la generazione di istruzioni SSE ed SSE2 per x86 processori.  
  
 **/arch** solo influisce sul codice generazione per le funzioni native. Quando si utilizza [/clr](../../build/reference/clr-common-language-runtime-compilation.md) da compilare, **/arch** non ha alcun effetto sulla generazione di codice per le funzioni gestite.  
  
 **/arch** e [/QIfist](../../build/reference/qifist-suppress-ftol.md) non può essere utilizzato nello stesso compilando. In particolare, se non si usa `_controlfp` per modificare la parola di controllo FP, il codice di avvio in fase di esecuzione imposta il campo di controllo della precisione della parola di controllo FPU dell'istruzione x87 su 53 bit. Di conseguenza, ogni operazione a virgola mobile e precisione doppia in un'espressione usa un significando a 53 bit e un esponente a 15 bit. Tuttavia, ogni operazione a precisione singola SSE usa un significando a 24 bit e un esponente a 8 bit, mentre le operazioni a precisione doppia SSE2 usano un significando a 53 bit e un esponente a 11 bit. Per altre informazioni, vedere [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md). Queste differenze sono possibili in un albero delle espressioni, ma non nei casi in cui è coinvolta un'assegnazione utente dopo ogni sottoespressione. Si consideri quanto segue.  
  
```cpp  
r = f1 * f2 + d;  // Different results are possible on SSE/SSE2.  
```  
  
 Confrontare:  
  
```cpp  
t = f1 * f2;   // Do f1 * f2, round to the type of t.  
r = t + d;     // This should produce the same overall result   
               // whether x87 stack is used or SSE/SSE2 is used.  
```  
  
### <a name="to-set-this-compiler-option-for-avx-avx2-ia32-sse-or-sse2-in-visual-studio"></a>Per impostare questa opzione del compilatore per le istruzioni AVX, AVX2, IA32, SSE o SSE2 in Visual Studio  
  
1.  Aprire il **pagine delle proprietà** la finestra di dialogo per il progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **le proprietà di configurazione**, **C/C++** cartella.  
  
3.  Selezionare il **la generazione di codice** pagina delle proprietà.  
  
4.  Modificare il **Abilita Set di istruzioni avanzate** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [/arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)