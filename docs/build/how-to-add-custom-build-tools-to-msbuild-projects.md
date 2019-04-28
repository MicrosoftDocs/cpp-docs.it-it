---
title: 'Procedura: Aggiungere gli strumenti di compilazione personalizzata a progetti MSBuild'
ms.date: 11/04/2016
f1_keywords:
- msbuild.cpp.howto.addcustombuildtools
helpviewer_keywords:
- 'msbuild (c++), howto: add custom build tools'
ms.assetid: de03899a-371d-4396-9bf9-34f45a65e909
ms.openlocfilehash: 05f160e650c0dd717d7ce0f29259f866d751fdba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62188899"
---
# <a name="how-to-add-custom-build-tools-to-msbuild-projects"></a>Procedura: Aggiungere gli strumenti di compilazione personalizzata a progetti MSBuild

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

[Procedura dettagliata: Uso di MSBuild per creare un progetto Visual C++](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)<br/>
[Procedura: Uso degli eventi di compilazione nei progetti MSBuild](how-to-use-build-events-in-msbuild-projects.md)<br/>
[Procedura: Aggiungere un'istruzione di compilazione personalizzata ai progetti MSBuild](how-to-add-a-custom-build-step-to-msbuild-projects.md)
