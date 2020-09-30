---
title: 'Controlli ActiveX MFC: implementazione di proprietà avanzate'
ms.date: 09/12/2018
helpviewer_keywords:
- MFC ActiveX controls [MFC], error codes
- properties [MFC], ActiveX controls
- MFC ActiveX controls [MFC], properties
ms.assetid: ec2e6759-5a8e-41d8-a275-99af8ff6f32e
ms.openlocfilehash: 017959c5809d324af6ab13247fd093a6df280dab
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502201"
---
# <a name="mfc-activex-controls-advanced-property-implementation"></a>Controlli ActiveX MFC: implementazione di proprietà avanzate

Questo articolo descrive gli argomenti relativi all'implementazione di proprietà avanzate in un controllo ActiveX.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

- [Proprietà di sola lettura e di sola scrittura](#_core_read2donly_and_write2donly_properties)

- [Restituzione di codici di errore da una proprietà](#_core_returning_error_codes_from_a_property)

## <a name="read-only-and-write-only-properties"></a><a name="_core_read2donly_and_write2donly_properties"></a> Proprietà di sola lettura e di sola scrittura

L'aggiunta guidata proprietà fornisce un metodo semplice e rapido per implementare le proprietà di sola lettura o di sola scrittura per il controllo.

#### <a name="to-implement-a-read-only-or-write-only-property"></a>Per implementare una proprietà di sola lettura o di sola scrittura

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.

   Verrà visualizzata l' [Aggiunta guidata proprietà](../ide/adding-a-property-visual-cpp.md#names-add-property-wizard).

1. Nella casella **nome proprietà** Digitare il nome della proprietà.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Nella casella **tipo proprietà** selezionare il tipo appropriato per la proprietà.

1. Se si desidera una proprietà di sola lettura, deselezionare il nome della funzione set. Se si vuole una proprietà di sola scrittura, deselezionare il nome della funzione Get.

1. Fare clic su **Fine**.

Quando si esegue questa operazione, l'aggiunta guidata proprietà inserisce la funzione `SetNotSupported` o `GetNotSupported` nella voce della mappa di invio al posto di una normale funzione set o Get.

Se si desidera modificare una proprietà esistente in modalità di sola lettura o di sola scrittura, è possibile modificare manualmente la mappa di invio e rimuovere la funzione set o Get superflua dalla classe del controllo.

Se si desidera che una proprietà sia di sola lettura o di sola scrittura (ad esempio, solo quando il controllo opera in una modalità particolare), è possibile specificare la funzione set o Get come di consueto e chiamare la `SetNotSupported` `GetNotSupported` funzione o laddove appropriato. Ad esempio:

[!code-cpp[NVC_MFC_AxUI#29](codesnippet/cpp/mfc-activex-controls-advanced-property-implementation_1.cpp)]

Questo esempio di codice chiama `SetNotSupported` se il `m_bReadOnlyMode` membro dati è **true**. Se **false**, la proprietà viene impostata sul nuovo valore.

## <a name="returning-error-codes-from-a-property"></a><a name="_core_returning_error_codes_from_a_property"></a> Restituzione di codici di errore da una proprietà

Per indicare che si è verificato un errore durante il tentativo di ottenere o impostare una proprietà, usare la `COleControl::ThrowError` funzione, che accetta un valore SCODE (codice di stato) come parametro. È possibile usare un SCODE predefinito o definire uno dei propri. Per un elenco di SCODE predefinite e istruzioni per la definizione di SCODE personalizzati, vedere [gestione degli errori nel controllo ActiveX](mfc-activex-controls-advanced-topics.md) nell'articolo controlli ActiveX: argomenti avanzati.

Sono disponibili funzioni di supporto per i SCODE predefiniti più comuni, ad esempio [COleControl:: SetNotSupported](reference/colecontrol-class.md#setnotsupported), [COleControl:: GetNotSupported](reference/colecontrol-class.md#getnotsupported)e [COleControl:: SetNotPermitted](reference/colecontrol-class.md#setnotpermitted).

> [!NOTE]
> `ThrowError` deve essere usato solo come mezzo per restituire un errore all'interno di una funzione Get o set di una proprietà o di un metodo di automazione. Queste sono le uniche volte in cui il gestore di eccezioni appropriato sarà presente nello stack.

Per ulteriori informazioni sulla creazione di report sulle eccezioni in altre aree del codice, vedere [COleControl:: FireError (](reference/colecontrol-class.md#fireerror) e la sezione [gestione degli errori nel controllo ActiveX](mfc-activex-controls-advanced-topics.md) nell'articolo controlli ActiveX: argomenti avanzati.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: Proprietà](mfc-activex-controls-properties.md)<br/>
[Controlli ActiveX MFC: metodi](mfc-activex-controls-methods.md)<br/>
[COleControl (classe)](reference/colecontrol-class.md)
