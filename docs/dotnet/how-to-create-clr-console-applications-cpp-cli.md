---
title: 'Procedura: creare applicazioni Console CLR (C + + CLI) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- console applications, templates
- CLR console applications, project template
ms.assetid: e89bce3c-706f-4ae0-8a90-cb1a0f674e70
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 3257d690ac949edff7958615656db052c3468c01
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-create-clr-console-applications-ccli"></a>Procedura: Creare applicazioni console CLR (C++/CLI)
È possibile usare il modello di applicazione console per creare un progetto di applicazione console che dispone già dei riferimenti al progetto e dei file essenziali.  
  
 In genere, un'applicazione console viene compilata in un file eseguibile autonomo ma non dispone di un'interfaccia grafica. Un utente esegue l'applicazione console da un prompt dei comandi e usa quest'ultimo per inviare le istruzioni all'applicazione in esecuzione. Anche al prompt dei comandi l'applicazione fornisce informazioni sull'output. L'immediatezza di un'applicazione console consente di imparare le tecniche di programmazione senza preoccuparsi di implementare un'interfaccia grafica.  
  
 Quando si usa il modello di applicazione console per creare un progetto, vengono aggiunti automaticamente i riferimenti e i file seguenti:  
  
-   Riferimenti a questi spazi dei nomi di .NET Framework:  
  
    -   [System](https://msdn.microsoft.com/en-us/library/system.appdomainmanager.appdomainmanager.aspx)- Contiene le classi fondamentali e le classi base che definiscono i valori usati comunemente e i tipi di dati di riferimento, gli eventi e i gestori eventi, le interfacce, le eccezioni di elaborazione e gli attributi.  
  
    -   mscorlib - DLL di assembly che supporta lo sviluppo in .NET Framework.  
  
-   File di origine:  
  
    -   Console (file con estensione cpp) - File sorgente principale e punto di ingresso nell'applicazione appena creata. Identifica il file con estensione dll e lo spazio dei nomi del progetto. Fornire il proprio codice in questo file.  
  
    -   AssemblyInfo.cpp - Contiene attributi, file, risorse, tipi, informazioni sulla versione e sulla firma e così via che è possibile usare per modificare i metadati dell'assembly del progetto. Per ulteriori informazioni, vedere [contenuto Assembly](/dotnet/framework/app-domains/assembly-contents).  
  
    -   Stdafx.cpp - Usato per compilare un file di intestazione precompilato denominato Win32.pch e un file di tipi precompilati denominato StdAfx.obj.  
  
-   File di intestazione:  
  
    -   Stdafx.h - Usato per compilare un file di intestazione precompilato denominato Win32.pch e un file di tipi precompilati denominato StdAfx.obj.  
  
    -   resource.h - File di inclusione generato per app.rc.  
  
-   File di risorse:  
  
    -   app.rc: - File script di risorse di un programma.  
  
    -   app.ico - File icona di un programma.  
  
-   ReadMe.txt - Descrive i file nel progetto.  
  
## <a name="to-create-a-common-language-runtime-clr-console-app-project"></a>Per creare un'applicazione console Common Language Runtime (CLR)  
  
1.  Nella barra dei menu scegliere **File**, **Nuovo**, **Progetto**.  
  
2.  Nella finestra di dialogo **Nuovo Progetto** sotto **Modelli installati**, selezionare il nodo **Visual C++** , quindi **CLR** e infine il modello Applicazione console.  
  
3.  Nella casella **Nome** immettere un nome univoco per l'applicazione.  
  
     È possibile specificare altre impostazioni di progetto e di soluzione, anche se non sono necessarie.  
  
4.  Fare clic sul pulsante **OK** .  
  
## <a name="see-also"></a>Vedere anche  
 [Progetti CLR](../ide/files-created-for-clr-projects.md)   


