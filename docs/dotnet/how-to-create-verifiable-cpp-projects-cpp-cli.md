---
title: 'Procedura: Creare verificabile C++ progetti (C++/CLI)'
ms.date: 11/04/2016
helpviewer_keywords:
- verifiable assemblies [C++], creating
- conversions, C++ projects
- Visual C++ projects
ms.assetid: 4ef2cc1a-e3e5-4d67-8d8d-9c614f8ec5d3
ms.openlocfilehash: de3742717bf55c53ab4007aaed18b6ce687fbede
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62387461"
---
# <a name="how-to-create-verifiable-c-projects-ccli"></a>Procedura: creare verificabile C++ progetti (C++/CLI)

Procedure guidate dell'applicazione di Visual C++ non creano progetti verificabili.

> [!IMPORTANT]
> Deprecato di Visual Studio 2015 e Visual Studio 2017 non supporta il **/clr: pure** e **/CLR: safe** la creazione di progetti verificabile. Se è necessario codice verificabile, è consigliabile che si tradurre il codice in c#.

Tuttavia, se si usa una versione precedente del set di strumenti del compilatore Visual C++ che supporta **/clr: pure** e **/CLR: safe**, progetti possono essere convertiti per essere verificabile. Questo argomento descrive come impostare le proprietà del progetto e modificare i file di origine per trasformare i progetti Visual C++ per creare applicazioni verificabili.

## <a name="compiler-and-linker-settings"></a>Impostazioni del compilatore e linker

Per impostazione predefinita, i progetti .NET usano il flag del compilatore /clr e configurare il linker di hardware di destinazione x86. Per il codice verificabile, è necessario usare il flag /clr: safe ed è necessario indicare al linker di generare codice MSIL anziché istruzioni macchina native.

### <a name="to-change-the-compiler-and-linker-settings"></a>Per modificare le impostazioni del compilatore e linker

1. Visualizzare la pagina delle proprietà del progetto. Per altre informazioni, vedere [impostare del compilatore e proprietà di compilazione](../build/working-with-project-properties.md).

1. Nel **generali** pagina il **le proprietà di configurazione** del set di nodi, il **supporto Common Language Runtime** proprietà **Safe MSIL Common Language Supporto di runtime (/ /CLR: safe)**.

1. Nel **avanzate** pagina il **Linker** del set di nodi, il **tipo di immagine CLR** proprietà **Imponi immagine IL safe (/ /CLRIMAGETYPE: safe)**.

## <a name="removing-native-data-types"></a>Rimozione di tipi di dati nativi

Poiché i tipi di dati nativi sono non verificabili, anche se non vengono effettivamente utilizzate, è necessario rimuovere tutti i file di intestazione che contiene i tipi nativi.

> [!NOTE]
> La procedura seguente si applica ai progetti Windows Forms Application (.NET) e applicazione Console (.NET).

### <a name="to-remove-references-to-native-data-types"></a>Per rimuovere i riferimenti ai tipi di dati nativi

1. Impostare come commento tutti gli elementi nel file stdafx. h.

## <a name="configuring-an-entry-point"></a>Configurazione di un punto di ingresso

Poiché applicazioni verificabile non è possibile usare le librerie di runtime C (CRT), non possono dipendere la libreria CRT per chiamare la funzione main come punto di ingresso standard. Ciò significa che è necessario fornire in modo esplicito il nome della funzione da chiamare inizialmente al linker. (In questo caso, Main () viene usato invece di Main () o tmain () per indicare un punto di ingresso non CRT, ma perché il punto di ingresso deve essere specificato in modo esplicito, questo nome è arbitrario.)

> [!NOTE]
> Le procedure seguenti si applicano ai progetti di applicazione Console (.NET).

#### <a name="to-configure-an-entry-point"></a>Per configurare un punto di ingresso

1. Modificare tmain in Main () nel file main. cpp del progetto.

1. Visualizzare la pagina delle proprietà del progetto. Per altre informazioni, vedere [impostare del compilatore e proprietà di compilazione](../build/working-with-project-properties.md).

1. Nel **avanzate** pagina sotto il **Linker** nodo, immettere `Main` come il **punto di ingresso** valore della proprietà.

## <a name="see-also"></a>Vedere anche

- [Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)
