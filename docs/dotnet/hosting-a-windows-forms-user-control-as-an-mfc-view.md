---
description: 'Altre informazioni su: hosting di un controllo utente Windows Form come vista MFC'
title: Hosting di un controllo utente Windows Form come visualizzazione MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms support
- Windows Forms controls [C++], hosting as an MFC view
- hosting Windows Forms control [C++]
ms.assetid: 43c02ab4-1366-434c-a980-0b19326d6ea0
ms.openlocfilehash: b9f0eba7f052bee6c2cba89b7a5c22bcb1604cc3
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522794"
---
# <a name="hosting-a-windows-forms-user-control-as-an-mfc-view"></a>Hosting di un controllo utente Windows Form come visualizzazione MFC

MFC utilizza la classe CWinFormsView per ospitare un controllo utente Windows Form in una visualizzazione MFC. Le visualizzazioni Windows Form MFC sono controlli ActiveX. Il controllo utente è ospitato come figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione nativa.

Il risultato finale è simile al modello usato dalla [classe CFormView](../mfc/reference/cformview-class.md). Questo consente di sfruttare i vantaggi offerti dalla finestra di progettazione Windows Form e dal runtime per creare visualizzazioni avanzate basate su form.

Poiché le visualizzazioni Windows Form MFC sono controlli ActiveX, non hanno le stesse `hwnd` viste MFC. Inoltre, non possono essere passati come puntatore a una visualizzazione [CView](../mfc/reference/cview-class.md) . In generale, usare .NET Framework metodi per lavorare con le visualizzazioni Windows Form e basarsi meno su Win32.

## <a name="in-this-section"></a>Contenuto della sezione

[Procedura: creare il controllo utente e la visualizzazione MDI host](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md)

[Procedura: aggiungere il routing dei comandi al controllo Windows Form](../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)

[Procedura: chiamare proprietà e metodi del controllo Windows Form](../dotnet/how-to-call-properties-and-methods-of-the-windows-forms-control.md)

## <a name="see-also"></a>Vedi anche

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[Procedura: Creare controlli compositi](/dotnet/framework/winforms/controls/how-to-author-composite-controls)
