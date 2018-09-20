---
title: Creazione di una finestra di dialogo (C++) che non è possibile uscire | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes [C++], creating
- modal dialog boxes [C++], logon screens
- logon screens
ms.assetid: 54823c27-1658-4388-bd12-0a1ce8f3899e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5abae461b4298d8a6300f5d7ad9f3e162a5b21c8
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46447388"
---
# <a name="creating-a-dialog-box-c-that-users-cannot-exit"></a>Creazione di una finestra di dialogo (C++) che gli utenti non è possibile uscire

È possibile creare una finestra di dialogo di runtime da cui non è possibile uscire. Una finestra di dialogo di questo tipo è utile per gli accessi e per i blocchi di applicazioni o documenti.

### <a name="to-create-a-dialog-box-that-a-user-cannot-exit"></a>Per creare una finestra di dialogo da cui non è possibile uscire

1. Nel riquadro **Proprietà** per la finestra di dialogo impostare la proprietà **System Menu** su **false**.

   Verranno disabilitati il menu di sistema e il pulsante **Chiudi** della finestra di dialogo.

2. Nel form della finestra di dialogo eliminare i pulsanti **Annulla** e **OK** .

   In fase di esecuzione non è possibile uscire da una finestra di dialogo modale con queste caratteristiche.

Per abilitare il test di questo tipo di finestra di dialogo, la funzione DialogBox test rileva quando **Esc** viene premuto. (**Esc** è noto anche come tasto virtuale VK_ESCAPE.) Indipendentemente dal modo in cui la finestra di dialogo è progettata per comportarsi in fase di esecuzione, è possibile chiuderla in modalità test premendo **Esc**.

> [!NOTE]
> Per le applicazioni MFC, per creare una finestra di dialogo che non è possibile uscire è necessario eseguire l'override del comportamento predefinito di `OnOK` e `OnCancel` perché anche se si eliminano i pulsanti associati, la finestra di dialogo può comunque essere chiusa premendo  **Immettere** oppure **Esc**.

Per informazioni su come aggiungere risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Procedura: Creare una risorsa](../windows/how-to-create-a-resource.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor finestre](../windows/dialog-editor.md)