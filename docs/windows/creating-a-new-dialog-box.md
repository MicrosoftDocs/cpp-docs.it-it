---
title: Creazione di una finestra di dialogo (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.dialog
helpviewer_keywords:
- dialog boxes [C++], creating
- Dialog Editor [C++], creating dialog boxes
- modal dialog boxes [C++], logon screens
- logon screens
ms.assetid: 303de801-c4f8-42e1-b622-353f6423f688
ms.openlocfilehash: 928432000fb9a6347433b78b224e15f07ce810d2
ms.sourcegitcommit: 52c05e10b503e834c443ef11e7ca1987e332f876
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/05/2019
ms.locfileid: "55742648"
---
# <a name="creating-a-dialog-box-c"></a>Creazione di una finestra di dialogo (C++)

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-create-a-new-dialog-box"></a>Per creare una nuova finestra di dialogo

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC, quindi scegliere **Aggiungi risorsa** dal menu di scelta rapida.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel **Aggiungi risorsa** finestra di dialogo **finestra di dialogo** nel **tipo di risorsa** elenco e quindi scegliere **New**.

   Se un segno più (**+**) accanto al **dialogo** tipo di risorsa, significa che i modelli di finestra di dialogo sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **New**.

   Verrà visualizzata la finestra di dialogo Nuova nel **dialogo** editor.

   È anche possibile [aprire finestre di dialogo esistenti nell'editor di finestra di dialogo per la modifica](../windows/viewing-and-editing-resources-in-a-resource-editor.md).

## <a name="to-create-a-dialog-box-that-a-user-cant-exit"></a>Per creare una finestra di dialogo che è possibile uscire

È possibile creare una finestra di dialogo di runtime che non è possibile uscire. Una finestra di dialogo di questo tipo è utile per gli accessi e per i blocchi di applicazioni o documenti.

1. Nel riquadro **Proprietà** per la finestra di dialogo impostare la proprietà **System Menu** su **false**.

   Questa impostazione disabilita il menu di sistema di finestra di dialogo e **Chiudi** pulsante.

1. Nel form della finestra di dialogo eliminare i pulsanti **Annulla** e **OK** .

   In fase di esecuzione, un utente non può chiudere una finestra di dialogo modale con queste caratteristiche.

Per abilitare il test di questo tipo di finestra di dialogo, la funzione DialogBox test rileva quando **Esc** viene premuto. (**Esc** è noto anche come tasto virtuale VK_ESCAPE.) Indipendentemente dal modo in cui la finestra di dialogo è progettata per comportarsi in fase di esecuzione, è possibile terminare la modalità test premendo **Esc**.

> [!NOTE]
> Per le applicazioni MFC, per creare una finestra di dialogo che non è possibile uscire è necessario eseguire l'override del comportamento predefinito di `OnOK` e `OnCancel` perché anche se si eliminano i pulsanti associati, la finestra di dialogo può comunque essere chiusa premendo  **Immettere** oppure **Esc**.

Per informazioni su come aggiungere risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Procedura: Creare una risorsa](../windows/how-to-create-a-resource.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor finestre](../windows/dialog-editor.md)