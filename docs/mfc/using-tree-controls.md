---
description: 'Ulteriori informazioni su: utilizzo di controlli struttura ad albero'
title: Utilizzo di controlli Tree
ms.date: 11/04/2016
helpviewer_keywords:
- CTreeCtrl class [MFC], using
- tree controls [MFC], about tree controls
ms.assetid: 4e92941a-e477-4fb1-b1ce-4abeafbef1c1
ms.openlocfilehash: 7b8a10acc3ee256f4b26c9988c4de7df900e1535
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143195"
---
# <a name="using-tree-controls"></a>Utilizzo di controlli Tree

L'utilizzo tipico di un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) segue il modello seguente:

- Viene creato il controllo. Se il controllo viene specificato in un modello di finestra di dialogo o se si usa `CTreeView` , la creazione è automatica quando viene creata la finestra di dialogo o la visualizzazione. Se si desidera creare il controllo albero come finestra figlio di un'altra finestra, utilizzare la funzione membro [create](../mfc/reference/ctreectrl-class.md#create) .

- Se si vuole che il controllo albero usi le immagini, impostare un elenco di immagini [chiamando l'](../mfc/reference/ctreectrl-class.md#setimagelist)elenco di immagini. È anche possibile modificare il rientro chiamando [seindent](../mfc/reference/ctreectrl-class.md#setindent). È opportuno eseguire questa operazione in [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (per i controlli nelle finestre di dialogo) o [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) (per le visualizzazioni).

- Inserire i dati nel controllo chiamando la `CTreeCtrl` funzione [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) una volta per ogni elemento di dati. `InsertItem` Restituisce un handle per l'elemento che è possibile utilizzare per farvi riferimento in un secondo momento, ad esempio quando si aggiungono elementi figlio. Un momento opportuno per inizializzare i dati è `OnInitDialog` (per i controlli nelle finestre di dialogo) o `OnInitialUpdate` (per le visualizzazioni).

- Mentre l'utente interagisce con il controllo, questo invierà vari messaggi di notifica. È possibile specificare una funzione per gestire ognuno dei messaggi che si desidera gestire aggiungendo una ON_NOTIFY_REFLECT macro nella mappa messaggi della finestra del controllo o aggiungendo una macro ON_NOTIFY alla mappa messaggi della finestra padre. Per un elenco delle possibili notifiche, vedere [messaggi di notifica del controllo Tree](../mfc/tree-control-notification-messages.md) più avanti in questo argomento.

- Chiamare le varie funzioni membro Set per impostare i valori per il controllo. Le modifiche che è possibile apportare includono l'impostazione del rientro e la modifica del testo, dell'immagine o dei dati associati a un elemento.

- Usare le varie funzioni Get per esaminare il contenuto del controllo. È anche possibile scorrere il contenuto del controllo albero con funzioni che consentono di recuperare handle per elementi padre, figlio e di pari livello di un elemento specificato. È anche possibile ordinare gli elementi figlio di un nodo specifico.

- Al termine del controllo, assicurarsi che sia stato eliminato correttamente. Se il controllo struttura ad albero si trova in una finestra di dialogo o se si tratta di una visualizzazione, l'oggetto e l' `CTreeCtrl` oggetto verranno eliminati automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CTreeCtrl` vengono eliminati correttamente.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
