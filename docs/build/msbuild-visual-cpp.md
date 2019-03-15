---
title: MSBuild dalla riga di comando - C++
ms.date: 12/12/2018
f1_keywords:
- MSBuild
helpviewer_keywords:
- MSBuild
ms.assetid: 7a1be7ff-0312-4669-adf2-5f5bf507d560
ms.openlocfilehash: 565b1c47b4476fa7cb830e15b978b389f4344ee1
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57820470"
---
# <a name="msbuild-on-the-command-line---c"></a>MSBuild dalla riga di comando - C++

In generale, è consigliabile utilizzare Visual Studio per impostare le proprietà del progetto e richiamare il sistema MSBuild. Tuttavia, è possibile usare la **MSBuild** strumento direttamente dal prompt dei comandi. Il processo di compilazione è controllato dalle informazioni in un file di progetto (vcxproj) che è possibile creare e modificare. Il file di progetto specifica le opzioni di compilazione basate su fasi, condizioni e gli eventi di compilazione. Inoltre, è possibile specificare zero o più della riga di comando *opzioni* argomenti.

> **msbuild.exe** [ *project_file* ] [ *options* ]

Usare la **/target** (o **/t**) e **/property** (o **/p**) le opzioni della riga di comando per eseguire l'override di proprietà specifiche e le destinazioni che vengono specificato nel file di progetto.

Una funzione essenziale del file di progetto consiste nello specificare un *destinazione*, ovvero una determinata operazione applicata al progetto e gli input e output necessari per eseguire tale operazione. Un file di progetto è possibile specificare uno o più destinazioni, che possono includere una destinazione predefinita.

Ogni destinazione è costituita da una sequenza di uno o più *attività*. Ogni attività sono rappresentata da una classe .NET Framework che contiene un comando eseguibile. Ad esempio, il [attività CL](/visualstudio/msbuild/cl-task) contiene il [cl.exe](reference/compiling-a-c-cpp-program.md) comando.

Oggetto *parametri dell'attività* è una proprietà dell'attività della classe e in genere rappresenta un'opzione della riga di comando del comando eseguibile. Ad esempio, il `FavorSizeOrSpeed` parametro del `CL` attività corrisponde alla **/Os** e **/Ot** opzioni del compilatore.

Parametri dell'attività aggiuntivi supportano l'infrastruttura MSBuild. Ad esempio, il `Sources` parametri dell'attività specifica un set di attività che possono essere utilizzate da altre attività. Per altre informazioni sulle attività di MSBuild, vedere [riferimenti delle attività](/visualstudio/msbuild/msbuild-task-reference).

La maggior parte delle attività richiede input e output, ad esempio i nomi di file, percorsi e stringa, numerici o booleani parametri. Ad esempio, un input comune è il nome di un file di origine con estensione cpp da compilare. Un parametro di input importante è una stringa che specifica la configurazione della build e la piattaforma, ad esempio, "Debug\|Win32". Input e output sono specificati da uno o più XML definiti dall'utente `Item` gli elementi contenuti in un `ItemGroup` elemento.

Inoltre possibile specificare un file di progetto definita dall'utente *delle proprietà* e `ItemDefinitionGroup` *elementi*. Proprietà e gli elementi formano coppie nome/valore che possono essere utilizzate come variabili nella compilazione. Definisce il componente del nome di una coppia di un *macro*, e il componente di valore dichiara le *valore della macro*. Una macro di proprietà si accede usando $(*name*) la notazione e una macro di elemento avviene tramite %(*nome*) notation.

Gli altri elementi XML in un file di progetto possono testare le macro e quindi in modo condizionale impostare il valore di qualsiasi macro o controllare l'esecuzione della compilazione. I nomi delle macro e stringhe letterali possono essere concatenate per generare costrutti come un percorso e nome file. Nella riga di comando, il **/property** opzione Imposta o esegue l'override di una proprietà del progetto. Gli elementi non è possibile fare riferimento nella riga di comando.

Il sistema MSBuild può eseguire in modo condizionale una destinazione prima o dopo un'altra destinazione. Inoltre, il sistema può compilare una destinazione seconda se i file che utilizza la destinazione sono meno recenti di quelli che viene generato.

Per altre informazioni su MSBuild, vedere:

- [MSBuild](/visualstudio/msbuild/msbuild) concetti relativi a Panoramica di MSBuild.

- [Riferimenti a MSBuild](/visualstudio/msbuild/msbuild-reference) fanno riferimento a informazioni sul sistema MSBuild.

- [Riferimenti allo Schema dei File di progetto](/visualstudio/msbuild/msbuild-project-file-schema-reference) Elenca gli elementi di XML Schema di MSBuild, insieme ai relativi attributi ed elementi padre e figlio. Si noti in particolare il [ItemGroup](/visualstudio/msbuild/itemgroup-element-msbuild), [PropertyGroup](/visualstudio/msbuild/propertygroup-element-msbuild), [destinazione](/visualstudio/msbuild/target-element-msbuild), e [attività](/visualstudio/msbuild/task-element-msbuild) elementi.

- [Riferimento della riga di comando](/visualstudio/msbuild/msbuild-command-line-reference) descrive gli argomenti della riga di comando e opzioni che è possibile usare MSBuild.exe.

- [Riferimento di attività](/visualstudio/msbuild/msbuild-task-reference) MSBuild vengono descritte le attività. In particolare, tenere presenti queste attività, che sono specifiche di Visual C++: [BscMake Task](/visualstudio/msbuild/bscmake-task), [CL Task](/visualstudio/msbuild/cl-task), [CPPClean Task](/visualstudio/msbuild/cppclean-task), [LIB Task](/visualstudio/msbuild/lib-task), [Link Task](/visualstudio/msbuild/link-task), [MIDL Task](/visualstudio/msbuild/midl-task), [MT Task](/visualstudio/msbuild/mt-task), [RC Task](/visualstudio/msbuild/rc-task), [SetEnv Task](/visualstudio/msbuild/setenv-task), [VCMessage Task](/visualstudio/msbuild/vcmessage-task)

## <a name="in-this-section"></a>In questa sezione

|Termine|Definizione|
|----------|----------------|
|[Procedura dettagliata: Uso di MSBuild per creare un progetto Visual C++](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)|Viene illustrato come creare un progetto di Visual C++ usando **MSBuild**.|
|[Procedura: Uso degli eventi di compilazione nei progetti MSBuild](how-to-use-build-events-in-msbuild-projects.md)|Viene illustrato come specificare un'azione che si verifica in una determinata fase nella build: prima dell'avvio della compilazione; prima dell'inizio del collegamento. o termine della compilazione.|
|[Procedura: Aggiungere un'istruzione di compilazione personalizzata ai progetti MSBuild](how-to-add-a-custom-build-step-to-msbuild-projects.md)|Viene illustrato come aggiungere una fase definita dall'utente alla sequenza di compilazione.|
|[Procedura: Aggiungere strumenti di compilazione personalizzati ai progetti MSBuild](how-to-add-custom-build-tools-to-msbuild-projects.md)|Viene illustrato come associare uno strumento di compilazione a un determinato file.|
|[Procedura: Integrare strumenti personalizzati nelle proprietà del progetto](how-to-integrate-custom-tools-into-the-project-properties.md)|Viene illustrato come aggiungere le opzioni per uno strumento personalizzato alla proprietà del progetto.|
|[Procedura: Modificare il framework di destinazione e il set di strumenti della piattaforma](how-to-modify-the-target-framework-and-platform-toolset.md)|Viene illustrato come compilare un progetto per più Framework o set di strumenti.|

## <a name="see-also"></a>Vedere anche

[Usare il set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md)
