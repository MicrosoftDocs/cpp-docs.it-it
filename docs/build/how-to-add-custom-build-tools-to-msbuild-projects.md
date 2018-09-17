---
title: 'Procedura: aggiungere gli strumenti di compilazione personalizzata a progetti MSBuild | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- msbuild.cpp.howto.addcustombuildtools
dev_langs:
- C++
helpviewer_keywords:
- 'msbuild (c++), howto: add custom build tools'
ms.assetid: de03899a-371d-4396-9bf9-34f45a65e909
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4e06a2a545862c0fa9cfdcf6311334ecc86de2bf
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45714402"
---
# <a name="how-to-add-custom-build-tools-to-msbuild-projects"></a>Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild

Uno strumento di compilazione personalizzata è uno strumento da riga di comando e definite dall'utente che è associato a un determinato file.

Per un determinato file, specificare nel file di progetto (vcxproj) la riga di comando da eseguire, eventuali input aggiuntivi o i file di output e un messaggio da visualizzare. Se **MSBuild** determina che i file di output sono aggiornati rispetto ai file di input, viene visualizzato il messaggio e viene eseguito lo strumento da riga di comando.

Per specificare quando viene eseguito lo strumento di compilazione personalizzato, usare uno o entrambi i `CustomBuildBeforeTargets` e `CustomBuildAfterTargets` elementi XML nel file di progetto. Ad esempio, è possibile specificare che lo strumento di compilazione personalizzata eseguita dopo il compilatore MIDL e prima il compilatore C/C++. Specificare il `CustomBuildBeforeTargets` elemento per eseguire lo strumento prima dell'esecuzione di una determinata destinazione; il `CustomBuildAfterTargets` elemento per eseguire lo strumento dopo un determinato obiettivo; o entrambi gli elementi per eseguire lo strumento tra l'esecuzione di due destinazioni. Se nessuno dei due viene specificato, lo strumento di compilazione personalizzata verrà eseguito nel percorso predefinito, ovvero prima la **MIDL** destinazione.

Istruzioni di compilazione personalizzate e strumenti di compilazione personalizzati condividono le informazioni specificate nel `CustomBuildBeforeTargets` e `CustomBuildAfterTargets` elementi XML. Specificare le destinazioni di una sola volta nel file di progetto.

### <a name="to-add-a-custom-build-tool"></a>Per aggiungere uno strumento di compilazione personalizzato

1. Aggiungere un gruppo di elementi del file di progetto e aggiungere un elemento per ogni file di input. Specificare il comando, gli altri input, output e un messaggio come metadati dell'elemento, come illustrato di seguito. Questo esempio si presuppone che esista un file "FAQ. txt" nella stessa directory del progetto.

    ```
    <ItemGroup>
      <CustomBuild Include="faq.txt">
        <Message>Copying readme...</Message>
        <Command>copy %(Identity) $(OutDir)%(Identity)</Command>
        <Outputs>$(OutDir)%(Identity)</Outputs>
      </CustomBuild>
    </ItemGroup>
    ```

### <a name="to-define-where-in-the-build-the-custom-build-tools-will-execute"></a>Per definire in cui la compilazione in cui verranno eseguito gli strumenti di compilazione personalizzato

1. Aggiungere il gruppo di proprietà seguente al file di progetto. È necessario specificare almeno una delle destinazioni, ma è possibile omettere l'altro se è interessati solo con il passaggio di compilazione di eseguire prima (o dopo) una determinata destinazione. Questo esempio viene eseguito il passaggio personalizzato dopo la compilazione, ma prima del collegamento.

    ```
    <PropertyGroup>
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>
    </PropertyGroup>
    ```

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: uso di MSBuild per la creazione di un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)<br/>
[Procedura: Uso di eventi di compilazione in progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)<br/>
[Procedura: Aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](../build/how-to-add-a-custom-build-step-to-msbuild-projects.md)