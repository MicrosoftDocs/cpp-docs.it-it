---
title: Formattazione caratteri nei controlli Rich Edit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- formatting [MFC], characters
- rich edit controls [MFC], character formatting in
- CRichEditCtrl class [MFC], character formatting in
ms.assetid: c80f4305-75ad-45f9-8d17-d83d0fe79be5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c02165635e8715c1fcac28b9fbee72612b72c1f2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="character-formatting-in-rich-edit-controls"></a>Formattazione caratteri nei controlli Rich Edit
È possibile utilizzare le funzioni membro del controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per formattare i caratteri e recuperare informazioni di formattazione. Per i caratteri, è possibile specificare carattere tipografico, dimensione, colore ed effetti, ad esempio grassetto, corsivo e protetto.  
  
 È possibile applicare la formattazione di carattere, utilizzando il [SetSelectionCharFormat](../mfc/reference/cricheditctrl-class.md#setselectioncharformat) e [SetWordCharFormat](../mfc/reference/cricheditctrl-class.md#setwordcharformat) funzioni membro. Per determinare il carattere corrente di formattazione per il testo selezionato, utilizzare il [funzione membro GetSelectionCharFormat](../mfc/reference/cricheditctrl-class.md#getselectioncharformat) funzione membro. Il [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) struttura viene utilizzata con queste funzioni membro per specificare gli attributi di tipo carattere. Uno dei membri importanti di **CHARFORMAT** è **dwMask**. In `SetSelectionCharFormat` e `SetWordCharFormat`, **dwMask** specifica quali attributi di carattere verranno impostati dalla chiamata di funzione. `GetSelectionCharFormat` Restituisce gli attributi del primo carattere nella selezione; **dwMask** specifica gli attributi coerenti nella selezione.  
  
 È anche possibile ottenere e impostare il "formattazione dei caratteri predefinita," che è la formattazione applicata a tutti i caratteri inseriti successivamente. Ad esempio, se un'applicazione imposta la formattazione in grassetto di carattere predefinito e l'utente digita un carattere, tale carattere è in grassetto. Per ottenere e impostare la formattazione di carattere predefinito, utilizzare il [funzioni membro GetDefaultCharFormat](../mfc/reference/cricheditctrl-class.md#getdefaultcharformat) e [SetDefaultCharFormat](../mfc/reference/cricheditctrl-class.md#setdefaultcharformat) funzioni membro.  
  
 L'attributo "protetto" carattere non modifica l'aspetto del testo. Se l'utente tenta di modificare un testo protetto, un controllo rich edit invia alla finestra padre un **EN_PROTECTED affinché** messaggio di notifica, la finestra padre consentire o impedire la modifica. Per ricevere questo messaggio di notifica, è necessario abilitarlo utilizzando il [SetEventMask](../mfc/reference/cricheditctrl-class.md#seteventmask) funzione membro. Per ulteriori informazioni sulla maschera eventi, vedere [notifiche da un controllo Rich Edit](../mfc/notifications-from-a-rich-edit-control.md), più avanti in questo argomento.  
  
 Colore di primo piano è un attributo di tipo carattere, ma il colore di sfondo è una proprietà del controllo rich edit. Per impostare il colore di sfondo, utilizzare il [funzione membro SetBackgroundColor](../mfc/reference/cricheditctrl-class.md#setbackgroundcolor) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

