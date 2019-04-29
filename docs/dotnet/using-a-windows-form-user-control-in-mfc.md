---
title: Utilizzo di un controllo utente Windows Form in MFC
ms.date: 1/08/2018
helpviewer_keywords:
- MFC [C++], Windows Forms support
- interoperability [C++], Windows Forms in MFC
- interoperability [C++], MFC
- interop [C++], Windows Forms in MFC
- interop [C++], MFC
- Windows Forms [C++], MFC support
ms.assetid: 63fb099b-1dff-469c-9e34-dab52e122fcd
ms.openlocfilehash: 38c5c37712b430b137934d441056e60f2c130f78
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384491"
---
# <a name="using-a-windows-form-user-control-in-mfc"></a>Utilizzo di un controllo utente Windows Form in MFC

Usa le classi di supporto di MFC Windows Form, è possibile ospitare i controlli Windows Form all'interno delle applicazioni MFC come controllo ActiveX in finestre di dialogo MFC o visualizzazioni. Inoltre, Windows Form possono essere ospitati come finestre di dialogo MFC.

Le sezioni seguenti descrivono come:

- Ospitare un controllo Windows Form in una finestra di dialogo MFC.

- Ospitare un controllo utente Windows Form come visualizzazione MFC.

- Ospitare un form di Windows Form come una finestra di dialogo MFC.

> [!NOTE]
> Integrazione dei moduli di Windows di MFC funziona solo nei progetti che si collegano in modo dinamico con MFC (progetti in cui `_AFXDLL` è definito).

> [!NOTE]
> Quando si compila l'applicazione usando una copia privata (modificata) delle interfacce MFC Windows Forms DLL (mfcmifc80.dll), potrà essere installato nella Global Assembly Cache solo se si sostituisce la chiave di Microsoft con la propria chiave del fornitore. Per altre informazioni sulla firma degli assembly, vedere [programmazione con assembly](/dotnet/framework/app-domains/programming-with-assemblies) e [assembly con nome sicuro (firma degli Assembly) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).

Se l'applicazione MFC Usa Windows Form, è necessario ridistribuire mfcmifc80.dll con l'applicazione. Per altre informazioni, vedere [ridistribuzione della libreria MFC](../windows/redistributing-the-mfc-library.md).

## <a name="in-this-section"></a>In questa sezione

[Hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md)

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)

[Hosting di un controllo utente Windows Form come finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)

## <a name="reference"></a>Riferimenti

[Classe CWinFormsControl](../mfc/reference/cwinformscontrol-class.md)

[Classe CWinFormsDialog](../mfc/reference/cwinformsdialog-class.md)

[Classe CWinFormsView](../mfc/reference/cwinformsview-class.md)

[Interfaccia ICommandSource](../mfc/reference/icommandsource-interface.md)

[Interfaccia ICommandTarget](../mfc/reference/icommandtarget-interface.md)

[Interfaccia ICommandUI](../mfc/reference/icommandui-interface.md)

[Interfaccia IView](../mfc/reference/iview-interface.md)

[CommandHandler](../atl/commandhandler.md)

[DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol)

[UICheckState](../mfc/reference/uicheckstate-enumeration.md)

## <a name="related-sections"></a>Sezioni correlate

[Windows Form](/dotnet/framework/winforms/index)

[Controlli Windows Form](/dotnet/framework/winforms/controls/index)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)<br/>
[Visualizzazioni di form](../mfc/form-views-mfc.md)
