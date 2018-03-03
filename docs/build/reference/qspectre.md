---
title: / Qspectre | Documenti Microsoft
ms.custom: 
ms.date: 1/23/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
f1_keywords:
- /Qspectre
helpviewer_keywords:
- /Qspectre
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b114239ad57b484c9290fbe1cc2f0ae18cb565ec
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="qspectre"></a>/ Qspectre

Specifica la generazione del compilatore di istruzioni per ridurre le vulnerabilità di sicurezza determinati Spectre variante 1.

## <a name="syntax"></a>Sintassi

> **/Qspectre**

## <a name="remarks"></a>Note

Il **/Qspectre** opzione indica al compilatore di inserire le istruzioni per risolvere determinati [vulnerabilità della sicurezza Spectre](https://spectreattack.com/spectre.pdf). Queste vulnerabilità, chiamate *attacchi al canale laterale esecuzione speculativo*, influiscono su molti sistemi operativi e i processori moderni, inclusi i processori Intel, AMD e ARM.

Il **/Qspectre** opzione è disattivata per impostazione predefinita.

Nella versione iniziale, il **/Qspectre** opzione funziona solo su codice ottimizzato. Verificare che per la compilazione del codice con una delle opzioni di ottimizzazione (ad esempio, [/O2 o /O1](o1-o2-minimize-size-maximize-speed.md) ma non [/Od](od-disable-debug.md)) per assicurarsi che venga applicata la riduzione dei rischi. Controllare in modo analogo, qualsiasi codice che usa [#pragma optimize ("stg", off)](../../preprocessor/optimize.md).

### <a name="applicability"></a>Applicabilità

Se il codice funziona sui dati che attraversa un limite di trust, è consigliabile utilizzare il **/Qspectre** possibile ricompilare e ridistribuire il codice per evitare il problema appena possibile. Codice che agisce sui dati che attraversa un limite di trust sono esempi di codice che carica l'input non attendibile che possono influenzare l'esecuzione, ad esempio, codice che effettua una procedura remota chiama, analizza i file o input non attendibile o utilizza altri processi tra locali interfacce di comunicazione (IPC). Le tecniche standard di sandboxing potrebbero non essere sufficiente. Prima di decidere che il codice non attraversa un limite di trust, è necessario esaminare con attenzione il sandbox.

### <a name="availability"></a>Disponibilità

Il **/Qspectre** opzione è disponibile nella versione di Visual Studio 2017 15.5.5 e tutti gli aggiornamenti per i compilatori di Microsoft Visual C++ (opzioni: MSVC) apportati a partire dal 23 gennaio 2018.

Tutte le versioni della versione di Visual Studio 2017 15,5 e tutte le anteprime di Visual Studio versione 15,6 include già un'opzione non documentata, **/d2guardspecload**, equivalente a quello iniziale del **/Qspectre**. È possibile utilizzare **/d2guardspecload** per applicare la stesse attenuazioni al codice in queste versioni del compilatore. Aggiornare la compilazione per utilizzare **/Qspectre** nei compilatori che supportano l'opzione di **/Qspectre** opzione può anche supportare nuove soluzioni in versioni successive del compilatore.

### <a name="effect"></a>Effetto

Il **/Qspectre** opzione genera codice per ridurre variante 1, onnipresente Bypass controllare limiti [CVE-2017-5753](https://nvd.nist.gov/vuln/detail/CVE-2017-5753). Funziona con l'inserimento di istruzioni che fungono da barriera di esecuzione di codice speculativo. Le istruzioni specifiche utilizzate per mitigare speculation processore dipendono dal processore e la relativa micro-architettura e potrebbero cambiare nelle future versioni del compilatore.

Quando il **/Qspectre** opzione è abilitata, il compilatore tenta di identificare le istanze in esecuzione speculativo può ignorare i controlli dei limiti e inserisce le istruzioni di barriera. È importante notare che non esistono limiti per l'analisi in un compilatore può eseguire per identificare le istanze di variante 1. Di conseguenza, non è possibile garantire che tutte le istanze possibili di variante 1 vengono instrumentate in **/Qspectre**.

### <a name="performance-impact"></a>Impatto sulle prestazioni

L'impatto sulle prestazioni **/Qspectre** rilevato trascurabile in diversi molto codebase di grandi dimensioni, ma non vi sono garanzie che le prestazioni del codice sotto **/Qspectre** rimane invariato. È necessario effettuare un benchmark il codice per determinare l'effetto dell'opzione sulle prestazioni. Se si sa che l'attenuazione non è necessaria in un blocco critiche per le prestazioni o di un ciclo, l'attenuazione può essere disabilitata in modo selettivo mediante l'utilizzo di un [__declspec(spectre(nomitigation))](../../cpp/spectre.md) direttiva. Questa direttiva non è disponibile per i compilatori che supportano solo il **/d2guardspecload** opzione.

### <a name="additional-information"></a>Informazioni aggiuntive

Per ulteriori informazioni, vedere ufficiali [Microsoft Security Advisory ADV180002, materiale sussidiario per ridurre le vulnerabilità di canale lato esecuzione speculativo](https://portal.msrc.microsoft.com/en-US/security-guidance/advisory/ADV180002). Linee guida è disponibile anche da Intel, [speculativo esecuzione lato canale attenuazioni](https://software.intel.com/sites/default/files/managed/c5/63/336996-Speculative-Execution-Side-Channel-Mitigations.pdf)e ARM, [canali lato Cache Speculation](https://developer.arm.com/-/media/Files/pdf/Cache_Speculation_Side-channels.pdf). Per una panoramica di Windows specifico Spectre e Meltdown soluzioni correttive, vedere [comprendere l'impatto sulle prestazioni di soluzioni correttive Spectre e Meltdown nei sistemi Windows](https://cloudblogs.microsoft.com/microsoftsecure/2018/01/09/understanding-the-performance-impact-of-spectre-and-meltdown-mitigations-on-windows-systems/) sul blog di Microsoft Secure. Per una panoramica delle vulnerabilità Spectre descritta da risoluzioni opzioni: MSVC, vedere [attenuazioni Spectre in opzioni: MSVC](https://blogs.msdn.microsoft.com/vcblog/2018/01/15/spectre-mitigations-in-msvc./) sul blog del Team di Visual C++.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Immettere il **/Qspectre** opzione del compilatore nella **opzioni aggiuntive** casella. Scegliere **OK** per applicare la modifica.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)  
[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
