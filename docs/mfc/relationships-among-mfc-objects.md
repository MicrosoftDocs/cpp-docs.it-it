---
title: Relazioni tra oggetti MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, relationships between key objects
- objects [MFC], relationships
- relationships, MFC objects
- MFC object relationships
ms.assetid: 6e8f3b51-e80f-4d88-94c8-4c1e4ee163ad
ms.openlocfilehash: d7e40e25b405d3f8ec50a518889cc2b89bc8c725
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372818"
---
# <a name="relationships-among-mfc-objects"></a>Relazioni tra oggetti MFC

Per facilitare il processo di creazione del documento/visualizzazione in prospettiva, si consideri un programma in esecuzione: un documento, la finestra cornice utilizzata per contenere la visualizzazione e la visualizzazione associata al documento.

- Un documento mantiene un elenco delle visualizzazioni di tale documento e un puntatore al modello di documento che ha creato il documento.

- Una visualizzazione mantiene un puntatore al documento ed è un elemento figlio della finestra cornice padre.

- Una finestra cornice del documento mantiene un puntatore alla visualizzazione attiva corrente.

- Un modello di documento mantiene un elenco dei documenti aperti.

- L'applicazione mantiene un elenco dei relativi modelli di documento.

- Windows tiene traccia di tutte le finestre aperte in modo che possa inviare messaggi a loro.

Queste relazioni vengono stabilite durante la creazione di documenti/visualizzazioni. Nella tabella seguente viene illustrato come gli oggetti in un programma in esecuzione possono accedere ad altri oggetti. Qualsiasi oggetto può ottenere un puntatore all'oggetto applicazione chiamando la funzione globale [AfxGetApp](../mfc/reference/application-information-and-management.md#afxgetapp).

### <a name="gaining-access-to-other-objects-in-your-application"></a>Ottenere l'accesso ad altri oggetti nell'applicazione

|Da oggetto|Come accedere ad altri oggetti|
|-----------------|---------------------------------|
|Document|Utilizzare [GetFirstViewPosition](../mfc/reference/cdocument-class.md#getfirstviewposition) e [GetNextView](../mfc/reference/cdocument-class.md#getnextview) per accedere all'elenco di visualizzazione del documento.<br /><br /> Chiamare [GetDocTemplate](../mfc/reference/cdocument-class.md#getdoctemplate) per ottenere il modello di documento.|
|Visualizzazione|Chiamare [GetDocument](../mfc/reference/cview-class.md#getdocument) per ottenere il documento.<br /><br /> Chiamare [GetParentFrame](../mfc/reference/cwnd-class.md#getparentframe) per ottenere la finestra cornice.|
|Finestra cornice del documento|Chiamare [GetActiveView](../mfc/reference/cframewnd-class.md#getactiveview) per ottenere la visualizzazione corrente.<br /><br /> Chiamare [GetActiveDocument](../mfc/reference/cframewnd-class.md#getactivedocument) per ottenere il documento allegato alla visualizzazione corrente.|
|Finestra cornice MDI|Chiamare [MDIGetActive](../mfc/reference/cmdiframewnd-class.md#mdigetactive) per ottenere l'oggetto [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)attualmente attivo.|

In genere, una finestra cornice dispone di una visualizzazione, ma a volte, come nelle finestre con separatore, la stessa finestra cornice contiene più visualizzazioni. La finestra cornice mantiene un puntatore alla visualizzazione attualmente attiva; il puntatore viene aggiornato ogni volta che viene attivata un'altra vista.

> [!NOTE]
> Un puntatore alla finestra cornice principale viene archiviato nella variabile membro [m_pMainWnd](../mfc/reference/cwinthread-class.md#m_pmainwnd) dell'oggetto applicazione. Una chiamata `OnFileNew` a nell'override `InitInstance` della `CWinApp` funzione membro dei set *m_pMainWnd* per l'utente. Se non si `OnFileNew`chiama , è necessario impostare il valore della variabile in `InitInstance` se stessi. (applicazioni componente COM SDI (server) non possono impostare la variabile se /Embedding è nella riga di comando.) Si noti che *m_pMainWnd* `CWinThread` è `CWinApp`ora un membro della classe anziché .

## <a name="see-also"></a>Vedere anche

[Modelli di documenti e processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di modelli di documento](../mfc/document-template-creation.md)<br/>
[Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)
