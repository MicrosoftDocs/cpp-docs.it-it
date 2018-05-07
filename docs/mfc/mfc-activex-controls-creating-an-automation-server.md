---
title: 'Controlli ActiveX MFC: Creazione di un Server di automazione | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Automation servers [MFC], MFC ActiveX controls
- ActiveX controls [MFC], Automation server
- MFC ActiveX controls [MFC], Automation server
ms.assetid: e0c24ed2-d61c-49ad-a4fa-4e1098d1d39b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 617d84b8603467da74b21be8c2bfb2e6cb418f7b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-activex-controls-creating-an-automation-server"></a>Controlli ActiveX MFC: creazione di un server di automazione
È possibile sviluppare un controllo ActiveX MFC come server di automazione allo scopo di incorporare tale controllo in un'altra applicazione a livello di codice e la chiamata di metodi nel controllo dall'applicazione. Ad esempio un controllo deve essere ancora disponibile per essere ospitati in un contenitore di controlli ActiveX.  
  
### <a name="to-create-a-control-as-an-automation-server"></a>Per creare un controllo come un server di automazione  
  
1.  [Creare](../mfc/reference/mfc-activex-control-wizard.md) il controllo.  
  
2.  [Aggiungere metodi](../mfc/mfc-activex-controls-methods.md).  
  
3.  Eseguire l'override [IsInvokeAllowed](../mfc/reference/colecontrol-class.md#isinvokeallowed). Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q146120.  
  
4.  Compilare il controllo.  
  
### <a name="to-programmatically-access-the-methods-in-an-automation-server"></a>Per accedere a livello di codice ai metodi in un server di automazione  
  
1.  Creare un'applicazione, ad esempio, un [exe MFC](../mfc/reference/mfc-application-wizard.md).  
  
2.  All'inizio del `InitInstance` , aggiungere la riga seguente:  
  
     [!code-cpp[NVC_MFC_AxCont#17](../mfc/codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_1.cpp)]  
  
3.  In visualizzazione classi, il nodo del progetto e scegliere **aggiunta classe da libreria dei tipi** per importare la libreria dei tipi.  
  
     File con estensioni h e cpp verrà aggiunta al progetto.  
  
4.  Nel file di intestazione della classe in cui si chiamerà uno o più metodi del controllo ActiveX, aggiungere la seguente riga: `#include filename.h`, dove il nome di file è il nome del file di intestazione che è stato creato durante l'importazione della libreria dei tipi.  
  
5.  Nella funzione in cui verrà effettuata una chiamata a un metodo del controllo ActiveX, aggiungere il codice che crea un oggetto della classe wrapper del controllo e creare l'oggetto ActiveX. Ad esempio, il seguente codice MFC crea un `CCirc` Ottiene la proprietà Caption di controllo, e viene visualizzato il risultato quando si fa clic sul pulsante OK nella finestra di dialogo:  
  
     [!code-cpp[NVC_MFC_AxCont#18](../mfc/codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_2.cpp)]  
  
 Se si aggiungono metodi per il controllo ActiveX dopo averlo utilizzato in un'applicazione, è possibile iniziare a utilizzare la versione più recente del controllo nell'applicazione eliminando i file creati durante l'importazione della libreria dei tipi. Importare la libreria dei tipi.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

