---
description: 'Altre informazioni su: hosting di un controllo utente Windows Form in una finestra di dialogo MFC'
title: Hosting di un controllo utente Windows Form in una finestra di dialogo MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms support
- hosting Windows Forms control [C++]
- Windows Forms [C++], MFC support
ms.assetid: 9f66ee52-b7cb-4ffd-8306-392a5da990d8
ms.openlocfilehash: 1bd1db9d9805c10247840ca6043c94d4e3e3abe7
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522807"
---
# <a name="hosting-a-windows-form-user-control-in-an-mfc-dialog-box"></a>Hosting di un controllo utente Windows Form in una finestra di dialogo MFC

MFC ospita un controllo Windows Form come un tipo speciale di controllo ActiveX e comunica con il controllo tramite le interfacce ActiveX, nonché le proprietà e i metodi della <xref:System.Windows.Forms.Control> classe. Si consiglia di usare .NET Framework proprietà e metodi per operare sul controllo.

> [!NOTE]
> Nella versione corrente, un `CDialogBar` oggetto non può ospitare controlli Windows Form.

## <a name="in-this-section"></a>Contenuto della sezione

[Procedura: creare il controllo utente e l'host in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md)

[Procedura: eseguire il data binding DDX/DDV con Windows Form](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md)

[Procedura: sink di eventi Windows Form da classi C++ native](../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)

## <a name="reference"></a>Riferimento

Classe [CWinFormsControl](../mfc/reference/cwinformscontrol-class.md) &#124; classe [CDialog](../mfc/reference/cdialog-class.md) &#124; [classe CWnd](../mfc/reference/cwnd-class.md) &#124;<xref:System.Windows.Forms.Control>

## <a name="see-also"></a>Vedi anche

[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)<br/>
[Differenze di programmazione Windows Form/MFC](../dotnet/windows-forms-mfc-programming-differences.md)<br/>
[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)<br/>
[Hosting di un controllo utente Windows Form come finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)
