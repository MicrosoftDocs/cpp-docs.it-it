---
description: 'Altre informazioni su: controlli elenco virtuale'
title: Controlli List virtuali
ms.date: 11/04/2016
helpviewer_keywords:
- cache, virtual list control item data
- list controls [MFC], virtual
- list controls [MFC], List view
- virtual list controls
ms.assetid: 319f841f-e426-423a-8276-d93f965b0b45
ms.openlocfilehash: 1d441fc74ab6b1ae395ce0b23bcba08c1703213f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331348"
---
# <a name="virtual-list-controls"></a>Controlli List virtuali

Un controllo elenco virtuale è un controllo di visualizzazione elenco con stile LVS_OWNERDATA. Questo stile consente al controllo di supportare un conteggio di elementi fino a un **valore DWORD** (il conteggio predefinito degli elementi si estende solo a un **`int`** ). Tuttavia, il vantaggio principale offerto da questo stile è la possibilità di avere solo un subset di elementi di dati in memoria in un momento qualsiasi. In questo modo, il controllo visualizzazione elenco virtuale si presta a se stesso per l'uso con database di grandi dimensioni, in cui sono già presenti metodi specifici per l'accesso ai dati.

> [!NOTE]
> Oltre a fornire la funzionalità elenco virtuale in `CListCtrl` , MFC fornisce anche la stessa funzionalità della classe [CListView](../mfc/reference/clistview-class.md) .

Quando si sviluppano controlli elenco virtuali, è necessario tenere presenti alcuni problemi di compatibilità. Per ulteriori informazioni, vedere la sezione problemi di compatibilità nell'argomento controlli List-View nell'Windows SDK.

## <a name="handling-the-lvn_getdispinfo-notification"></a>Gestione della notifica LVN_GETDISPINFO

I controlli elenco virtuale conservano informazioni molto piccole sull'elemento. Ad eccezione delle informazioni sulla selezione e lo stato attivo, tutte le informazioni sugli elementi sono gestite dal proprietario del controllo. Le informazioni vengono richieste dal Framework tramite un messaggio di notifica LVN_GETDISPINFO. Per fornire le informazioni richieste, il proprietario del controllo elenco virtuale (o il controllo stesso) deve gestire questa notifica. Questa operazione può essere eseguita facilmente mediante la [creazione guidata classe](reference/mfc-class-wizard.md) (vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)). Il codice risultante dovrebbe essere simile all'esempio seguente (dove `CMyDialog` possiede l'oggetto controllo elenco virtuale e la finestra di dialogo sta gestendo la notifica):

[!code-cpp[NVC_MFCControlLadenDialog#23](../mfc/codesnippet/cpp/virtual-list-controls_1.cpp)]

Nel gestore per il messaggio di notifica di LVN_GETDISPINFO, è necessario controllare per verificare il tipo di informazioni richieste. I valori possibili sono:

- `LVIF_TEXT` Il membro *pszText* deve essere compilato.

- `LVIF_IMAGE` Il membro *IImage* deve essere compilato.

- `LVIF_INDENT` Il membro *iIndent* deve essere compilato.

- `LVIF_PARAM` È necessario compilare il membro *lParam* . (Non presente per gli elementi secondari).

- `LVIF_STATE` È necessario compilare il membro *state* .

È quindi necessario fornire tutte le informazioni richieste al Framework.

Nell'esempio seguente, tratto dal corpo del gestore di notifiche per l'oggetto elenco, viene illustrato un possibile metodo fornendo le informazioni per i buffer di testo e l'immagine di un elemento:

[!code-cpp[NVC_MFCControlLadenDialog#24](../mfc/codesnippet/cpp/virtual-list-controls_2.cpp)]

## <a name="caching-and-virtual-list-controls"></a>Caching e controlli elenco virtuale

Poiché questo tipo di controllo elenco è destinato a set di dati di grandi dimensioni, è consigliabile memorizzare nella cache i dati degli elementi richiesti per migliorare le prestazioni del recupero. Il Framework fornisce un meccanismo di hint per la cache che facilita l'ottimizzazione della cache inviando un messaggio di notifica LVN_ODCACHEHINT.

Nell'esempio seguente viene aggiornata la cache con l'intervallo passato alla funzione del gestore.

[!code-cpp[NVC_MFCControlLadenDialog#25](../mfc/codesnippet/cpp/virtual-list-controls_3.cpp)]

Per ulteriori informazioni sulla preparazione e la gestione di una cache, vedere la sezione relativa alla gestione della cache nell'argomento controlli List-View nell'Windows SDK.

## <a name="finding-specific-items"></a>Ricerca di elementi specifici

Il messaggio di notifica LVN_ODFINDITEM viene inviato dal controllo elenco virtuale quando è necessario trovare un particolare elemento di controllo elenco. Il messaggio di notifica viene inviato quando il controllo visualizzazione elenco riceve l'accesso con chiave rapida o quando riceve un messaggio di LVM_FINDITEM. Le informazioni di ricerca vengono inviate sotto forma di una struttura **LVFINDINFO** , che è un membro della struttura **NMLVFINDITEM** . Gestire questo messaggio eseguendo l'override della `OnChildNotify` funzione dell'oggetto elenco del controllo e all'interno del corpo del gestore, verificare la presenza del messaggio LVN_ODFINDITEM. Se trovato, eseguire l'azione appropriata.

È necessario essere pronti per cercare un elemento che corrisponda alle informazioni fornite dal controllo di visualizzazione elenco. È necessario restituire l'indice dell'elemento in caso di esito positivo oppure-1 se non viene trovato alcun elemento corrispondente.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
