---
title: 'Procedura: Aggiungere un passaggio di compilazione personalizzata a progetti MSBuild'
ms.date: 11/04/2016
f1_keywords:
- msbuild.cpp.howto.addcustombuildstep
helpviewer_keywords:
- 'msbuild (c++), howto: add a custom build step'
ms.assetid: a20a0c47-4df4-4754-a1f0-a94a99958916
ms.openlocfilehash: 57b7636c58a245bfea3a71dfb6aa7ee853329f19
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57413225"
---
# <a name="how-to-add-a-custom-build-step-to-msbuild-projects"></a>Procedura: Aggiungere un passaggio di compilazione personalizzata a progetti MSBuild

Un'istruzione di compilazione personalizzato è un passaggio definito dall'utente in una compilazione. Un'istruzione di compilazione personalizzato si comporta come qualsiasi altra *strumento di comando* passaggio, ad esempio il passaggio di strumento di compilazione o un collegamento standard.

Specificare un passaggio di compilazione personalizzato nel file di progetto (vcxproj). Il passaggio è possibile specificare una riga di comando da eseguire, eventuali input aggiuntivi o i file di output e un messaggio da visualizzare. Se **MSBuild** determina che i file di output sono aggiornati rispetto ai file di input, viene visualizzato il messaggio e viene eseguito il comando.

Per specificare il percorso della build personalizzata passaggio della sequenza di destinazioni di compilazione, usare uno o entrambi i `CustomBuildAfterTargets` e `CustomBuildBeforeTargets` elementi XML nel file di progetto. Ad esempio, è possibile specificare che viene eseguito il passaggio di compilazione personalizzato dopo la destinazione del collegamento dello strumento e prima della destinazione dello strumento manifesto. Il set effettivo di destinazioni disponibili dipende dalla compilazione specifica.

Specificare il `CustomBuildBeforeTargets` elemento per eseguire l'istruzione di compilazione personalizzato prima che venga eseguito una determinata destinazione, il `CustomBuildAfterTargets` elemento per eseguire il passaggio dopo l'esecuzione di un determinato obiettivo o entrambi gli elementi per eseguire il passaggio tra due destinazioni adiacenti. Se nessuno dei due viene specificato, lo strumento di compilazione personalizzata verrà eseguito nel percorso predefinito, ovvero dopo il **collegamento** destinazione.

Istruzioni di compilazione personalizzate e strumenti di compilazione personalizzati condividono le informazioni specificate nel `CustomBuildBeforeTargets` e `CustomBuildAfterTargets` elementi XML. Pertanto, specificare le destinazioni solo una volta nel file di progetto.

### <a name="to-define-what-is-executed-by-the-custom-build-step"></a>Definire ciò che viene eseguita dall'istruzione di compilazione personalizzata

1. Aggiungere un gruppo di proprietà al file di progetto. In questo gruppo di proprietà, specificare il comando, gli input e output e un messaggio, come illustrato nell'esempio seguente. In questo esempio crea un file CAB dal file Main. cpp è stato creato in [procedura dettagliata: Uso di MSBuild per creare un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md).

    ```
    <ItemDefinitionGroup>
      <CustomBuildStep>
        <Command>makecab.exe $(ProjectDir)main.cpp $(TargetName).cab</Command>
        <Outputs>$(TargetName).cab</Outputs>
        <Inputs>$(TargetFileName)</Inputs>
      </CustomBuildStep>
    </ItemDefinitionGroup>
    ```

### <a name="to-define-where-in-the-build-the-custom-build-step-will-execute"></a>Per definire in cui la compilazione in cui verrà eseguita l'istruzione di compilazione personalizzato

1. Aggiungere il gruppo di proprietà seguente al file di progetto. È possibile specificare entrambe le destinazioni, oppure è possibile omettere uno se si desidera solo l'istruzione personalizzata da eseguire prima o dopo una determinata destinazione. In questo esempio indica **MSBuild** per eseguire il passaggio personalizzato dopo il passaggio di compilazione, ma prima del passaggio di collegamento.

    ```
    <PropertyGroup>
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>
    </PropertyGroup>
    ```

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: Uso di MSBuild per creare un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)<br/>
[Procedura: Uso degli eventi di compilazione nei progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)<br/>
[Procedura: Aggiungere strumenti di compilazione personalizzati ai progetti MSBuild](../build/how-to-add-custom-build-tools-to-msbuild-projects.md)
