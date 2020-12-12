---
description: 'Altre informazioni su: hosting di un controllo utente Windows Forms come vista MFC'
title: Hosting di un controllo utente Windows Form come visualizzazione MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms support
- Windows Forms controls [C++], hosting as an MFC view
- hosting Windows Forms control [C++]
ms.assetid: 43c02ab4-1366-434c-a980-0b19326d6ea0
ms.openlocfilehash: 4e66d4ace83e0026ec7a95cbe1b94462a163dddf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164640"
---
# <a name="hosting-a-windows-forms-user-control-as-an-mfc-view"></a>Hosting di un controllo utente Windows Form come visualizzazione MFC

MFC utilizza la classe CWinFormsView per ospitare un controllo utente Windows Forms in una visualizzazione MFC. Le visualizzazioni Windows Forms MFC sono controlli ActiveX. Il controllo utente è ospitato come figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione nativa.

Il risultato finale è simile al modello usato dalla [classe CFormView](../mfc/reference/cformview-class.md). Questo consente di sfruttare i vantaggi offerti dalla finestra di progettazione Windows Forms e dal runtime per creare visualizzazioni avanzate basate su form.

Poiché le visualizzazioni Windows Forms MFC sono controlli ActiveX, non hanno le stesse `hwnd` viste MFC. Inoltre, non possono essere passati come puntatore a una visualizzazione [CView](../mfc/reference/cview-class.md) . In generale, usare .NET Framework metodi per lavorare con le visualizzazioni Windows Forms e basarsi meno su Win32.

Per un'applicazione di esempio che Mostra Windows Forms utilizzata con MFC, vedere [MFC and Windows Forms Integration](https://www.microsoft.com/download/details.aspx?id=2113).

## <a name="in-this-section"></a>Contenuto della sezione

[Procedura: creare il controllo utente e la visualizzazione MDI host](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md)

[Procedura: aggiungere il routing dei comandi al controllo Windows Forms](../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)

[Procedura: chiamare proprietà e metodi del controllo Windows Forms](../dotnet/how-to-call-properties-and-methods-of-the-windows-forms-control.md)

## <a name="see-also"></a>Vedi anche

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[Procedura: Creare controlli compositi](/dotnet/framework/winforms/controls/how-to-author-composite-controls)
