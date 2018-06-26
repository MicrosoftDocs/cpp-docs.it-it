---
title: 'Controlli ActiveX MFC: Implementazione della proprietà di Advanced | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 2eb3ba387d4b6fcca7b30cd360dff84b9da4302a
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928364"
---
# <a name="mfc-activex-controls-advanced-property-implementation"></a>Controlli ActiveX MFC: implementazione di proprietà avanzate
Questo articolo vengono descritti argomenti relativi all'implementazione di proprietà in un controllo ActiveX avanzate:  
  
-   [Proprietà di sola lettura e, di sola scrittura](#_core_read2donly_and_write2donly_properties)  
  
-   [Restituzione di codici di errore da una proprietà](#_core_returning_error_codes_from_a_property)  
  
##  <a name="_core_read2donly_and_write2donly_properties"></a> Proprietà di sola lettura e, di sola scrittura  
 L'aggiunta guidata proprietà fornisce un metodo rapido e semplice per implementare le proprietà di sola lettura o di sola scrittura per il controllo.  
  
#### <a name="to-implement-a-read-only-or-write-only-property"></a>Per implementare una proprietà di sola lettura o di sola scrittura  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà visualizzata la [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).  
  
5.  Nel **nome della proprietà** , digitare il nome della proprietà.  
  
6.  Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.  
  
7.  Nel **tipo di proprietà** , selezionare il tipo corretto per la proprietà.  
  
8.  Se si desidera che una proprietà di sola lettura, cancellare il nome della funzione Set. Se si desidera che una proprietà di sola scrittura, cancellare il nome della funzione Get.  
  
9. Scegliere **Fine**.  
  
 Quando si esegue questa operazione, l'aggiunta guidata proprietà inserisce la funzione `SetNotSupported` o `GetNotSupported` nella voce della mappa di invio al posto di un normale Set o Get (funzione).  
  
 Se si desidera modificare una proprietà esistente trasformandolo in sola lettura o di sola scrittura, è possibile modificare manualmente la mappa di invio e rimuovere la funzione Get o Set non necessaria dalla classe control.  
  
 Se si desidera che una proprietà sia in modo condizionale-sola lettura o di sola scrittura (ad esempio, solo quando il controllo opera in una modalità specifica), è possibile fornire la funzione Set o Get, come al solito e chiamare il `SetNotSupported` o `GetNotSupported` funzione in cui è appropriato. Ad esempio:  
  
 [!code-cpp[NVC_MFC_AxUI#29](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-property-implementation_1.cpp)]  
  
 Questo codice di esempio chiama `SetNotSupported` se il `m_bReadOnlyMode` membro dati è **TRUE**. Se **FALSE**, quindi la proprietà è impostata sul nuovo valore.  
  
##  <a name="_core_returning_error_codes_from_a_property"></a> Restituzione di codici di errore da una proprietà  
 Per indicare che si è verificato un errore durante il tentativo di ottenere o impostare una proprietà, utilizzare il `COleControl::ThrowError` (funzione), che utilizza un SCODE (codice di stato) come parametro. È possibile utilizzare un SCODE predefinito o definirne uno proprio. Per un elenco di predefiniti SCODEs e istruzioni per la definizione SCODEs personalizzati, vedere [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nell'articolo controlli ActiveX: argomenti avanzati.  
  
 Esistono funzioni di supporto per più comuni predefinite SCODEs, ad esempio [COleControl:: SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported), e [COleControl::SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).  
  
> [!NOTE]
>  `ThrowError` deve essere utilizzata solo come mezzo per la restituzione di un errore dall'interno Get di una proprietà o Set di funzione o un metodo di automazione. Queste sono le uniche volte in cui il gestore di eccezioni appropriato sarà presentano nello stack.  
  
 Per ulteriori informazioni sulla segnalazione eccezioni in altre aree del codice, vedere [COleControl:: FireError](../mfc/reference/colecontrol-class.md#fireerror) e la sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nell'articolo di controlli ActiveX: avanzate Negli argomenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [Classe COleControl](../mfc/reference/colecontrol-class.md)
