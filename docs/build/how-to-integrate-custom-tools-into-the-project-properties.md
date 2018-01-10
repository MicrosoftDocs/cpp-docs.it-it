---
title: "Procedura: integrare strumenti personalizzati nelle proprietà del progetto | Documenti Microsoft"
ms.custom: 
ms.date: 04/27/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: msbuild.cpp.howto.integratecustomtools
dev_langs: C++
helpviewer_keywords: 'msbuild (c++), howto: integrate custom tools'
ms.assetid: f32d91a4-44e9-4de3-aa9a-1c7f709ad2ee
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a762fc573953bcfb09180b9b830b761448d87a0d
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="how-to-integrate-custom-tools-into-the-project-properties"></a>Procedura: integrare strumenti personalizzati nelle proprietà del progetto
È possibile aggiungere le opzioni dello strumento personalizzato di Visual Studio **pagine delle proprietà** finestra creando un file XML schema sottostante.  
  
 Il **le proprietà di configurazione** sezione la **pagine delle proprietà** finestra vengono visualizzati i gruppi di impostazioni che sono note come *regole*. Ogni regola contiene le impostazioni per uno strumento o un gruppo di funzionalità. Ad esempio, il **Linker** regola contiene le impostazioni per lo strumento linker. Le impostazioni in una regola possono essere suddiviso in *categorie*.  
  
 Questo documento illustra come creare un file in una directory che contiene le proprietà per lo strumento personalizzato in modo che le proprietà vengono caricate all'avvio di Visual Studio. Per informazioni su come modificare il file, vedere [piattaforma estendibilità parte 2](http://go.microsoft.com/fwlink/p/?linkid=191489) nel blog del Team di progetto Visual Studio.  
  
### <a name="to-add-or-change-project-properties"></a>Per aggiungere o modificare le proprietà del progetto  
  
1.  Nell'editor XML, creare un file XML.  
  
2.  Salvare il file nella finestra di Visual 2017 Studio `VCTargets\1033` cartella. È necessario un percorso diverso per ogni edizione di Visual Studio 2017 installata e ogni lingua. Ad esempio, il percorso della cartella per Visual Studio Enterprise edition in lingua inglese è `%ProgramFiles%\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets\1033`. Modificare il percorso per la lingua e l'edizione di Visual Studio. Ogni regola di **pagine delle proprietà** finestra è rappresentata da un file XML in questa cartella. Assicurarsi che il file è denominato in modo univoco nella cartella.  
  
3.  Copiare il contenuto di `%ProgramFiles%\Microsoft Visual Studio\2017\<VS Edition>\Common7\IDE\VC\VCTargets\<LCID>\cl.xml`, chiuderlo senza salvare le modifiche e quindi incollare il contenuto nel nuovo file XML. È possibile utilizzare qualsiasi file XML schema, questo è solo una che può essere utilizzato in modo da iniziare con un modello.  
  
4.  Nel nuovo file XML, modificare il contenuto in base alle esigenze. Assicurarsi di modificare il **nome regola** e **Rule. DisplayName** nella parte superiore del file.  
  
5.  Salvare le modifiche e chiudere il file.  
  
6.  File XML in `%ProgramFiles%\Microsoft Visual Studio\2017\<VS Edition>\Common7\IDE\VC\VCTargets\<LCID>` vengono caricate all'avvio di Visual Studio. Pertanto, per testare il nuovo file, riavviare Visual Studio.  
  
7.  In **Esplora**, fare doppio clic su un progetto e quindi fare clic su **proprietà**. Nel **pagine delle proprietà** finestra, nel riquadro a sinistra, verificare che sia presente un nuovo nodo con il nome della regola.  
  
## <a name="see-also"></a>Vedere anche  
 [MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)
