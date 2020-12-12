---
description: 'Altre informazioni su: controlli ActiveX MFC: accesso alle proprietà di ambiente'
title: 'Controlli ActiveX MFC: accesso a proprietà di ambiente'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], accessing ambient properties
- properties [MFC], accessing ambient
ms.assetid: fdc9db29-e6b0-45d2-a879-8bd60e2058a7
ms.openlocfilehash: 6b553c73873a6f96cab3ab55b576a51045c06609
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203068"
---
# <a name="mfc-activex-controls-accessing-ambient-properties"></a>Controlli ActiveX MFC: accesso a proprietà di ambiente

Questo articolo illustra in che modo un controllo ActiveX può accedere alle proprietà di ambiente del relativo contenitore di controlli.

Un controllo può ottenere informazioni sul relativo contenitore accedendo alle proprietà di ambiente del contenitore. Queste proprietà espongono caratteristiche visive, ad esempio il colore di sfondo del contenitore, il tipo di carattere corrente utilizzato dal contenitore e le caratteristiche operative, ad esempio se il contenitore è attualmente in modalità utente o in modalità di progettazione. Un controllo può usare le proprietà di ambiente per adattarne l'aspetto e il comportamento al contenitore specifico in cui è incorporato. Tuttavia, un controllo non deve mai presupporre che il relativo contenitore supporterà una particolare proprietà di ambiente. Infatti, alcuni contenitori potrebbero non supportare alcuna proprietà di ambiente. In assenza di una proprietà di ambiente, un controllo deve presupporre un valore predefinito ragionevole.

Per accedere a una proprietà di ambiente, effettuare una chiamata a [COleControl:: GetAmbientProperty](reference/colecontrol-class.md#getambientproperty). Questa funzione prevede l'ID dispatch della proprietà di ambiente come primo parametro (il file OLECTL. H definisce gli ID di invio per il set standard di proprietà di ambiente.

I parametri della `GetAmbientProperty` funzione sono l'ID dispatch, un tag Variant che indica il tipo di proprietà previsto e un puntatore alla memoria in cui deve essere restituito il valore. Il tipo di dati a cui fa riferimento il puntatore varia a seconda del tag Variant. La funzione restituisce **true** se il contenitore supporta la proprietà; in caso contrario, restituisce **false**.

Nell'esempio di codice seguente viene ottenuto il valore della proprietà di ambiente denominata "UserMode". Se la proprietà non è supportata dal contenitore, viene utilizzato un valore predefinito **true** :

[!code-cpp[NVC_MFC_AxUI#30](codesnippet/cpp/mfc-activex-controls-accessing-ambient-properties_1.cpp)]

Per praticità, `COleControl` fornisce funzioni di supporto che accedono a molte delle proprietà di ambiente di uso comune e restituiscono le impostazioni predefinite appropriate quando le proprietà non sono disponibili. Queste funzioni helper sono le seguenti:

- [COleControl:: AmbientBackColor](reference/colecontrol-class.md#ambientbackcolor)

- [AmbientDisplayName](reference/colecontrol-class.md#ambientdisplayname)

- [AmbientFont](reference/colecontrol-class.md#ambientfont)

    > [!NOTE]
    >  Il chiamante deve chiamare `Release( )` sul tipo di carattere restituito.

- [AmbientForeColor](reference/colecontrol-class.md#ambientforecolor)

- [AmbientLocaleID](reference/colecontrol-class.md#ambientlocaleid)

- [AmbientScaleUnits](reference/colecontrol-class.md#ambientscaleunits)

- [AmbientTextAlign](reference/colecontrol-class.md#ambienttextalign)

- [AmbientUserMode](reference/colecontrol-class.md#ambientusermode)

- [AmbientUIDead](reference/colecontrol-class.md#ambientuidead)

- [AmbientShowHatching](reference/colecontrol-class.md#ambientshowhatching)

- [AmbientShowGrabHandles](reference/colecontrol-class.md#ambientshowgrabhandles)

Se il valore di una proprietà di ambiente viene modificato (tramite un'azione del contenitore), `OnAmbientPropertyChanged` viene chiamata la funzione membro del controllo. Eseguire l'override di questa funzione membro per gestire una notifica di questo tipo. Il parametro per `OnAmbientPropertyChanged` è l'ID dispatch della proprietà di ambiente interessata. Il valore di questo ID di invio può essere DISPID_UNKNOWN, che indica che una o più proprietà di ambiente sono state modificate, ma le informazioni sulle proprietà interessate non sono disponibili.

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
