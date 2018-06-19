---
title: Creazione di una finestra di dialogo che è possibile uscire | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes, creating
- modal dialog boxes, logon screens
- logon screens
ms.assetid: 54823c27-1658-4388-bd12-0a1ce8f3899e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fc04c9ccfb0fdc74e57142bf746681411bbba495
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33884463"
---
# <a name="creating-a-dialog-box-that-users-cannot-exit"></a>Creazione di una finestra di dialogo da cui non è possibile uscire
È possibile creare una finestra di dialogo di runtime da cui non è possibile uscire. Una finestra di dialogo di questo tipo è utile per gli accessi e per i blocchi di applicazioni o documenti.  
  
### <a name="to-create-a-dialog-box-that-a-user-cannot-exit"></a>Per creare una finestra di dialogo da cui non è possibile uscire  
  
1.  Nel riquadro **Proprietà** per la finestra di dialogo impostare la proprietà **System Menu** su **false**.  
  
     Verranno disabilitati il menu di sistema e il pulsante **Chiudi** della finestra di dialogo.  
  
2.  Nel form della finestra di dialogo eliminare i pulsanti **Annulla** e **OK** .  
  
     In fase di esecuzione non è possibile uscire da una finestra di dialogo modale con queste caratteristiche.  
  
 Per abilitare il test di questo tipo di finestra di dialogo, la funzione di test della finestra di dialogo rileva quando viene premuto ESC (noto anche come tasto virtuale VK_ESCAPE). Indipendentemente dal comportamento della finestra di dialogo in fase di esecuzione, è possibile chiuderla in modalità test premendo ESC.  
  
> [!NOTE]
>  Per le applicazioni MFC, per creare una finestra di dialogo da cui non è possibile uscire è necessario eseguire l'override del comportamento predefinito di `OnOK` e `OnCancel` perché anche se si eliminano i pulsanti associati, la finestra di dialogo può comunque essere chiusa premendo INVIO o ESC.  
  
 Per informazioni su come aggiungere risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: creare una risorsa](../windows/how-to-create-a-resource.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor finestre](../windows/dialog-editor.md)

