---
description: 'Altre informazioni su: file della guida (WinHelp)'
title: File della Guida (WinHelp)
ms.date: 11/04/2016
helpviewer_keywords:
- file types [C++], WinHelp files
ms.assetid: 4fdcbd66-66b0-4866-894a-fd7b4c2557e4
ms.openlocfilehash: 77d00154db762d11e064fe91681b81fbe859e7be
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200052"
---
# <a name="help-files-winhelp"></a>File della Guida (WinHelp)

I file seguenti vengono creati quando si aggiunge il tipo di Guida WinHelp del supporto della Guida per l'applicazione selezionando la casella di controllo **Guida sensibile al contesto** e quindi **Formato WinHelp** nella pagina [Funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) della Creazione guidata applicazione MFC.

|Nome file|Directory|Esplora soluzioni|Description|
|---------------|------------------------|--------------------------------|-----------------|
|*Projname*.hpj|*Projname*\hlp|File di origine|File di progetto della Guida usato dal compilatore della Guida per creare il file del controllo o del programma.|
|*Projname*.rtf|*Projname*\hlp|File della Guida|Contiene gli argomenti del modello che è possibile modificare e le informazioni sulla personalizzazione del file con estensione hpj.|
|*Projname*.cnt|*Projname*\hlp|File della Guida|Specifica la struttura della finestra **Sommario** della Guida di Windows.|
|Makehelp.bat|*Projname*|File di origine|Viene usato dal sistema per compilare il progetto della Guida al momento della compilazione.|
|Print.rtf|*Projname*\hlp|File della Guida|Viene creato se il progetto include il supporto per la stampa (impostazione predefinita). Descrive i comandi e le finestre di dialogo per la stampa.|
|*.bmp|*Projname*\hlp|File di risorse|Contiene le immagini per i vari argomenti dei file della Guida generati.|

È possibile aggiungere il supporto WinHelp a un progetto controllo ActiveX MFC selezionando **Generate help files** (Genera file della Guida) nella scheda [Impostazioni applicazione](../../mfc/reference/application-settings-mfc-activex-control-wizard.md) della creazione guidata controllo ActiveX MFC. I file seguenti vengono aggiunti al progetto quando si aggiunge il supporto della Guida per un controllo ActiveX MFC:

|Nome file|Directory|Esplora soluzioni|Description|
|---------------|------------------------|--------------------------------|-----------------|
|*Projname*.hpj|*Projname*\hlp|File di origine|File di progetto usato dal compilatore della Guida per creare il file del controllo o del programma.|
|*Projname*.rtf|*Projname*\hlp|Project|Contiene gli argomenti del modello che è possibile modificare e le informazioni sulla personalizzazione del file con estensione hpj.|
|Makehelp.bat|*Projname*|File di origine|Viene usato dal sistema per compilare il progetto della Guida al momento della compilazione.|
|Bullet.bmp|*Projname*|File di risorse|Usato dagli argomenti dei file della Guida standard per rappresentare elenchi puntati.|

## <a name="see-also"></a>Vedi anche

[Tipi di file creati per i progetti di Visual Studio C++](file-types-created-for-visual-cpp-projects.md)
