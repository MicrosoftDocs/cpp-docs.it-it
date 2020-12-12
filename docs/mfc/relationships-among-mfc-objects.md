---
description: 'Altre informazioni su: relazioni tra oggetti MFC'
title: Relazioni tra oggetti MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, relationships between key objects
- objects [MFC], relationships
- relationships, MFC objects
- MFC object relationships
ms.assetid: 6e8f3b51-e80f-4d88-94c8-4c1e4ee163ad
ms.openlocfilehash: 0646d487d1d60293461316edddcb97fde30905a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218056"
---
# <a name="relationships-among-mfc-objects"></a>Relazioni tra oggetti MFC

Per facilitare l'inserimento del processo di creazione documento/visualizzazione, considerare un programma in esecuzione: un documento, la finestra cornice utilizzata per contenere la visualizzazione e la visualizzazione associata al documento.

- Un documento mantiene un elenco delle visualizzazioni del documento e un puntatore al modello di documento in cui è stato creato il documento.

- Una vista mantiene un puntatore al documento ed è un elemento figlio della relativa finestra cornice padre.

- Una finestra cornice del documento mantiene un puntatore alla visualizzazione attiva corrente.

- Un modello di documento consente di mantenere un elenco dei documenti aperti.

- L'applicazione mantiene un elenco dei modelli di documento.

- Windows tiene traccia di tutte le finestre aperte, in modo che possa inviare messaggi.

Queste relazioni vengono stabilite durante la creazione di documenti/visualizzazioni. Nella tabella seguente viene illustrato il modo in cui gli oggetti di un programma in esecuzione possono accedere ad altri oggetti. Qualsiasi oggetto può ottenere un puntatore all'oggetto applicazione chiamando la funzione globale [AfxGetApp](../mfc/reference/application-information-and-management.md#afxgetapp).

### <a name="gaining-access-to-other-objects-in-your-application"></a>Ottenere l'accesso ad altri oggetti nell'applicazione

|Da oggetto|Come accedere ad altri oggetti|
|-----------------|---------------------------------|
|Documento|Usare [GetFirstViewPosition](../mfc/reference/cdocument-class.md#getfirstviewposition) e [GetNextView](../mfc/reference/cdocument-class.md#getnextview) per accedere all'elenco di visualizzazioni del documento.<br /><br /> Chiamare [GetDocTemplate](../mfc/reference/cdocument-class.md#getdoctemplate) per ottenere il modello di documento.|
|Visualizzazione|Chiamare [GetDocument](../mfc/reference/cview-class.md#getdocument) per ottenere il documento.<br /><br /> Chiamare [GetParentFrame](../mfc/reference/cwnd-class.md#getparentframe) per ottenere la finestra cornice.|
|Finestra cornice documento|Chiamare [GetActiveView](../mfc/reference/cframewnd-class.md#getactiveview) per ottenere la visualizzazione corrente.<br /><br /> Chiamare [GetActiveDocument](../mfc/reference/cframewnd-class.md#getactivedocument) per ottenere il documento collegato alla visualizzazione corrente.|
|Finestra cornice MDI|Chiamare [MDIGetActive](../mfc/reference/cmdiframewnd-class.md#mdigetactive) per ottenere il [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)attualmente attivo.|

In genere, una finestra cornice presenta una sola visualizzazione, ma in alcuni casi, come nelle finestre con separatore, la stessa finestra cornice contiene più visualizzazioni. La finestra cornice mantiene un puntatore alla visualizzazione attualmente attiva; il puntatore viene aggiornato ogni volta che viene attivata un'altra visualizzazione.

> [!NOTE]
> Un puntatore alla finestra cornice principale viene archiviato nella variabile membro [m_pMainWnd](../mfc/reference/cwinthread-class.md#m_pmainwnd) dell'oggetto applicazione. Una chiamata a `OnFileNew` nell'override della `InitInstance` funzione membro di `CWinApp` imposta *m_pMainWnd* . Se non si chiama `OnFileNew` , è necessario impostare il valore della variabile `InitInstance` autonomamente. (Le applicazioni del componente COM SDI (Server) potrebbero non impostare la variabile se l'opzione/Embedding è presente nella riga di comando. Si noti che *m_pMainWnd* è ora un membro della classe `CWinThread` anziché di `CWinApp` .

## <a name="see-also"></a>Vedi anche

[Modelli di documento e processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di modelli di documento](../mfc/document-template-creation.md)<br/>
[Creazione documento/visualizzazione](../mfc/document-view-creation.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)
