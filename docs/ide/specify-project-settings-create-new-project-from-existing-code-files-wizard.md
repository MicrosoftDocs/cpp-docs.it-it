---
title: Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.appwiz.importwiz.appsettings
dev_langs:
- C++
helpviewer_keywords:
- Create New Project From Existing Code Files Wizard, project settings
ms.assetid: 9b8860c9-d35f-4f18-9565-2934d3d7f569
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f0f59b802b5a24c1b449f78cccee4744538a5a0e
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33338946"
---
# <a name="specify-project-settings-create-new-project-from-existing-code-files-wizard"></a>Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti
Usare questa pagina della Creazione guidata nuovo progetto da file di codice esistenti per specificare:  
  
-   L'ambiente di compilazione per il nuovo progetto  
  
-   Impostazioni di compilazione per un tipo specifico di nuovo progetto da generare  
  
## <a name="task-list"></a>Elenco attività  
 [Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Utilizza Visual Studio**  
 Specifica l'uso degli strumenti di compilazione inclusi in Visual Studio per compilare il nuovo progetto. Questa opzione è selezionata per impostazione predefinita.  
  
 **Tipo progetto**  
 Specifica il tipo di progetto che verrà generato dalla procedura guidata.  
  
 **Progetto Applicazione Windows**  
 Indica che la procedura guidata genererà un progetto per un'applicazione Windows eseguibile. Questa opzione è disponibile nella casella di riepilogo a discesa **Tipo progetto**.  
  
 **Progetto di applicazione console**  
 Indica che la procedura guidata genererà un progetto per un'applicazione console. Questa opzione è disponibile nella casella di riepilogo a discesa **Tipo progetto**.  
  
 **Progetto libreria di collegamento dinamico (DLL)**  
 Indica che la procedura guidata genererà un progetto per un'applicazione libreria di collegamento dinamico (DLL) vuota. Questa opzione è disponibile nella casella di riepilogo a discesa **Tipo progetto**.  
  
 **Progetto libreria statica (LIB)**  
 Indica che la procedura guidata genererà un progetto per un'applicazione libreria statica. Questa opzione è disponibile nella casella di riepilogo a discesa **Tipo progetto**.  
  
 **Aggiungi supporto per ATL**  
 Aggiunge il supporto per Active Template Library (ATL) al nuovo progetto.  
  
 **Aggiungi supporto per MFC**  
 Aggiunge il supporto per MFC al nuovo progetto.  
  
 **Aggiungi supporto per Common Language Runtime**  
 Aggiunge il supporto per la programmazione CLR al nuovo progetto.  
  
 **Common Language Runtime**  
 Specifica la conformità del nuovo progetto con le funzionalità Common Language Runtime.  
  
 **Common Language Runtime (sintassi precedente)**  
 Specifica la conformità del nuovo progetto con la sintassi di Estensioni gestite per C++, che è la sintassi di programmazione CLR precedente a Visual C++ 2005.  
  
 **Utilizza sistema di compilazione esterno**  
 Specifica l'uso di strumenti di compilazione non inclusi in Visual Studio per compilare il nuovo progetto. Quando questa opzione è selezionata, è possibile specificare righe di comando di compilazione nelle pagine **Specifica le impostazioni di configurazione per il debug** e **Specifica le impostazioni di configurazione per il rilascio**.  
  
> [!NOTE]
>  Quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata l'IDE non compila il nuovo progetto, pertanto le opzioni /D, I, /FI, /AI o /FU non sono necessarie per la compilazione. Tuttavia queste opzioni devono essere impostate correttamente per consentire il funzionamento di IntelliSense.  
  
## <a name="see-also"></a>Vedere anche  
 [Specifica le impostazioni di configurazione per il debug, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-debug-configuration-settings.md)   
 [Specifica le impostazioni di configurazione per il rilascio, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-release-configuration.md)