---
description: 'Altre informazioni su: procedura: creare progetti C++ verificabili (C++/CLI)'
title: 'Procedura: creare progetti C++ verificabili (C++/CLI)'
ms.date: 11/04/2016
helpviewer_keywords:
- verifiable assemblies [C++], creating
- conversions, C++ projects
- Visual Studio C++ projects
ms.assetid: 4ef2cc1a-e3e5-4d67-8d8d-9c614f8ec5d3
ms.openlocfilehash: 5f3a84a4f87db5cf390dcfbad18f167108e0ff08
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245993"
---
# <a name="how-to-create-verifiable-c-projects-ccli"></a>Procedura: creare progetti C++ verificabili (C++/CLI)

Visual C++ creazioni guidate dell'applicazione non creano progetti verificabili.

> [!IMPORTANT]
> Visual Studio 2015 deprecato e Visual Studio 2017 non supporta la creazione di progetti verificabili **/CLR: pure** e **/CLR: safe** . Se è necessario codice verificabile, è consigliabile convertire il codice in C#.

Tuttavia, se si usa una versione precedente del set di strumenti del compilatore Microsoft C++ che supporta **/CLR: pure** e **/CLR: safe**, i progetti possono essere convertiti per essere verificabili. Questo argomento descrive come impostare le proprietà del progetto e modificare i file di origine del progetto per trasformare i progetti C++ di Visual Studio in modo da produrre applicazioni verificabili.

## <a name="compiler-and-linker-settings"></a>Impostazioni del compilatore e del linker

Per impostazione predefinita, i progetti .NET usano il flag/CLR del compilatore e configurano il linker per l'hardware x86 di destinazione. Per il codice verificabile, è necessario usare il flag/CLR: safe ed è necessario indicare al linker di generare codice MSIL anziché istruzioni native del computer.

### <a name="to-change-the-compiler-and-linker-settings"></a>Per modificare le impostazioni del compilatore e del linker

1. Visualizzare la pagina delle proprietà del progetto. Per altre informazioni, vedere [impostare le proprietà del compilatore e della compilazione](../build/working-with-project-properties.md).

1. Nella pagina **generale** del nodo **proprietà di configurazione** impostare la proprietà **supporto Common Language Runtime** su **supporto Common Language Runtime sicuro (/CLR: safe)**.

1. Nella pagina **Avanzate** sotto il nodo **linker** impostare la proprietà **tipo immagine CLR** su **forza immagine il Safe (/CLRIMAGETYPE: safe)**.

## <a name="removing-native-data-types"></a>Rimozione di tipi di dati nativi

Poiché i tipi di dati nativi non sono verificabili, anche se non vengono effettivamente utilizzati, è necessario rimuovere tutti i file di intestazione contenenti tipi nativi.

> [!NOTE]
> La procedura seguente si applica ai progetti Windows Forms applicazione (.NET) e applicazione console (.NET).

### <a name="to-remove-references-to-native-data-types"></a>Per rimuovere i riferimenti ai tipi di dati nativi

1. Impostare come commento tutti gli elementi del file stdafx. h.

## <a name="configuring-an-entry-point"></a>Configurazione di un punto di ingresso

Poiché le applicazioni verificabili non possono utilizzare le librerie di runtime C (CRT), non possono dipendere dalla libreria CRT per chiamare la funzione Main come punto di ingresso standard. Ciò significa che è necessario specificare in modo esplicito il nome della funzione da chiamare inizialmente al linker. (In questo caso, viene usato Main () anziché Main () o _tmain () per indicare un punto di ingresso non CRT, ma poiché il punto di ingresso deve essere specificato in modo esplicito, questo nome è arbitrario.

> [!NOTE]
> Le procedure seguenti si applicano ai progetti di applicazione console (.NET).

#### <a name="to-configure-an-entry-point"></a>Per configurare un punto di ingresso

1. Modificare _tmain () in Main () nel file Main. cpp del progetto.

1. Visualizzare la pagina delle proprietà del progetto. Per altre informazioni, vedere [impostare le proprietà del compilatore e della compilazione](../build/working-with-project-properties.md).

1. Nella pagina **Avanzate** sotto il nodo **linker** immettere `Main` come valore della proprietà del **punto di ingresso** .

## <a name="see-also"></a>Vedi anche

- [Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)
