---
title: Conversione di progetti da modalità mista a linguaggio intermedio (IL) puro
ms.date: 11/04/2016
helpviewer_keywords:
- intermediate language, mixed-mode applications
- mixed-mode applications
- mixed-mode applications, intermediate language
- projects [C++], converting to intermediate language
ms.assetid: 855f9e3c-4f09-4bfe-8eab-a45f68292be9
ms.openlocfilehash: 2f63b6860157e315d44f7c050812a7f0b97f2726
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65448048"
---
# <a name="converting-projects-from-mixed-mode-to-pure-intermediate-language"></a>Conversione di progetti da modalità mista a linguaggio intermedio puro

Per impostazione predefinita, tutti i progetti Visual C++ CLR collegano alle librerie di runtime C. Di conseguenza, questi progetti sono classificati come applicazioni in modalità mista, in quanto queste foreste combinano codice nativo con codice destinato a common language runtime (codice gestito). In fase di compilazione, vengono compilate nel linguaggio intermedio (IL), noto anche come Microsoft intermediate language (MSIL).

> [!IMPORTANT]
> Deprecato di Visual Studio 2015 e Visual Studio 2017 non supporta più la creazione di **/clr: pure** oppure **/CLR: safe** codice per applicazioni CLR. Se sono necessari gli assembly puri o safe, è consigliabile che si traduce l'applicazione in c#.

Se si usa una versione precedente di Microsoft C++ set di strumenti del compilatore che supporta **/clr: pure** oppure **/CLR: safe**, è possibile utilizzare questa procedura per convertire il codice in MSIL pure:

### <a name="to-convert-your-mixed-mode-application-into-pure-intermediate-language"></a>Per convertire l'applicazione in modalità mista in linguaggio intermedio puro

1. Rimuovere i collegamenti per il [librerie di runtime C](../c-runtime-library/crt-library-features.md) (CRT):

   1. Nel file con estensione cpp che definisce il punto di ingresso dell'applicazione, modificare il punto di ingresso `Main()`. Usando `Main()` indica che il progetto non viene collegato alla libreria CRT.

   2. In Esplora soluzioni fare clic sul progetto e selezionare **proprietà** menu di scelta rapida per aprire le pagine delle proprietà per l'applicazione.

   3. Nel **avanzate** pagina delle proprietà di progetto per il **Linker**, selezionare il **punto di ingresso** e quindi immettere **Main** in questo campo.

   4. Per le applicazioni console, nelle **System** pagina delle proprietà di progetto per il **Linker**, selezionare il **sottosistema** campo e impostare questa opzione su **Console (/ SUBSYSTEM:Console)**.

      > [!NOTE]
      > Non è necessario impostare questa proprietà per le applicazioni Windows Forms, poiché il **sottosistema** campo è impostato su **Windows (/ /SUBSYSTEM: WINDOWS)** per impostazione predefinita.

   5. In stdafx. h, impostare come commento tutti i `#include` istruzioni. Ad esempio, nelle applicazioni console:

      ```cpp
      // #include <iostream>
      // #include <tchar.h>
      ```

       oppure

       Ad esempio, nelle applicazioni Windows Forms:

      ```cpp
      // #include <stdlib.h>
      // #include <malloc.h>
      // #include <memory.h>
      // #include <tchar.h>
      ```

   6. Per le applicazioni Windows Forms, in Form1. cpp, impostare come commento il `#include` istruzione che fa riferimento a Windows. h. Ad esempio:

      ```cpp
      // #include <windows.h>
      ```

2. Aggiungere il codice seguente al file stdafx. h:

   ```cpp
   #ifndef __FLTUSED__
   #define __FLTUSED__
      extern "C" __declspec(selectany) int _fltused=1;
   #endif
   ```

3. Rimuovere tutti i tipi non gestiti:

   Dove appropriato, sostituire i tipi non gestiti con i riferimenti alle strutture dal [sistema](/dotnet/api/system) dello spazio dei nomi. Nella tabella seguente sono elencati i tipi gestiti più comuni:

   |Struttura|Descrizione|
   |---------------|-----------------|
   |[Boolean](/dotnet/api/system.boolean)|Rappresenta un valore booleano.|
   |[Byte](/dotnet/api/system.byte)|Rappresenta un numero intero senza segno a 8 bit.|
   |[Char](/dotnet/api/system.char)|Rappresenta un carattere Unicode.|
   |[DateTime](/dotnet/api/system.datetime)|Rappresenta un istante di tempo, in genere espresso come data e ora del giorno.|
   |[Decimal](/dotnet/api/system.decimal)|Rappresenta un numero decimale.|
   |[Double](/dotnet/api/system.double)|Rappresenta un numero a virgola mobile a precisione doppia.|
   |[Guid](/dotnet/api/system.guid)|Rappresenta un identificatore univoco globale (GUID).|
   |[Int16](/dotnet/api/system.int16)|Rappresenta un intero con segno a 16 bit.|
   |[Int32](/dotnet/api/system.int32)|Rappresenta un intero con segno a 32 bit.|
   |[Int64](/dotnet/api/system.int64)|Rappresenta un intero con segno a 64 bit.|
   |[IntPtr](/dotnet/api/system.intptr)|Tipo specifico per la piattaforma usato per rappresentare un puntatore o un handle.|
   |[SByte](/dotnet/api/system.byte)|Rappresenta un intero con segno a 8 bit.|
   |[Single](/dotnet/api/system.single)|Rappresenta un numero a virgola mobile a precisione singola.|
   |[TimeSpan](/dotnet/api/system.timespan)|Rappresenta un intervallo di tempo.|
   |[UInt16](/dotnet/api/system.uint16)|Rappresenta un intero senza segno a 16 bit.|
   |[UInt32](/dotnet/api/system.uint32)|Rappresenta un intero senza segno a 32 bit.|
   |[UInt64](/dotnet/api/system.uint64)|Rappresenta un intero senza segno a 64 bit.|
   |[UIntPtr](/dotnet/api/system.uintptr)|Tipo specifico per la piattaforma usato per rappresentare un puntatore o un handle.|
   |[Void](/dotnet/api/system.void)|Indica un metodo che non restituisce un valore. vale a dire, il metodo ha il tipo restituito void.|