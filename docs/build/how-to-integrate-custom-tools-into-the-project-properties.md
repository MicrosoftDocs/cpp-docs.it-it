---
title: 'Procedura: integrare strumenti personalizzati nelle proprietà del progetto'
ms.date: 04/27/2016
f1_keywords:
- msbuild.cpp.howto.integratecustomtools
helpviewer_keywords:
- 'msbuild (c++), howto: integrate custom tools'
ms.assetid: f32d91a4-44e9-4de3-aa9a-1c7f709ad2ee
ms.openlocfilehash: 7041e6583ba1e2c7f035edcc72617ccdb8d5aa02
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50633012"
---
# <a name="how-to-integrate-custom-tools-into-the-project-properties"></a>Procedura: integrare strumenti personalizzati nelle proprietà del progetto

È possibile aggiungere le opzioni degli strumenti personalizzata di Visual Studio **pagine delle proprietà** finestra mediante la creazione di un file XML schema sottostante.

Il **le proprietà di configurazione** sezione del **pagine delle proprietà** finestra vengono visualizzati i gruppi di impostazioni che sono note come *regole*. Ogni regola contiene le impostazioni per uno strumento o un gruppo di funzionalità. Ad esempio, il **Linker** regola contiene le impostazioni per lo strumento linker. Le impostazioni in una regola possono essere suddiviso nei *categorie*.

Questo documento illustra come creare un file in una directory che contiene le proprietà per lo strumento personalizzato in modo che le proprietà vengono caricate all'avvio di Visual Studio. Per informazioni su come modificare il file, vedere [Platform extensibility parte 2](https://blogs.msdn.microsoft.com/vsproject/2009/06/18/platform-extensibility-part-2/) nel blog del Team di progetto di Visual Studio.

### <a name="to-add-or-change-project-properties"></a>Per aggiungere o modificare le proprietà del progetto

1. Nell'editor XML, creare un file XML.

1. Salvare il file in Visual Studio 2017 `VCTargets\1033` cartella. Sarà necessario un percorso diverso per ogni lingua e tutte le edizioni di Visual Studio 2017 installato. Ad esempio, il percorso della cartella per Visual Studio Enterprise edition in lingua inglese è `%ProgramFiles%\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets\1033`. Regolare il percorso per il linguaggio e l'edizione di Visual Studio. Ogni regola nella **pagine delle proprietà** finestra è rappresentata da un file XML in questa cartella. Assicurarsi che il file è denominato in modo univoco nella cartella.

1. Copiare il contenuto di `%ProgramFiles%\Microsoft Visual Studio\2017\<VS Edition>\Common7\IDE\VC\VCTargets\<LCID>\cl.xml`, chiuderlo senza salvare le modifiche e quindi incollare il contenuto nel nuovo file XML. È possibile usare qualsiasi file di XML schema: questo è solo uno che può essere utilizzato in modo da iniziare con un modello.

1. Nel nuovo file XML, modificare il contenuto in base alle esigenze. Assicurarsi di modificare la **il nome della regola** e **Rule. DisplayName** nella parte superiore del file.

1. Salvare le modifiche e chiudere il file.

1. File XML `%ProgramFiles%\Microsoft Visual Studio\2017\<VS Edition>\Common7\IDE\VC\VCTargets\<LCID>` vengono caricati all'avvio di Visual Studio. Pertanto, per testare il nuovo file, riavviare Visual Studio.

1. Nelle **Esplora soluzioni**, fare doppio clic su un progetto e quindi fare clic su **proprietà**. Nel **pagine delle proprietà** finestra, nel riquadro sinistro, verificare che sia presente un nuovo nodo con il nome della regola.

## <a name="see-also"></a>Vedere anche

[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)
