---
title: MASM per x64 (ml64.exe)
ms.date: 08/30/2018
helpviewer_keywords:
- ml64
- ml64.exe
- masm for x64
ms.assetid: 89059103-f372-4968-80ea-0c7f90bb9c91
ms.openlocfilehash: 1a92d2a22e8aa9df29c18fa36ff4508eb8eec57f
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65445861"
---
# <a name="masm-for-x64-ml64exe"></a>MASM per x64 (ml64.exe)

Visual Studio include sia a 32 e 64 bit ospitati le versioni di Microsoft Assembler (MASM) al codice di destinazione x64. Denominato ml64.exe, si tratta dell'assembler che accetta x64 language assembler. Quando si sceglie un carico di lavoro di C++ durante l'installazione di Visual Studio, vengono installati gli strumenti da riga di comando di MASM. Gli strumenti MASM non sono disponibili come download separato. Per istruzioni su come scaricare e installare una copia di Visual Studio, vedere [installazione di Visual Studio](/visualstudio/install/install-visual-studio). Se si non si vuole installare l'IDE di Visual Studio completa, ma vuole che solo gli strumenti da riga di comando, scaricare il [Build Tools per Visual Studio](https://visualstudio.microsoft.com/downloads/).

Utilizzare MASM per compilare codice per x64 ha come destinazione nella riga di comando, è necessario usare un prompt dei comandi per gli sviluppatori per x64 destinazioni, tra cui imposta il percorso richiesto e altre variabili di ambiente. Per informazioni su come avviare un prompt dei comandi per gli sviluppatori, vedere [codice C/C++ di compilazione dalla riga di comando](../../build/building-on-the-command-line.md).

Per informazioni sulle opzioni della riga di comando ml64.exe, vedere [ML e ML64 Command-Line Reference](../../assembler/masm/ml-and-ml64-command-line-reference.md).

Assembler inline o utilizzare la parola chiave al ASM non è supportata per le destinazioni ARM o x64. Alla porta che utilizza l'assembler inline del codice di x86 a x64 o ARM, è possibile convertire il codice di C++, usare le funzioni intrinseche del compilatore o creare file di origine assembler-language. Microsoft C++ compilatore supporta le funzioni intrinseche che consentono di usare istruzioni speciali-funzione, per esempio, privilegiata, analisi e test, interlocked e così via, in come vicino al modo lo sviluppo multipiattaforma come possibili di bit. Per informazioni sulle funzioni intrinseche disponibili, vedere [intrinseci del compilatore](../../intrinsics/compiler-intrinsics.md).

## <a name="add-an-assembler-language-file-to-a-visual-studio-c-project"></a>Aggiungere un file di lingua assembler di Visual Studio C++ progetto

Il sistema di progetto di Visual Studio supporta i file di linguaggio assembler compilati con MASM nei progetti C++. È possibile creare x64 origine della lingua di assembler di file e compilarle in file oggetto mediante MASM, che supporta completamente x64. È quindi possibile collegare tali file oggetto per il codice C++ compilato per x64 destinazioni. Si tratta di un modo per ovviare alla mancanza di x64 assembler inline.

### <a name="to-add-an-assembler-language-file-to-an-existing-visual-studio-c-project"></a>Per aggiungere un file del linguaggio assembler alla versione esistente di Visual Studio C++ progetto

1. Selezionare il progetto in **Esplora soluzioni**. Nella barra dei menu, scegliere **Project**, **personalizzazioni compilazioni**.

1. Nel **file di personalizzazione compilazioni Visual C++** finestra di dialogo casella, selezionare la casella di controllo accanto a **masm(.targets,.props)**. Scegli **OK** per salvare la selezione e chiudere la finestra di dialogo.

1. Nella barra dei menu, scegliere **Project**, **Aggiungi nuovo elemento**.

1. Nel **Aggiungi nuovo elemento** finestra di dialogo **file di C++ (. cpp)** nel riquadro centrale. Nel **Name** controllo di modifica, immettere un nuovo nome di file con un **ASM** estensione anziché. cpp. Scegli **Add** per aggiungere il file al progetto e chiudere la finestra di dialogo.

Creare un codice lingua dell'assembler in file con estensione asm che è stato aggiunto. Quando si compila la soluzione, viene richiamato l'assembler MASM per assemblare il file con estensione asm in un file oggetto che viene quindi collegato all'interno del progetto. Per agevolare l'accesso ai simboli, dichiarare le funzioni di assembler come `extern "C"` nel codice sorgente C++, invece di usare C++ denominare una convenzione di decorazione nella lingua dell'assembler del file di origine.

## <a name="ml64-specific-directives"></a>Direttive specifiche del ml64

È possibile usare le seguenti direttive ml64 specifiche nel codice sorgente dell'assembler linguaggio destinato a x64:

- [.ALLOCSTACK](../../assembler/masm/dot-allocstack.md)

- [.ENDPROLOG](../../assembler/masm/dot-endprolog.md)

- [.PUSHFRAME](../../assembler/masm/dot-pushframe.md)

- [.PUSHREG](../../assembler/masm/dot-pushreg.md)

- [.SAVEREG](../../assembler/masm/dot-savereg.md)

- [.SAVEXMM128](../../assembler/masm/dot-savexmm128.md)

- [.SETFRAME](../../assembler/masm/dot-setframe.md)

Inoltre, il [PROC](../../assembler/masm/proc.md) direttiva è stata aggiornata per l'uso con ml64.exe.

## <a name="32-bit-address-mode-address-size-override"></a>Modalità di indirizzamento a 32 bit (Override delle dimensioni indirizzo)

MASM genera la sostituzione di dimensioni indirizzo 0x67 se un operando di memoria include registri di 32 bit. Ad esempio, negli esempi seguenti causano la sostituzione di dimensioni di indirizzo da generare:

```asm
mov rax, QWORD PTR [ecx]
mov eax, DWORD PTR [ecx*2+r10d]
mov eax, DWORD PTR [ecx*2+r10d+0100h]
prefetch [eax]
movnti rax, QWORD PTR [r8d]
```

MASM presuppone che se uno spostamento a 32 bit viene visualizzato solo come un operando di memoria, indirizzamento a 64 bit è previsto. Non è attualmente alcun supporto per l'indirizzamento a 32 bit con tali operandi.

Infine, combinare register dimensioni all'interno di un operando di memoria, come illustrato nel codice seguente genera un errore.

```asm
mov eax, DWORD PTR [rcx*2+r10d]
mov eax, DWORD PTR [ecx*2+r10+0100h]
```

## <a name="see-also"></a>Vedere anche

[Riferimento a Microsoft Macro Assembler](../../assembler/masm/microsoft-macro-assembler-reference.md)<br/>