---
title: Creazione di un'interfaccia COM (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.com.creating.interfaces
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces, creating
ms.assetid: 1be84d3c-6886-4d1e-8493-56c4d38a96d4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d2844e9051c5e6adf14085bcd7bfcd8096c6f8f7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-a-com-interface-visual-c"></a>Creazione di un'interfaccia COM (Visual C++)
Visual C++ fornisce modelli e procedure guidate per creare progetti che usano nella definizione di interfacce COM e dispatch per gli oggetti COM e classi di automazione.  
  
 È possibile utilizzare queste procedure guidate per eseguire le seguenti tre attività comuni:  
  
-   [Aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md)  
  
     Aggiungi supporto ATL a un'applicazione MFC, dopo aver creato un progetto MFC mediante la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) ed eseguendo quindi il **Aggiungi supporto ATL a MFC** guidata codice. Questo supporto si applica solo a oggetti COM semplici aggiunti a un progetto DLL o un eseguibile MFC. Questi oggetti ATL possono avere più interfacce.  
  
-   [Creazione di un controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md)  
  
     Aprire il [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md) per creare un controllo ActiveX con un'interfaccia dispatch e una mappa eventi definiti nel file IDL e la classe del controllo, rispettivamente.  
  
-   [Aggiunta di un controllo ATL](../atl/reference/adding-an-atl-control.md)  
  
     Utilizzare una combinazione del [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) e [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) per creare un controllo ActiveX ATL.  
  
     È anche possibile aggiungere un controllo ATL a un progetto MFC a cui è stato aggiunto il supporto ATL, come descritto in precedenza. Inoltre, se si seleziona **controllo ATL** nel **Aggiungi classe** la finestra di dialogo se non sono ancora aggiunti supporto ATL a un progetto MFC, Visual Studio visualizza una finestra di dialogo di conferma di aggiunta del supporto ATL per il Progetto MFC.  
  
     Questa procedura guidata genera file di origine IDL e di una mappa COM nelle classi del progetto.  
  
 Dopo aver aperto, un progetto ATL il [Aggiungi classe](../ide/add-class-dialog-box.md) la finestra di dialogo consente di scegliere di altre procedure guidate e modelli per aggiungere le interfacce COM al progetto. Le seguenti procedure guidate consentono di stabilire una o più interfacce per l'oggetto:  
  
-   [Creazione guidata componente ATL COM+ 1.0](../atl/reference/atl-com-plus-1-0-component-wizard.md)  
  
-   [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md)  
  
-   [Creazione guidata componente ASP ATL](../atl/reference/atl-active-server-page-component-wizard.md)  
  
-   [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)  
  
 Inoltre, è possibile implementare nuove interfacce nel controllo COM facendo clic sulla classe del controllo dell'oggetto in visualizzazione classi e facendo clic su [implementa interfaccia](../ide/implement-interface-wizard.md).  
  
> [!NOTE]
>  Visual Studio non fornisce una procedura guidata per aggiungere un'interfaccia a un progetto. È possibile aggiungere un'interfaccia a un progetto ATL o a un [aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) mediante l'aggiunta di un oggetto semplice mediante il [guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md). In alternativa, aprire il file IDL del progetto e creare l'interfaccia digitando:  
  
```  
interface IMyInterface {  
};  
  
```  
  
 Vedere [che implementa un'interfaccia](../ide/implementing-an-interface-visual-cpp.md) e [aggiunta di oggetti e i controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) per ulteriori informazioni.  
  
 Visual C++ fornisce diversi modi per visualizzare e [modificare le interfacce COM](../ide/editing-a-com-interface.md) definite per i progetti. [Visualizzazione classi-](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925) Visualizza le icone per qualsiasi interfaccia o dispatch definita in un file IDL nel progetto C++.  
  
 Per le classi di oggetti COM basati su ATL, Visualizzazione classi legge la mappa COM nella classe ATL per visualizzare la relazione tra la classe ATL e le eventuali interfacce implementate.  
  
 In visualizzazione classi e il relativo menu di scelta rapida, è possibile utilizzare le interfacce come indicato di seguito:  
  
-   Aggiungere gli oggetti ATL a un'applicazione basata su MFC.  
  
-   Aggiungere metodi, proprietà ed eventi.  
  
-   Passare direttamente al codice dell'interfaccia di un elemento facendo doppio clic sull'elemento.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di progetti Desktop mediante creazioni guidate applicazione](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)