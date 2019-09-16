---
title: Hosting di un controllo utente Windows Form in una finestra di dialogo MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms support
- hosting Windows Forms control [C++]
- Windows Forms [C++], MFC support
ms.assetid: 9f66ee52-b7cb-4ffd-8306-392a5da990d8
ms.openlocfilehash: 22f2c5c6c162e459470f9babab66c61c096540ec
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "70311872"
---
# <a name="hosting-a-windows-form-user-control-in-an-mfc-dialog-box"></a>Hosting di un controllo utente Windows Form in una finestra di dialogo MFC

MFC ospita un controllo Windows Forms come un tipo speciale di controllo ActiveX e comunica con il controllo tramite le interfacce ActiveX, nonché le proprietà e i metodi della <xref:System.Windows.Forms.Control> classe. Si consiglia di usare .NET Framework proprietà e metodi per operare sul controllo.

Per un'applicazione di esempio che Mostra Windows Forms utilizzata con MFC, vedere [MFC and Windows Forms Integration](https://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).

> [!NOTE]
>  Nella versione corrente, un `CDialogBar` oggetto non può ospitare controlli Windows Forms.

## <a name="in-this-section"></a>In questa sezione

[Procedura: Creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md)

[Procedura: Eseguire il data binding DDX/DDV con Windows Forms](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md)

[Procedura: Elaborare eventi di Windows Form da classi C++ native](../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)

## <a name="reference"></a>Riferimenti

[Classe CWinFormsControl](../mfc/reference/cwinformscontrol-class.md) &#124; [Classe CDialog](../mfc/reference/cdialog-class.md) &#124; [Classe CWnd](../mfc/reference/cwnd-class.md) &#124; <xref:System.Windows.Forms.Control>

## <a name="see-also"></a>Vedere anche

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[Differenze tra la programmazione Windows Form/MFC](../dotnet/windows-forms-mfc-programming-differences.md)<br/>
[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)<br/>
[Hosting di un controllo utente Windows Form come finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)
