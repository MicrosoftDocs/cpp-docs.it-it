---
title: Hosting di un controllo utente Windows Form in una finestra di dialogo MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms support
- hosting Windows Forms control [C++]
- Windows Forms [C++], MFC support
ms.assetid: 9f66ee52-b7cb-4ffd-8306-392a5da990d8
ms.openlocfilehash: 2704e04df3792edfee6c39f597fcbe71b6ce51b4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374491"
---
# <a name="hosting-a-windows-form-user-control-in-an-mfc-dialog-box"></a>Hosting di un controllo utente Windows Form in una finestra di dialogo MFC

MFC ospita un controllo Windows Form come tipo speciale di controllo ActiveX e comunica con il <xref:System.Windows.Forms.Control> controllo utilizzando interfacce ActiveX e le proprietà e i metodi della classe. È consigliabile utilizzare le proprietà e i metodi di .NET Framework per operare sul controllo.

Per un'applicazione di esempio in cui viene illustrato l'utilizzo di Windows Form con MFC, vedere [Integrazione di MFC e Windows Form](https://www.microsoft.com/download/details.aspx?id=2113).

> [!NOTE]
> Nella versione corrente, `CDialogBar` un oggetto non può ospitare controlli Windows Form.

## <a name="in-this-section"></a>Contenuto della sezione

[Procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md)

[Procedura: eseguire data binding DDX/DDV con Windows Form](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md)

[Procedura: elaborare eventi di Windows Form da classi C++ native](../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)

## <a name="reference"></a>Informazioni di riferimento

[CWinFormsControl (classe)](../mfc/reference/cwinformscontrol-class.md) &#124; [la classe CDialog](../mfc/reference/cdialog-class.md) &#124; [(classe CWnd)](../mfc/reference/cwnd-class.md) &#124;<xref:System.Windows.Forms.Control>

## <a name="see-also"></a>Vedere anche

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[Differenze di programmazione di Windows Form/MFC](../dotnet/windows-forms-mfc-programming-differences.md)<br/>
[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)<br/>
[Hosting a Windows Form User Control as an MFC Dialog Box](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)
