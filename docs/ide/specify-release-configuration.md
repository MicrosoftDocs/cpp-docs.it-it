---
title: Nuovo progetto da codice esistente versione configurazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.appwiz.importwiz.releasesettings
dev_langs: C++
ms.assetid: 3e2fc73c-bdbd-4790-b2bd-d31731f0cece
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ff208af8bb89dbcb7df00b37ce542a5adae5fa23
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="specify-release-configuration-settings-create-new-project-from-existing-code-files-wizard"></a>Specifica le impostazioni di configurazione per il rilascio, Creazione guidata nuovo progetto da file di codice esistenti
Utilizzare questa pagina della procedura guidata Crea nuovo progetto da file di codice esistenti per specificare le impostazioni di progetto configurazione rilascio.  
  
## <a name="task-list"></a>Elenco attività  
 [Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Come configurazione di Debug**  
 Specifica che la procedura guidata genererà progetto impostazioni di configurazione Release identiche per la configurazione di Debug. Questa opzione è selezionata per impostazione predefinita. Tutte le altre opzioni in questa pagina sono inattivi, a meno che non si deseleziona questa casella.  
  
 **Riga di comando di compilazione**  
 Specifica la riga di comando che consente di creare il nuovo progetto. Immettere il nome del compilatore più opzioni o argomenti che si desidera utilizzare per compilare il nuovo progetto. Questa opzione è abilitata quando il **sistema di compilazione Usa esterno** opzione è selezionata nel **specifica le impostazioni del progetto** pagina.  
  
 **Ricompila la riga di comando**  
 Specifica la riga di comando che consente di ricostruire il nuovo progetto. Questa opzione è abilitata quando il **sistema di compilazione Usa esterno** opzione è selezionata nel **specifica le impostazioni del progetto** pagina.  
  
 **Pulisci da riga di comando**  
 Specifica la riga di comando per eliminare i file di supporto generati dagli strumenti di compilazione per il nuovo progetto. Questa opzione è abilitata quando il **sistema di compilazione Usa esterno** opzione è selezionata nel **specifica le impostazioni del progetto** pagina.  
  
 **Output (per il debug)**  
 Specifica il percorso della directory dei file di output per la configurazione di Debug del nuovo progetto. Questa opzione è abilitata quando il **sistema di compilazione Usa esterno** opzione è selezionata nel **specifica le impostazioni del progetto** pagina.  
  
 **Le definizioni del preprocessore (/ D)**  
 Definisce i simboli del preprocessore per il nuovo progetto. Per altre informazioni, vedere [/D (definizioni preprocessore)](../build/reference/d-preprocessor-definitions.md).  
  
 **Percorso di ricerca (o possibile)**  
 Specifica i percorsi di directory da aggiungere all'elenco delle directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti di file passati alle direttive del preprocessore nel nuovo progetto. Per altre informazioni, vedere [/I (Directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md).  
  
 **Il file di inclusione (integrato)**  
 Specifica il file di intestazione per l'elaborazione quando si compila il nuovo progetto. Per altre informazioni, vedere [/FI (Specifica il file di inclusione da utilizzare)](../build/reference/fi-name-forced-include-file.md).  
  
 **Percorso di ricerca di assembly .NET (o AI)**  
 Specifica i percorsi di directory che il compilatore effettuerà la ricerca per risolvere i riferimenti agli assembly .NET passato alle direttive del preprocessore nel nuovo progetto. Per altre informazioni, vedere [/AI (Specifica le directory di metadati)](../build/reference/ai-specify-metadata-directories.md).  
  
 **Assembly .NET (o /fu)**  
 Specifica gli assembly .NET per l'elaborazione quando si compila il nuovo progetto. Per altre informazioni, vedere [/FU (Specifica file #using da utilizzare)](../build/reference/fu-name-forced-hash-using-file.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-project-settings-create-new-project-from-existing-code-files-wizard.md)