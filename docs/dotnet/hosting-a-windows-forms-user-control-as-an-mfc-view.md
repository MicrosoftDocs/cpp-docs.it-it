---
title: Hosting di un Windows Form come visualizzazione MFC | Documenti Microsoft
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
- MFC [C++], Windows Forms support
- Windows Forms controls [C++], hosting as an MFC view
- hosting Windows Forms control [C++]
ms.assetid: 43c02ab4-1366-434c-a980-0b19326d6ea0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7e4e0b7bc081d3b16b3f9aa55719d298f710cdab
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hosting-a-windows-forms-user-control-as-an-mfc-view"></a>Hosting di un controllo utente Windows Form come visualizzazione MFC
MFC utilizza la classe CWinFormsView per ospitare un controllo utente Windows Form in una visualizzazione MFC. Le visualizzazioni MFC Windows Form sono controlli ActiveX. Il controllo utente viene inserito come figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione nativa.  
  
 Il risultato finale è simile al modello utilizzato per il [classe CFormView](../mfc/reference/cformview-class.md). Ciò consente di sfruttare i vantaggi di progettazione Windows Form e runtime per creare visualizzazioni complesse basate su form.  
  
 Le visualizzazioni di Windows Form di MFC sono controlli ActiveX, non hanno le stesse `hwnd` come visualizzazioni MFC. Inoltre non può essere passati come un puntatore a un [CView](../mfc/reference/cview-class.md) visualizzazione. In generale, è possibile utilizzare i metodi di .NET Framework per utilizzare le visualizzazioni di Windows Form e si basano minore Win32.  
  
 Per un'applicazione di esempio che mostra i Windows Form con MFC, vedere [MFC e integrazione con Windows Form](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
## <a name="in-this-section"></a>In questa sezione  
 [Procedura: Creare il controllo utente e inserirlo nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md)  
  
 [Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)  
  
 [Procedura: Chiamare proprietà e metodi del controllo Windows Form](../dotnet/how-to-call-properties-and-methods-of-the-windows-forms-control.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)   
 [Procedura: Modificare controlli compositi](/dotnet/framework/winforms/controls/how-to-author-composite-controls)