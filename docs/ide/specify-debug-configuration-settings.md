---
title: Nuovo progetto da codice esistente, eseguire il Debug impostazione (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.appwiz.importwiz.debugsettings
dev_langs: C++
ms.assetid: 607339a8-9d33-458b-8095-dc73f374e29d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1781d5c5bba0d818111673594a5526354a490bd7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="specify-debug-configuration-settings-create-new-project-from-existing-code-files-wizard"></a>Specifica le impostazioni di configurazione per il debug, Creazione guidata nuovo progetto da file di codice esistenti
Utilizzare questa pagina della procedura guidata Crea nuovo progetto da file di codice esistenti per specificare impostazioni di progetto di configurazione di Debug.  
  
## <a name="task-list"></a>Elenco attività  
 [Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Riga di comando di compilazione**  
 Specifica la riga di comando che consente di creare il nuovo progetto. Ad esempio, immettere il nome del compilatore (più eventuali opzioni e argomenti) o script di compilazione che si desidera utilizzare per compilare il nuovo progetto. Questa opzione è abilitata quando il **sistema di compilazione Usa esterno** opzione è selezionata nel **specifica le impostazioni del progetto** pagina; in caso contrario non è disponibile.  
  
 **Ricompila la riga di comando**  
 Specifica la riga di comando che consente di ricostruire il nuovo progetto. Questa opzione è abilitata quando il **sistema di compilazione Usa esterno** opzione è selezionata nel **specifica le impostazioni del progetto** pagina; in caso contrario non è disponibile.  
  
 **Pulisci da riga di comando**  
 Specifica la riga di comando per eliminare i file di supporto generati dagli strumenti di compilazione per il nuovo progetto. Questa opzione è abilitata quando il **sistema di compilazione Usa esterno** opzione è selezionata nel **specifica le impostazioni del progetto** pagina; in caso contrario non è disponibile.  
  
 **Output (per il debug)**  
 Specifica il percorso della directory dei file di output per la configurazione di Debug del nuovo progetto. Questa opzione è abilitata quando il **sistema di compilazione Usa esterno** opzione è selezionata nel **specifica le impostazioni del progetto** pagina; in caso contrario non è disponibile.  
  
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
