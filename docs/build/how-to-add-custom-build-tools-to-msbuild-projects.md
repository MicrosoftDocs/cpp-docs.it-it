---
description: 'Altre informazioni su: procedura: aggiungere strumenti di compilazione personalizzati ai progetti MSBuild'
title: 'Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild'
ms.date: 11/04/2016
helpviewer_keywords:
- 'msbuild (c++), howto: add custom build tools'
ms.assetid: de03899a-371d-4396-9bf9-34f45a65e909
ms.openlocfilehash: 66ec4a488fd2a089f09ac775d1150300ff662ff2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97162820"
---
# <a name="how-to-add-custom-build-tools-to-msbuild-projects"></a>Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild

Uno strumento di compilazione personalizzato è uno strumento da riga di comando definito dall'utente associato a un determinato file.

Per un determinato file, specificare nel file di progetto (con estensione vcxproj) la riga di comando da eseguire, eventuali file di input o output aggiuntivi e un messaggio da visualizzare. Se **MSBuild** determina che i file di output non sono aggiornati rispetto ai file di input, Visualizza il messaggio ed esegue lo strumento da riga di comando.

Per specificare quando viene eseguito lo strumento di compilazione personalizzato, utilizzare uno o entrambi `CustomBuildBeforeTargets` `CustomBuildAfterTargets` gli elementi XML e nel file di progetto. Ad esempio, è possibile specificare che lo strumento di compilazione personalizzato venga eseguito dopo il compilatore MIDL e prima del compilatore C/C++. Specificare l' `CustomBuildBeforeTargets` elemento per eseguire lo strumento prima dell'esecuzione di una determinata destinazione; l' `CustomBuildAfterTargets` elemento per eseguire lo strumento dopo una determinata destinazione oppure entrambi gli elementi per eseguire lo strumento tra l'esecuzione di due destinazioni. Se nessuno dei due elementi viene specificato, lo strumento di compilazione personalizzato viene eseguito nel percorso predefinito, che precede la destinazione **MIDL** .

Le istruzioni di compilazione personalizzate e gli strumenti di compilazione personalizzati condividono le informazioni specificate negli `CustomBuildBeforeTargets` `CustomBuildAfterTargets` elementi XML e. Specificare le destinazioni una volta nel file di progetto.

### <a name="to-add-a-custom-build-tool"></a>Per aggiungere uno strumento di compilazione personalizzato

1. Aggiungere un gruppo di elementi al file di progetto e aggiungere un elemento per ogni file di input. Specificare il comando, gli input aggiuntivi, gli output e un messaggio come metadati dell'elemento, come illustrato di seguito. In questo esempio si presuppone che un file "faq.txt" esista nella stessa directory del progetto.

    ```
    <ItemGroup>
      <CustomBuild Include="faq.txt">
        <Message>Copying readme...</Message>
        <Command>copy %(Identity) $(OutDir)%(Identity)</Command>
        <Outputs>$(OutDir)%(Identity)</Outputs>
      </CustomBuild>
    </ItemGroup>
    ```

### <a name="to-define-where-in-the-build-the-custom-build-tools-will-execute"></a>Per definire il punto in cui verrà eseguita la compilazione, gli strumenti di compilazione personalizzati

1. Aggiungere il gruppo di proprietà seguente al file di progetto. È necessario specificare almeno una delle destinazioni, ma è possibile omettere l'altra se si è interessati solo all'esecuzione dell'istruzione di compilazione prima o dopo una determinata destinazione. Questo esempio esegue il passaggio personalizzato dopo la compilazione ma prima del collegamento.

    ```
    <PropertyGroup>
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>
    </PropertyGroup>
    ```

## <a name="see-also"></a>Vedi anche

[Procedura dettagliata: uso di MSBuild per la creazione di un progetto C++](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)<br/>
[Procedura: usare eventi di compilazione in progetti MSBuild](how-to-use-build-events-in-msbuild-projects.md)<br/>
[Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](how-to-add-a-custom-build-step-to-msbuild-projects.md)
