---
title: 'Procedura: creare progetti C++ verificabili (C + + CLI) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- verifiable assemblies [C++], creating
- conversions, C++ projects
- Visual C++ projects
ms.assetid: 4ef2cc1a-e3e5-4d67-8d8d-9c614f8ec5d3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 36e7ee85d97639df6298a346ae83bb090e81bf87
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704763"
---
# <a name="how-to-create-verifiable-c-projects-ccli"></a>Procedura: creare progetti C++ verificabili (C + c++ /CLI)

Creazioni guidate applicazione di Visual C++ non creano progetti verificabile.

> [!IMPORTANT]
> Deprecato di Visual Studio 2015 e Visual Studio 2017 non supporta il **/clr: pure** e **/CLR: safe** la creazione di progetti verificabile. Se è necessario codice verificabile, è consigliabile che si traduce al codice di c#.

Tuttavia, se si utilizza una versione precedente del set di strumenti del compilatore Visual C++ che supporta **/clr: pure** e **/CLR: safe**, progetti possono essere convertiti per essere verificabile. In questo argomento viene illustrato come impostare le proprietà del progetto e modificare i file di origine per trasformare i progetti di Visual C++ per creare applicazioni verificabili.

## <a name="compiler-and-linker-settings"></a>Impostazioni del compilatore e del linker

 Per impostazione predefinita, i progetti .NET utilizzano il flag del compilatore /clr e configurare al linker di hardware di destinazione x86. Per il codice verificabile, è necessario utilizzare il flag /clr: safe ed è necessario indicare al linker di generare codice MSIL anziché istruzioni macchina native.

### <a name="to-change-the-compiler-and-linker-settings"></a>Per modificare le impostazioni del compilatore e del linker

1. Visualizzare la pagina delle proprietà del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).

1. Nel **generale** pagina il **le proprietà di configurazione** set di nodi, il **supporto Common Language Runtime** proprietà **-Safe MSIL Common Language Supporto di runtime (o /CLR: safe)**.

1. Nel **avanzate** pagina il **Linker** set di nodi, il **tipo di immagine CLR** proprietà **Imponi immagine IL safe (/ /CLRIMAGETYPE: safe)**.

## <a name="removing-native-data-types"></a>Rimozione dei tipi di dati nativi

Poiché i tipi di dati nativi non sono verificabili, anche se non vengono effettivamente utilizzate, è necessario rimuovere tutti i file di intestazione contenenti tipi nativi.

> [!NOTE]
> La procedura seguente si applica ai progetti Windows Forms Application (.NET) e di applicazione Console (.NET).

### <a name="to-remove-references-to-native-data-types"></a>Per rimuovere i riferimenti ai tipi di dati nativi

1. Impostare come commento tutti gli elementi nel file stdafx. h.

## <a name="configuring-an-entry-point"></a>Configurazione di un punto di ingresso

Poiché applicazioni verificabili non è possibile utilizzare le librerie di runtime C (CRT), non possono dipendere CRT per chiamare la funzione principale come punto di ingresso standard. Ciò significa che è necessario fornire in modo esplicito il nome della funzione da chiamare inizialmente al linker. (In questo caso, viene utilizzato Main () anziché di Main () o tmain () per indicare un punto di ingresso non CRT, ma poiché il punto di ingresso deve essere specificato in modo esplicito, questo nome è arbitrario.)

> [!NOTE]
> Le procedure seguenti si applicano ai progetti di applicazione Console (.NET).

#### <a name="to-configure-an-entry-point"></a>Per configurare un punto di ingresso

1. Modificare tmain in Main () nel file. cpp principale del progetto.

1. Visualizzare la pagina delle proprietà del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).

1. Nel **avanzate** pagina il **Linker** nodo immettere `Main` come il **punto di ingresso** valore della proprietà.

## <a name="see-also"></a>Vedere anche

- [Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)
