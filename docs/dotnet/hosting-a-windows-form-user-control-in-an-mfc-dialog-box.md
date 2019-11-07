---
title: Hosting di un controllo utente Windows Form in una finestra di dialogo MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms support
- hosting Windows Forms control [C++]
- Windows Forms [C++], MFC support
ms.assetid: 9f66ee52-b7cb-4ffd-8306-392a5da990d8
ms.openlocfilehash: 1a688870f4700e8e3b935245f2c9243f8d5aa823
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73704091"
---
# <a name="hosting-a-windows-form-user-control-in-an-mfc-dialog-box"></a>Hosting di un controllo utente Windows Form in una finestra di dialogo MFC

MFC ospita un controllo Windows Forms come un tipo speciale di controllo ActiveX e comunica con il controllo tramite le interfacce ActiveX, nonché le proprietà e i metodi della classe <xref:System.Windows.Forms.Control>. Si consiglia di usare .NET Framework proprietà e metodi per operare sul controllo.

Per un'applicazione di esempio che Mostra Windows Forms utilizzata con MFC, vedere [MFC and Windows Forms Integration](https://www.microsoft.com/en-us/download/details.aspx?id=2113).

> [!NOTE]
>  Nella versione corrente, un oggetto `CDialogBar` non può ospitare controlli Windows Forms.

## <a name="in-this-section"></a>Contenuto della sezione

[Procedura: Creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md)

[Procedura: eseguire il data binding DDX/DDV con Windows Forms](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md)

[Procedura: Elaborare eventi di Windows Form da classi C++ native](../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)

## <a name="reference"></a>Reference

&#124; Classe [CWinFormsControl](../mfc/reference/cwinformscontrol-class.md) [CDialog Class](../mfc/reference/cdialog-class.md) &#124; [CWnd](../mfc/reference/cwnd-class.md) &#124; <xref:System.Windows.Forms.Control>

## <a name="see-also"></a>Vedere anche

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[Differenze tra la programmazione Windows Form/MFC](../dotnet/windows-forms-mfc-programming-differences.md)<br/>
[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)<br/>
[Hosting di un controllo utente Windows Form come finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)
