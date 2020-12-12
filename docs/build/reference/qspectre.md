---
description: Altre informazioni su:/Qspectre
title: /Qspectre
ms.date: 09/06/2019
f1_keywords:
- VC.Project.VCCLCompilerTool.SpectreMitigation
helpviewer_keywords:
- /Qspectre
ms.openlocfilehash: 576052a9db8a4ce63c82afaf644f41fa847ad9a9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225492"
---
# <a name="qspectre"></a>/Qspectre

Specifica la generazione di istruzioni del compilatore per mitigare determinate vulnerabilità di sicurezza di Spectre variante 1.

## <a name="syntax"></a>Sintassi

> **/Qspectre**

## <a name="remarks"></a>Commenti

L'opzione **/Qspectre** è disponibile in Visual Studio 2017 versione 15.5.5 e successive e in Visual Studio 2015 dall'aggiornamento 3 a [KB 4338871](https://support.microsoft.com/help/4338871/visual-studio-2015-update-3-spectre-variant-1-toolset-qspectre). Indica al compilatore di inserire istruzioni per mitigare determinate [vulnerabilità di sicurezza di Spectre](https://spectreattack.com/spectre.pdf). Queste vulnerabilità sono denominate *attacchi di canale laterale di esecuzione speculativa*. Interessano molti sistemi operativi e processori moderni, inclusi i processori di Intel, AMD e ARM.

L'opzione **/Qspectre** è disattivata per impostazione predefinita.

Nella versione iniziale l'opzione **/Qspectre** funziona solo nel codice ottimizzato. In Visual Studio 2017 versione 15.7 e successive l'opzione **/Qspectre** è supportata in tutti i livelli di ottimizzazione.

Anche le librerie Microsoft Visual C++ sono disponibili in versioni con mitigazione Spectre. Le librerie con mitigazione Spectre per Visual Studio 2017 e versioni successive possono essere scaricate nel programma di installazione di Visual Studio. Sono disponibili nella scheda **singoli componenti** in **compilatori, strumenti di compilazione e Runtime** e hanno "libs per Spectre" nel nome. Le librerie di runtime statiche e DLL con attenuazione abilitata sono disponibili per un subset di runtime di Visual C++: codice di avvio di VC + +, vcruntime140, msvcp140, concrt140 e vcamp140. Le dll sono supportate solo per la distribuzione locale dell'applicazione. Il contenuto delle librerie di runtime Visual C++ 2017 e versioni successive non è stato modificato.

È anche possibile installare le librerie con attenuazione Spectre per MFC e ATL. Sono disponibili nella scheda **singoli componenti** in **SDK, librerie e Framework**.

> [!NOTE]
> Non sono disponibili versioni di librerie con attenuazione Spectre per le app o i componenti di Windows universale (UWP). Non è possibile distribuire app-local di tali librerie.

### <a name="applicability"></a>Applicabilità

Se il codice opera sui dati che attraversano un confine di trust, è consigliabile usare l'opzione **/Qspectre** per ricompilare e ridistribuire il codice per attenuare il problema il prima possibile. Un esempio di tale codice è il codice che carica input non attendibile che possono influire sull'esecuzione. Ad esempio, il codice che effettua chiamate a procedure remote, analizza l'input o i file non attendibili o usa altre interfacce IPC (Interprocess Communication) locali. Le tecniche di sandboxing standard potrebbero non essere sufficienti. Esaminare attentamente le sandbox prima di decidere se il codice non supera un confine di trust.

### <a name="availability"></a>Disponibilità

L'opzione **/Qspectre** è disponibile in Visual Studio 2017 versione 15.5.5 e in tutti gli aggiornamenti dei compilatori Microsoft C++ (MSVC) eseguiti il 23 gennaio 2018 o successivo. Usare il programma di installazione di Visual Studio per aggiornare il compilatore e per installare le librerie con mitigazione Spectre come singoli componenti. L'opzione **/Qspectre** è disponibile anche in Visual Studio 2015 aggiornamento 3 tramite una patch. Per altre informazioni, vedere [KB 4338871](https://support.microsoft.com/help/4338871).

Tutte le versioni di Visual Studio 2017 versione 15,5 e tutte le anteprime di Visual Studio 2017 versione 15,6. includere un'opzione non documentata, **/d2guardspecload**. Equivale al comportamento iniziale di **/Qspectre**. È possibile usare **/d2guardspecload** per applicare le stesse mitigazioni nel codice di queste versioni del compilatore. Si consiglia di aggiornare la compilazione per usare **/Qspectre** nei compilatori che supportano l'opzione. L'opzione **/Qspectre** può supportare anche nuove attenuazioni nelle versioni successive del compilatore.

### <a name="effect"></a>Effetto

L'opzione **/Qspectre** genera codice per mitigare Spectre variante 1, Bounds Check Bypass, [CVE-2017-5753](https://nvd.nist.gov/vuln/detail/CVE-2017-5753). Funziona tramite l'inserimento di istruzioni che agiscono da barriera per l'esecuzione speculativa di codice. Le istruzioni specifiche usate per mitigare la speculazione del processore dipendono dal processore e dalla relativa microarchitettura e possono cambiare nelle versioni future del compilatore.

Quando si Abilita l'opzione **/Qspectre** , il compilatore tenta di identificare le istanze in cui l'esecuzione speculativa può ignorare i controlli dei limiti. Qui vengono inserite le istruzioni per la barriera. È importante tenere presente i limiti dell'analisi che un compilatore può eseguire per identificare le istanze della variante 1. Di conseguenza, non c'è alcuna garanzia che tutte le istanze possibili della variante 1 siano instrumentate in **/Qspectre**.

### <a name="performance-impact"></a>Impatto sulle prestazioni

L'effetto sulle prestazioni di **/Qspectre** sembra essere trascurabile in diverse basi di codice ridimensionabili. Tuttavia, non vi sono garanzie che le prestazioni del codice in **/Qspectre** rimangano inalterate. È consigliabile eseguire un benchmark sul codice per determinare l'effetto dell'opzione sulle prestazioni. Se si è certi che la mitigazione non è necessaria in un blocco o un ciclo critico per le prestazioni, è possibile disabilitare selettivamente la mitigazione usando una direttiva [__declspec (Spectre (nomitigation))](../../cpp/spectre.md) . Questa direttiva non è disponibile nei compilatori che supportano solo l'opzione **/d2guardspecload** .

### <a name="required-libraries"></a>Librerie obbligatorie

L'opzione del compilatore **/Qspectre** genera codice che collega in modo implicito le versioni delle librerie di Runtime compilate per fornire mitigazioni Spectre. Queste librerie sono componenti facoltativi che è necessario installare con il programma di installazione di Visual Studio:

- Librerie MSVC versione *numeri_versione* per Spectre \[(x86 e x64) | (ARM) | (ARM64)]
- ATL Visual C++ per \[(x86/x64) | ARM | ARM64] con mitigazioni Spectre
- MFC Visual C++ per \[x86/x64 | ARM | ARM64] con mitigazioni Spectre

Se si compila il codice usando **/Qspectre** e queste librerie non sono installate, il sistema di compilazione segnala l' **avviso MSB8038: la mitigazione Spectre è abilitata ma non sono state trovate librerie mitigate di Spectre**. Se non è possibile compilare il codice MFC o ATL e il linker segnala un errore, ad esempio **errore irreversibile LNK1104: non è possibile aprire il file ' OLDNAMES. lib '**, queste librerie mancanti potrebbero essere la motivo.

### <a name="additional-information"></a>Informazioni aggiuntive

Per ulteriori informazioni, vedere l' [avviso ufficiale di sicurezza Microsoft ADV180002, indicazioni per attenuare le vulnerabilità del canale laterale per l'esecuzione speculativa](https://portal.msrc.microsoft.com/en-US/security-guidance/advisory/ADV180002). Sono inoltre disponibili istruzioni di Intel, [Speculative Execution Side Channel Mitigations](https://software.intel.com/sites/default/files/managed/c5/63/336996-Speculative-Execution-Side-Channel-Mitigations.pdf), e di ARM, [Cache Speculation Side-channels](https://developer.arm.com/-/media/Files/pdf/Cache_Speculation_Side-channels.pdf). Per una panoramica specifica di Windows per le mitigazioni Spectre e Meltdown, vedere [informazioni sull'effetto sulle prestazioni delle mitigazioni Spectre e Meltdown nei sistemi Windows](https://www.microsoft.com/security/blog/2018/01/09/understanding-the-performance-impact-of-spectre-and-meltdown-mitigations-on-windows-systems/). Per una panoramica delle vulnerabilità di Spectre trattate dalle mitigazioni MSVC, vedere [mitigazioni Spectre in MSVC](https://devblogs.microsoft.com/cppblog/spectre-mitigations-in-msvc./) nel Blog del team di C++.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

::: moniker range="msvc-160"

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** delle > proprietà di generazione del codice **C/C++** >  .

1. Selezionare un nuovo valore per la proprietà **mitigazione Spectre** . Scegliere **OK** per applicare la modifica.

::: moniker-end

::: moniker range="<=msvc-150"

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++** > **Riga di comando**.

1. Immettere l'opzione del compilatore **/Qspectre** nella casella **Opzioni aggiuntive**. Scegliere **OK** per applicare la modifica.

::: moniker-end

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
