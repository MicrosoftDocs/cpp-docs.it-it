---
title: Passaggio tra controlli finestra di dialogo e codice | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- events [C++], viewing for controls
- Windows messages [C++], controls
- messages [C++], viewing for dialog boxes
- Dialog editor, accessing code
- code [C++], switching from Dialog Editor
- controls [C++], jumping to code
- Dialog editor, switching between controls and code
ms.assetid: 7da73815-b853-4203-ba45-bbe570695122
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 81f8ea53cf6c4428913ce7ebfa4183c135208024
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="switching-between-dialog-box-controls-and-code"></a>Passaggio dai controlli della finestra di dialogo al codice e viceversa
In applicazioni MFC, è possibile fare doppio clic in controlli finestra di dialogo per passare al codice del gestore o per creare rapidamente stub di funzioni del gestore.  
  
 Un controllo è selezionata, fare clic sul **eventi di controllo** pulsante o **messaggi** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window) per visualizzare un elenco completo dei messaggi di Windows e gli eventi è disponibile per l'elemento selezionato. Scegliere dall'elenco per creare o modificare le funzioni del gestore.  
  
### <a name="to-jump-to-code-from-the-dialog-editor"></a>Per passare al codice dall'editor finestre  
  
1.  Fare doppio clic su un controllo nella finestra di dialogo a cui passare la dichiarazione per la funzione di gestione dei messaggi implementato più di recente. (Per le classi di finestra di dialogo basati su ATL, è sempre passare alla definizione del costruttore.)  
  
### <a name="to-view-events-for-a-control"></a>Per visualizzare gli eventi per un controllo  
  
1.  Un controllo è selezionata, fare clic su di **eventi di controllo** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window).  
  
    > [!NOTE]
    >  Fare clic su di **eventi di controllo** pulsante quando il *la finestra di dialogo* ha espone lo stato attivo per un elenco di tutti i controlli nella finestra di dialogo, che è possibile espandere in modo da modificare gli eventi relativi ai singoli controlli.  
  
     Quando un singolo controllo ha lo stato attivo nella finestra di dialogo, è possibile pulsante destro del mouse e selezionare **Aggiungi gestore** dal menu di scelta rapida. Ciò consente di specificare la classe a cui viene aggiunto il gestore. Per ulteriori informazioni, vedere [aggiungendo un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).  
  
### <a name="to-view-messages-for-a-dialog-box"></a>Per visualizzare i messaggi per una finestra di dialogo  
  
1.  Con la finestra di dialogo selezionata, fare clic su di **messaggi** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor finestre](../windows/dialog-editor.md)

