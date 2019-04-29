---
title: Utilizzo di controlli Tree
ms.date: 11/04/2016
helpviewer_keywords:
- CTreeCtrl class [MFC], using
- tree controls [MFC], about tree controls
ms.assetid: 4e92941a-e477-4fb1-b1ce-4abeafbef1c1
ms.openlocfilehash: 9cff48018d728ef9578be38c0d94300011265fa1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411448"
---
# <a name="using-tree-controls"></a>Utilizzo di controlli Tree

Uso tipico di un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) segue il modello seguente:

- Viene creato il controllo. Se il controllo viene specificato in un modello di finestra di dialogo o se si usa `CTreeView`, la creazione avviene automaticamente quando viene creata la finestra di dialogo o la vista. Se si vuole creare il controllo struttura ad albero come finestra figlio di un'altra finestra, usare il [Create](../mfc/reference/ctreectrl-class.md#create) funzione membro.

- Se si desidera utilizzare immagini il controllo struttura ad albero, impostare un elenco di immagini tramite una chiamata [SetImageList](../mfc/reference/ctreectrl-class.md#setimagelist). È anche possibile modificare il rientro chiamando [SetIndent](../mfc/reference/ctreectrl-class.md#setindent). Il momento giusto per eseguire questa operazione è in [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (per i controlli nelle finestre di dialogo) o [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) (per le visualizzazioni).

- Inserire dati nel controllo chiamando il `CTreeCtrl`del [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) funzione una volta per ogni elemento di dati. `InsertItem` Restituisce un handle per l'elemento che è possibile usare per farvi riferimento in un secondo momento, come quando si aggiungono elementi figlio. È un buon momento per inizializzare i dati in `OnInitDialog` (per i controlli nelle finestre di dialogo) o `OnInitialUpdate` (per le visualizzazioni).

- Mentre l'utente interagisce con il controllo, questo invierà vari messaggi di notifica. È possibile specificare una funzione per gestire ogni messaggio che si desidera gestire mediante l'aggiunta di una macro ON_NOTIFY_REFLECT nella mappa messaggi della finestra del controllo o aggiungendo un ON_NOTIFY (macro) alla mappa messaggi della finestra padre. Visualizzare [messaggi di notifica del controllo Tree](../mfc/tree-control-notification-messages.md) più avanti in questo argomento per un elenco di possibili notifiche.

- Chiamare le varie funzioni membro Set per impostare i valori per il controllo. Le modifiche che è possibile apportare includono l'impostazione del rientro e la modifica di testo, immagini o dati associati a un elemento.

- Usare le varie funzioni Get per esaminare il contenuto del controllo. È inoltre possibile scorrere il contenuto del controllo albero con le funzioni che consentono di recuperare gli handle di elementi padre, figlio e nodi di pari livello di un elemento specificato. È anche possibile ordinare gli elementi figlio di un nodo specifico.

- Al termine con il controllo, assicurarsi che venga eliminato correttamente. Se il controllo struttura ad albero è in una finestra di dialogo o se è una vista, e il `CTreeCtrl` oggetto verrà eliminato automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CTreeCtrl` vengono eliminati correttamente.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
