---
title: Controlli List virtuali
ms.date: 11/04/2016
helpviewer_keywords:
- cache, virtual list control item data
- list controls [MFC], virtual
- list controls [MFC], List view
- virtual list controls
ms.assetid: 319f841f-e426-423a-8276-d93f965b0b45
ms.openlocfilehash: 1ade5f404e134cf6de20756dcc5af169fefdec76
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375521"
---
# <a name="virtual-list-controls"></a>Controlli List virtuali

Un controllo elenco virtuale è un controllo visualizzazione elenco con lo stile LVS_OWNERDATA. Questo stile consente al controllo di supportare un conteggio di elementi fino a un **valore DWORD** (il numero di elementi predefinito si estende solo a **un int**). Tuttavia, il più grande vantaggio offerto da questo stile è la possibilità di avere solo un sottoinsieme di elementi di dati in memoria in qualsiasi momento. Ciò consente al controllo visualizzazione elenco virtuale di prestarsi da utilizzare con database di informazioni di grandi dimensioni, in cui sono già disponibili metodi specifici di accesso ai dati.

> [!NOTE]
> Oltre a fornire funzionalità `CListCtrl`di elenco virtuale in , MFC fornisce anche la stessa funzionalità nella classe [CListView](../mfc/reference/clistview-class.md) .

Esistono alcuni problemi di compatibilità che è necessario tenere presenti quando si sviluppano controlli elenco virtuale. Per ulteriori informazioni, vedere la sezione Problemi di compatibilità dell'argomento Controlli visualizzazione elenco in Windows SDK.

## <a name="handling-the-lvn_getdispinfo-notification"></a>Gestione della notifica di LVN_GETDISPINFO

I controlli elenco virtuali mantengono pochissime informazioni sugli elementi. Ad eccezione delle informazioni relative alla selezione e allo stato attivo dell'elemento, tutte le informazioni sull'elemento vengono gestite dal proprietario del controllo. Le informazioni vengono richieste dal framework tramite un messaggio di notifica LVN_GETDISPINFO. Per fornire le informazioni richieste, il proprietario del controllo elenco virtuale (o il controllo stesso) deve gestire questa notifica. Questa operazione può essere eseguita facilmente utilizzando la [Creazione guidata classe](reference/mfc-class-wizard.md) (vedere Mapping di messaggi a [funzioni](../mfc/reference/mapping-messages-to-functions.md)). Il codice risultante dovrebbe essere simile `CMyDialog` all'esempio seguente (dove possiede l'oggetto controllo elenco virtuale e la finestra di dialogo gestisce la notifica):The resultant code should look something like the following example (where owns the virtual list control object and the dialog is handling the notification):

[!code-cpp[NVC_MFCControlLadenDialog#23](../mfc/codesnippet/cpp/virtual-list-controls_1.cpp)]

Nel gestore per il messaggio di notifica LVN_GETDISPINFO, è necessario verificare il tipo di informazioni richieste. I valori possibili sono:

- `LVIF_TEXT`Il membro *pszText* deve essere compilato.

- `LVIF_IMAGE`Il membro *iImage* deve essere compilato.

- `LVIF_INDENT`Il membro *iIndent* deve essere compilato.

- `LVIF_PARAM`Il membro *lParam* deve essere compilato. (Non presente per gli elementi secondari.)

- `LVIF_STATE`Il membro *dello Stato* deve essere compilato.

È quindi necessario fornire tutte le informazioni richieste al framework.

Nell'esempio seguente (preso dal corpo del gestore di notifica per l'oggetto controllo elenco) viene illustrato un possibile metodo fornendo informazioni per i buffer di testo e l'immagine di un elemento:

[!code-cpp[NVC_MFCControlLadenDialog#24](../mfc/codesnippet/cpp/virtual-list-controls_2.cpp)]

## <a name="caching-and-virtual-list-controls"></a>Memorizzazione nella cache e controlli elenco virtualeCaching and Virtual List Controls

Poiché questo tipo di controllo elenco è destinato a set di dati di grandi dimensioni, è consigliabile memorizzare nella cache i dati degli elementi richiesti per migliorare le prestazioni di recupero. Il framework fornisce un meccanismo di suggerimento della cache per facilitare l'ottimizzazione della cache inviando un messaggio di notifica LVN_ODCACHEHINT.

Nell'esempio seguente viene aggiornata la cache con l'intervallo passato alla funzione del gestore.

[!code-cpp[NVC_MFCControlLadenDialog#25](../mfc/codesnippet/cpp/virtual-list-controls_3.cpp)]

Per ulteriori informazioni sulla preparazione e la gestione di una cache, vedere la sezione Gestione cache dell'argomento Controlli visualizzazione elenco in Windows SDK.

## <a name="finding-specific-items"></a>Ricerca di elementi specifici

Il messaggio di notifica LVN_ODFINDITEM viene inviato dal controllo elenco virtuale quando è necessario trovare un particolare elemento del controllo elenco. Il messaggio di notifica viene inviato quando il controllo visualizzazione elenco riceve l'accesso rapido ai tasti o quando riceve un messaggio di LVM_FINDITEM. Le informazioni di ricerca vengono inviate sotto forma di struttura **LVFINDINFO,** che è un membro della struttura **NMLVFINDITEM.** Gestire questo messaggio eseguendo `OnChildNotify` l'override della funzione dell'oggetto controllo elenco e all'interno del corpo del gestore, verificare la LVN_ODFINDITEM messaggio. Se trovato, eseguire l'azione appropriata.

È necessario essere pronti a cercare un elemento che corrisponda alle informazioni fornite dal controllo visualizzazione elenco. È necessario restituire l'indice dell'elemento se ha esito positivo oppure -1 se non viene trovato alcun elemento corrispondente.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
