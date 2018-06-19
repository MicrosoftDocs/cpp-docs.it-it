---
title: Hosting di un Windows Form controllo utente in una finestra di dialogo MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], Windows Forms support
- hosting Windows Forms control [C++]
- Windows Forms [C++], MFC support
ms.assetid: 9f66ee52-b7cb-4ffd-8306-392a5da990d8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 291c0856e9d305e0b2b31c6bc233005b111592a9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33129437"
---
# <a name="hosting-a-windows-form-user-control-in-an-mfc-dialog-box"></a>Hosting di un controllo utente Windows Form in una finestra di dialogo MFC
Ospita un controllo Windows Form come un tipo speciale di controllo ActiveX e comunica con il controllo tramite le interfacce ActiveX, proprietà e metodi di MFC la <xref:System.Windows.Forms.Control> classe. È consigliabile utilizzare i metodi e proprietà di .NET Framework per operare sul controllo.  
  
 Per un'applicazione di esempio che mostra i Windows Form con MFC, vedere [MFC e integrazione con Windows Form](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
> [!NOTE]
>  Nella versione corrente, un `CDialogBar` oggetto non può contenere controlli Windows Form.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Procedura: Creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md)  
  
 [Procedura: eseguire un'associazione dati DDX/DDV con Windows Form](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md)  
  
 [Procedura: Elaborare eventi di Windows Form da classi C++ native](../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)  
  
## <a name="reference"></a>Riferimenti  
 [Classe CWinFormsControl](../mfc/reference/cwinformscontrol-class.md) &#124; [CDialog (classe)](../mfc/reference/cdialog-class.md) &#124; [classe CWnd](../mfc/reference/cwnd-class.md)&#124; <xref:System.Windows.Forms.Control>  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)   
 [Differenze tra la programmazione Windows Forms/MFC](../dotnet/windows-forms-mfc-programming-differences.md)   
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)   
 [Hosting di un controllo utente Windows Form come finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md)