---
title: Guida di file (HTML) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: file types [C++], HTML Help files
ms.assetid: d30a1b1b-318f-4a78-8b60-93da53a224a8
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c96cd6ad904439f556f2baa51602353ea00c5ac7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="help-files-html-help"></a>File della Guida (HTML)
I seguenti file vengono creati quando si aggiunge il tipo della Guida HTML di supporto della Guida per l'applicazione selezionando il **Guida sensibile al contesto** casella di controllo e quindi selezionando **formato HTML Help** nel [Funzionalità avanzate](../mfc/reference/advanced-features-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC.  
  
|Nome file|Directory|Esplora soluzioni|Descrizione|  
|---------------|------------------------|--------------------------------|-----------------|  
|*NomeProgetto*hhp|*NomeProgetto*\hlp|file della Guida HTML|Il file di progetto. Contiene i dati necessari per compilare i file della Guida in un file hxs o un file con estensione chm.|  
|*NomeProgetto*.hhk|*NomeProgetto*\hlp|file della Guida HTML|Contiene un indice degli argomenti della Guida.|  
|*NomeProgetto*.hhc|*NomeProgetto*\hlp|file della Guida HTML|Il contenuto del progetto della Guida.|  
|Makehtmlhelp.bat|*NomeProgetto*|File di origine|Utilizzato dal sistema per compilare il progetto della Guida quando si compila il progetto.|  
|Afxcore.htm|*NomeProgetto*\hlp|Argomenti della Guida HTML|Contiene gli argomenti della Guida standard per i comandi MFC standard e gli oggetti sullo schermo. Aggiungere argomenti della Guida personalizzati per questo file.|  
|Afxprint.htm|*NomeProgetto*\hlp|Argomenti della Guida HTML|Contiene gli argomenti della Guida per i comandi di stampa.|  
|*. jpg; \*GIF|*NomeProgetto*\hlp\Images|File di risorse|Contiene le immagini per gli argomenti di file della Guida generato diversi.|  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)