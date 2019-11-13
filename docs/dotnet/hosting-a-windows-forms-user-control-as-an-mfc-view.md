---
title: Hosting di un controllo utente Windows Form come visualizzazione MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms support
- Windows Forms controls [C++], hosting as an MFC view
- hosting Windows Forms control [C++]
ms.assetid: 43c02ab4-1366-434c-a980-0b19326d6ea0
ms.openlocfilehash: bf91730f98685935d50ee0076739b436e8d9da60
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73964939"
---
# <a name="hosting-a-windows-forms-user-control-as-an-mfc-view"></a>Hosting di un controllo utente Windows Form come visualizzazione MFC

MFC utilizza la classe CWinFormsView per ospitare un controllo utente Windows Forms in una visualizzazione MFC. Le visualizzazioni Windows Forms MFC sono controlli ActiveX. Il controllo utente è ospitato come figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione nativa.

Il risultato finale è simile al modello usato dalla [classe CFormView](../mfc/reference/cformview-class.md). Questo consente di sfruttare i vantaggi offerti dalla finestra di progettazione Windows Forms e dal runtime per creare visualizzazioni avanzate basate su form.

Poiché le visualizzazioni Windows Forms MFC sono controlli ActiveX, non hanno lo stesso `hwnd` delle visualizzazioni MFC. Inoltre, non possono essere passati come puntatore a una visualizzazione [CView](../mfc/reference/cview-class.md) . In generale, usare .NET Framework metodi per lavorare con le visualizzazioni Windows Forms e basarsi meno su Win32.

Per un'applicazione di esempio che Mostra Windows Forms utilizzata con MFC, vedere [MFC and Windows Forms Integration](https://www.microsoft.com/download/details.aspx?id=2113).

## <a name="in-this-section"></a>Contenuto della sezione

[Procedura: Creare il controllo utente e inserirlo nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md)

[Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)

[Procedura: Chiamare proprietà e metodi del controllo Windows Form](../dotnet/how-to-call-properties-and-methods-of-the-windows-forms-control.md)

## <a name="see-also"></a>Vedere anche

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[Procedura: Modificare controlli compositi](/dotnet/framework/winforms/controls/how-to-author-composite-controls)
