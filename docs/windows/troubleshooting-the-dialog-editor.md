---
title: Risoluzione dei problemi relativi all'Editor finestre (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- controls [C++], troubleshooting
- Dialog Editor [C++], troubleshooting
- dialog boxes [C++], troubleshooting
- InitCommonControls
- RichEdit 1.0 control
- rich edit controls [C++], RichEdit 1.0
ms.assetid: 21882868-5ac4-4a41-a4a6-eaaa059402ea
ms.openlocfilehash: fe0fe704b5c17d0db4e3419f29d21f0e60bc4211
ms.sourcegitcommit: 5270117dbecc4c49bca0cf10b927bae3c9930038
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/31/2019
ms.locfileid: "55484955"
---
# <a name="troubleshooting-the-dialog-editor-c"></a>Risoluzione dei problemi relativi all'Editor finestre (C++)

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

Ecco alcuni problemi di cui occorre tener presente quando si lavora in C++ **dialogo** editor:

## <a name="adding-controls-to-a-dialog-causes-the-dialog-to-no-longer-function"></a>Aggiunta di controlli a una finestra di dialogo fa sì che la finestra di dialogo funzionamento non corretto

Dopo aver aggiunto un controllo comune o un controllo rich edit una finestra di dialogo, questa sarà visibile quando si testa la finestra di dialogo o non verrà visualizzata la finestra di dialogo.

### <a name="example-of-the-problem"></a>Esempio del problema

1. Creare un progetto Win32, modificare le impostazioni dell'applicazione in modo da creare un'applicazione Windows (non un'app console).

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), fare doppio clic sul file RC.

1. Sotto l'opzione di finestra di dialogo, fare doppio clic il **sulle** casella.

1. Aggiungere un **IP Address Control** alla finestra di dialogo.

1. Salvare e **Ricompila tutto**.

1. Eseguire il programma.

1. Nella finestra di dialogo **aiutare** dal menu fare clic sul **sulle** comando; nessuna finestra di dialogo viene visualizzata la finestra.

### <a name="the-cause"></a>La causa

Attualmente, il **dialogo** editor non aggiunge automaticamente codice al progetto quando si trascina i controlli comuni seguenti o i controlli in una finestra di dialogo rich edit. Né Visual Studio fornisce un errore o un avviso quando si verifica questo problema. Per risolvere il problema, aggiungere manualmente il codice per il controllo.

||||
|-|-|-|
|Dispositivo di scorrimento|Controllo albero|Selezione data e ora|
|Controllo di selezione|Controllo struttura a schede|Calendario mensile|
|Controllo Progress|Controllo Animation|Controllo indirizzo IP|
|Tasto di scelta rapida|Controllo Rich Edit|Casella combinata estesa|
|Controllo elenco|Controllo Rich Edit 2.0|Controllo personalizzato|

### <a name="fix-for-common-controls"></a>Correzione per i controlli comuni

Per usare i controlli comuni in una finestra di dialogo, è necessario chiamare [InitCommonControlsEx](/windows/desktop/api/commctrl/nf-commctrl-initcommoncontrolsex) o `AFXInitCommonControls` prima di creare la finestra di dialogo.

### <a name="fix-for-richedit-controls"></a>Correzione per i controlli RichEdit

È necessario chiamare `LoadLibrary` per i controlli rich edit. Per altre informazioni, vedere [About Rich Edit Controls](/windows/desktop/Controls/about-rich-edit-controls) nel SDK di Windows e [Panoramica del controllo Rich Edit](../mfc/overview-of-the-rich-edit-control.md).

### <a name="requirements"></a>Requisiti

Win32

## <a name="using-the-richedit-10-control-with-mfc"></a>Utilizzo del controllo RichEdit 1.0 con MFC

Per usare un controllo RichEdit, è necessario chiamare innanzitutto [AfxInitRichEdit2](../mfc/reference/application-information-and-management.md#afxinitrichedit2) per caricare il controllo RichEdit 2.0 (RICHED20. DLL), o chiamare [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) per caricare il controllo RichEdit 1.0 precedente (RICHED32. DLL).

È possibile usare l'oggetto corrente [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) classe con il controllo RichEdit 1.0 precedente, ma `CRichEditCtrl` solo è progettato per supportare il controllo RichEdit 2.0. Poiché RichEdit 1.0 e 2.0 RichEdit sono simili, funzionerà la maggior parte dei metodi. Si noti, tuttavia, esistono alcune differenze tra i controlli di 1.0 e 2.0, in modo che alcuni metodi potrebbero non funzionare correttamente o non funzionano affatto.

### <a name="requirements"></a>Requisiti

MFC

## <a name="see-also"></a>Vedere anche

[Editor finestre](../windows/dialog-editor.md)