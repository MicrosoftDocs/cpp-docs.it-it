---
title: I modelli di documento e il processo di creazione documento / visualizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- icons, for multiple document templates
- document templates [MFC], and views
- document/view architecture [MFC], creating document/view
- single document template
- MFC, document templates
- multiple document template
- CDocTemplate class [MFC]
- templates [MFC], document templates
ms.assetid: 311ce4cd-fbdf-4ea1-a51b-5bb043abbcee
ms.openlocfilehash: 544a9bf60ee2066688703faa7e430e2337454e66
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50606349"
---
# <a name="document-templates-and-the-documentview-creation-process"></a>Modelli di documenti e processo di creazione documento/visualizzazione

Per gestire il complesso processo di creazione di documenti con finestre cornice e visualizzazioni associate, il framework utilizza due classi di modello di documento: [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md) per le applicazioni SDI e [CMultiDocTemplate ](../mfc/reference/cmultidoctemplate-class.md) per le applicazioni MDI. Una classe `CSingleDocTemplate` può creare e archiviare un documento di un tipo alla volta. Una classe `CMultiDocTemplate` gestisce un elenco di più documenti aperti di un unico tipo.

Alcune applicazioni supportano più tipi di documenti. Ad esempio, un'applicazione può supportare documenti di testo e documenti grafici. In tale applicazione, quando l'utente sceglie il comando Nuovo dal menu File, viene visualizzata una finestra di dialogo con un elenco di tipi di documento possibili da aprire. Per ogni tipo di documento supportato, nell'applicazione viene utilizzato un oggetto modello di documento distinto. Di seguito viene illustrata la configurazione di un'applicazione MDI che supporta due tipi di documento e mostra diversi documenti aperti.

![Applicazione MDI con due tipi di documento](../mfc/media/vc387h1.gif "vc387h1") un'applicazione MDI con due tipi di documento

I modelli di documento vengono creati e gestiti dall'oggetto applicazione. Una delle attività principali eseguite durante la funzione `InitInstance` dell'applicazione consiste nel creare uno o più modelli di documento del tipo appropriato. Questa funzionalità è descritta in [creazione di modelli di documento](../mfc/document-template-creation.md). L'oggetto applicazione include un puntatore a ogni modello di documento nell'elenco dei modelli e fornisce un'interfaccia per l'aggiunta dei modelli di documento.

Se è necessario supportare due o più tipi di documento, è necessario aggiungere una chiamata a [AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate) per ogni tipo di documento.

Viene registrata un'icona per ogni modello di documento in base alla posizione nell'elenco dei modelli di documento dell'applicazione. L'ordine dei modelli di documento è determinato dall'ordine in cui sono stati aggiunti tramite le chiamate a `AddDocTemplate`. In MFC si presuppone che la prima risorsa Icona nell'applicazione sia l'icona dell'applicazione, la successiva risorsa Icona sia l'icona del primo documento e così via.

Ad esempio, un modello di documento è il terzo di tre per l'applicazione. Se esiste una risorsa Icona nell'applicazione in corrispondenza dell'indice 3, tale icona viene utilizzata per il modello di documento. In caso contrario, viene utilizzata come predefinita l'icona in corrispondenza dell'indice 0.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[Creazione di modelli di documento](../mfc/document-template-creation.md)<br/>
[Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)<br/>
[Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)

