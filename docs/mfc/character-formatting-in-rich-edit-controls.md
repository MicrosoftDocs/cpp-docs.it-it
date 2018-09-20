---
title: Formattazione caratteri nei controlli Rich Edit | Microsoft Docs
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
ms.openlocfilehash: 75ac8637e5157434cd5729695b30a443bbd31cf5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46403162"
---
# <a name="character-formatting-in-rich-edit-controls"></a>Formattazione caratteri nei controlli Rich Edit

È possibile usare funzioni di membro del controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per formattare i caratteri e recuperare le informazioni di formattazione. Per i caratteri, è possibile specificare il carattere tipografico, le dimensioni, colore ed effetti come grassetto, corsivo e protetti.

È possibile applicare la formattazione dei caratteri utilizzando la [SetSelectionCharFormat](../mfc/reference/cricheditctrl-class.md#setselectioncharformat) e [SetWordCharFormat](../mfc/reference/cricheditctrl-class.md#setwordcharformat) funzioni membro. Per determinare il carattere corrente di formattazione per il testo selezionato, usare il [funzione membro GetSelectionCharFormat](../mfc/reference/cricheditctrl-class.md#getselectioncharformat) funzione membro. Il [CHARFORMAT](/windows/desktop/api/richedit/ns-richedit-_charformat) struttura viene utilizzata con queste funzioni membro per specificare gli attributi di carattere. Uno dei membri importanti della **CHARFORMAT** viene **dwMask**. Nelle `SetSelectionCharFormat` e `SetWordCharFormat`, **dwMask** specifica quali attributi di carattere verranno impostate dalla chiamata di funzione. `GetSelectionCharFormat` Restituisce gli attributi del primo carattere nella selezione; **dwMask** specifica gli attributi coerenti nella selezione.

È anche possibile ottenere e impostare "formattazione carattere predefinita," che è la formattazione applicata a qualsiasi carattere successivamente inseriti. Ad esempio, se un'applicazione imposta il carattere predefinito di formattazione in grassetto e l'utente digita un carattere, tale carattere è in grassetto. Per ottenere e impostare la formattazione carattere predefinita, usare il [funzioni membro GetDefaultCharFormat](../mfc/reference/cricheditctrl-class.md#getdefaultcharformat) e [SetDefaultCharFormat](../mfc/reference/cricheditctrl-class.md#setdefaultcharformat) funzioni membro.

L'attributo "protetto" carattere non modifica l'aspetto del testo. Se l'utente tenta di modificare testo protetto, un controllo rich edit inviati alla finestra padre un' **EN_PROTECTED consente** messaggio di notifica, la finestra padre consentire o impedire la modifica. Per ricevere questo messaggio di notifica, è necessario abilitarlo usando il [SetEventMask](../mfc/reference/cricheditctrl-class.md#seteventmask) funzione membro. Per altre informazioni sulla maschera eventi, vedere [notifiche da un controllo Rich Edit](../mfc/notifications-from-a-rich-edit-control.md), più avanti in questo argomento.

Colore di primo piano è un attributo di tipo carattere, ma il colore di sfondo è una proprietà del controllo rich edit. Per impostare il colore di sfondo, usare il [funzione membro SetBackgroundColor](../mfc/reference/cricheditctrl-class.md#setbackgroundcolor) funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

