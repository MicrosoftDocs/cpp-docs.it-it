---
description: "Altre informazioni su: procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild"
title: "Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild"
ms.date: 10/16/2019
helpviewer_keywords:
- 'msbuild (c++), howto: add a custom build step'
ms.assetid: a20a0c47-4df4-4754-a1f0-a94a99958916
ms.openlocfilehash: 1373aa2333fda6e0be9c7c574c5acc7840b9721a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156398"
---
# <a name="how-to-add-a-custom-build-step-to-msbuild-projects"></a>Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild

Un'istruzione di compilazione personalizzata è un passaggio definito dall'utente in una compilazione. Un'istruzione di compilazione personalizzata si comporta in modo analogo a qualsiasi altro passaggio *dello strumento di comando* , ad esempio il passaggio standard di compilazione o di collegamento.

Specificare un'istruzione di compilazione personalizzata nel file di progetto (con estensione vcxproj). Il passaggio può specificare una riga di comando da eseguire, eventuali file di input o output aggiuntivi e un messaggio da visualizzare. Se **MSBuild** determina che i file di output non sono aggiornati rispetto ai file di input, Visualizza il messaggio ed esegue il comando.

Per specificare il percorso dell'istruzione di compilazione personalizzata nella sequenza di destinazioni di compilazione, utilizzare uno o entrambi `CustomBuildAfterTargets` `CustomBuildBeforeTargets` gli elementi XML e nel file di progetto. Ad esempio, è possibile specificare che l'istruzione di compilazione personalizzata viene eseguita dopo la destinazione dello strumento di collegamento e prima della destinazione dello strumento Manifesto. Il set effettivo di destinazioni disponibili dipende dalla build specifica.

Specificare l' `CustomBuildBeforeTargets` elemento per eseguire l'istruzione di compilazione personalizzata prima dell'esecuzione di una determinata destinazione, l' `CustomBuildAfterTargets` elemento per eseguire il passaggio dopo l'esecuzione di una determinata destinazione oppure entrambi gli elementi per eseguire il passaggio tra due destinazioni adiacenti. Se nessuno dei due elementi viene specificato, lo strumento di compilazione personalizzato viene eseguito nel percorso predefinito, che si trova dopo la destinazione del **collegamento** .

Le istruzioni di compilazione personalizzate e gli strumenti di compilazione personalizzati condividono le informazioni specificate negli `CustomBuildBeforeTargets` `CustomBuildAfterTargets` elementi XML e. Pertanto, specificare le destinazioni solo una volta nel file di progetto.

### <a name="to-define-what-is-executed-by-the-custom-build-step"></a>Per definire gli elementi eseguiti dall'istruzione di compilazione personalizzata

1. Aggiungere un gruppo di proprietà al file di progetto. In questo gruppo di proprietà specificare il comando, i relativi input e output e un messaggio, come illustrato nell'esempio seguente. Questo esempio crea un file con estensione cab dal file Main. cpp creato in [procedura dettagliata: uso di MSBuild per creare un progetto C++](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md).

    ```
    <ItemDefinitionGroup>
      <CustomBuildStep>
        <Command>makecab.exe $(ProjectDir)main.cpp $(TargetName).cab</Command>
        <Outputs>$(TargetName).cab</Outputs>
        <Inputs>$(ProjectDir)main.cpp</Inputs>
      </CustomBuildStep>
    </ItemDefinitionGroup>
    ```

### <a name="to-define-where-in-the-build-the-custom-build-step-will-execute"></a>Per definire il punto in cui verrà eseguita l'istruzione Build the Custom Build

1. Aggiungere il gruppo di proprietà seguente al file di progetto. È possibile specificare entrambe le destinazioni oppure ometterne una solo se si vuole che il passaggio personalizzato venga eseguito prima o dopo una determinata destinazione. Questo esempio indica a **MSBuild** di eseguire il passaggio personalizzato dopo il passaggio di compilazione ma prima del passaggio del collegamento.

    ```
    <PropertyGroup>
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>
    </PropertyGroup>
    ```

## <a name="see-also"></a>Vedi anche

[Procedura dettagliata: uso di MSBuild per la creazione di un progetto C++](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)<br/>
[Procedura: usare eventi di compilazione in progetti MSBuild](how-to-use-build-events-in-msbuild-projects.md)<br/>
[Procedura: aggiungere strumenti di compilazione personalizzati ai progetti MSBuild](how-to-add-custom-build-tools-to-msbuild-projects.md)
