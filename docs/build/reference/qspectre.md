---
title: /Qspectre | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
f1_keywords:
- /Qspectre
helpviewer_keywords:
- /Qspectre
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7bef66e8b3c326f205b6399538a811bcc83c9f9d
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50070400"
---
# <a name="qspectre"></a>/Qspectre

Specifica la generazione del compilatore di istruzioni per ridurre le vulnerabilità di sicurezza determinati Spectre variante 1.

## <a name="syntax"></a>Sintassi

> **/Qspectre**

## <a name="remarks"></a>Note

Il **/Qspectre** opzione è disponibile in Visual Studio 2017 versione 15.5.5 e versioni successive e in Visual Studio 2015 Update 3 attraverso [4338871 KB](https://support.microsoft.com/help/4338871/visual-studio-2015-update-3-spectre-variant-1-toolset-qspectre). Indica al compilatore di inserire le istruzioni per mitigare determinati [vulnerabilità di sicurezza di Spectre](https://spectreattack.com/spectre.pdf). Le vulnerabilità, chiamate *attacchi al canale laterale dell'esecuzione speculativa*, influiscono su molti sistemi operativi e i processori moderni, inclusi i processori di Intel, AMD e ARM.

Il **/Qspectre** opzione è disattivata per impostazione predefinita.

Nella versione iniziale, il **/Qspectre** opzione funzionava solo nel codice ottimizzato. In Visual Studio 2017 versione 15.7 e successive, il **/Qspectre** opzione è supportata in tutti i livelli di ottimizzazione.

Sono disponibili nelle versioni con mitigazione Spectre anche le librerie di Microsoft Visual C++. Le librerie mitigate di Spectre per Visual Studio 2017 possono essere scaricate in Visual Studio Installer. Vengono trovati nel **singoli componenti** disponibile nella scheda **compilatori, strumenti di compilazione e runtime**, e il nome include "Libs per Spectre". DLL e librerie di runtime statica con mitigazione attivata sono entrambe disponibili per un subset dei runtime Visual C++: codice di avvio di VC + +, vcruntime140, msvcp140, concrt140 e vcamp140. Le DLL sono supportate per la distribuzione dell'applicazione locale di sola lettura. il contenuto di Visual C++ 2017 Runtime librerie Redistributable non è stato modificato. È anche possibile installare le librerie mitigate di Spectre per MFC e ATL, disponibili nel **singoli componenti** disponibile nella scheda **SDK, librerie e Framework**.

### <a name="applicability"></a>Applicabilità

Se il codice viene eseguito sui dati che attraversa un limite di trust, è consigliabile usare la **/Qspectre** possibilità di ricompilare e ridistribuire il codice per attenuare il problema appena possibile. Codice che agisce sui dati che attraversa un limite di trust sono esempi di codice che carica l'input non attendibile che può influire sull'esecuzione, ad esempio, il codice che esegue di procedura remota chiama, analizza input non attendibile o un file o Usa altri locale inter-process interfacce di comunicazione (IPC). Le tecniche di sandboxing standard potrebbero non essere sufficiente. Prima di decidere che il codice non supera un limite di trust, è necessario esaminare con attenzione la sandbox.

### <a name="availability"></a>Disponibilità

Il **/Qspectre** opzione è disponibile in Visual Studio 2017 versione 15.5.5 e in tutti gli aggiornamenti ai compilatori di Microsoft Visual C++ (MSVC) effettuati a partire dal 23 gennaio 2018. Usare l'installazione di Visual Studio per aggiornare il compilatore e installare le librerie mitigate di Spectre come singoli componenti. Il **/Qspectre** opzione è disponibile anche in Visual Studio 2015 Update 3 tramite una patch. Per altre informazioni, vedere [4338871 KB](https://support.microsoft.com/help/4338871).

Tutte le versioni di Visual Studio 2017 versione 15.5 e tutte le anteprime di Visual Studio 2017 versione 15.6 includono un'opzione, non documentata **/d2guardspecload**, equivalente al comportamento iniziale della **/Qspectre**. È possibile usare **/d2guardspecload** applicare attenuazioni stesso al codice in queste versioni del compilatore. Aggiornare la compilazione da usare **/Qspectre** nei compilatori che supportano l'opzione; le **/Qspectre** opzione può supportare anche nuove soluzioni di attenuazione nelle versioni più recenti del compilatore.

### <a name="effect"></a>Effetto

Il **/Qspectre** opzione genera codice per mitigare variante 1, onnipresente limiti controllare Bypass [CVE 2017-5753](https://nvd.nist.gov/vuln/detail/CVE-2017-5753). Funziona con l'inserimento di istruzioni che fungono da barriera di esecuzione speculativa di codice. Le istruzioni specifiche usate per mitigare speculation processore variano a seconda del processore e la relativa architettura di micro e potrebbero cambiare nelle future versioni del compilatore.

Quando la **/Qspectre** opzione è abilitata, il compilatore prova a identificare le istanze in cui l'esecuzione speculativa può aggirare i controlli dei limiti e inserisce le istruzioni di barriera. È importante notare che esistono limiti per l'analisi che un compilatore può eseguire per identificare le istanze di variante 1. Di conseguenza, non è garantito che tutte le istanze di possibili di variante 1 vengono instrumentate sotto **/Qspectre**.

### <a name="performance-impact"></a>Impatto sulle prestazioni

L'impatto sulle prestazioni **/Qspectre** rilevato sia trascurabile in svariate basi di codice molto grandi, ma non vi sono garanzie che le prestazioni del codice sotto **/Qspectre** resta inalterata. È necessario effettuare un benchmark del codice per determinare l'effetto dell'opzione sulle prestazioni. Se si sa che la soluzione non è necessaria in un ciclo o blocco critiche per le prestazioni, la mitigazione può essere disabilitata in modo selettivo mediante l'utilizzo di un [__declspec(spectre(nomitigation))](../../cpp/spectre.md) direttiva. Questa direttiva non è disponibile per i compilatori che supportano solo il **/d2guardspecload** opzione.

### <a name="required-libraries"></a>Librerie necessarie

Il **/Qspectre** opzione del compilatore genera il codice che si collega in modo implicito le versioni delle librerie di runtime che sono state progettate per fornire mitigazioni Spectre. Queste librerie sono componenti facoltativi che devono essere installati tramite l'installazione di Visual Studio:

- VC + + 2017 versione *version_numbers* Libs per Spectre \[(x86 e x64) | (ARM) | (ARM64)]
- ATL Visual C++ per \[(x86 o x64) | ARM | ARM64] con Mitigazioni Spectre
- MFC Visual C++ per \[x86 o x64 | ARM | ARM64] con Mitigazioni Spectre

Se si compila il codice usando **/Qspectre** e tali librerie non sono installati, i report di sistema di compilazione **avviso MSB8038: mitigazione Spectre è abilitata, ma le librerie mitigate di Spectre non sono state trovate**. Se non è possibile compilare codice MFC o ATL e il linker segnala un errore, ad esempio **errore irreversibile LNK1104: Impossibile aprire il file 'OLDNAMES. lib'**, potrebbero trattarsi di queste librerie sono mancante.

### <a name="additional-information"></a>Informazioni aggiuntive

Per altre informazioni, vedere ufficiale [Microsoft Security Advisory ADV180002, le linee guida per ridurre le vulnerabilità di esecuzione speculativa canale laterale](https://portal.msrc.microsoft.com/en-US/security-guidance/advisory/ADV180002). Linee guida è disponibile anche da Intel [Mitigazioni di canale lato esecuzione speculativa](https://software.intel.com/sites/default/files/managed/c5/63/336996-Speculative-Execution-Side-Channel-Mitigations.pdf)e ARM, [i canali lato Speculation Cache](https://developer.arm.com/-/media/Files/pdf/Cache_Speculation_Side-channels.pdf). Per una panoramica di Windows specifici di mitigazioni Spectre e Meltdown, vedere [comprendere l'impatto sulle prestazioni di mitigazioni Spectre e Meltdown nei sistemi Windows](https://cloudblogs.microsoft.com/microsoftsecure/2018/01/09/understanding-the-performance-impact-of-spectre-and-meltdown-mitigations-on-windows-systems/) sul blog di Microsoft Secure. Per una panoramica delle vulnerabilità di Spectre risolta da attenuazioni MSVC, vedere [mitigazioni Spectre in MSVC](https://blogs.msdn.microsoft.com/vcblog/2018/01/15/spectre-mitigations-in-msvc./) nel Blog del Team Visual C++.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Immettere il **/Qspectre** opzione del compilatore nella **opzioni aggiuntive** casella. Scegli **OK** per applicare la modifica.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
