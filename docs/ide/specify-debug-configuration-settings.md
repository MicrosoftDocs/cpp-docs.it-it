---
title: "Specifica le impostazioni di configurazione per il debug, Creazione guidata nuovo progetto da file di codice esistenti | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.importwiz.debugsettings"
dev_langs: 
  - "C++"
ms.assetid: 607339a8-9d33-458b-8095-dc73f374e29d
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Specifica le impostazioni di configurazione per il debug, Creazione guidata nuovo progetto da file di codice esistenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa pagina della Creazione guidata nuovo progetto da file di codice esistenti per specificare le impostazioni di progetto per la configurazione di debug.  
  
## Elenco attività  
 [Procedura: creare un progetto C\+\+ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## Elenco UIElement  
 **Riga di comando per la compilazione**  
 Specifica la linea di comando che compila il nuovo progetto.  Ad esempio, specificare il nome del compilatore oltre alle opzioni e agli argomenti che si desidera utilizzare per compilare il nuovo progetto.  Questa opzione è attivata quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata nella pagina **Specifica le impostazioni del progetto**, altrimenti non è disponibile.  
  
 **Riga di comando per la ricompilazione**  
 Specifica la linea di comando che ricompila il nuovo progetto.  Questa opzione è attivata quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata nella pagina **Specifica le impostazioni del progetto**, altrimenti non è disponibile.  
  
 **Pulisci da riga di comando**  
 Specifica la linea di comando da cui cancellare i file di supporto creati dagli strumenti di compilazione per il nuovo progetto.  Questa opzione è attivata quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata nella pagina **Specifica le impostazioni del progetto**, altrimenti non è disponibile.  
  
 **Output \(per debug\)**  
 Specifica il percorso di directory dei file di output per la configurazione di debug del nuovo progetto.  Questa opzione è attivata quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata nella pagina **Specifica le impostazioni del progetto**, altrimenti non è disponibile.  
  
 **Definizioni per il preprocessore \(\/D\)**  
 Definisce i simboli del preprocessore per il nuovo progetto.  Per ulteriori informazioni, vedere [\/D \(definizioni preprocessore\)](../build/reference/d-preprocessor-definitions.md).  
  
 **Percorsi di ricerca \(\/I\)**  
 Specifica i percorsi di directory da aggiungere all'elenco di directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti ai file che sono stati passati alle direttive per il preprocessore nel nuovo progetto.  Per ulteriori informazioni, vedere [\/I \(Directory di inclusione aggiuntive\)](../build/reference/i-additional-include-directories.md).  
  
 **File di inclusione imposti \(\/FI\)**  
 Specifica i file di intestazione da elaborare durante la compilazione del nuovo progetto.  Per ulteriori informazioni, vedere [\/FI \(Specifica il file di inclusione da utilizzare\)](../build/reference/fi-name-forced-include-file.md).  
  
 **Percorsi di ricerca dell'assembly .NET \(\/AI\)**  
 Specifica i percorsi di directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti all'assembly .NET che sono stati passati alle direttive per il preprocessore nel nuovo progetto.  Per ulteriori informazioni, vedere [\/AI \(Specifica le directory di metadati\)](../build/reference/ai-specify-metadata-directories.md).  
  
 **Assembly .NET imposti \(\/FU\)**  
 Specifica gli assembly .NET da elaborare durante la compilazione del nuovo progetto.  Per ulteriori informazioni, vedere [\/FU \(Specifica file \#using da utilizzare\)](../build/reference/fu-name-forced-hash-using-file.md).  
  
## Vedere anche  
 [Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-project-settings-create-new-project-from-existing-code-files-wizard.md)