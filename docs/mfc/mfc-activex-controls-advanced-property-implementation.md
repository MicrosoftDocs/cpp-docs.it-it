---
title: 'Controlli ActiveX MFC: Avanzato implementazione di proprietà | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], error codes
- properties [MFC], ActiveX controls
- MFC ActiveX controls [MFC], properties
ms.assetid: ec2e6759-5a8e-41d8-a275-99af8ff6f32e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f18d9466c1608742f63e68caa639c1ad6697df1c
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50063653"
---
# <a name="mfc-activex-controls-advanced-property-implementation"></a>Controlli ActiveX MFC: implementazione di proprietà avanzate

Questo articolo descrive gli argomenti relativi all'implementazione avanzata delle proprietà in un controllo ActiveX.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituisce ActiveX, vedere [controlli ActiveX](activex-controls.md).

- [Proprietà di sola lettura e in sola lettura](#_core_read2donly_and_write2donly_properties)

- [Restituzione di codici di errore da una proprietà](#_core_returning_error_codes_from_a_property)

##  <a name="_core_read2donly_and_write2donly_properties"></a> Proprietà di sola lettura e in sola lettura

L'aggiunta guidata proprietà fornisce un metodo rapido e semplice per implementare le proprietà di sola lettura o in sola lettura per il controllo.

#### <a name="to-implement-a-read-only-or-write-only-property"></a>Per implementare una proprietà di sola lettura o in sola lettura

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.

   Verrà visualizzata la [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).

1. Nel **nome della proprietà** , digitare il nome della proprietà.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Nel **tipo di proprietà** , selezionare il tipo appropriato per la proprietà.

1. Se si desidera che una proprietà di sola lettura, cancellare il nome della funzione Set. Se si desidera che una proprietà di sola scrittura, cancellare il nome della funzione Get.

9. Scegliere **Fine**.

Quando si esegue questa operazione, l'aggiunta guidata proprietà inserisce la funzione `SetNotSupported` o `GetNotSupported` nella voce mappa del recapito al posto di un normale Set o Get (funzione).

Se si desidera modificare una proprietà esistente da sola lettura o in sola lettura, è possibile modificare manualmente la mappa di invio e rimuovere la funzione Get o Set non necessaria dalla classe control.

Se si desidera che una proprietà in modo condizionale in sola lettura o in sola lettura (ad esempio, solo quando il controllo opera in una modalità specifica), è possibile fornire la funzione Set o Get, come di consueto e chiama il `SetNotSupported` o `GetNotSupported` funzione nei casi appropriati. Ad esempio:

[!code-cpp[NVC_MFC_AxUI#29](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-property-implementation_1.cpp)]

Questo codice di esempio chiama `SetNotSupported` se il `m_bReadOnlyMode` membro dati viene **TRUE**. Se **FALSE**, quindi la proprietà è impostata sul nuovo valore.

##  <a name="_core_returning_error_codes_from_a_property"></a> Restituzione di codici di errore da una proprietà

Per indicare che si è verificato un errore durante il tentativo di ottenere o impostare una proprietà, usare il `COleControl::ThrowError` funzione che accetta un SCODE (codice di stato) come parametro. È possibile usare un SCODE predefinito o definirne uno proprio. Per un elenco di predefinite SCODEs e istruzioni per la definizione SCODEs personalizzati, vedere [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveX articolo: argomenti avanzati.

Esistono funzioni di supporto per i più comuni predefinite, ad esempio, SCODEs [COleControl:: SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported), e [COleControl::SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).

> [!NOTE]
>  `ThrowError` deve essere usata solo come mezzo per la restituzione di un errore da all'interno Get della proprietà o Set di funzione o un metodo di automazione. Questi sono gli unici volte in cui il gestore di eccezioni appropriato saranno presentano nello stack.

Per altre informazioni sulla segnalazione di eccezioni in altre aree del codice, vedere [COleControl:: FireError](../mfc/reference/colecontrol-class.md#fireerror) e nella sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nell'articolo di controlli ActiveX: avanzate Negli argomenti.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
