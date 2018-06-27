---
title: Controlli List virtuali | Documenti Microsoft
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
ms.openlocfilehash: e4891a4ccacf57dc43788bfa2a82decbe32961fb
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36952827"
---
# <a name="virtual-list-controls"></a>Controlli List virtuali
Un controllo elenco virtuale è un controllo visualizzazione elenco con lo stile LVS_OWNERDATA. Questo stile consente al controllo di supportare fino a un conteggio elementi di un **DWORD** (numero predefinito di elementi è limitato a un **int**). Tuttavia, il vantaggio principale offerto da questo stile è la possibilità di avere solo un subset di elementi di dati in memoria in qualsiasi momento. In questo modo il controllo visualizzazione elenco virtuale si prestano per l'utilizzo con database di grandi dimensioni di informazioni, in cui i metodi specifici di accesso ai dati sono già presenti.  
  
> [!NOTE]
>  Oltre a fornire funzionalità di elenco virtuale in `CListCtrl`, MFC fornisce anche la stessa funzionalità nel [CListView](../mfc/reference/clistview-class.md) classe.  
  
 Esistono alcuni problemi di compatibilità che è necessario essere consapevoli di durante lo sviluppo di controlli list virtuali. Per altre informazioni, vedere la sezione problemi di compatibilità dell'argomento della visualizzazione elenco controlli in Windows SDK.  
  
## <a name="handling-the-lvngetdispinfo-notification"></a>Gestione della notifica LVN_GETDISPINFO  
 Controlli list virtuali mantengono poche informazioni sugli elementi. Ad eccezione di selezione di elementi e informazioni di stato attivo, tutte le informazioni sugli elementi è gestiti dal proprietario del controllo. Dal framework tramite un messaggio di notifica LVN_GETDISPINFO vengono richieste informazioni. Per fornire le informazioni richieste, il proprietario del controllo elenco virtuale (o il controllo stesso) deve gestire questa notifica. Questa operazione può facilmente essere eseguita usando la finestra Proprietà (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)). Il codice risultante dovrebbe essere simile alla seguente (dove `CMyDialog` proprietario dell'oggetto di controllo elenco virtuale e la finestra di dialogo sta gestendo la notifica):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#23](../mfc/codesnippet/cpp/virtual-list-controls_1.cpp)]  
  
 Nel gestore per il messaggio di notifica LVN_GETDISPINFO, è necessario verificare il tipo di informazioni viene richiesto. I valori possibili sono:  
  
-   `LVIF_TEXT` Il *pszText* membro deve essere compilato.  
  
-   `LVIF_IMAGE` Il *iImage* membro deve essere compilato.  
  
-   `LVIF_INDENT` Il *membro* membro deve essere compilato.  
  
-   `LVIF_PARAM` Il *lParam* membro deve essere compilato. (Non presentano elementi secondari.)  
  
-   `LVIF_STATE` Il *stato* membro deve essere compilato.  
  
 È quindi necessario fornire le informazioni richieste al Framework.  
  
 Nell'esempio seguente (estratto dal corpo del gestore di notifica per l'oggetto di controllo elenco) di seguito viene illustrato un possibile metodo fornendo informazioni per il buffer di testo e immagine di un elemento:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#24](../mfc/codesnippet/cpp/virtual-list-controls_2.cpp)]  
  
## <a name="caching-and-virtual-list-controls"></a>Memorizzazione nella cache e controlli elenco virtuali  
 Poiché questo tipo di controllo elenco è destinato a grandi set di dati, è consigliabile memorizzare nella cache i dati richiesti per migliorare le prestazioni di recupero. Il framework fornisce un meccanismo di cache per ottimizzare la cache mediante l'invio di un messaggio di notifica LVN_ODCACHEHINT.  
  
 Nell'esempio seguente aggiorna la cache con l'intervallo passato alla funzione del gestore.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#25](../mfc/codesnippet/cpp/virtual-list-controls_3.cpp)]  
  
 Per ulteriori informazioni sulla preparazione e la gestione di una cache, vedere la sezione di gestione della Cache dell'argomento della visualizzazione elenco controlli in Windows SDK.  
  
## <a name="finding-specific-items"></a>Ricerca di specifici elementi  
 Il messaggio di notifica LVN_ODFINDITEM viene inviato dal controllo elenco virtuale quando è necessario trovare un elemento controllo elenco particolare. Il messaggio di notifica verrà inviato quando il controllo di visualizzazione elenco riceve rapido accesso alla chiave o quando riceve un messaggio LVM_FINDITEM. Informazioni di ricerca viene inviate in forma di un **LVFINDINFO** struttura, ovvero un membro del **NMLVFINDITEM** struttura. Gestire il messaggio eseguendo l'override di `OnChildNotify` funzione nell'elenco di controllo oggetto e all'interno del corpo del gestore, cercare il messaggio LVN_ODFINDITEM. Se trovato, eseguire l'azione appropriata.  
  
 È consigliabile essere preparati cercare un elemento che corrisponda alle informazioni fornite dal controllo visualizzazione elenco. È necessario restituire l'indice dell'elemento se ha esito positivo o -1 se viene trovato alcun elemento corrispondente.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

