---
title: "Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "msbuild.cpp.howto.addcustombuildtools"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "msbuild (c++), procedura: aggiunta di strumenti di compilazione personalizzata"
ms.assetid: de03899a-371d-4396-9bf9-34f45a65e909
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un strumento di compilazione personalizzato è uno strumento della riga di comando definito dall'utente e associato a un determinato file.  
  
 Per un file particolare, specificare nel file di progetto \(file con estensione vcxproj\) la riga di comando da eseguire, qualsiasi input aggiuntivo o file di output e un messaggio da visualizzare.  Se **MSBuild** determina che i file di output sono non aggiornati rispetto ai file di input, verrà visualizzato il messaggio ed eseguito il comando.  
  
 Per specificare il momento in cui lo strumento di compilazione personalizzato deve essere eseguito, utilizzare uno o entrambi gli elementi XML `CustomBuildBeforeTargets` e `CustomBuildAfterTargets` nel file di progetto.  Ad esempio, è possibile specificare che lo strumento di compilazione personalizzato debba essere eseguito dopo il compilatore MIDL e prima del compilatore del C\/C\+\+.  Specificare che l'elemento `CustomBuildBeforeTargets` esegua lo strumento di compilazione personalizzato prima dell'esecuzione di una determinata destinazione, che l'elemento `CustomBuildAfterTargets` esegua lo strumento dopo l'esecuzione di una determinata destinazione o che entrambi gli elementi eseguano lo strumento tra l'esecuzione di due destinazione adiacenti.  Se non viene specificato alcun elemento, lo strumento di compilazione personalizzato verrà eseguito nella posizione predefinita, ovvero prima della destinazione **MIDL**.  
  
 Le istruzioni di compilazione personalizzate e gli strumenti di compilazione personalizzati condividono le informazioni specificate negli elementi XML `CustomBuildBeforeTargets` e `CustomBuildAfterTargets`.  Specificare tali destinazioni un sola volta nel file di progetto.  
  
### Per aggiungere uno strumento personalizzato a un controllo  
  
1.  Aggiungere un gruppo di elementi al file di progetto e aggiungere un elemento per ogni file di input.  Specificare il comando, gli input aggiuntivi, gli output e un messaggio come metadati dell'elemento, come mostrato di seguito.  In questo esempio si presuppone che un file denominato faq.txt si trovi nella stessa directory del progetto.  
  
    ```  
    <ItemGroup>  
      <CustomBuild Include="faq.txt">  
        <Message>Copying readme...</Message>  
        <Command>copy %(Identity) $(OutDir)%(Identity)</Command>  
        <Outputs>$(OutDir)%(Identity)</Outputs>  
      </CustomBuild>  
    </ItemGroup>  
    ```  
  
### Per definire la posizione nella compilazione in cui gli strumenti di compilazione personalizzati verranno eseguiti  
  
1.  Aggiungere il seguente gruppo di proprietà al file di progetto.  È necessario specificare almeno una delle destinazioni, ma è possibile omettere l'altra se si desidera solo eseguire l'istruzione di compilazione personalizzata prima \(o dopo\) a una particolare destinazione.  In questo esempio viene eseguita l'istruzione personalizzata dopo avere compilato ma prima di collegare.  
  
    ```  
    <PropertyGroup>  
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>  
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>  
    </PropertyGroup>  
    ```  
  
## Vedere anche  
 [Procedura dettagliata: utilizzo di MSBuild per la creazione di un progetto Visual C\+\+](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)   
 [Procedura: utilizzo di eventi di compilazione in progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)   
 [Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](../build/how-to-add-a-custom-build-step-to-msbuild-projects.md)