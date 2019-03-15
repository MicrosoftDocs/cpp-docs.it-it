---
title: /errorReport (Segnala gli errori interni del compilatore)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.ErrorReporting
- /errorreport
helpviewer_keywords:
- /errorReport compiler option [C++]
- -errorReport compiler option [C++]
ms.assetid: 819828f8-b0a5-412c-9c57-bf822f17e667
ms.openlocfilehash: 52909cb42180bf8b778d73fd709be05faf3f5714
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57811238"
---
# <a name="errorreport-report-internal-compiler-errors"></a>/errorReport (Segnala gli errori interni del compilatore)

Consente di inviare informazioni sugli errori interni del compilatore direttamente a Microsoft.

## <a name="syntax"></a>Sintassi

```
/errorReport:[ none | prompt | queue | send ]
```

## <a name="arguments"></a>Argomenti

**none**<br/>
Le segnalazioni sugli errori interni del compilatore non verranno raccolte o inviate a Microsoft.

**prompt**<br/>
Chiede di inviare una segnalazione quando si riceve un errore interno del compilatore. **prompt dei comandi** è l'impostazione predefinita quando viene compilata un'applicazione nell'ambiente di sviluppo.

**queue**<br/>
Accoda la segnalazione errori. Quando si accede con privilegi di amministratore, viene visualizzata una finestra in modo che è possibile segnalare gli eventuali errori dall'ultima volta si fosse connessi in (non verrà richiesto di inviare segnalazioni errori più di una volta ogni tre giorni). **coda** è l'impostazione predefinita quando si compila un'applicazione da un prompt dei comandi.

**send**<br/>
Se reporting è abilitato per le impostazioni di sistema di segnalazione errori Windows, invia automaticamente i report di errori interni del compilatore a Microsoft.

## <a name="remarks"></a>Note

Se il compilatore non è in grado di elaborare un file del codice sorgente, viene restituito un errore interno del compilatore (ICE, Internal Compiler Error). Quando si verifica un ICE, il compilatore non genera né un file di output né informazioni di diagnostica utili per correggere il codice.

Nelle versioni precedenti, quando è stato ottenuto un ICE riceveva per chiamare il servizio supporto tecnico clienti Microsoft per segnalare il problema. Con **/errorReport**, è possibile fornire informazioni ICE direttamente a Microsoft. Le segnalazioni degli errori consentono di migliorare le versioni future del compilatore.

La capacità di un utente di inviare report dipende dalle autorizzazioni relative ai criteri utente e computer.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **segnalazione errori** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ErrorReporting%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
