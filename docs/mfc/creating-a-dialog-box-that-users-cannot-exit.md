---
title: "Creating a Dialog Box That Users Cannot Exit | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dialog boxes, creating"
  - "modal dialog boxes, logon screens"
  - "logon screens"
ms.assetid: 54823c27-1658-4388-bd12-0a1ce8f3899e
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating a Dialog Box That Users Cannot Exit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare una finestra di dialogo di runtime da cui non è possibile uscire. Una finestra di dialogo di questo tipo è utile per gli accessi e per i blocchi di applicazioni o documenti.  
  
### Per creare una finestra di dialogo da cui non è possibile uscire  
  
1.  Nel riquadro **Proprietà** per la finestra di dialogo impostare la proprietà **System Menu** su **false**.  
  
     Verranno disabilitati il menu di sistema e il pulsante **Chiudi** della finestra di dialogo.  
  
2.  Nel form della finestra di dialogo eliminare i pulsanti **Annulla** e **OK**.  
  
     In fase di esecuzione non è possibile uscire da una finestra di dialogo modale con queste caratteristiche.  
  
 Per abilitare il test di questo tipo di finestra di dialogo, la funzione di test della finestra di dialogo rileva quando viene premuto ESC \(noto anche come tasto virtuale VK\_ESCAPE\). Indipendentemente dal comportamento della finestra di dialogo in fase di esecuzione, è possibile chiuderla in modalità test premendo ESC.  
  
> [!NOTE]
>  Per le applicazioni MFC, per creare una finestra di dialogo da cui non è possibile uscire è necessario eseguire l'override del comportamento predefinito di `OnOK`e `OnCancel` perché anche se si eliminano i pulsanti associati, la finestra di dialogo può comunque essere chiusa premendo INVIO o ESC.  
  
 Per informazioni su come aggiungere risorse ai progetti gestiti, vedere [Risorse nelle applicazioni desktop](../Topic/Resources%20in%20Desktop%20Apps.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [How to: Create a Resource](../windows/how-to-create-a-resource.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Dialog Editor](../mfc/dialog-editor.md)