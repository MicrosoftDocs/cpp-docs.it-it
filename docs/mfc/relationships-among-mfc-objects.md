---
title: Relazioni tra oggetti MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, relationships between key objects
- objects [MFC], relationships
- relationships, MFC objects
- MFC object relationships
ms.assetid: 6e8f3b51-e80f-4d88-94c8-4c1e4ee163ad
ms.openlocfilehash: bb8d1fcd9737b33d52038746a26f4e1bd1043e95
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57276972"
---
# <a name="relationships-among-mfc-objects"></a>Relazioni tra oggetti MFC

Per aiutare a comprendere il processo di creazione documento/visualizzazione nel punto di vista, si consideri un programma in esecuzione: un documento, la finestra cornice usato per contenere la visualizzazione e la visualizzazione associata al documento.

- Un documento mantiene un elenco delle visualizzazioni di documento e un puntatore al modello di documento che ha creato il documento.

- Una vista include un puntatore al suo documento ed è un figlio della finestra cornice padre.

- Una finestra cornice del documento include un puntatore alla visualizzazione attiva corrente.

- Un modello di documento mantiene un elenco dei documenti aperti.

- L'applicazione mantiene un elenco dei modelli di documento.

- Windows tiene traccia di tutte le finestre aperte in modo che può inviare messaggi a essi.

Queste relazioni stabilite durante la creazione documento/visualizzazione. Nella tabella seguente mostra come usare gli oggetti in un programma in esecuzione possono accedere altri oggetti. Qualsiasi oggetto può ottenere un puntatore all'oggetto applicazione chiamando la funzione globale [AfxGetApp](../mfc/reference/application-information-and-management.md#afxgetapp).

### <a name="gaining-access-to-other-objects-in-your-application"></a>Ottenere l'accesso ad altri oggetti all'interno dell'applicazione

|Dall'oggetto|Come accedere ad altri oggetti|
|-----------------|---------------------------------|
|Document|Uso [GetFirstViewPosition](../mfc/reference/cdocument-class.md#getfirstviewposition) e [GetNextView](../mfc/reference/cdocument-class.md#getnextview) per accedere a elenco di visualizzazione del documento.<br /><br /> Chiamare [GetDocTemplate](../mfc/reference/cdocument-class.md#getdoctemplate) per ottenere il modello di documento.|
|Visualizza|Chiamare [GetDocument](../mfc/reference/cview-class.md#getdocument) per ottenere il documento.<br /><br /> Chiamare [GetParentFrame](../mfc/reference/cwnd-class.md#getparentframe) per ottenere la finestra cornice.|
|Finestra cornice di documento|Chiamare [GetActiveView](../mfc/reference/cframewnd-class.md#getactiveview) per ottenere la visualizzazione corrente.<br /><br /> Chiamare [GetActiveDocument](../mfc/reference/cframewnd-class.md#getactivedocument) per ottenere il documento collegato alla visualizzazione corrente.|
|Finestra cornice MDI|Chiamare [MDIGetActive](../mfc/reference/cmdiframewnd-class.md#mdigetactive) ottenere attualmente attivo [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md).|

In genere, una finestra cornice dispone di una visualizzazione, ma in alcuni casi, come le finestre con separatore, la stessa finestra cornice contiene più visualizzazioni. La finestra cornice tiene un puntatore alla visualizzazione attualmente attiva. il puntatore viene aggiornato ogni volta che un'altra visualizzazione viene attivata.

> [!NOTE]
>  Un puntatore alla finestra cornice principale viene archiviato nel [m_pMainWnd](../mfc/reference/cwinthread-class.md#m_pmainwnd) variabile membro dell'oggetto applicazione. Una chiamata a `OnFileNew` nell'override della `InitInstance` funzione di membro di `CWinApp` imposta *m_pMainWnd* automaticamente. Se non si chiama `OnFileNew`, è necessario impostare il valore della variabile `InitInstance` manualmente. (SDI COM componenti (server) le applicazioni possono non impostare la variabile se l'opzione /Embedding è nella riga di comando.) Si noti che *m_pMainWnd* ora è un membro della classe `CWinThread` anziché `CWinApp`.

## <a name="see-also"></a>Vedere anche

[I modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di modelli di documento](../mfc/document-template-creation.md)<br/>
[Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)
