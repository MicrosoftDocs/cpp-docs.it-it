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
ms.openlocfilehash: 5d08c349253e62c15553cfa0452cee930b1a1876
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513515"
---
# <a name="using-callback-fields-in-a-date-and-time-picker-control"></a>Utilizzo dei campi callback in un controllo selezione data e ora

Oltre ai caratteri di formato standard che definiscono i campi selezione data e ora, è possibile personalizzare l'output specificando determinate parti di una stringa di formato personalizzata come campi callback. Per dichiarare un campo di callback, includere uno o più caratteri "X" (codice ASCII 88) in qualsiasi punto del corpo della stringa di formato. Ad esempio, la stringa seguente "' oggi è:' YY '/' MM '/' dd ' (giorno ' X ')'" fa sì che il controllo selezione data e ora visualizzi il valore corrente come anno seguito da mese, data e infine dal giorno dell'anno.

> [!NOTE]
>  Il numero di X in un campo di callback non corrisponde al numero di caratteri che verranno visualizzati.

È possibile distinguere tra più campi di callback in una stringa personalizzata ripetendo il carattere "X". Quindi, la stringa di formato "XXddddMMMdd", "yyyXXX" contiene due campi di callback univoci, "XX" e "XXX".

> [!NOTE]
>  I campi di callback vengono considerati campi validi, quindi l'applicazione deve essere preparata a gestire i messaggi di notifica DTN_WMKEYDOWN.

L'implementazione dei campi di callback nel controllo selezione data e ora è costituita da tre parti:

- Inizializzazione della stringa di formato personalizzata

- Gestione della notifica DTN_FORMATQUERY

- Gestione della notifica DTN_FORMAT

## <a name="initializing-the-custom-format-string"></a>Inizializzazione della stringa di formato personalizzata

Inizializzare la stringa personalizzata con una chiamata `CDateTimeCtrl::SetFormat`a. Per ulteriori informazioni, vedere [utilizzo di stringhe di formato personalizzate in un controllo selezione data e ora](../mfc/using-custom-format-strings-in-a-date-and-time-picker-control.md). Una posizione comune per impostare la stringa di formato personalizzata è la `OnInitDialog` funzione della classe o `OnInitialUpdate` della funzione della finestra di dialogo che contiene la classe di visualizzazione che lo contiene.

## <a name="handling-the-dtn_formatquery-notification"></a>Gestione della notifica DTN_FORMATQUERY

Quando il controllo analizza la stringa di formato e rileva un campo di callback, l'applicazione invia messaggi di notifica DTN_FORMAT e DTN_FORMATQUERY. La stringa di campo callback viene inclusa con le notifiche in modo da determinare quale campo di callback viene sottoposto a query.

Viene inviata la notifica DTN_FORMATQUERY per recuperare la dimensione massima consentita in pixel della stringa che verrà visualizzata nel campo di callback corrente.

Per calcolare correttamente questo valore, è necessario calcolare l'altezza e la larghezza della stringa, per sostituire il campo con il tipo di carattere visualizzato del controllo. Il calcolo effettivo della stringa è facilmente ottenibile con una chiamata alla funzione Win32 [GetTextExtentPoint32](/windows/win32/api/wingdi/nf-wingdi-gettextextentpoint32w) . Una volta determinata la dimensione, passare nuovamente il valore all'applicazione e uscire dalla funzione del gestore.

L'esempio seguente è un metodo per specificare le dimensioni della stringa di callback:

[!code-cpp[NVC_MFCControlLadenDialog#8](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_1.cpp)]

Una volta calcolate le dimensioni del campo di callback corrente, è necessario specificare un valore per il campo. Questa operazione viene eseguita nel gestore per la notifica DTN_FORMAT.

## <a name="handling-the-dtn_format-notification"></a>Gestione della notifica DTN_FORMAT

La notifica DTN_FORMAT viene utilizzata dall'applicazione per richiedere la stringa di caratteri che verrà sostituita. Nell'esempio seguente viene illustrato un metodo possibile:

[!code-cpp[NVC_MFCControlLadenDialog#9](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_2.cpp)]

> [!NOTE]
>  Il puntatore alla struttura **NMDATETIMEFORMAT** viene trovato eseguendo il cast del primo parametro del gestore di notifiche al tipo appropriato.

## <a name="see-also"></a>Vedere anche

[Uso di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
