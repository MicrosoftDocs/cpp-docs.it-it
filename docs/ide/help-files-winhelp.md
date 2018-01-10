---
title: File della Guida (WinHelp) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: file types [C++], WinHelp files
ms.assetid: 4fdcbd66-66b0-4866-894a-fd7b4c2557e4
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a5698f7001512c5a4f8c45b5c787f35c9ce0ca6c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="help-files-winhelp"></a>File della Guida (WinHelp)
I seguenti file vengono creati quando si aggiunge il tipo di WinHelp di supporto della Guida per l'applicazione selezionando il **Guida sensibile al contesto** casella di controllo e quindi selezionando **formato WinHelp** nel [Funzionalità avanzate](../mfc/reference/advanced-features-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC.  
  
|Nome file|Directory|Esplora soluzioni|Descrizione|  
|---------------|------------------------|--------------------------------|-----------------|  
|*NomeProgetto*HPJ|*NomeProgetto*\hlp|File di origine|Il file di progetto della Guida utilizzato dal compilatore della Guida per creare il programma o file della Guida del controllo.|  
|*NomeProgetto*RTF|*NomeProgetto*\hlp|I file della Guida|Contiene argomenti di modello che è possibile modificare e le informazioni sulla personalizzazione del file HPJ.|  
|*NomeProgetto*CNT|*NomeProgetto*\hlp|I file della Guida|Fornisce la struttura per il **contenuto** finestra della Guida di Windows.|  
|MakeHelp. bat|*NomeProgetto*|File di origine|Utilizzato dal sistema per compilare il progetto della Guida quando si compila il progetto.|  
|Print.RTF|*NomeProgetto*\hlp|I file della Guida|Se il progetto include il supporto di stampa (impostazione predefinita) creata. Descrive i comandi di stampa e finestre di dialogo.|  
|BMP|*NomeProgetto*\hlp|File di risorse|Contiene le immagini per gli argomenti di file della Guida generato diversi.|  
  
 È possibile aggiungere il supporto di WinHelp a un progetto controllo ActiveX MFC selezionando **genera file della Guida** nel [le impostazioni dell'applicazione](../mfc/reference/application-settings-mfc-activex-control-wizard.md) scheda della creazione guidata controllo ActiveX MFC. I file seguenti vengono aggiunti al progetto quando si aggiunge il supporto della Guida per un controllo ActiveX MFC:  
  
|Nome file|Directory|Esplora soluzioni|Descrizione|  
|---------------|------------------------|--------------------------------|-----------------|  
|*NomeProgetto*HPJ|*NomeProgetto*\hlp|File di origine|Il file di progetto utilizzato dal compilatore della Guida per creare il programma o file della Guida del controllo.|  
|*NomeProgetto*RTF|*NomeProgetto*\hlp|Progetto|Contiene argomenti di modello che è possibile modificare e le informazioni sulla personalizzazione del file HPJ.|  
|MakeHelp. bat|*NomeProgetto*|File di origine|Utilizzato dal sistema per compilare il progetto della Guida quando si compila il progetto.|  
|Bullet. bmp|*NomeProgetto*|File di risorse|Utilizzato dagli argomenti di file della Guida standard per rappresentare elenchi puntati.|  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)