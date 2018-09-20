---
title: Hosting di un Windows Form come visualizzazione MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], Windows Forms support
- Windows Forms controls [C++], hosting as an MFC view
- hosting Windows Forms control [C++]
ms.assetid: 43c02ab4-1366-434c-a980-0b19326d6ea0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b80b3a9d206ef48df1219d60afdc344874d3bab4
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46374516"
---
# <a name="hosting-a-windows-forms-user-control-as-an-mfc-view"></a>Hosting di un controllo utente Windows Form come visualizzazione MFC

MFC utilizza la classe CWinFormsView per ospitare un controllo utente Windows Form in una visualizzazione MFC. Visualizzazioni dei moduli di Windows di MFC sono i controlli ActiveX. Il controllo utente viene inserito come figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione nativa.

Il risultato finale è simile al modello usato per il [classe CFormView](../mfc/reference/cformview-class.md). Ciò consente di sfruttare i vantaggi di progettazione Windows Form e runtime per creare visualizzazioni avanzate basate su form.

Le visualizzazioni MFC Windows Form sono controlli ActiveX, non hanno lo stesso `hwnd` come viste di MFC. Inoltre non possono essere passate come puntatore a un [CView](../mfc/reference/cview-class.md) visualizzazione. In generale, usare i metodi di .NET Framework per lavorare con le visualizzazioni di Windows Form e si basano minore a Win32.

Per un'applicazione di esempio che illustra Windows Form utilizzato con MFC, vedere [MFC e Windows Forms Integration](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).

## <a name="in-this-section"></a>In questa sezione

[Procedura: Creare il controllo utente e inserirlo nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md)

[Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)

[Procedura: Chiamare proprietà e metodi del controllo Windows Form](../dotnet/how-to-call-properties-and-methods-of-the-windows-forms-control.md)

## <a name="see-also"></a>Vedere anche

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[Procedura: Modificare controlli compositi](/dotnet/framework/winforms/controls/how-to-author-composite-controls)