---
title: "Procedura: aggiungere un&#39;istruzione di compilazione personalizzata a progetti MSBuild | Microsoft Docs"
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
  - "msbuild.cpp.howto.addcustombuildstep"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "msbuild (c++), procedura: aggiunta di un'istruzione di compilazione personalizzata"
ms.assetid: a20a0c47-4df4-4754-a1f0-a94a99958916
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura: aggiungere un&#39;istruzione di compilazione personalizzata a progetti MSBuild
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'istruzione di compilazione personalizzata è un'istruzione definita dall'utente in una compilazione.  Un'istruzione di compilazione personalizzata si comporta come qualsiasi altra istruzione *strumento di comando*, ad esempio come l'istruzione di compilazione o di collegamento strumento standard.  
  
 Specificare un'istruzione di compilazione personalizzata nel file di progetto \(.vcxproj\).  L'istruzione può specificare una riga di comando per eseguire, qualsiasi input aggiuntivo o file di output e un messaggio da visualizzare.  Se **MSBuild** determina che i file di output sono non aggiornati rispetto ai file di input, verrà visualizzato il messaggio ed eseguito il comando.  
  
 Per specificare il percorso dell'istruzione di compilazione personalizzata nella sequenza di destinazioni per la compilazione, utilizzare uno o entrambi gli elementi XML `CustomBuildAfterTargets` e `CustomBuildBeforeTargets` nel file di progetto.  Ad esempio, è possibile specificare che l'istruzione di compilazione personalizzata venga eseguita dopo la destinazione dello strumento di collegamento e prima della destinazione dello strumento Manifesto.  Il set effettivo di destinazioni disponibili dipende dalla compilazione specifica.  
  
 Specificare che l'elemento `CustomBuildBeforeTargets` esegua l'istruzione di compilazione personalizzata prima dell'esecuzione di una determinata destinazione, che l'elemento `CustomBuildAfterTargets` esegua l'istruzione dopo l'esecuzione di una determinata destinazione o che entrambi gli elementi eseguano l'istruzione tra due destinazione adiacenti.  Se non viene specificato alcun elemento, lo strumento di compilazione personalizzato verrà eseguito nella posizione predefinita, ovvero dopo la destinazione **Link**.  
  
 Le istruzioni di compilazione personalizzate e gli strumenti di compilazione personalizzati condividono le informazioni specificate negli elementi XML `CustomBuildBeforeTargets` e `CustomBuildAfterTargets`.  Pertanto, specificare tali destinazioni un sola volta nel file di progetto.  
  
### Per definire cosa deve essere eseguito dall'istruzione di compilazione personalizzata  
  
1.  Aggiungere un nuovo gruppo di proprietà al file di progetto.  In questo gruppo di proprietà, specificare il comando, gli input e gli output e un messaggio, come mostrato nell'esempio seguente.  In questo esempio viene creato un file con estensione cab dal file main.cpp che creato precedentemente in [Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C\+\+](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md).  
  
    ```  
    <ItemDefinitionGroup>  
      <CustomBuildStep>  
        <Command>makecab.exe $(ProjectDir)main.cpp $(TargetName).cab</Command>  
        <Outputs>$(TargetName).cab</Outputs>  
        <Inputs>$(TargetFileName)</Inputs>  
      </CustomBuildStep>  
    </ItemDefinitionGroup>  
    ```  
  
### Per definire la posizione nella compilazione in cui l'istruzione di compilazione personalizzata verrà eseguita  
  
1.  Aggiungere il seguente gruppo di proprietà al file di progetto.  È possibile specificare entrambe le destinazioni oppure ometterne una se si desidera che l'istruzione personalizzata venga eseguita prima o dopo una particolare destinazione.  In questo esempio **MSBuild** indica di eseguire l'istruzione personalizzata dopo l'istruzione di compilazione, ma prima dell'istruzione di collegamento.  
  
    ```  
    <PropertyGroup>  
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>  
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>  
    </PropertyGroup>  
    ```  
  
## Vedere anche  
 [Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C\+\+](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)   
 [Procedura: utilizzo di eventi di compilazione in progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)   
 [Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild](../build/how-to-add-custom-build-tools-to-msbuild-projects.md)