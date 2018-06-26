---
title: Relazioni tra oggetti MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC, relationships between key objects
- objects [MFC], relationships
- relationships, MFC objects
- MFC object relationships
ms.assetid: 6e8f3b51-e80f-4d88-94c8-4c1e4ee163ad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ef6a9e605948fac4f31338f87b4d00bbaa8712f4
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931652"
---
# <a name="relationships-among-mfc-objects"></a>Relazioni tra oggetti MFC
Per aiutare a comprendere il processo di creazione documento/visualizzazione nella prospettiva, prendere in considerazione un programma in esecuzione: un documento, la finestra cornice utilizzato per contenere la visualizzazione e la visualizzazione associata al documento.  
  
-   Un documento mantiene un elenco delle visualizzazioni del documento in questione e un puntatore al modello di documento che ha creato il documento.  
  
-   Una vista include un puntatore al suo documento ed è un figlio della finestra cornice padre.  
  
-   Una finestra cornice documento include un puntatore alla visualizzazione attiva corrente.  
  
-   Un modello di documento conserva un elenco dei documenti aperti.  
  
-   L'applicazione mantiene un elenco dei modelli di documento.  
  
-   Windows tiene traccia di tutte le finestre aperte in modo in cui può inviare messaggi a loro.  
  
 Queste relazioni vengono stabilite durante la creazione documento/visualizzazione. Nella tabella seguente viene illustrato come gli oggetti in un programma in esecuzione possono accedere a altri oggetti. Qualsiasi oggetto può ottenere un puntatore all'oggetto dell'applicazione, chiamando la funzione globale [AfxGetApp](../mfc/reference/application-information-and-management.md#afxgetapp).  
  
### <a name="gaining-access-to-other-objects-in-your-application"></a>Ottenere l'accesso ad altri oggetti nell'applicazione  
  
|Dall'oggetto|Come accedere ad altri oggetti|  
|-----------------|---------------------------------|  
|Document|Uso [GetFirstViewPosition](../mfc/reference/cdocument-class.md#getfirstviewposition) e [GetNextView](../mfc/reference/cdocument-class.md#getnextview) per accedere a elenco di visualizzazione del documento.<br /><br /> Chiamare [GetDocTemplate](../mfc/reference/cdocument-class.md#getdoctemplate) per ottenere il modello di documento.|  
|Visualizza|Chiamare [GetDocument](../mfc/reference/cview-class.md#getdocument) per ottenere il documento.<br /><br /> Chiamare [GetParentFrame](../mfc/reference/cwnd-class.md#getparentframe) per ottenere la finestra cornice.|  
|Finestra cornice di documento|Chiamare [GetActiveView](../mfc/reference/cframewnd-class.md#getactiveview) per ottenere la visualizzazione corrente.<br /><br /> Chiamare [GetActiveDocument](../mfc/reference/cframewnd-class.md#getactivedocument) per ottenere il documento collegato alla visualizzazione corrente.|  
|Finestra cornice MDI|Chiamare [MDIGetActive](../mfc/reference/cmdiframewnd-class.md#mdigetactive) ottenere attualmente attivo [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md).|  
  
 In genere, una finestra cornice dispone di una visualizzazione, ma in alcuni casi, come in finestre con separatore, la stessa finestra cornice contiene più visualizzazioni. La finestra cornice tiene un puntatore per la visualizzazione attualmente attiva; il puntatore viene aggiornato ogni volta che viene attivata un'altra visualizzazione.  
  
> [!NOTE]
>  Un puntatore alla finestra cornice principale viene archiviato nel [m_pMainWnd](../mfc/reference/cwinthread-class.md#m_pmainwnd) variabile membro dell'oggetto applicazione. Una chiamata a `OnFileNew` nell'override del `InitInstance` funzione membro di `CWinApp` imposta *m_pMainWnd* automaticamente. Se non si chiama `OnFileNew`, è necessario impostare il valore della variabile `InitInstance` manualmente. (SDI COM (server) applicazioni non possono impostare la variabile se l'opzione /Embedding nella riga di comando.) Si noti che *m_pMainWnd* è ora un membro della classe `CWinThread` anziché `CWinApp`.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione del modello di documento](../mfc/document-template-creation.md)   
 [Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)

