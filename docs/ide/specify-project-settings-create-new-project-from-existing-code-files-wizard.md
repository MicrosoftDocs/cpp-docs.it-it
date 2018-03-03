---
title: Specificare le impostazioni di progetto, creare un nuovo progetto da Creazione guidata file di codice esistenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.importwiz.appsettings
dev_langs:
- C++
helpviewer_keywords:
- Create New Project From Existing Code Files Wizard, project settings
ms.assetid: 9b8860c9-d35f-4f18-9565-2934d3d7f569
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2cf1e8eba11063f7f2e46f836cd2ef84cc70dfe8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="specify-project-settings-create-new-project-from-existing-code-files-wizard"></a>Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti
Utilizzare questa pagina della procedura guidata Crea nuovo progetto da file di codice esistenti per specificare:  
  
-   L'ambiente di compilazione per il nuovo progetto  
  
-   Le impostazioni per un tipo specifico di nuovo progetto per generare di compilazione  
  
## <a name="task-list"></a>Elenco attività  
 [Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Utilizzare Visual Studio**  
 Specifica di utilizzare gli strumenti di compilazione che vengono inclusi in Visual Studio per compilare il nuovo progetto. Questa opzione è selezionata per impostazione predefinita.  
  
 **Tipo di progetto**  
 Specifica il tipo di progetto che verrà generato.  
  
 **Progetto di applicazione Windows**  
 Indica che la procedura guidata genererà un progetto per un'applicazione eseguibile di Windows. Questa opzione è disponibile il **tipo di progetto** casella di riepilogo a discesa.  
  
 **Progetto di applicazione console**  
 Indica che la procedura guidata genererà un progetto per un'applicazione console. Questa opzione è disponibile il **tipo di progetto** casella di riepilogo a discesa.  
  
 **Progetto libreria di collegamento dinamico (DLL)**  
 Indica che la procedura guidata genererà un progetto per un'applicazione di libreria di collegamento dinamico. Questa opzione è disponibile il **tipo di progetto** casella di riepilogo a discesa.  
  
 **Progetto di libreria statica (LIB)**  
 Indica che la procedura guidata genererà un progetto per un'applicazione libreria statica. Questa opzione è disponibile il **tipo di progetto** casella di riepilogo a discesa.  
  
 **Aggiungere il supporto per ATL**  
 Aggiunge il supporto ATL al nuovo progetto.  
  
 **Aggiungere il supporto per MFC**  
 Aggiunge il supporto MFC per il nuovo progetto.  
  
 **Aggiungere il supporto per Common Language Runtime**  
 Aggiunge supporto per il nuovo progetto per la programmazione CLR.  
  
 **Common Language Runtime**  
 Specifica il nuovo progetto per garantire la conformità con le funzionalità di Common Language Runtime.  
  
 **Common Language Runtime (sintassi precedente)**  
 Specifica il nuovo progetto per garantire la conformità con le estensioni gestite per la sintassi di C++, ovvero la sintassi di programmazione CLR prima di Visual C++ 2005.  
  
 **Utilizzare il sistema di compilazione esterno**  
 Specifica di utilizzare gli strumenti di compilazione non inclusi in Visual Studio per creare il nuovo progetto. Quando questa opzione è selezionata, è possibile specificare le righe di comando di compilazione sul **specificare le impostazioni di configurazione di Debug** e **specifica le impostazioni di configurazione di rilascio** pagine.  
  
> [!NOTE]
>  Quando il **utilizza sistema di compilazione esterno** opzione è selezionata, l'IDE non compilare il nuovo progetto, pertanto la /D, I, /FI, /AI o /FU opzioni non sono necessarie per la compilazione. Tuttavia, queste opzioni devono essere impostate correttamente per IntelliSense funzionare correttamente.  
  
## <a name="see-also"></a>Vedere anche  
 [Specificare le impostazioni di configurazione di Debug, creare un nuovo progetto da Creazione guidata file di codice esistenti](../ide/specify-debug-configuration-settings.md)   
 [Specifica le impostazioni di configurazione per il rilascio, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-release-configuration.md)