---
title: Controlli List virtuali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- cache, virtual list control item data
- list controls [MFC], virtual
- list controls [MFC], List view
- virtual list controls
ms.assetid: 319f841f-e426-423a-8276-d93f965b0b45
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5544582d65d84e95a22e78c9d663902d7df2dd24
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46436039"
---
# <a name="virtual-list-controls"></a>Controlli List virtuali

Un controllo elenco virtuale è un controllo visualizzazione elenco con lo stile LVS_OWNERDATA. Questo stile consente il controllo supportare un numero di elementi fino a un **DWORD** (numero predefinito dell'elemento si estende esclusivamente a un **int**). Tuttavia, il vantaggio principale offerto da questo stile è la possibilità di avere solo un subset di elementi di dati in memoria in qualsiasi momento. In questo modo il controllo di visualizzazione elenco virtuale da presta per l'utilizzo con database di grandi dimensioni di informazioni, in cui i metodi specifici di accesso ai dati sono già presenti.

> [!NOTE]
>  Oltre a fornire funzionalità di elenco virtuale nel `CListCtrl`, MFC fornisce anche la stessa funzionalità nel [CListView](../mfc/reference/clistview-class.md) classe.

Esistono alcuni problemi di compatibilità che è necessario essere consapevoli di durante lo sviluppo di controlli list virtuali. Per altre informazioni, vedere la sezione problemi di compatibilità dell'argomento controlli List View nel SDK di Windows.

## <a name="handling-the-lvngetdispinfo-notification"></a>Gestione della notifica LVN_GETDISPINFO

Controlli list virtuali mantengono le informazioni elemento minimo. Fatta eccezione per la selezione di elementi e informazioni di stato attivo, tutte le informazioni sull'elemento viene gestiti dal proprietario del controllo. Dal framework tramite un messaggio di notifica LVN_GETDISPINFO vengono richieste informazioni. Per fornire le informazioni richieste, il proprietario del controllo elenco virtuale (o lo stesso controllo) deve gestire questa notifica. Questa operazione può facilmente essere eseguita usando la finestra Proprietà (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)). Il codice risultante dovrebbe essere simile al seguente (dove `CMyDialog` proprietaria dell'oggetto di controllo elenco virtuale e la finestra di dialogo gestisce le notifiche):

[!code-cpp[NVC_MFCControlLadenDialog#23](../mfc/codesnippet/cpp/virtual-list-controls_1.cpp)]

Nel gestore per il messaggio di notifica LVN_GETDISPINFO, è necessario verificare il tipo di informazioni viene richiesto. I valori possibili sono:

- `LVIF_TEXT` Il *pszText* membro deve essere compilato.

- `LVIF_IMAGE` Il *iImage* membro deve essere compilato.

- `LVIF_INDENT` Il *membro* membro deve essere compilato.

- `LVIF_PARAM` Il *lParam* membro deve essere compilato. (Non presente per gli elementi secondari).

- `LVIF_STATE` Il *stato* membro deve essere compilato.

È quindi necessario fornire le informazioni richieste al Framework.

L'esempio seguente (tratto dal corpo del gestore di notifica per l'oggetto di controllo elenco) di seguito viene illustrato un possibile metodo fornendo le informazioni per il buffer di testo e l'immagine di un elemento:

[!code-cpp[NVC_MFCControlLadenDialog#24](../mfc/codesnippet/cpp/virtual-list-controls_2.cpp)]

## <a name="caching-and-virtual-list-controls"></a>Memorizzazione nella cache e controlli elenco virtuali

Perché questo tipo di controllo elenco è destinato per grandi set di dati, è consigliabile memorizzare nella cache i dati richiesti per migliorare le prestazioni del recupero. Il framework fornisce un meccanismo di cache per ottimizzare la cache mediante l'invio di un messaggio di notifica LVN_ODCACHEHINT.

Nell'esempio seguente aggiorna la cache con l'intervallo passato alla funzione del gestore.

[!code-cpp[NVC_MFCControlLadenDialog#25](../mfc/codesnippet/cpp/virtual-list-controls_3.cpp)]

Per altre informazioni sulla preparazione e la gestione di una cache, vedere la sezione di gestione della Cache dell'argomento controlli List View nel SDK di Windows.

## <a name="finding-specific-items"></a>Ricerca di elementi specifici

Il messaggio di notifica LVN_ODFINDITEM viene inviato dal controllo elenco virtuale quando è necessario trovare un elemento controllo elenco specifico. Quando il controllo di visualizzazione elenco riceve rapido accesso alle chiave o quando viene ricevuto un messaggio LVM_FINDITEM, viene inviato il messaggio di notifica. Informazioni sulla ricerca viene inviate in forma di un' **LVFINDINFO** struttura, ovvero un membro delle **NMLVFINDITEM** struttura. Gestire il messaggio eseguendo l'override di `OnChildNotify` funzione nell'elenco di oggetti di controllo e all'interno del corpo del gestore, cercare il messaggio LVN_ODFINDITEM. Se trovato, eseguire l'azione appropriata.

È consigliabile essere preparati a ricerca di un elemento che corrisponda alle informazioni fornite dal controllo visualizzazione elenco. È necessario restituire l'indice dell'elemento se l'operazione riesce, oppure -1 se non viene trovato alcun elemento corrispondente.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

