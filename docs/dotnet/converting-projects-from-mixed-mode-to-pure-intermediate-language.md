---
title: Conversione di progetti da modalità mista a linguaggio intermedio (IL) puro
ms.date: 08/19/2019
helpviewer_keywords:
- intermediate language, mixed-mode applications
- mixed-mode applications
- mixed-mode applications, intermediate language
- projects [C++], converting to intermediate language
ms.assetid: 855f9e3c-4f09-4bfe-8eab-a45f68292be9
ms.openlocfilehash: 05ece23e6d79fc399085099deebcde0aa4a92c64
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "70311647"
---
# <a name="converting-projects-from-mixed-mode-to-pure-intermediate-language"></a>Conversione di progetti da modalità mista a linguaggio intermedio puro

Per impostazione C++ predefinita, tutti i progetti Visual CLR sono collegati alle librerie di runtime C. Questi progetti sono quindi classificati come applicazioni in modalità mista, in quanto combinano codice nativo con codice destinato al Common Language Runtime (codice gestito). Quando vengono compilati, vengono compilati in linguaggio intermedio (IL), noto anche come MSIL (Microsoft Intermediate Language).

> [!IMPORTANT]
> Visual Studio 2015 deprecato e Visual Studio 2017 non supporta più la creazione di codice **/CLR: pure** o **/CLR: safe** per le applicazioni CLR. Se sono necessari assembly puri o sicuri, è consigliabile convertire l'applicazione in C#.

Se si usa una versione precedente del set di strumenti C++ del compilatore Microsoft che supporta **/CLR: pure** o **/CLR: safe**, è possibile usare questa procedura per convertire il codice in codice MSIL puro:

### <a name="to-convert-your-mixed-mode-application-into-pure-intermediate-language"></a>Per convertire l'applicazione in modalità mista in linguaggio intermedio puro

1. Rimuovere i collegamenti alle [librerie di runtime C](../c-runtime-library/crt-library-features.md) (CRT):

   1. Nel file con estensione cpp che definisce il punto di ingresso dell'applicazione, modificare il punto di `Main()`ingresso in. L' `Main()` utilizzo di indica che il progetto non è collegato a CRT.

   2. In Esplora soluzioni fare clic con il pulsante destro del mouse sul progetto e scegliere **Proprietà** dal menu di scelta rapida per aprire le pagine delle proprietà dell'applicazione.

   3. Nella pagina delle proprietà **Avanzate** del progetto per il **linker**, selezionare il **punto di ingresso** e quindi immettere **Main** in questo campo.

   4. Per le applicazioni console, nella pagina delle proprietà del progetto di **sistema** per il **linker**Selezionare il campo **sottosistema** e modificarlo in **Console (/Subsystem: console)** .

      > [!NOTE]
      > Non è necessario impostare questa proprietà per Windows Forms applicazioni perché il campo **sottosistema** è impostato su **Windows (/Subsystem: Windows)** per impostazione predefinita.

   5. In *stdafx. h*, impostare come commento tutte `#include` le istruzioni. Ad esempio, nelle applicazioni console:

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

   6. Per Windows Forms applicazioni, in Form1. cpp, impostare come commento `#include` l'istruzione che fa riferimento a Windows. h. Ad esempio:

      ```cpp
      // #include <windows.h>
      ```

2. Aggiungere il codice seguente a *stdafx. h*:

   ```cpp
   #ifndef __FLTUSED__
   #define __FLTUSED__
      extern "C" __declspec(selectany) int _fltused=1;
   #endif
   ```

3. Rimuovi tutti i tipi non gestiti:

   Laddove appropriato, sostituire i tipi non gestiti con riferimenti a strutture dello spazio dei nomi [System](/dotnet/api/system) . I tipi gestiti comuni sono elencati nella tabella seguente:

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
   |[Void](/dotnet/api/system.void)|Indica un metodo che non restituisce un valore. ovvero il tipo restituito del metodo è void.|