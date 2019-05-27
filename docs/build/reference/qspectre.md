---
title: /Qspectre
ms.date: 10/12/2018
f1_keywords:
- /Qspectre
helpviewer_keywords:
- /Qspectre
ms.openlocfilehash: e44416a44a9f772c17bc734d26c62ff87be775c8
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837411"
---
# <a name="qspectre"></a>/Qspectre

Specifica la generazione di istruzioni del compilatore per mitigare determinate vulnerabilità di sicurezza di Spectre variante 1.

## <a name="syntax"></a>Sintassi

> **/Qspectre**

## <a name="remarks"></a>Osservazioni

L'opzione **/Qspectre** è disponibile in Visual Studio 2017 versione 15.5.5 e successive e in Visual Studio 2015 dall'aggiornamento 3 a [KB 4338871](https://support.microsoft.com/help/4338871/visual-studio-2015-update-3-spectre-variant-1-toolset-qspectre). Indica al compilatore di inserire istruzioni per mitigare determinate [vulnerabilità di sicurezza di Spectre](https://spectreattack.com/spectre.pdf). Queste vulnerabilità, chiamate *attacchi side-channel di esecuzione speculativa*, influiscono su molti sistemi operativi e processori moderni, inclusi i processori di Intel, AMD e ARM.

L'opzione **/Qspectre** è disattivata per impostazione predefinita.

Nella versione iniziale l'opzione **/Qspectre** funziona solo nel codice ottimizzato. In Visual Studio 2017 versione 15.7 e successive l'opzione **/Qspectre** è supportata in tutti i livelli di ottimizzazione.

Anche le librerie Microsoft Visual C++ sono disponibili in versioni con mitigazione Spectre. Le librerie con mitigazione Spectre per Visual Studio 2017 e versioni successive possono essere scaricate nel programma di installazione di Visual Studio. Sono disponibili nella scheda **Singoli componenti** di **Compilatori, strumenti di compilazione e runtime** e il nome include la dicitura "per Spectre". Per un sottoinsieme di runtime di Visual C++, sono disponibili librerie di runtime DLL e statiche con la mitigazione abilitata: codice di avvio VC++, vcruntime140, msvcp140, concrt140 e vcamp140. Le DLL sono supportate solo per la distribuzione locale di applicazioni. Il contenuto dei componenti ridistribuibili delle librerie di runtime di Visual C++ 2017 e versioni successive non è stato modificato. È anche possibile installare le librerie con mitigazione Spectre per MFC e ATL, disponibili nella scheda **Singoli componenti** di **SDK, librerie e framework**.

### <a name="applicability"></a>Applicabilità

Se il codice opera su dati che attraversano un limite di trust, è consigliabile usare l'opzione **/Qspectre** per ricompilarlo e ridistribuirlo in modo da mitigare questo problema prima possibile. Questo tipo di codice include quello che carica input non attendibile che può influire sull'esecuzione, ad esempio il codice che effettua chiamate a procedure remote, analizza input o file non attendibili oppure usa altre interfacce di comunicazione interprocesso locali. Le tecniche di sandboxing standard potrebbero non essere sufficienti. È consigliabile esaminare con attenzione le sandbox prima di decidere che il codice non attraversa un limite di trust.

### <a name="availability"></a>Disponibilità

L'opzione **/Qspectre** è disponibile in Visual Studio 2017 versione 15.5.5 e in tutti gli aggiornamenti dei compilatori Microsoft MSVC effettuati a partire dal 23 gennaio 2018 incluso. Usare il programma di installazione di Visual Studio per aggiornare il compilatore e per installare le librerie con mitigazione Spectre come singoli componenti. L'opzione **/Qspectre** è disponibile anche in Visual Studio 2015 aggiornamento 3 tramite una patch. Per altre informazioni, vedere [KB 4338871](https://support.microsoft.com/help/4338871).

Tutte le versioni di Visual Studio 2017 versione 15.5 e tutte le anteprime di Visual Studio 2017 versione 15.6 includono un'opzione non documentata, **/d2guardspecload**, che è equivalente al comportamento iniziale di **/Qspectre**. È possibile usare **/d2guardspecload** per applicare le stesse mitigazioni nel codice di queste versioni del compilatore. Aggiornare la build per usare **/Qspectre** nei compilatori che la supportano. L'opzione **/Qspectre** potrebbe anche supportare nuove mitigazioni nelle versioni successive del compilatore.

### <a name="effect"></a>Effetto

L'opzione **/Qspectre** genera codice per mitigare Spectre variante 1, Bounds Check Bypass, [CVE-2017-5753](https://nvd.nist.gov/vuln/detail/CVE-2017-5753). Funziona tramite l'inserimento di istruzioni che agiscono da barriera per l'esecuzione speculativa di codice. Le istruzioni specifiche usate per mitigare la speculazione del processore dipendono dal processore e dalla relativa microarchitettura e possono cambiare nelle versioni future del compilatore.

Se l'opzione **/Qspectre** è abilitata, il compilatore prova a identificare le istanze in cui l'esecuzione speculativa potrebbe ignorare i controlli dei limiti, quindi inserisce le istruzioni per la barriera. È importante notare che esistono limiti per l'analisi che un compilatore può eseguire per identificare le istanze della variante 1. Di conseguenza, non è possibile garantire che vengano instrumentate tutte le possibili istanze della variante 1 con **/Qspectre**.

### <a name="performance-impact"></a>Impatto sulle prestazioni

L'impatto di **/Qspectre** sulle prestazioni è risultato trascurabile in diverse basi di codice molto grandi, ma non è possibile garantire che le prestazioni del codice non vengano influenzate da **/Qspectre**. È consigliabile eseguire un benchmark sul codice per determinare l'effetto dell'opzione sulle prestazioni. Se è noto che la mitigazione non è necessaria in un blocco o un ciclo per cui le prestazioni sono cruciali, è possibile disabilitarla selettivamente tramite una direttiva [__declspec(spectre(nomitigation))](../../cpp/spectre.md). Questa direttiva non è disponibile nei compilatori che supportano solo l'opzione **/d2guardspecload**.

### <a name="required-libraries"></a>Librerie necessarie

L'opzione del compilatore **/Qspectre** genera codice che collega implicitamente le versioni delle librerie di runtime create per fornire le mitigazioni Spectre. Queste librerie sono componenti facoltativi che è necessario installare con il programma di installazione di Visual Studio:

- Librerie MSVC versione *numeri_versione* per Spectre \[(x86 e x64) | (ARM) | (ARM64)]
- ATL Visual C++ per \[(x86/x64) | ARM | ARM64] con mitigazioni Spectre
- MFC Visual C++ per \[x86/x64 | ARM | ARM64] con mitigazioni Spectre

Se si compila il codice usando **/Qspectre** e queste librerie non sono installate, il sistema di build segnala l'avviso **MSB8038: la mitigazione Spectre è abilitata, ma le librerie mitigate di Spectre non sono state trovate**. Se non è possibile compilare il codice MFC o ATL e il linker segnala un errore analogo a **Errore irreversibile LNK1104: non è possibile aprire il file 'oldnames.lib'** , la causa potrebbe essere dovuta a queste librerie mancanti.

### <a name="additional-information"></a>Informazioni aggiuntive

Per altre informazioni, vedere il documento ufficiale [Microsoft Security Advisory ADV180002, Guidance to mitigate speculative execution side-channel vulnerabilities](https://portal.msrc.microsoft.com/en-US/security-guidance/advisory/ADV180002). Sono inoltre disponibili istruzioni di Intel, [Speculative Execution Side Channel Mitigations](https://software.intel.com/sites/default/files/managed/c5/63/336996-Speculative-Execution-Side-Channel-Mitigations.pdf), e di ARM, [Cache Speculation Side-channels](https://developer.arm.com/-/media/Files/pdf/Cache_Speculation_Side-channels.pdf). Per una panoramica specifica di Windows delle mitigazioni Spectre e Meltdown, vedere [Understanding the performance impact of Spectre and Meltdown mitigations on Windows Systems](https://cloudblogs.microsoft.com/microsoftsecure/2018/01/09/understanding-the-performance-impact-of-spectre-and-meltdown-mitigations-on-windows-systems/) nel blog Microsoft Security. Per una panoramica delle vulnerabilità di Spectre risolte dalle mitigazioni MSVC, vedere [Spectre mitigations in MSVC](https://blogs.msdn.microsoft.com/vcblog/2018/01/15/spectre-mitigations-in-msvc./) nel blog del team Visual C++.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++** > **Riga di comando**.

1. Immettere l'opzione del compilatore **/Qspectre** nella casella **Opzioni aggiuntive**. Scegliere **OK** per applicare la modifica.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
