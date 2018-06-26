---
title: MASM per x64 (ml64.exe) | Documenti Microsoft
ms.custom: ''
ms.date: 06/21/2018
ms.technology:
- cpp-masm
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- ml64
- ml64.exe
- masm for x64
ms.assetid: 89059103-f372-4968-80ea-0c7f90bb9c91
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bb4f4a0ba996be34749350c0d99c1915752fe99e
ms.sourcegitcommit: e013acba70aa29fed60ae7945162adee23e19c3b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/22/2018
ms.locfileid: "36322248"
---
# <a name="masm-for-x64-ml64exe"></a>MASM per x64 (ml64.exe)

Visual Studio include sia a 32 e 64 bit ospitato le versioni di Microsoft Assembler (MASM) al codice di destinazione x64. Denominato ml64.exe, si tratta dell'assembler che accetta x64 language assembler. Quando si sceglie un carico di lavoro di C++ durante l'installazione di Visual Studio, vengono installati gli strumenti da riga di comando di MASM. Gli strumenti MASM non sono disponibili come download separato. Per istruzioni su come scaricare e installare una copia di Visual Studio, vedere [installare Visual Studio](/visualstudio/install/install-visual-studio). Se si non desidera installare IDE di Visual Studio completata, ma solo gli strumenti da riga di comando, scaricare il [Build Tools per Visual Studio 2017](https://go.microsoft.com/fwlink/p/?linkid=875721).

Utilizzare MASM per compilare codice per x64 destinata a nella riga di comando, è necessario utilizzare un prompt dei comandi per sviluppatori per x64 le destinazioni, che imposta il percorso richiesto e altre variabili di ambiente. Per informazioni su come avviare un prompt dei comandi per sviluppatori, vedere [codice C/C++ di compilazione nella riga di comando](../../build/building-on-the-command-line.md).

Per informazioni sulle opzioni della riga di comando ml64.exe, vedere [ML e ML64 della riga di comando riferimento](../../assembler/masm/ml-and-ml64-command-line-reference.md).  
  
Assembler inline o utilizzare la parola chiave ASM non è supportata per destinazioni ARM o x64. Eseguire il porting di x86 di codice che utilizza l'assembler inline per x64 o ARM, è possibile convertire il codice di C++, usare intrinseci del compilatore o creare assembler-language i file di origine. Il compilatore Visual C++ supporta le funzioni intrinseche che consentono di utilizzare istruzioni speciali-funzione, per esempio, con privilegiata, bit analisi/test, interlocked e così via, in come vicino al modo multipiattaforma possibili. Per informazioni sulle funzioni intrinseche disponibili, vedere [intrinseci del compilatore](../../intrinsics/compiler-intrinsics.md).  

## <a name="add-an-assembler-language-file-to-a-visual-c-project"></a>Aggiungere un file di lingua assembler a un progetto di Visual C++  
  
Il sistema di progetto di Visual Studio supporta i file di lingua assembler compilati utilizzando MASM nei progetti C++. È possibile creare x64 origine RDL assembler di file e compilarle in file oggetto utilizzando MASM, che supporta completamente x64. È quindi possibile collegare questi file oggetto per il codice C++ compilato per x64 destinazioni. Questo è un metodo che consentono di superare la mancanza di un x64 assembler inline.  

### <a name="to-add-an-assembler-language-file-to-an-existing-visual-c-project"></a>Per aggiungere un file di lingua assembler a un progetto esistente di Visual C++

1. Selezionare il progetto in **Esplora soluzioni**. Nella barra dei menu, scegliere **Project**, **Build Customizations**.

1. Nel **file di personalizzazione di compilazione Visual C++** finestra di dialogo casella, selezionare la casella di controllo accanto a **masm(.targets,.props)**. Scegliere **OK** per salvare la selezione e chiudere la finestra di dialogo.

1. Nella barra dei menu, scegliere **Project**, **Aggiungi nuovo elemento**. 

1. Nel **Aggiungi nuovo elemento** finestra di dialogo **file C++ (. cpp)** nel riquadro centrale. Nel **nome** controllo edit, immettere un nuovo nome di file che dispone di un **ASM** estensione anziché con estensione cpp. Scegliere **Aggiungi** per aggiungere il file al progetto e chiudere la finestra di dialogo.

Creare un codice assembler-language del file ASM che è stato aggiunto. Quando si compila la soluzione, viene richiamato l'assembler MASM per assemblare il file ASM in un file di oggetto che viene quindi collegato all'interno del progetto. Per semplificare l'accesso di simboli, dichiarare le funzioni dell'assembler come `extern "C"` nel codice sorgente C++, invece di usare C++ nome convenzione di decorazione nella lingua dell'assembler del file di origine.
  
## <a name="ml64-specific-directives"></a>Direttive specifiche del ml64  

È possibile utilizzare le seguenti direttive ml64 specifiche nel codice sorgente assembler linguaggio destinato a x64:  
  
-   [.ALLOCSTACK](../../assembler/masm/dot-allocstack.md)  
  
-   [.ENDPROLOG](../../assembler/masm/dot-endprolog.md)  
  
-   [.PUSHFRAME](../../assembler/masm/dot-pushframe.md)  
  
-   [.PUSHREG](../../assembler/masm/dot-pushreg.md)  
  
-   [.SAVEREG](../../assembler/masm/dot-savereg.md)  
  
-   [.SAVEXMM128](../../assembler/masm/dot-savexmm128.md)  
  
-   [.SETFRAME](../../assembler/masm/dot-setframe.md)  
  
Inoltre, il [PROC](../../assembler/masm/proc.md) direttiva è stata aggiornata per l'utilizzo con ml64.exe.  
  
## <a name="32-bit-address-mode-address-size-override"></a>Modalità indirizzi a 32 bit (indirizzo dimensioni Override)  

MASM genera la sostituzione di dimensioni indirizzo 0x67 se un operando di memoria include registri di 32 bit. Ad esempio, negli esempi seguenti causano la sostituzione di dimensioni indirizzo emissione:  
  
```MASM  
mov rax, QWORD PTR [ecx]  
mov eax, DWORD PTR [ecx*2+r10d]  
mov eax, DWORD PTR [ecx*2+r10d+0100h]  
prefetch [eax]  
movnti rax, QWORD PTR [r8d]  
```  
  
MASM si presuppone che se uno spostamento a 32 bit viene visualizzato solo come un operando di memoria, indirizzamento a 64 bit è destinato. Attualmente non è disponibile alcun supporto per l'indirizzamento a 32 bit con tali operandi.  
  
Infine, la combinazione di dimensioni registro all'interno di un operando di memoria, come illustrato nel codice seguente genera un errore.  
  
```MASM  
mov eax, DWORD PTR [rcx*2+r10d]  
mov eax, DWORD PTR [ecx*2+r10+0100h]  
```  
  
## <a name="see-also"></a>Vedere anche  

[Riferimento a Microsoft Macro Assembler](../../assembler/masm/microsoft-macro-assembler-reference.md)