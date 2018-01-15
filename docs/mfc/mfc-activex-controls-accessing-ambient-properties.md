---
title: "Controlli ActiveX MFC: Accesso a proprietà di ambiente | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], accessing ambient properties
- properties [MFC], accessing ambient
ms.assetid: fdc9db29-e6b0-45d2-a879-8bd60e2058a7
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b05e6d37a0550cf157dcd43a22689c9db029b51f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-activex-controls-accessing-ambient-properties"></a>Controlli ActiveX MFC: accesso a proprietà di ambiente
In questo articolo viene illustrato un controllo ActiveX accedere a proprietà di ambiente del relativo contenitore del controllo.  
  
 Un controllo è possibile ottenere informazioni sul relativo contenitore accedendo alle proprietà di ambiente del contenitore. Queste proprietà espongono caratteristiche visive, ad esempio il colore di sfondo del contenitore, il tipo di carattere corrente utilizzato dal contenitore e caratteristiche operative, ad esempio se il contenitore è attualmente in modalità utente o della finestra di progettazione. Un controllo è possibile utilizzare le proprietà di ambiente per personalizzare l'aspetto e comportamento al contenitore in cui è incorporato. Tuttavia, un controllo non dovrebbe mai presupporre che il suo contenitore supporti qualsiasi proprietà di ambiente specifico. Infatti, alcuni contenitori potrebbero non supportare tutte le proprietà di ambiente affatto. In assenza di una proprietà di ambiente, è necessario presupporre un controllo che un valore predefinito appropriato.  
  
 Per accedere a una proprietà di ambiente, effettuare una chiamata a [COleControl:: getAmbientProperty](../mfc/reference/colecontrol-class.md#getambientproperty). Questa funzione prevede l'ID dispatch della proprietà di ambiente come primo parametro (il file OLECTL. H definisce gli ID di invio per il set standard di proprietà di ambiente).  
  
 I parametri del `GetAmbientProperty` funzione sono l'ID di invio, un tag di tipo variant che indica il tipo di proprietà previsto e un puntatore alla memoria in cui il valore deve essere restituito. Il tipo di dati a cui fa riferimento l'indicatore di misura può variare a seconda del tag di variante. La funzione restituisce **TRUE** se il contenitore supporta la proprietà, in caso contrario restituisce **FALSE**.  
  
 Il codice seguente viene ottenuto il valore della proprietà di ambiente denominata "UserMode". Se la proprietà non è supportata dal contenitore, un valore predefinito di **TRUE** equivale a:  
  
 [!code-cpp[NVC_MFC_AxUI#30](../mfc/codesnippet/cpp/mfc-activex-controls-accessing-ambient-properties_1.cpp)]  
  
 Per comodità, `COleControl` fornisce funzioni di supporto che può accedono a molte delle proprietà di ambiente comunemente usate e restituiscono i valori predefiniti appropriati quando le proprietà non sono disponibili. Queste funzioni di supporto sono i seguenti:  
  
-   [COleControl::AmbientBackColor](../mfc/reference/colecontrol-class.md#ambientbackcolor)  
  
-   [AmbientDisplayName](../mfc/reference/colecontrol-class.md#ambientdisplayname)  
  
-   [AmbientFont](../mfc/reference/colecontrol-class.md#ambientfont)  
  
    > [!NOTE]
    >  Chiamante deve chiamare **Release ()** sul carattere restituito.  
  
-   [AmbientForeColor](../mfc/reference/colecontrol-class.md#ambientforecolor)  
  
-   [AmbientLocaleID](../mfc/reference/colecontrol-class.md#ambientlocaleid)  
  
-   [AmbientScaleUnits](../mfc/reference/colecontrol-class.md#ambientscaleunits)  
  
-   [AmbientTextAlign](../mfc/reference/colecontrol-class.md#ambienttextalign)  
  
-   [AmbientUserMode](../mfc/reference/colecontrol-class.md#ambientusermode)  
  
-   [AmbientUIDead](../mfc/reference/colecontrol-class.md#ambientuidead)  
  
-   [AmbientShowHatching](../mfc/reference/colecontrol-class.md#ambientshowhatching)  
  
-   [AmbientShowGrabHandles](../mfc/reference/colecontrol-class.md#ambientshowgrabhandles)  
  
 Se si modifica il valore di una proprietà di ambiente (tramite un'azione del contenitore), il **OnAmbientPropertyChanged** viene chiamata la funzione membro del controllo. Eseguire l'override di questa funzione membro per gestire una notifica. Il parametro per **OnAmbientPropertyChanged** è l'ID dispatch della proprietà di ambiente interessata. Il valore di questo ID di invio può essere **DISPID_UNKNOWN**, che indica che uno o più proprietà di ambiente è stato modificato, ma non sono disponibili informazioni sulle proprietà interessate.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

