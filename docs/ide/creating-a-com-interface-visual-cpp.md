---
title: Creazione di un'interfaccia COM (Visual C++) | Microsoft Docs
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
ms.openlocfilehash: b69c2318ec5b1dd986a71bc684e1c9adc0f4ef0f
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43194964"
---
# <a name="creating-a-com-interface-visual-c"></a>Creazione di un'interfaccia COM (Visual C++)
Visual C++ offre modelli e procedure guidate che consentono di creare progetti che usano interfacce e interfacce dispatch definite con COM per gli oggetti COM e le classi di automazione.  
  
 È possibile usare queste procedure guidate per svolgere le attività comuni seguenti:  
  
-   [Aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md)  
  
     Aggiungere il supporto ATL a un'applicazione MFC dopo aver creato un progetto MFC usando la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) ed eseguendo quindi la procedura **Aggiungi supporto ATL a MFC** per il codice. Questo supporto si applica solo a oggetti COM semplici aggiunti a un progetto DLL o un file eseguibile MFC. Questi oggetti ATL possono avere più interfacce.  
  
-   [Creazione di un controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md)  
  
     Aprire la [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md) per creare un controllo ActiveX con un'interfaccia dispatch e una mappa eventi definite rispettivamente nel file IDL e nella classe del controllo.  
  
-   [Aggiunta di un controllo ATL](../atl/reference/adding-an-atl-control.md)  
  
     Usare una combinazione della [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) e la [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) per creare un controllo ActiveX ATL.  
  
     È anche possibile aggiungere un controllo ATL a un progetto MFC a cui è stato aggiunto il supporto ATL, come descritto in precedenza. Inoltre, se si seleziona **Controllo ATL** nella finestra di dialogo **Aggiungi classe** e non è ancora stato aggiunto il supporto ATL al progetto MFC, Visual Studio visualizza una finestra di dialogo che conferma l'aggiunta del supporto ATL al progetto MFC.  
  
     Questa procedura guidata genera file di origine IDL e una mappa COM nelle classi del progetto.  
  
 Quando si apre un progetto ATL la finestra di dialogo [Aggiungi classe](../ide/add-class-dialog-box.md) offre la possibilità di scegliere tra ulteriori procedure guidate e modelli per l'aggiunta delle interfacce COM al progetto. Le seguenti procedure guidate consentono di stabilire una o più interfacce per l'oggetto:  
  
-   [Creazione guidata componente ATL COM+ 1.0](../atl/reference/atl-com-plus-1-0-component-wizard.md)  
  
-   [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md)  
  
-   [Creazione guidata componente ASP ATL](../atl/reference/atl-active-server-page-component-wizard.md)  
  
-   [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)  
  
 È anche possibile implementare nuove interfacce nel controllo COM facendo clic con il pulsante destro del mouse sulla classe di controllo dell'oggetto in Visualizzazione classi e selezionando [Implementa interfaccia](../ide/implement-interface-wizard.md).  
  
> [!NOTE]
>  In Visual Studio non è disponibile una procedura guidata per l'aggiunta di un'interfaccia a un progetto. È possibile aggiungere un'interfaccia a un progetto ATL o a un'[aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) aggiungendo un oggetto semplice con la [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md). In alternativa, aprire il file IDL del progetto e creare l'interfaccia digitando quanto segue:  
  
```  
interface IMyInterface {  
};  
  
```  
  
 Per altre informazioni, vedere [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md) e [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).  
  
 Visual C++ offre diversi modi per visualizzare e [modificare le interfacce COM](../ide/editing-a-com-interface.md) definite per i progetti. [Visualizzazione classi](https://msdn.microsoft.com/8d7430a9-3e33-454c-a9e1-a85e3d2db925) visualizza le icone per ogni interfaccia o interfaccia dispatch definita in un file IDL del progetto C++.  
  
 Per le classi di oggetti COM basate su ATL, Visualizzazione classi legge la mappa COM nella classe ATL per visualizzare la relazione tra la classe ATL e le interfacce che implementa.  
  
 In Visualizzazione classi e nei relativi menu di scelta rapida è possibile usare le interfacce come indicato di seguito:  
  
-   Aggiungere gli oggetti ATL a un'applicazione basata su MFC.  
  
-   Aggiungere metodi, proprietà ed eventi.  
  
-   Passare direttamente al codice dell'interfaccia di un elemento facendo doppio clic sull'elemento.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)