---
title: Aggiunta di controlli a una finestra di dialogo fa sì che la finestra di dialogo funzionamento non corretto (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- controls [C++], troubleshooting
- dialog boxes [C++], troubleshooting
- InitCommonControls
ms.assetid: b2dd4574-ea59-4343-8d65-b387cead5da6
ms.openlocfilehash: d95c89c0a07e02ab0934a54ca1fe067961348766
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648292"
---
# <a name="adding-controls-to-a-dialog-causes-the-dialog-to-no-longer-function-c"></a>Aggiunta di controlli a una finestra di dialogo fa sì che la finestra di dialogo funzionamento non corretto (C++)

Dopo aver aggiunto un controllo comune o un controllo rich edit una finestra di dialogo, non verrà visualizzata quando si testa la finestra di dialogo o non verrà visualizzata la finestra di dialogo.

### <a name="example-of-the-problem"></a>Esempio del problema

1. Creare un progetto Win32, modificare le impostazioni dell'applicazione in modo da creare un'applicazione Windows (non un'app console).

2. Nelle [visualizzazione risorse](../windows/resource-view-window.md), fare doppio clic sul file RC.

3. Sotto l'opzione di finestra di dialogo, fare doppio clic il **sulle** casella.

4. Aggiungere un **IP Address Control** alla finestra di dialogo.

5. Salvare e **Ricompila tutto**.

6. Eseguire il programma.

7. Nella finestra di dialogo **aiutare** dal menu fare clic sul **sulle** comando; nessuna finestra di dialogo viene visualizzata la finestra.

### <a name="the-cause"></a>La causa

Attualmente, l'editor finestre non aggiunge automaticamente codice al progetto quando si trascina i controlli comuni seguenti o i controlli in una finestra di dialogo rich edit. Né Visual Studio fornisce un errore o un avviso quando si verifica questo problema. È necessario aggiungere manualmente il codice per il controllo.

||||
|-|-|-|
|Dispositivo di scorrimento|Controllo albero|Selezione data e ora|
|Controllo di selezione|Controllo struttura a schede|Calendario mensile|
|Controllo Progress|Controllo Animation|Controllo indirizzo IP|
|Tasto di scelta rapida|Controllo Rich Edit|Casella combinata estesa|
|Controllo elenco|Controllo Rich Edit 2.0|Controllo personalizzato|

## <a name="the-fix-for-common-controls"></a>La correzione per i controlli comuni

Per usare i controlli comuni in una finestra di dialogo, è necessario chiamare [InitCommonControlsEx](/windows/desktop/api/commctrl/nf-commctrl-initcommoncontrolsex) o `AFXInitCommonControls` prima di creare la finestra di dialogo.

## <a name="the-fix-for-richedit-controls"></a>La correzione per i controlli RichEdit

È necessario chiamare `LoadLibrary` per i controlli rich edit. Per altre informazioni, vedere [usando il controllo RichEdit 1.0 con MFC](../windows/using-the-richedit-1-0-control-with-mfc.md), [sui controlli Rich Edit](/windows/desktop/Controls/about-rich-edit-controls) in Windows SDK, e [Panoramica del controllo Rich Edit](../mfc/overview-of-the-rich-edit-control.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Risoluzione dei problemi relativi all'editor finestre](../windows/troubleshooting-the-dialog-editor.md)<br/>
[Editor finestre](../windows/dialog-editor.md)