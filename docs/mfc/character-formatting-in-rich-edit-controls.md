---
description: 'Altre informazioni su: formattazione dei caratteri nei controlli Rich Edit'
title: Formattazione caratteri nei controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- formatting [MFC], characters
- rich edit controls [MFC], character formatting in
- CRichEditCtrl class [MFC], character formatting in
ms.assetid: c80f4305-75ad-45f9-8d17-d83d0fe79be5
ms.openlocfilehash: 47d44a7d586d52ba6a83314711af1350d1c2def6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339696"
---
# <a name="character-formatting-in-rich-edit-controls"></a>Formattazione caratteri nei controlli Rich Edit

È possibile utilizzare le funzioni membro del controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) per formattare i caratteri e recuperare le informazioni di formattazione. Per i caratteri, è possibile specificare il carattere tipografico, le dimensioni, il colore e gli effetti come grassetto, corsivo e protetto.

È possibile applicare la formattazione dei caratteri usando le funzioni membro [SetSelectionCharFormat](reference/cricheditctrl-class.md#setselectioncharformat) e [SetWordCharFormat](reference/cricheditctrl-class.md#setwordcharformat) . Per determinare la formattazione dei caratteri corrente per il testo selezionato, utilizzare la funzione membro [GetSelectionCharFormat](reference/cricheditctrl-class.md#getselectioncharformat) . La struttura [CHARFORMAT](/windows/win32/api/richedit/ns-richedit-charformata) viene utilizzata con queste funzioni membro per specificare gli attributi dei caratteri. Uno dei membri importanti di **CHARFORMAT** è **dwMask**. In `SetSelectionCharFormat` e `SetWordCharFormat` **dwMask** specifica quali attributi di carattere verranno impostati da questa chiamata di funzione. `GetSelectionCharFormat` segnala gli attributi del primo carattere nella selezione. **dwMask** specifica gli attributi coerenti per tutta la selezione.

È anche possibile ottenere e impostare la "formattazione dei caratteri predefinita", ovvero la formattazione applicata a tutti i caratteri inseriti successivamente. Se, ad esempio, un'applicazione imposta la formattazione dei caratteri predefinita su grassetto e l'utente digita un carattere, il carattere è in grassetto. Per ottenere e impostare la formattazione dei caratteri predefinita, usare le funzioni membro [GetDefaultCharFormat](reference/cricheditctrl-class.md#getdefaultcharformat) e [SetDefaultCharFormat](reference/cricheditctrl-class.md#setdefaultcharformat) .

L'attributo character "Protected" non modifica l'aspetto del testo. Se l'utente tenta di modificare il testo protetto, un controllo Rich Edit Invia la finestra padre a un messaggio di notifica **EN_PROTECTED** , consentendo alla finestra padre di consentire o impedire la modifica. Per ricevere questo messaggio di notifica, è necessario abilitarlo utilizzando la funzione membro [SetEventMask](reference/cricheditctrl-class.md#seteventmask) . Per ulteriori informazioni sull'evento mask, vedere [notifiche da un controllo Rich Edit](notifications-from-a-rich-edit-control.md)più avanti in questo argomento.

Il colore di primo piano è un attributo di tipo carattere, ma il colore di sfondo è una proprietà del controllo Rich Edit. Per impostare il colore di sfondo, utilizzare la funzione membro [SetBackgroundColor](reference/cricheditctrl-class.md#setbackgroundcolor) .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)
