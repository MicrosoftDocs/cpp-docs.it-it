---
title: "Controlli ActiveX MFC: creazione di un server di automazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "ActiveX (controlli) [C++], server di automazione"
  - "server di automazione [C++], controlli ActiveX MFC"
  - "controlli ActiveX MFC [C++], server di automazione"
ms.assetid: e0c24ed2-d61c-49ad-a4fa-4e1098d1d39b
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: creazione di un server di automazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile compilare un controllo ActiveX MFC come server di automazione a scopo a livello di codice di incorporare che controllo di altre applicazioni e metodi nel controllo dall'applicazione.  Tale controllo rimane sempre disponibile per essere contenuto in un contenitore di controlli ActiveX.  
  
### Per creare un controllo come server di automazione  
  
1.  [Crea](../mfc/reference/mfc-activex-control-wizard.md) il controllo.  
  
2.  [Metodi](../mfc/mfc-activex-controls-methods.md).  
  
3.  Override [IsInvokeAllowed](../Topic/COleControl::IsInvokeAllowed.md).  Per ulteriori informazioni, vedere l'articolo Q146120 di Knowledge Base.  
  
4.  Compilare il controllo.  
  
### Per accedere a livello di codice ai metodi in un server di automazione  
  
1.  Creare un'applicazione, ad esempio, [MFC EXE](../mfc/reference/mfc-application-wizard.md).  
  
2.  All'inizio della funzione di `InitInstance`, aggiungere la riga seguente:  
  
     [!code-cpp[NVC_MFC_AxCont#17](../mfc/codesnippet/CPP/mfc-activex-controls-creating-an-automation-server_1.cpp)]  
  
3.  In Visualizzazione classi, fare clic con il pulsante destro del mouse sul nodo del progetto e selezionare **Aggiuni classe da libreria dei tipi** per importare la libreria dei tipi.  
  
     Verrà aggiunto i file con estensioni di file h e cpp al progetto.  
  
4.  Nel file di intestazione della classe in cui si chiamerà uno o più metodi nel controllo ActiveX, aggiungere la riga seguente: `#include filename.h`, dove il nome file è il nome del file di intestazione creato quando si importa la libreria dei tipi.  
  
5.  Nella funzione in cui una chiamata viene eseguita a un metodo nel controllo ActiveX, aggiungere il codice che crea un oggetto classe wrapper del controllo e creare l'oggetto ActiveX.  Ad esempio, il seguente codice MFC creare un'istanza di un controllo di `CCirc`, ottiene la proprietà caption e visualizza il risultato viene fatto clic SU il pulsante OK in una finestra di dialogo:  
  
     [!code-cpp[NVC_MFC_AxCont#18](../mfc/codesnippet/CPP/mfc-activex-controls-creating-an-automation-server_2.cpp)]  
  
 Se si aggiungono metodi al controllo ActiveX dopo averla utilizzata in un'applicazione, è possibile iniziare utilizzando la versione più recente dell'applicazione eliminando i file creati quando si importa la libreria dei tipi.  Quindi importare nuovamente la libreria dei tipi.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)