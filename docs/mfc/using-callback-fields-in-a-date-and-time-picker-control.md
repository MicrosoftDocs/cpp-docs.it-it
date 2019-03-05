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
ms.openlocfilehash: 874f73df3dda3a720d4346ae3fb0136c662221db
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57299400"
---
# <a name="using-callback-fields-in-a-date-and-time-picker-control"></a>Utilizzo dei campi callback in un controllo selezione data e ora

Oltre ai caratteri di formato standard che definiscono i campi di selezione data e ora, è possibile personalizzare l'output specificando determinate parti di una stringa di formato personalizzato come campi callback. Per dichiarare un campo callback, includere uno o più caratteri "X" (codice ASCII 88) in un punto qualsiasi nel corpo della stringa di formato. Ad esempio, la stringa seguente "' oggi è: 'yy' / 'MM' / 'gg' (giorno 'X')'", il controllo di selezione data e ora visualizzare il valore corrente dell'anno di seguito dal mese di date e infine il giorno dell'anno.

> [!NOTE]
>  Il numero di x in un callback del campo non corrisponde al numero di caratteri che verrà visualizzato.

È possibile distinguere tra più campi callback in una stringa personalizzata ripetendo il carattere "X". Pertanto, la stringa di formato "XXddddMMMdd', ' yyyXXX" contiene due campi callback univoco "XX" e "XXX".

> [!NOTE]
>  Campi callback vengono trattati come campi validi, in modo che l'applicazione deve essere pronta a gestire i messaggi di notifica DTN_WMKEYDOWN.

Implementazione di campi callback nel controllo selezione data e ora è costituito da tre parti:

- Inizializzazione di stringa di formato personalizzata

- La gestione di DTN_FORMATQUERY (notifica)

- La gestione di DTN_FORMAT (notifica)

## <a name="initializing-the-custom-format-string"></a>Inizializzazione di stringa di formato personalizzata

Inizializza la stringa personalizzata con una chiamata a `CDateTimeCtrl::SetFormat`. Per altre informazioni, vedere [uso di stringhe di formato personalizzate in una data e ora controllo di selezione](../mfc/using-custom-format-strings-in-a-date-and-time-picker-control.md). Una posizione frequente per impostare la stringa di formato personalizzato è nel `OnInitDialog` funzione di classe della finestra che lo contiene o `OnInitialUpdate` funzione della classe di visualizzazione che lo contiene.

## <a name="handling-the-dtnformatquery-notification"></a>La gestione di DTN_FORMATQUERY (notifica)

Quando il controllo consente di analizzare la stringa di formato e rileva un campo callback, l'applicazione invia i messaggi di notifica di DTN_FORMAT e DTN_FORMATQUERY. Stringa del campo callback è incluso con le notifiche in modo che è possibile determinare quale campo callback viene eseguita la query.

DTN_FORMATQUERY (notifica) viene inviata per recuperare la dimensione massima consentita in pixel della stringa che verrà visualizzato nel campo callback corrente.

Per calcolare correttamente questo valore, è necessario calcolare l'altezza e la larghezza della stringa, deve essere sostituito per il campo con tipo di carattere del controllo. Il calcolo effettivo della stringa viene ottenuto facilmente con una chiamata per il [funzione GetTextExtentPoint32](/windows/desktop/api/wingdi/nf-wingdi-gettextextentpoint32a) funzione Win32. Dopo aver determinata le dimensioni, passare il valore all'applicazione e uscire dalla funzione del gestore.

L'esempio seguente è un metodo per fornire la dimensione della stringa di callback:

[!code-cpp[NVC_MFCControlLadenDialog#8](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_1.cpp)]

Dopo aver calcolata la dimensione del campo callback corrente, è necessario fornire un valore per il campo. Questa operazione viene eseguita nel gestore per il DTN_FORMAT (notifica).

## <a name="handling-the-dtnformat-notification"></a>La gestione di DTN_FORMAT (notifica)

DTN_FORMAT (notifica) viene usata dall'applicazione per richiedere la stringa di caratteri che sarà sostituita. Nell'esempio seguente viene illustrato un possibile metodo:

[!code-cpp[NVC_MFCControlLadenDialog#9](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_2.cpp)]

> [!NOTE]
>  Il puntatore per il **NMDATETIMEFORMAT** struttura viene calcolata eseguendo il cast del primo parametro del gestore notifica al tipo corretto.

## <a name="see-also"></a>Vedere anche

[Uso di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
