---
title: /Qspectre-load
description: Descrive l'opzione Microsoft CC++ /Compiler (MSVC)/Qspectre-Load.
ms.date: 01/28/2020
helpviewer_keywords:
- /Qspectre-load
ms.openlocfilehash: a766cf9b7eef11b7c5819cbdaa7706ab5b80c608
ms.sourcegitcommit: 0f4ee9056d65043fa5a715f0ad1031c0ed30e2b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/05/2020
ms.locfileid: "77035529"
---
# <a name="qspectre-load"></a>/Qspectre-load

Specifica la generazione di istruzioni di serializzazione del compilatore per ogni istruzione di caricamento. Questa opzione estende il flag **/Qspectre** , attenuando eventuali **attacchi speculativi di esecuzione speculativa** basati sui carichi.

## <a name="syntax"></a>Sintassi

> **/Qspectre-load**

## <a name="remarks"></a>Note

**/Qspectre-Load** fa sì che il compilatore rilevi i caricamenti dalla memoria e inserisca le istruzioni di serializzazione dopo di essi. Le istruzioni del flusso di controllo che caricano memoria, inclusi `RET` e `CALL`, vengono suddivise in un carico e un trasferimento del flusso di controllo. Il carico è seguito da un `LFENCE` per garantire che il carico sia protetto. Ci sono casi in cui il compilatore non può dividere le istruzioni del flusso di controllo, ad esempio l'istruzione `jmp`, quindi usa una tecnica di mitigazione alternativa. Il compilatore, ad esempio, attenua `jmp [rax]` aggiungendo istruzioni per caricare la destinazione in modo non distruttivo prima di inserire un LFENCE, come illustrato di seguito:

```asm
    xor rbx, [rax]
    xor rbx, [rax]  ; force a load of [rax]
    lfence          ; followed by an LFENCE
    jmp [rax]
```

Poiché **/Qspectre-Load** interrompe la speculazione di tutti i caricamenti, l'effetto sulle prestazioni è elevato. La mitigazione non è appropriata in tutto il mondo. Se sono presenti blocchi critici per le prestazioni di codice che non richiedono la protezione, è possibile disabilitare queste attenuazioni usando `__declspec(spectre(nomitigation))`. Per altre informazioni, vedere [__declspec Spectre](../../cpp/spectre.md).

L'opzione **/Qspectre-Load** è disattivata per impostazione predefinita e supporta tutti i livelli di ottimizzazione.

L'opzione **/Qspectre-Load** è disponibile in Visual Studio 2019 versione 16,5 e successive. Questa opzione è disponibile solo nei compilatori destinati a processori x86 e x64. Non è disponibile nei compilatori destinati a processori ARM.

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
