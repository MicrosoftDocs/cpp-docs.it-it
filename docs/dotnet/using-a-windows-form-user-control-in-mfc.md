---
description: 'Altre informazioni su: uso di un controllo utente Windows Form in MFC'
title: Utilizzo di un controllo utente Windows Form in MFC
ms.date: 01/08/2018
helpviewer_keywords:
- MFC [C++], Windows Forms support
- interoperability [C++], Windows Forms in MFC
- interoperability [C++], MFC
- interop [C++], Windows Forms in MFC
- interop [C++], MFC
- Windows Forms [C++], MFC support
ms.assetid: 63fb099b-1dff-469c-9e34-dab52e122fcd
ms.openlocfilehash: 61022d241faba1650d1a044ef6d3667febe34cde
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319027"
---
# <a name="using-a-windows-form-user-control-in-mfc"></a>Utilizzo di un controllo utente Windows Form in MFC

Utilizzando le classi di supporto Windows Forms MFC, è possibile ospitare controlli Windows Forms all'interno delle applicazioni MFC come controllo ActiveX all'interno di finestre di dialogo o viste MFC. Inoltre, Windows Forms moduli possono essere ospitati come finestre di dialogo MFC.

Le sezioni seguenti descrivono come:

- Ospitare un controllo Windows Forms in una finestra di dialogo MFC.

- Ospitare un controllo utente Windows Forms come vista MFC.

- Ospitare un modulo di Windows Forms come finestra di dialogo MFC.

> [!NOTE]
> L'integrazione di MFC Windows Forms funziona solo nei progetti che si collegano dinamicamente a MFC (progetti in cui `_AFXDLL` è definito).

> [!NOTE]
> Quando si compila l'applicazione utilizzando una copia privata (modificata) della DLL delle interfacce di Windows Forms MFC (mfcmifc80.dll), l'installazione non verrà eseguita nella GAC, a meno che non si sostituisca la chiave Microsoft con la propria chiave fornitore. Per ulteriori informazioni sulla firma degli assembly, vedere [programmazione con](/dotnet/framework/app-domains/programming-with-assemblies) assembly e [assembly con nome sicuro (firma degli assembly) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).

Se l'applicazione MFC utilizza Windows Forms, è necessario ridistribuire mfcmifc80.dll con l'applicazione. Per ulteriori informazioni, vedere [ridistribuzione della libreria MFC](../windows/redistributing-the-mfc-library.md).

## <a name="in-this-section"></a>Contenuto della sezione

[Hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md)

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)

[Hosting di un controllo utente Windows Form come finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)

## <a name="reference"></a>Riferimento

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

[WinForms](/dotnet/framework/winforms/index)

[Controlli di Windows Forms](/dotnet/framework/winforms/controls/index)

## <a name="see-also"></a>Vedi anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)<br/>
[Visualizzazioni Maschera](../mfc/form-views-mfc.md)
