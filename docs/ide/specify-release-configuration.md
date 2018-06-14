---
title: Nuovo progetto da codice esistente - Configurazione per il rilascio | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.appwiz.importwiz.releasesettings
dev_langs:
- C++
ms.assetid: 3e2fc73c-bdbd-4790-b2bd-d31731f0cece
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4f3995b1a7227e4d2f0a531c86726b84e960d8ec
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33340489"
---
# <a name="specify-release-configuration-settings-create-new-project-from-existing-code-files-wizard"></a>Specifica le impostazioni di configurazione per il rilascio, Creazione guidata nuovo progetto da file di codice esistenti
Usare questa pagina della procedura guidata Creazione guidata nuovo progetto da file di codice esistenti per specificare le impostazioni progetto di configurazione per il rilascio.  
  
## <a name="task-list"></a>Elenco attività  
 [Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Uguale alla configurazione di debug**  
 Specifica che la procedura guidata genererà impostazioni progetto di configurazione per il rilascio identiche alle impostazioni progetto di configurazione per il debug. Questa opzione è selezionata per impostazione predefinita. Se la casella è selezionata, tutte le altre opzioni in questa pagina sono inattive.  
  
 **Riga di comando di compilazione**  
 Specifica la riga di comando che esegue la compilazione del nuovo progetto. Immettere il nome del compilatore e le eventuali opzioni o argomenti da usare per compilare il nuovo progetto. Questa opzione è abilitata quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata nella pagina **Specifica le impostazioni del progetto**.  
  
 **Riga di comando per Ricompila**  
 Specifica la riga di comando che consente di ricompilare il nuovo progetto. Questa opzione è abilitata quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata nella pagina **Specifica le impostazioni del progetto**.  
  
 **Riga di comando per Pulisci**  
 Specifica la riga di comando che elimina i file di supporto generati dagli strumenti di compilazione per il nuovo progetto. Questa opzione è abilitata quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata nella pagina **Specifica le impostazioni del progetto**.  
  
 **Output (per il debug)**  
 Specifica il percorso della directory dei file di output per la configurazione di debug del nuovo progetto. Questa opzione è abilitata quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata nella pagina **Specifica le impostazioni del progetto**.  
  
 **Definizioni preprocessore (/D)**  
 Definisce i simboli del preprocessore per il nuovo progetto. Per altre informazioni, vedere [/D (definizioni preprocessore)](../build/reference/d-preprocessor-definitions.md).  
  
 **Percorsi di ricerca (/I)**  
 Specifica i percorsi di directory da aggiungere all'elenco delle directory in cui il compilatore esegue la ricerca per risolvere i riferimenti di file passati alle direttive del preprocessore nel nuovo progetto. Per altre informazioni, vedere [/I (Directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md).  
  
 **File di inclusione imposti (/FI)**  
 Specifica i file di intestazione da elaborare quando si compila il nuovo progetto. Per altre informazioni, vedere [/FI (Specifica il file di inclusione da utilizzare)](../build/reference/fi-name-forced-include-file.md).  
  
 **Percorsi di ricerca dell'assembly .NET (/AI)**  
 Specifica i percorsi di directory in cui il compilatore esegue la ricerca per risolvere i riferimenti agli assembly .NET passati alle direttive del preprocessore nel nuovo progetto. Per altre informazioni, vedere [/AI (Specifica le directory di metadati)](../build/reference/ai-specify-metadata-directories.md).  
  
 **Assembly .NET imposti (/FU)**  
 Specifica gli assembly .NET da elaborare quando si compila il nuovo progetto. Per altre informazioni, vedere [/FU (Specifica file #using da utilizzare)](../build/reference/fu-name-forced-hash-using-file.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-project-settings-create-new-project-from-existing-code-files-wizard.md)