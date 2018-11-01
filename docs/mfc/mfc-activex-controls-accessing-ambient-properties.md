---
title: 'Controlli ActiveX MFC: accesso a proprietà di ambiente'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], accessing ambient properties
- properties [MFC], accessing ambient
ms.assetid: fdc9db29-e6b0-45d2-a879-8bd60e2058a7
ms.openlocfilehash: f6daff09969e82daa4e8f76c8b1eb4972ddd6eeb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50585627"
---
# <a name="mfc-activex-controls-accessing-ambient-properties"></a>Controlli ActiveX MFC: accesso a proprietà di ambiente

Questo articolo illustra come un controllo ActiveX può accedere a proprietà di ambiente del proprio contenitore di controlli.

Un controllo è possibile ottenere informazioni sul relativo contenitore eseguendo l'accesso a proprietà di ambiente del contenitore. Queste proprietà espongono le caratteristiche visive, ad esempio il colore di sfondo del contenitore, il tipo di carattere corrente utilizzata dal contenitore e le caratteristiche operative, ad esempio se il contenitore è attualmente in modalità utente o della finestra di progettazione. Un controllo è possibile utilizzare le proprietà di ambiente per personalizzare l'aspetto e comportamento al contenitore in cui è incorporato. Tuttavia, un controllo non deve mai presupporre che il relativo contenitore supporterà qualsiasi proprietà di ambiente specifico. Infatti, alcuni contenitori potrebbero non supportare tutte le proprietà di ambiente affatto. In assenza di una proprietà di ambiente, un controllo deve presupporre un valore predefinito appropriato.

Per accedere a una proprietà di ambiente, effettuare una chiamata a [COleControl:: getAmbientProperty](../mfc/reference/colecontrol-class.md#getambientproperty). Questa funzione si aspetta che l'ID dispatch della proprietà di ambiente come primo parametro (il file OLECTL. H definisce l'ID dispatch per il set standard di proprietà di ambiente).

I parametri del `GetAmbientProperty` funzione sono l'ID di invio, un tag variant che indica il tipo previsto della proprietà e un puntatore alla memoria in cui il valore deve essere restituito. Il tipo di dati a cui fa riferimento questo puntatore variano a seconda del tag variant. La funzione restituisce **TRUE** se il contenitore supporta la proprietà, in caso contrario, restituisce **FALSE**.

L'esempio di codice seguente ottiene il valore della proprietà di ambiente denominata "UserMode". Se la proprietà non è supportata dal contenitore, valore predefinito è **TRUE** si presuppone che:

[!code-cpp[NVC_MFC_AxUI#30](../mfc/codesnippet/cpp/mfc-activex-controls-accessing-ambient-properties_1.cpp)]

Per praticità, `COleControl` fornisce funzioni di supporto di utilizzare molte delle proprietà di ambiente usate e restituiscono i valori predefiniti appropriati quando non sono disponibili le proprietà. Queste funzioni helper sono i seguenti:

- [COleControl::AmbientBackColor](../mfc/reference/colecontrol-class.md#ambientbackcolor)

- [AmbientDisplayName](../mfc/reference/colecontrol-class.md#ambientdisplayname)

- [AmbientFont](../mfc/reference/colecontrol-class.md#ambientfont)

    > [!NOTE]
    >  Chiamante deve chiamare `Release( )` sul carattere restituito.

- [AmbientForeColor](../mfc/reference/colecontrol-class.md#ambientforecolor)

- [AmbientLocaleID](../mfc/reference/colecontrol-class.md#ambientlocaleid)

- [AmbientScaleUnits](../mfc/reference/colecontrol-class.md#ambientscaleunits)

- [AmbientTextAlign](../mfc/reference/colecontrol-class.md#ambienttextalign)

- [AmbientUserMode](../mfc/reference/colecontrol-class.md#ambientusermode)

- [AmbientUIDead](../mfc/reference/colecontrol-class.md#ambientuidead)

- [AmbientShowHatching](../mfc/reference/colecontrol-class.md#ambientshowhatching)

- [AmbientShowGrabHandles](../mfc/reference/colecontrol-class.md#ambientshowgrabhandles)

Se cambia il valore della proprietà di ambiente (tramite un'azione del contenitore), il `OnAmbientPropertyChanged` viene chiamata la funzione membro del controllo. Eseguire l'override di questa funzione membro per gestire una notifica. Il parametro per `OnAmbientPropertyChanged` è l'ID dispatch della proprietà di ambiente interessata. Il valore di questo ID di invio può essere DISPID_UNKNOWN, che indica che uno o più proprietà di ambiente è stato modificato, ma non sono disponibili informazioni su quali proprietà sono state interessate.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

