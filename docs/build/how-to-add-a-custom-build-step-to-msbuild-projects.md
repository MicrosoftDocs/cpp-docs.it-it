---
title: "Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- msbuild.cpp.howto.addcustombuildstep
dev_langs:
- C++
helpviewer_keywords:
- 'msbuild (c++), howto: add a custom build step'
ms.assetid: a20a0c47-4df4-4754-a1f0-a94a99958916
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: aa8d433b782d8436f6211ab9efe55fcaad3492ea
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="how-to-add-a-custom-build-step-to-msbuild-projects"></a>Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild
Un'istruzione di compilazione personalizzata è un passaggio definito dall'utente in una compilazione. Un'istruzione di compilazione personalizzata si comporta come qualsiasi altro *strumento di comando* passaggio, ad esempio il passaggio di strumento di compilazione o di collegamento standard.  
  
 Specificare un'istruzione di compilazione personalizzate nel file di progetto (vcxproj). Il passaggio è possibile specificare una riga di comando da eseguire, qualsiasi input aggiuntivo o file di output e un messaggio da visualizzare. Se **MSBuild** determina che i file di output sono aggiornati rispetto ai file di input, viene visualizzato il messaggio e si esegue il comando.  
  
 Per specificare il percorso di compilazione personalizzata passaggio della sequenza di destinazioni di compilazione, utilizzare uno o entrambi i `CustomBuildAfterTargets` e `CustomBuildBeforeTargets` elementi XML nel file di progetto. Ad esempio, è possibile specificare che l'istruzione di compilazione personalizzato viene eseguito dopo la destinazione dello strumento di collegamento e prima della destinazione dello strumento manifesto. Il set effettivo di destinazioni disponibili dipende dal particolare compilazione.  
  
 Specificare il `CustomBuildBeforeTargets` elemento per eseguire l'istruzione di compilazione personalizzato prima dell'esecuzione di una particolare destinazione, il `CustomBuildAfterTargets` elemento per eseguire il passaggio dopo l'esecuzione di una particolare destinazione o entrambi gli elementi per eseguire il passaggio tra due destinazione adiacenti. Se nessuno dei due viene specificato, lo strumento di compilazione personalizzata verrà eseguito nella posizione predefinita, dopo il **collegamento** destinazione.  
  
 Istruzioni di compilazione personalizzate e gli strumenti di compilazione personalizzata condividono le informazioni specificate nel `CustomBuildBeforeTargets` e `CustomBuildAfterTargets` elementi XML. Pertanto, specificare le destinazioni solo una volta nel file di progetto.  
  
### <a name="to-define-what-is-executed-by-the-custom-build-step"></a>Per definire che viene eseguita dall'istruzione di compilazione personalizzata  
  
1.  Aggiungere un gruppo di proprietà al file di progetto. In questo gruppo di proprietà, specificare il comando, gli input e output e un messaggio, come illustrato nell'esempio seguente. In questo esempio crea un file CAB dal file main.cpp è stato creato in [procedura dettagliata: uso di MSBuild per creare un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md).  
  
    ```  
    <ItemDefinitionGroup>  
      <CustomBuildStep>  
        <Command>makecab.exe $(ProjectDir)main.cpp $(TargetName).cab</Command>  
        <Outputs>$(TargetName).cab</Outputs>  
        <Inputs>$(TargetFileName)</Inputs>  
      </CustomBuildStep>  
    </ItemDefinitionGroup>  
    ```  
  
### <a name="to-define-where-in-the-build-the-custom-build-step-will-execute"></a>Per definire in cui la compilazione in cui verrà eseguita l'istruzione di compilazione personalizzata  
  
1.  Aggiungere il gruppo di proprietà seguente al file di progetto. È possibile specificare entrambe le destinazioni, oppure è possibile omettere uno se si desidera l'istruzione personalizzata da eseguire prima o dopo una determinata destinazione. In questo esempio viene **MSBuild** per eseguire l'istruzione personalizzata dopo l'istruzione di compilazione, ma prima del passaggio di collegamento.  
  
    ```  
    <PropertyGroup>  
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>  
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>  
    </PropertyGroup>  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura dettagliata: Utilizzo di MSBuild per creare un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)   
 [Procedura: utilizzare gli eventi di compilazione in progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)   
 [Procedura: Aggiungere uno strumento di compilazione personalizzato a progetti MSBuild](../build/how-to-add-custom-build-tools-to-msbuild-projects.md)