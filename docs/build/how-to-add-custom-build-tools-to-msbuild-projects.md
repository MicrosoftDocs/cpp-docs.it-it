---
title: 'Procedura: aggiungere strumenti di compilazione personalizzata a progetti MSBuild | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: msbuild.cpp.howto.addcustombuildtools
dev_langs: C++
helpviewer_keywords: 'msbuild (c++), howto: add custom build tools'
ms.assetid: de03899a-371d-4396-9bf9-34f45a65e909
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: efa484e4ad57a3a1f27621e16dddcf90135b7057
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-add-custom-build-tools-to-msbuild-projects"></a>Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild
Uno strumento di compilazione personalizzata è uno strumento della riga di comando, definiti dall'utente che è associato a un determinato file.  
  
 Per un determinato file, specificare il file di progetto (vcxproj) la riga di comando da eseguire, qualsiasi input aggiuntivo o file di output e un messaggio da visualizzare. Se **MSBuild** determina che i file di output sono aggiornati rispetto ai file di input, viene visualizzato il messaggio e si esegue lo strumento da riga di comando.  
  
 Per specificare quando viene eseguito lo strumento di compilazione personalizzato, utilizzare uno o entrambi i `CustomBuildBeforeTargets` e `CustomBuildAfterTargets` elementi XML nel file di progetto. Ad esempio, è possibile specificare che lo strumento di compilazione personalizzati eseguiti dopo il compilatore MIDL e prima del compilatore C/C++. Specificare il `CustomBuildBeforeTargets` elemento per eseguire lo strumento prima dell'esecuzione di una particolare destinazione; il `CustomBuildAfterTargets` elemento per eseguire lo strumento dopo una determinata destinazione; o entrambi gli elementi per eseguire lo strumento tra l'esecuzione dei due destinazioni. Se nessuno dei due viene specificato, lo strumento di compilazione personalizzata verrà eseguito nella posizione predefinita, ovvero prima il **MIDL** destinazione.  
  
 Istruzioni di compilazione personalizzate e gli strumenti di compilazione personalizzata condividono le informazioni specificate nel `CustomBuildBeforeTargets` e `CustomBuildAfterTargets` elementi XML. Specificare le destinazioni di una volta nel file di progetto.  
  
### <a name="to-add-a-custom-build-tool"></a>Per aggiungere uno strumento di compilazione personalizzata  
  
1.  Aggiungere un gruppo di elementi al file di progetto e aggiungere un elemento per ogni file di input. Specificare il comando, altri input, output e un messaggio come metadati dell'elemento, come illustrato di seguito. Questo esempio si presuppone che il file "con il file" esista nella stessa directory del progetto.  
  
    ```  
    <ItemGroup>  
      <CustomBuild Include="faq.txt">  
        <Message>Copying readme...</Message>  
        <Command>copy %(Identity) $(OutDir)%(Identity)</Command>  
        <Outputs>$(OutDir)%(Identity)</Outputs>  
      </CustomBuild>  
    </ItemGroup>  
    ```  
  
### <a name="to-define-where-in-the-build-the-custom-build-tools-will-execute"></a>Per definire in cui la compilazione in cui verranno eseguito gli strumenti di compilazione personalizzata  
  
1.  Aggiungere il gruppo di proprietà seguente al file di progetto. È necessario specificare almeno una delle destinazioni, ma è possibile omettere l'altro se si desidera solo in presenza dell'istruzione di compilazione eseguita prima (o dopo) una determinata destinazione. In questo esempio viene eseguita l'istruzione personalizzata dopo la compilazione, ma prima del collegamento.  
  
    ```  
    <PropertyGroup>  
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>  
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>  
    </PropertyGroup>  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura dettagliata: Utilizzo di MSBuild per creare un progetto Visual C++](../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)   
 [Procedura: utilizzare gli eventi di compilazione in progetti MSBuild](../build/how-to-use-build-events-in-msbuild-projects.md)   
 [Procedura: Aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](../build/how-to-add-a-custom-build-step-to-msbuild-projects.md)