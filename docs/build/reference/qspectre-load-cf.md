---
title: /Qspectre-load-cf
description: Descrive l'opzione Microsoft CC++ /Compiler (MSVC)/Qspectre-load-cf.
ms.date: 01/28/2020
helpviewer_keywords:
- /Qspectre-load-cf
no-loc:
- Qspectre-load-cf
ms.openlocfilehash: c32b843df517cb6fbe662fba0b592cbf745f1764
ms.sourcegitcommit: 0f4ee9056d65043fa5a715f0ad1031c0ed30e2b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/05/2020
ms.locfileid: "77035522"
---
# /Qspectre-load-cf

Specifica la generazione del compilatore di istruzioni di serializzazione per ogni istruzione del flusso di controllo che contiene un carico. Questa opzione consente di eseguire un subset delle mitigazioni eseguite dall'opzione [/Qspectre-Load](qspectre-load.md) .

## <a name="syntax"></a>Sintassi

> **/Qspectre-load-cf**

## <a name="remarks"></a>Note

**/Qspectre-load-cf** fa in modo che il compilatore rilevi `JMP`, `RET`e `CALL` istruzioni del flusso di controllo che vengono caricate dalla memoria e per inserire istruzioni di serializzazione dopo il caricamento. Laddove possibile, queste istruzioni vengono suddivise in un carico e un trasferimento del flusso di controllo. Il carico è seguito da un `LFENCE` per garantire che il carico sia protetto. Ci sono casi in cui il compilatore non può dividere le istruzioni, ad esempio l'istruzione `JMP`, quindi usa una tecnica di mitigazione alternativa. Il compilatore, ad esempio, attenua `jmp [rax]` aggiungendo istruzioni per caricare la destinazione in modo non distruttivo prima di inserire un LFENCE, come illustrato di seguito:

```asm
    xor rbx, [rax]
    xor rbx, [rax]  ; force a load of [rax]
    lfence          ; followed by an LFENCE
    jmp [rax]
```

Poiché **/Qspectre-load-cf** interrompe la speculazione di tutti i caricamenti nelle istruzioni del flusso di controllo, l'effetto sulle prestazioni è elevato. La mitigazione non è appropriata in tutto il mondo. Se sono presenti blocchi critici per le prestazioni di codice che non richiedono la protezione, è possibile disabilitare queste attenuazioni usando `__declspec(spectre(nomitigation))`.

L'opzione **/Qspectre-load-cf** è disattivata per impostazione predefinita e supporta tutti i livelli di ottimizzazione.

L'opzione **/Qspectre-load-cf** è disponibile in Visual Studio 2019 versione 16,5 e successive. Questa opzione è disponibile solo nei compilatori destinati a processori x86 e x64. Non è disponibile nei compilatori destinati a processori ARM.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

2. Selezionare le **proprietà di configurazione** > pagina delle proprietà di **generazione del codice** **C/C++**  > .

3. Selezionare un nuovo valore per la proprietà **mitigazione Spectre** . Scegliere **OK** per applicare la modifica.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)\
[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
