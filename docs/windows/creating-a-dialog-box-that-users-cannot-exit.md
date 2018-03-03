---
title: "Creazione di una finestra di dialogo che è possibile uscire | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes, creating
- modal dialog boxes, logon screens
- logon screens
ms.assetid: 54823c27-1658-4388-bd12-0a1ce8f3899e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1b53c233c13ed53f4cf2ccf489da9af90ae15796
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

