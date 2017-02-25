---
title: "Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.importwiz.appsettings"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata nuovo progetto da file di codice esistenti, impostazioni progetto"
ms.assetid: 9b8860c9-d35f-4f18-9565-2934d3d7f569
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa pagina della Creazione guidata nuovo progetto da file di codice esistenti per specificare:  
  
-   L'ambiente di compilazione del nuovo progetto  
  
-   Le impostazioni di compilazione per un tipo specifico di progetto da generare  
  
## Elenco attività  
 [Procedura: creare un progetto C\+\+ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## Elenco UIElement  
 **Utilizza Visual Studio**  
 Specifica di utilizzare gli strumenti di compilazione inclusi in Visual Studio per la compilazione del nuovo progetto.  Tale opzione è selezionata come impostazione predefinita.  
  
 **Tipo di progetto**  
 Specifica il tipo di progetto che verrà creato dalla procedura guidata.  
  
 **Progetto di applicazione Windows**  
 Indica che la procedura guidatà creerà un progetto per un'applicazione Windows eseguibile.  L'opzione è disponibile nella casella di riepilogo a discesa **Tipo progetto**.  
  
 **Progetto di applicazione console**  
 Indica che la procedura guidatà creerà un progetto per un'applicazione console.  L'opzione è disponibile nella casella di riepilogo a discesa **Tipo progetto**.  
  
 **Progetto libreria di collegamento dinamico \(DLL\)**  
 Indica che la procedura guidatà creerà un progetto per un'applicazione di libreria a collegamento dinamico.  L'opzione è disponibile nella casella di riepilogo a discesa **Tipo progetto**.  
  
 **Progetto di libreria statica \(LIB\)**  
 Indica che la procedura guidatà creerà un progetto per un'applicazione di libreria statica.  L'opzione è disponibile nella casella di riepilogo a discesa **Tipo progetto**.  
  
 **Aggiungi supporto per ATL**  
 Aggiunge il supporto ATL al nuovo progetto.  
  
 **Aggiungi supporto per MFC**  
 Aggiunge il supporto MFC al nuovo progetto.  
  
 **Aggiungi supporto per Common Language Runtime**  
 Aggiunge il supporto di programmazione CLR al nuovo progetto.  
  
 **Common Language Runtime**  
 Specifica che il nuovo progetto sarà conforme alle funzionalità CLR.  
  
 **Common Language Runtime \(vecchia sintassi\)**  
 Specifica che il nuovo progetto sarà conforme alle estensioni gestite per la sintassi di C\+\+, ovvero la sintassi di programmazione CLR precedente a Visual C\+\+ 2005.  
  
 **Utilizza sistema di compilazione esterno**  
 Specifica di utilizzare gli strumenti di compilazione non inclusi in Visual Studio per la compilazione del nuovo progetto.  Una volta indicata l'opzione, è possibile specificare le righe di comando per la compilazione nelle pagine **Specifica le impostazioni di configurazione per il debug** e **Specifica le impostazioni di configurazione per il rilascio**.  
  
> [!NOTE]
>  Quando è selezionata l'opzione **Utilizza sistema di compilazione esterno**, l'ambiente di sviluppo integrato \(IDE\) non compila il nuovo progetto. Di conseguenza, le opzioni \/D, \/I, \/FI, \/AI e \/FU non sono richieste per la compilazione.  Tuttavia, tali opzioni devono essere impostate correttamente perché IntelliSense funzioni in modo adeguato.  
  
## Vedere anche  
 [Specifica le impostazioni di configurazione per il debug, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-debug-configuration-settings.md)   
 [Specifica le impostazioni di configurazione per il rilascio, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-release-configuration.md)