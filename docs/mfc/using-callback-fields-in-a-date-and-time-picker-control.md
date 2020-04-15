---
title: Utilizzo dei campi callback in un controllo selezione data e ora
ms.date: 11/04/2016
f1_keywords:
- DTN_FORMATQUERY
- DTN_FORMAT
helpviewer_keywords:
- DateTimePicker control [MFC], callback fields
- callback fields in CDateTimeCtrl class [MFC]
- CDateTimeCtrl class [MFC], callback fields
- CDateTimeCtrl class [MFC], handling DTN_FORMAT and DTN_FORMATQ
- DTN_FORMATQUERY notification [MFC]
- DTN_FORMAT notification [MFC]
- DateTimePicker control [MFC]
ms.assetid: 404f4ba9-cba7-4718-9faa-bc6b274a723f
ms.openlocfilehash: 50350e51b6747d8c010db9d0dcaa9dff2e56e1f3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366561"
---
# <a name="using-callback-fields-in-a-date-and-time-picker-control"></a>Utilizzo dei campi callback in un controllo selezione data e ora

Oltre ai caratteri di formato standard che definiscono i campi di selezione data e ora, è possibile personalizzare l'output specificando determinate parti di una stringa di formato personalizzata come campi callback. Per dichiarare un campo callback, includere uno o più caratteri "X" (codice ASCII 88) in qualsiasi punto del corpo della stringa di formato. Ad esempio, la stringa seguente "'Oggi è: 'yy'/'MM'/'dd' (Giorno 'X')'"fa sì che il controllo selezione data e ora visualizzi il valore corrente come anno seguito dal mese, dalla data e infine dal giorno dell'anno.

> [!NOTE]
> Il numero di X in un campo callback non corrisponde al numero di caratteri che verranno visualizzati.

È possibile distinguere tra più campi callback in una stringa personalizzata ripetendo il carattere "X". Pertanto, la stringa di formato "XXddddMMMdd", 'yyyXXX" contiene due campi di callback univoci, "XX" e "XXX".

> [!NOTE]
> I campi callback vengono considerati come campi validi, pertanto l'applicazione deve essere preparata per gestire i messaggi di notifica DTN_WMKEYDOWN.

L'implementazione dei campi callback nel controllo selezione data e ora è costituita da tre parti:Implementing callback fields in your date and time picker control consists of three parts:

- Inizializzazione della stringa di formato personalizzata

- Gestione della notifica DTN_FORMATQUERY

- Gestione della notifica DTN_FORMAT

## <a name="initializing-the-custom-format-string"></a>Inizializzazione della stringa di formato personalizzata

Inizializzare la stringa personalizzata con una chiamata a `CDateTimeCtrl::SetFormat`. Per ulteriori informazioni, vedere Utilizzo di stringhe di [formato personalizzate in un controllo selezione data e ora](../mfc/using-custom-format-strings-in-a-date-and-time-picker-control.md). Una posizione comune per impostare la `OnInitDialog` stringa di formato `OnInitialUpdate` personalizzata è nella funzione della classe di finestre di dialogo contenitore o funzione della classe di visualizzazione che la contiene.

## <a name="handling-the-dtn_formatquery-notification"></a>Gestione della notifica DTN_FORMATQUERY

Quando il controllo analizza la stringa di formato e rileva un campo callback, l'applicazione invia DTN_FORMAT e DTN_FORMATQUERY messaggi di notifica. La stringa del campo callback è inclusa nelle notifiche in modo da poter determinare quale campo di callback viene eseguita una query.

La notifica DTN_FORMATQUERY viene inviata per recuperare la dimensione massima consentita in pixel della stringa che verrà visualizzata nel campo di callback corrente.

Per calcolare correttamente questo valore, è necessario calcolare l'altezza e la larghezza della stringa, da sostituire al campo, utilizzando il tipo di carattere di visualizzazione del controllo. Il calcolo effettivo della stringa è facilmente raggiungibile con una chiamata alla funzione [Win32 GetTextExtentPoint32.](/windows/win32/api/wingdi/nf-wingdi-gettextextentpoint32w) Una volta determinata la dimensione, passare nuovamente il valore all'applicazione e uscire dalla funzione del gestore.

L'esempio seguente è un metodo per fornire la dimensione della stringa di callback:

[!code-cpp[NVC_MFCControlLadenDialog#8](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_1.cpp)]

Una volta calcolata la dimensione del campo callback corrente, è necessario fornire un valore per il campo. Questa operazione viene eseguita nel gestore per la notifica di DTN_FORMAT.

## <a name="handling-the-dtn_format-notification"></a>Gestione della notifica DTN_FORMAT

La notifica DTN_FORMAT viene utilizzata dall'applicazione per richiedere la stringa di caratteri che verrà sostituita. Nell'esempio seguente viene illustrato un possibile metodo:The following example demonstrates one possible method:

[!code-cpp[NVC_MFCControlLadenDialog#9](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_2.cpp)]

> [!NOTE]
> Il puntatore alla struttura **NMDATETIMEFORMAT** viene trovato eseguendo il cast del primo parametro del gestore di notifica al tipo appropriato.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
