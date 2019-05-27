---
title: 'Procedura: Integrare strumenti personalizzati nelle proprietà del progetto'
ms.date: 05/16/2019
helpviewer_keywords:
- 'msbuild (c++), howto: integrate custom tools'
ms.assetid: f32d91a4-44e9-4de3-aa9a-1c7f709ad2ee
ms.openlocfilehash: 0c0233ad6715a3adb7d47f021a87207f288d5139
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837025"
---
# <a name="how-to-integrate-custom-tools-into-the-project-properties"></a>Procedura: Integrare strumenti personalizzati nelle proprietà del progetto

È possibile aggiungere opzioni di strumenti personalizzati nella finestra **Pagine delle proprietà** tramite la creazione di un file XML Schema sottostante.

La sezione **Proprietà di configurazione** della finestra **Pagine delle proprietà** visualizza gruppi di impostazioni noti come *regole*. Ogni regola contiene le impostazioni per uno strumento o un gruppo di funzionalità. La regola **Linker**, ad esempio, contiene le impostazioni per lo strumento linker. Le impostazioni in una regola possono essere suddivise in *categorie*.

Questo documento illustra come creare in una cartella set un file che contenga le proprietà per lo strumento personalizzato, in modo che queste vengano caricate all'avvio di Visual Studio. Per informazioni su come modificare il file, vedere [Platform Extensibilty Part 2](https://blogs.msdn.microsoft.com/vsproject/2009/06/18/platform-extensibility-part-2/) (Estendibilità della piattaforma, parte 2) nel blog del team del progetto Visual Studio.

### <a name="to-add-or-change-project-properties"></a>Per aggiungere o modificare proprietà del progetto

1. Nell'editor XML, creare un file XML.

1. Salvare il file nella cartella `VCTargets\1033` di Visual Studio. Il percorso è diverso per ogni edizione di Visual Studio installata e per ogni lingua. Ad esempio, il percorso predefinito della cartella per Visual Studio 2019 Community Edition in lingua inglese è `C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\VC\VCTargets`. Modificare il percorso per la lingua e l'edizione di Visual Studio in uso. Ogni regola nella finestra **Pagine delle proprietà** è rappresentata da un file XML in questa cartella. Assicurarsi che il nome del file sia univoco all'interno della cartella.

1. Copiare il contenuto del file `%ProgramFiles%\Microsoft Visual Studio\2019\<VS Edition>\Common7\IDE\VC\VCTargets\<LCID>\cl.xml` (o in qualunque percorso), chiuderlo senza salvare le modifiche e quindi incollare il contenuto nel nuovo file XML. È possibile usare qualsiasi file XML Schema. Questo è solo uno dei file che è possibile usare per iniziare con un modello.

1. Nel nuovo file XML modificare il contenuto in base alle esigenze. Assicurarsi di modificare il **nome della regola** e **Rule. DisplayName** nella parte superiore del file.

1. Salvare le modifiche e chiudere il file.

1. I file XML in `%ProgramFiles%\Microsoft Visual Studio\2019\<VS Edition>\Common7\IDE\VC\VCTargets\<LCID>` (o nel percorso in cui sono stati salvati) vengono caricati all'avvio di Visual Studio. Per testare il nuovo file, quindi, riavviare Visual Studio.

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto e quindi scegliere **Proprietà**. Nel riquadro sinistro della finestra **Pagine delle proprietà** verificare che sia presente un nuovo nodo con il nome della regola.

## <a name="see-also"></a>Vedere anche

[MSBuild dalla riga di comando - C++](msbuild-visual-cpp.md)
