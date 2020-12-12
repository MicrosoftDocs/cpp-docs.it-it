---
description: 'Ulteriori informazioni su: file della guida (Guida HTML)'
title: File della Guida (HTML)
ms.date: 11/04/2016
helpviewer_keywords:
- file types [C++], HTML Help files
ms.assetid: d30a1b1b-318f-4a78-8b60-93da53a224a8
ms.openlocfilehash: 0a2b92300683fcc4f0ced365a6750f6e73da10f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191602"
---
# <a name="help-files-html-help"></a>File della Guida (HTML)

I file seguenti vengono creati quando si aggiunge il tipo di Guida HTML del supporto della Guida per l'applicazione selezionando la casella di controllo **Guida sensibile al contesto** e quindi **Formato HTML** nella pagina [Funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) della Creazione guidata applicazione MFC.

|Nome file|Directory|Esplora soluzioni|Description|
|---------------|------------------------|--------------------------------|-----------------|
|*Projname*.hhp|*Projname*\hlp|file della Guida HTML|File di progetto della Guida. Contiene i dati necessari per compilare i file della Guida in un file con estensione hxs o chm.|
|*Projname*.hhk|*Projname*\hlp|file della Guida HTML|Contiene un indice degli argomenti della Guida.|
|*Projname*.hhc|*Projname*\hlp|file della Guida HTML|Contenuto del progetto della Guida.|
|Makehtmlhelp.bat|*Projname*|File di origine|Viene usato dal sistema per compilare il progetto della Guida al momento della compilazione.|
|Afxcore.htm|*Projname*\hlp|Argomenti della Guida HTML|Contiene gli argomenti della Guida standard per i comandi MFC e gli oggetti della schermata standard. Aggiungere argomenti della Guida personalizzati a questo file.|
|Afxprint.htm|*Projname*\hlp|Argomenti della Guida HTML|Contiene gli argomenti della Guida per i comandi di stampa.|
|*.jpg; \*.gif|*Projname*\hlp\Images|File di risorse|Contiene le immagini per i vari argomenti dei file della Guida generati.|

## <a name="see-also"></a>Vedi anche

[Tipi di file creati per i progetti di Visual Studio C++](file-types-created-for-visual-cpp-projects.md)
