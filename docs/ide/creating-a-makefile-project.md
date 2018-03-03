---
title: Creazione di un progetto Makefile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.makefile.project
dev_langs:
- C++
helpviewer_keywords:
- Makefile projects, creating
- project files [C++], Makefile projects
ms.assetid: dd077af3-97a8-48fb-baaa-cf7e07ddef61
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5e86bedbf83cd417cfc41317e5887304cda7ee76
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-a-makefile-project"></a>Creazione di un progetto makefile
I progetti compilati dalla riga di comando con un makefile non vengono riconosciuti dall'ambiente di sviluppo di Visual Studio. Per aprire e compilare il progetto mediante [!INCLUDE[vsUltShort](../ide/includes/vsultshort_md.md)], Visual Studio Professional o Visual Studio Express per Windows Desktop, creare innanzitutto un progetto vuoto selezionando il modello di progetto MakeFile. Sarà quindi possibile utilizzare questo progetto per compilare il progetto desiderato nell'ambiente di sviluppo di Visual Studio.  
  
 In Esplora soluzioni non vengono visualizzati file. Le impostazioni di compilazione, riportate nella relativa pagina delle proprietà, vengono specificate dal progetto.  
  
 Il file di output specificato nel progetto non influisce sul nome creato dallo script di compilazione, ma fornisce soltanto un'indicazione.  
  
### <a name="to-create-a-makefile-project"></a>Per creare un progetto makefile  
  
1.  Seguire le istruzioni dell'argomento della Guida [creazione di un progetto con una creazione guidata applicazione di Visual C++](../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
2.  Nel **nuovo progetto** nella finestra di dialogo **progetto Makefile** nel riquadro dei modelli per aprire la procedura guidata.  
  
3.  Nel [le impostazioni dell'applicazione](../ide/application-settings-makefile-project-wizard.md) pagina, specifica un comando, di output, pulire e ricompilare le informazioni.  
  
4.  Fare clic su **fine** per chiudere la procedura guidata e aprire il progetto appena creato in **Esplora**.  
  
 È possibile visualizzare e modificare le proprietà del progetto nella relativa pagina delle proprietà. Vedere [impostazione delle proprietà dei progetti Visual C++](../ide/working-with-project-properties.md) per informazioni sulla pagina delle proprietà di visualizzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata progetto makefile](../ide/makefile-project-wizard.md)   
 [Caratteri speciali in un Makefile](../build/special-characters-in-a-makefile.md)   
 [Contenuto di un makefile](../build/contents-of-a-makefile.md)