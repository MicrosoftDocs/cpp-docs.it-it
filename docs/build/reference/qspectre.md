---
title: /Qspectre
ms.date: 10/12/2018
f1_keywords:
- /Qspectre
helpviewer_keywords:
- /Qspectre
ms.openlocfilehash: e0d3af50015b77af297cbee22f439cd17d803de9
ms.sourcegitcommit: 6cf0c67acce633b07ff31b56cebd5de3218fd733
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/24/2019
ms.locfileid: "67344158"
---
# <a name="qspectre"></a>/Qspectre

Specifica la generazione di istruzioni del compilatore per mitigare determinate vulnerabilità di sicurezza di Spectre variante 1.

## <a name="syntax"></a>Sintassi

> **/Qspectre**

## <a name="remarks"></a>Note

L'opzione **/Qspectre** è disponibile in Visual Studio 2017 versione 15.5.5 e successive e in Visual Studio 2015 dall'aggiornamento 3 a [KB 4338871](https://support.microsoft.com/help/4338871/visual-studio-2015-update-3-spectre-variant-1-toolset-qspectre). Indica al compilatore di inserire istruzioni per mitigare determinate [vulnerabilità di sicurezza di Spectre](https://spectreattack.com/spectre.pdf). Le vulnerabilità vengono chiamate *attacchi al canale laterale dell'esecuzione speculativa*. Questi influiscono su molti sistemi operativi e i processori moderni, compresi processori Intel, AMD e ARM.

L'opzione **/Qspectre** è disattivata per impostazione predefinita.

Nella versione iniziale l'opzione **/Qspectre** funziona solo nel codice ottimizzato. In Visual Studio 2017 versione 15.7 e successive l'opzione **/Qspectre** è supportata in tutti i livelli di ottimizzazione.

Anche le librerie Microsoft Visual C++ sono disponibili in versioni con mitigazione Spectre. Le librerie con mitigazione Spectre per Visual Studio 2017 e versioni successive possono essere scaricate nel programma di installazione di Visual Studio. In cui si trovano nel **singoli componenti** disponibile nella scheda **compilatori, strumenti di compilazione e runtime**, e il nome include "Libs per Spectre". Per un sottoinsieme di runtime di Visual C++, sono disponibili librerie di runtime DLL e statiche con la mitigazione abilitata: codice di avvio VC++, vcruntime140, msvcp140, concrt140 e vcamp140. Sono supportate le DLL dell'applicazione locale solo per la distribuzione. Il contenuto dell'oggetto visivo C++ 2017 e versioni successive Runtime librerie ridistribuibili non sono stati modificati.

È anche possibile installare le librerie mitigate di Spectre per MFC e ATL. In cui si trovano nel **singoli componenti** disponibile nella scheda **SDK, librerie e Framework**.

### <a name="applicability"></a>Applicabilità

Se il codice viene eseguito sui dati che attraversa un limite di trust, quindi è consigliabile usare la **/Qspectre** possibilità di ricompilare e ridistribuire il codice per attenuare il problema appena possibile. Un esempio di codice in questione è il codice che carica l'input non attendibile che può influire sull'esecuzione. Ad esempio, il codice che esegue di procedura remota chiama, analizza input non attendibile o un file o Usa altre interfacce di comunicazione interprocesso locale (IPC). Le tecniche di sandboxing standard potrebbero non essere sufficienti. Esaminare attentamente la sandbox prima di decidere che il codice non supera un limite di trust.

### <a name="availability"></a>Disponibilità

Il **/Qspectre** opzione è disponibile in Visual Studio 2017 versione 15.5.5 e in tutti gli aggiornamenti in Microsoft C++ compilatori (MSVC) effettuati a partire dal 23 gennaio 2018. Usare il programma di installazione di Visual Studio per aggiornare il compilatore e per installare le librerie con mitigazione Spectre come singoli componenti. L'opzione **/Qspectre** è disponibile anche in Visual Studio 2015 aggiornamento 3 tramite una patch. Per altre informazioni, vedere [KB 4338871](https://support.microsoft.com/help/4338871).

Tutte le versioni di Visual Studio 2017 versione 15.5 e tutte le anteprime di Visual Studio 2017 versione 15.6. includere un'opzione, non documentata **/d2guardspecload**. È equivalente al comportamento iniziale della **/Qspectre**. È possibile usare **/d2guardspecload** per applicare le stesse mitigazioni nel codice di queste versioni del compilatore. È consigliabile aggiornare la compilazione da usare **/Qspectre** nei compilatori che supportano l'opzione. Il **/Qspectre** opzione può supportare anche nuove soluzioni di attenuazione nelle versioni più recenti del compilatore.

### <a name="effect"></a>Effetto

L'opzione **/Qspectre** genera codice per mitigare Spectre variante 1, Bounds Check Bypass, [CVE-2017-5753](https://nvd.nist.gov/vuln/detail/CVE-2017-5753). Funziona tramite l'inserimento di istruzioni che agiscono da barriera per l'esecuzione speculativa di codice. Le istruzioni specifiche usate per mitigare la speculazione del processore dipendono dal processore e dalla relativa microarchitettura e possono cambiare nelle versioni future del compilatore.

Quando si abilita il **/Qspectre** opzione, il compilatore prova a identificare le istanze in cui l'esecuzione speculativa può aggirare i controlli dei limiti. Ovvero in cui viene inserito automaticamente le istruzioni di barriera. È importante da tenere presenti i limiti per l'analisi che può eseguire un compilatore per identificare le istanze di variante 1. Di conseguenza, non è garantito che tutte le istanze di possibili di variante 1 vengono instrumentate sotto **/Qspectre**.

### <a name="performance-impact"></a>Impatto sulle prestazioni

L'impatto sulle prestazioni **/Qspectre** sembrava trascurabile in svariate basi di codice ridimensionabile. Tuttavia, non vi sono garanzie che le prestazioni del codice sotto **/Qspectre** resta inalterata. È consigliabile eseguire un benchmark sul codice per determinare l'effetto dell'opzione sulle prestazioni. Se si sa che la soluzione non è obbligatorio in un ciclo o blocco critiche per le prestazioni, è possibile disabilitare selettivamente l'attenuazione mediante l'utilizzo di un [__declspec(spectre(nomitigation))](../../cpp/spectre.md) direttiva. Questa direttiva non è disponibile per i compilatori che supportano solo il **/d2guardspecload** opzione.

### <a name="required-libraries"></a>Librerie necessarie

Il **/Qspectre** opzione del compilatore genera il codice che si collega in modo implicito le versioni delle librerie di runtime progettate per fornire mitigazioni Spectre. Queste librerie sono componenti facoltativi che è necessario installare con il programma di installazione di Visual Studio:

- Librerie MSVC versione *numeri_versione* per Spectre \[(x86 e x64) | (ARM) | (ARM64)]
- ATL Visual C++ per \[(x86/x64) | ARM | ARM64] con mitigazioni Spectre
- MFC Visual C++ per \[x86/x64 | ARM | ARM64] con mitigazioni Spectre

Se si compila il codice usando **/Qspectre** e tali librerie non sono installati, i report di sistema di compilazione **avviso MSB8038: la mitigazione Spectre è abilitata, ma le librerie mitigate di Spectre non sono state trovate**. Se non è possibile compilare codice MFC o ATL e il linker segnala un errore, ad esempio **errore irreversibile LNK1104: Impossibile aprire il file 'OLDNAMES. lib'** , potrebbero trattarsi di queste librerie sono mancante.

### <a name="additional-information"></a>Informazioni aggiuntive

Per altre informazioni, vedere ufficiale [Microsoft Security Advisory ADV180002, le linee guida per ridurre le vulnerabilità di esecuzione speculativa canale laterale](https://portal.msrc.microsoft.com/en-US/security-guidance/advisory/ADV180002). Sono inoltre disponibili istruzioni di Intel, [Speculative Execution Side Channel Mitigations](https://software.intel.com/sites/default/files/managed/c5/63/336996-Speculative-Execution-Side-Channel-Mitigations.pdf), e di ARM, [Cache Speculation Side-channels](https://developer.arm.com/-/media/Files/pdf/Cache_Speculation_Side-channels.pdf). Per una panoramica di Windows specifici di mitigazioni Spectre e Meltdown, vedere [comprendere l'impatto sulle prestazioni di mitigazioni Spectre e Meltdown nei sistemi Windows](https://www.microsoft.com/security/blog/2018/01/09/understanding-the-performance-impact-of-spectre-and-meltdown-mitigations-on-windows-systems/). Per una panoramica delle vulnerabilità di Spectre risolte dai attenuazioni MSVC, vedere [mitigazioni Spectre in MSVC](https://devblogs.microsoft.com/cppblog/spectre-mitigations-in-msvc./) nel C++ blog del Team.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++**  > **Riga di comando**.

1. Immettere l'opzione del compilatore **/Qspectre** nella casella **Opzioni aggiuntive**. Scegliere **OK** per applicare la modifica.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
