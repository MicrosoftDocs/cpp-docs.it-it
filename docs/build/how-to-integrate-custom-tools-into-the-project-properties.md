---
title: "Procedura: integrare strumenti personalizzati nelle propriet&#224; del progetto | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "msbuild.cpp.howto.integratecustomtools"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "msbuild (c++), procedura: integrare strumenti personalizzati"
ms.assetid: f32d91a4-44e9-4de3-aa9a-1c7f709ad2ee
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# Procedura: integrare strumenti personalizzati nelle propriet&#224; del progetto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile aggiungere le opzioni di uno strumento personalizzato alla finestra **Pagine delle proprietà** di Visual Studio creando un file XML Schema sottostante.  
  
 Nella sezione **Proprietà di configurazione** della finestra **Pagine delle proprietà** sono contenuti gruppi di impostazioni noti come *regole*.  Ogni regola contiene le impostazioni relative a uno strumento o a un gruppo di funzionalità.  Ad esempio, la regola **Linker** contiene le impostazioni per lo strumento Linker.  Le impostazioni di una regola possono essere suddivise in *categorie*.  
  
 In questo documento viene illustrato come creare un file in una directory che contiene le proprietà dello strumento personalizzato in modo che le proprietà vengano caricate all'avvio di Visual Studio.  Per informazioni su come modificare il file, vedere [Parte 2 di Extensibilty della piattaforma](http://go.microsoft.com/fwlink/?LinkID=191489) sul blog del Team di Progetto di Visual Studio.  
  
### Per aggiungere o modificare le proprietà del progetto  
  
1.  Nell'editor XML creare un file XML.  
  
2.  Salvare il file nella cartella %Programmi%\\MSBuild\\Microsoft.Cpp\\v4.0\\.  Ogni regola nella finestra **Pagine delle proprietà** è rappresentata da un file XML in questa cartella.  Assicurarsi che al file sia stato assegnato un nome univoco nella cartella.  
  
3.  Copiare il contenuto di %ProgramFiles%\\MSBuild\\Microsoft.Cpp\\v4.0\\cl.xml, chiuderlo senza salvare le modifiche, quindi incollare il contenuto nel nuovo file XML.  È possibile utilizzare qualsiasi file XML Schema, questo è solo uno che può essere utilizzato in modo da iniziare con un modello.  
  
4.  Nel nuovo file XML modificare il contenuto in base alle proprie esigenze.  Assicurarsi di modificare il **nome della regola** e **Rule.DisplayName** all'inizio del file.  
  
5.  Salvare le modifiche e chiudere il file.  
  
6.  I file XML in %Programmi%\\MSBuild\\Microsoft.Cpp\\v4.0\\ vengono caricati all'avvio di Visual Studio.  Di conseguenza, per testare il nuovo file riavviare Visual Studio.  
  
7.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse su un progetto, quindi scegliere **Proprietà**.  Nel riquadro sinistro della finestra **Pagine delle proprietà** verificare che sia presente un nuovo nodo con il nome della regola.  
  
## Vedere anche  
 [MSBuild \(Visual C\+\+\)](../build/msbuild-visual-cpp.md)