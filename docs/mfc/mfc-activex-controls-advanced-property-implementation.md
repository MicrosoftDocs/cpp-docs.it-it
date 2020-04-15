---
title: 'Controlli ActiveX MFC: implementazione di proprietà avanzate'
ms.date: 09/12/2018
helpviewer_keywords:
- MFC ActiveX controls [MFC], error codes
- properties [MFC], ActiveX controls
- MFC ActiveX controls [MFC], properties
ms.assetid: ec2e6759-5a8e-41d8-a275-99af8ff6f32e
ms.openlocfilehash: d4f1265e6540e9f84bdb680e7948a4e308d31bb0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364642"
---
# <a name="mfc-activex-controls-advanced-property-implementation"></a>Controlli ActiveX MFC: implementazione di proprietà avanzate

In questo articolo vengono descritti gli argomenti relativi all'implementazione di proprietà avanzate in un controllo ActiveX.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

- [Proprietà di sola lettura e di sola scrittura](#_core_read2donly_and_write2donly_properties)

- [Restituzione di codici di errore da una proprietàReturning error codes from a property](#_core_returning_error_codes_from_a_property)

## <a name="read-only-and-write-only-properties"></a><a name="_core_read2donly_and_write2donly_properties"></a>Proprietà di sola lettura e di sola scritturaRead-Only and Write-Only Properties

L'Aggiunta guidata proprietà fornisce un metodo semplice e veloce per implementare proprietà di sola lettura o di sola scrittura per il controllo.

#### <a name="to-implement-a-read-only-or-write-only-property"></a>Per implementare una proprietà di sola lettura o di sola scritturaTo implement a read-only or write-only property

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.

   Verrà visualizzata [l'Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).

1. Nella casella **Nome proprietà** digitare il nome della proprietà.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Nella casella **Tipo di proprietà** selezionare il tipo appropriato per la proprietà.

1. Se si desidera una proprietà di sola lettura, deselezionare il nome della funzione Set. Se si desidera una proprietà di sola scrittura, deselezionare il nome della funzione Get.

1. Fare clic su **Fine**.

In questo caso, l'Aggiunta guidata `SetNotSupported` proprietà `GetNotSupported` inserisce la funzione o nella voce della mappa di invio al posto di una normale funzione Set o Get.

Se si desidera modificare una proprietà esistente in sola lettura o in sola scrittura, è possibile modificare manualmente la mappa di invio e rimuovere la funzione Set o Get non necessaria dalla classe del controllo.

Se si desidera che una proprietà sia di sola lettura o di sola scrittura in modo condizionale (ad esempio, solo quando il `SetNotSupported` controllo `GetNotSupported` funziona in una determinata modalità), è possibile fornire la funzione Set o Get, come di consueto, e chiamare la funzione o se appropriato. Ad esempio:

[!code-cpp[NVC_MFC_AxUI#29](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-property-implementation_1.cpp)]

In questo `SetNotSupported` esempio `m_bReadOnlyMode` di codice viene chiamato se il membro dati è **TRUE**. Se **FALSE**, la proprietà viene impostata sul nuovo valore.

## <a name="returning-error-codes-from-a-property"></a><a name="_core_returning_error_codes_from_a_property"></a>Restituzione di codici di errore da una proprietàReturning Error Codes From a Property

Per indicare che si è verificato un errore durante `COleControl::ThrowError` il tentativo di ottenere o impostare una proprietà, utilizzare la funzione , che accetta un SCODE (codice di stato) come parametro. È possibile utilizzare uno SCODE predefinito o definirne uno personalizzato. Per un elenco di SCODE predefiniti e istruzioni per la definizione di SCODE personalizzati, vedere [Gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nell'articolo Controlli ActiveX: Argomenti avanzati.

Le funzioni di supporto esistono per i SCOD più comuni, ad esempio [COleControl::SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported)e [COleControl::SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).

> [!NOTE]
> `ThrowError`è progettato per essere utilizzato solo come mezzo per restituire un errore dall'interno della funzione Get o Set di una proprietà o un metodo di automazione. Queste sono le uniche volte in cui il gestore di eccezioni appropriato sarà presente nello stack.

Per altre informazioni sulla segnalazione di eccezioni in altre aree del codice, vedere [COleControl::FireError](../mfc/reference/colecontrol-class.md#fireerror) e la sezione [Gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nell'articolo Controlli ActiveX: argomenti avanzati.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
