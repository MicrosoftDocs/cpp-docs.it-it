---
title: "Conversione di progetti da modalità mista alla puro | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- intermediate language, mixed-mode applications
- mixed-mode applications
- mixed-mode applications, intermediate language
- projects [C++], converting to intermediate language
ms.assetid: 855f9e3c-4f09-4bfe-8eab-a45f68292be9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0276d5b5420ed0294b2cf3438190f79d03585744
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="converting-projects-from-mixed-mode-to-pure-intermediate-language"></a>Conversione di progetti da modalità mista a linguaggio intermedio (IL) puro
Per impostazione predefinita, tutti i progetti di Visual C++ CLR collegano alle librerie di runtime C. Di conseguenza, questi progetti sono classificati come applicazioni in modalità mista, poiché combinano codice nativo con codice destinato a common language runtime (codice gestito). In fase di compilazione, vengono compilate nel linguaggio intermedio (IL), noto anche come Microsoft intermediate language (MSIL).  
  
### <a name="to-convert-your-mixed-mode-application-into-pure-intermediate-language"></a>Per convertire l'applicazione in modalità mista in puro  
  
1.  Rimuovere i collegamenti per il [librerie di runtime C](../c-runtime-library/crt-library-features.md) (CRT):  
  
    1.  Nel file con estensione cpp che definisce il punto di ingresso dell'applicazione, modificare il punto di ingresso `Main()`. Utilizzando `Main()` indica che il progetto non è collegato alla libreria CRT.  
  
    2.  In Esplora risorse, mouse sul progetto e selezionare **proprietà** nel menu di scelta rapida per aprire le pagine delle proprietà per l'applicazione.  
  
    3.  Nel **avanzate** pagina delle proprietà del progetto per il **Linker**, selezionare il **punto di ingresso** e quindi immettere **Main** in questo campo.  
  
    4.  Per le applicazioni console, nel **sistema** pagina delle proprietà del progetto per il **Linker**, selezionare il **sottosistema** campo e modificare il nome in **Console (/ SUBSYSTEM:Console)**.  
  
        > [!NOTE]
        >  Non è necessario impostare questa proprietà per le applicazioni Windows Form perché il **sottosistema** campo è impostato su **Windows (o /SUBSYSTEM: WINDOWS)** per impostazione predefinita.  
  
    5.  In stdafx. h, impostare come commento tutti i `#include` istruzioni. Ad esempio, nelle applicazioni console:  
  
        ```  
        // #include <iostream>  
        // #include <tchar.h>  
        ```  
  
         oppure  
  
         Ad esempio, nelle applicazioni Windows Form:  
  
        ```  
        // #include <stdlib.h>  
        // #include <malloc.h>  
        // #include <memory.h>  
        // #include <tchar.h>  
        ```  
  
    6.  Per applicazioni Windows Form, in Form1. cpp, impostare come commento il `#include` istruzione che fa riferimento a Windows. h. Ad esempio:  
  
        ```  
        // #include <windows.h>  
        ```  
  
2.  Aggiungere il codice seguente al file stdafx. h:  
  
    ```  
    #ifndef __FLTUSED__  
    #define __FLTUSED__  
       extern "C" __declspec(selectany) int _fltused=1;  
    #endif  
    ```  
  
3.  Rimuovere tutti i tipi non gestiti:  
  
    1.  Dove appropriato, sostituire i tipi non gestiti con i riferimenti alle strutture dal [sistema](https://msdn.microsoft.com/en-us/library/system.appdomainmanager.appdomainmanager.aspx) dello spazio dei nomi. Nella tabella seguente sono elencati i tipi gestiti più comuni:  
  
        |Struttura|Descrizione|  
        |---------------|-----------------|  
        |[Boolean](https://msdn.microsoft.com/en-us/library/system.boolean\(v=vs.140\).aspx)|Rappresenta un valore booleano.|  
        |[Byte](https://msdn.microsoft.com/en-us/library/system.byte\(v=vs.140\).aspx)|Rappresenta un numero intero senza segno a 8 bit.|  
        |[Char](https://msdn.microsoft.com/en-us/library/system.char\(v=vs.140\).aspx)|Rappresenta un carattere Unicode.|  
        |[DateTime](https://msdn.microsoft.com/en-us/library/system.datetime.datetime.aspx)|Rappresenta un istante di tempo, in genere espresso come data e ora del giorno.|  
        |[Decimal](https://msdn.microsoft.com/en-us/library/system.decimal\(v=vs.140\).aspx)|Rappresenta un numero decimale.|  
        |[Double](https://msdn.microsoft.com/en-us/library/system.double\(v=vs.140\).aspx)|Rappresenta un numero a virgola mobile a precisione doppia.|  
        |[Guid](https://msdn.microsoft.com/en-us/library/system.guid\(v=vs.140\).aspx)|Rappresenta un identificatore univoco globale (GUID).|  
        |[Int16](https://msdn.microsoft.com/en-us/library/system.int16\(v=vs.140\).aspx)|Rappresenta un intero con segno a 16 bit.|  
        |[Int32](https://msdn.microsoft.com/en-us/library/system.int32\(v=vs.140\).aspx)|Rappresenta un intero con segno a 32 bit.|  
        |[Int64](https://msdn.microsoft.com/en-us/library/system.int64\(v=vs.140\).aspx)|Rappresenta un intero con segno a 64 bit.|  
        |[IntPtr](https://msdn.microsoft.com/en-us/library/system.intptr\(v=vs.140\).aspx)|Tipo specifico per la piattaforma usato per rappresentare un puntatore o un handle.|  
        |[SByte](https://msdn.microsoft.com/en-us/library/system.byte.aspx)|Rappresenta un intero con segno a 8 bit.|  
        |[Single](https://msdn.microsoft.com/en-us/library/system.single.aspx)|Rappresenta un numero a virgola mobile a precisione singola.|  
        |[TimeSpan](https://msdn.microsoft.com/en-us/library/system.timespan\(v=vs.140\).aspx)|Rappresenta un intervallo di tempo.|  
        |[UInt16](https://msdn.microsoft.com/en-us/library/system.uint16\(v=vs.140\).aspx)|Rappresenta un intero senza segno a 16 bit.|  
        |[UInt32](https://msdn.microsoft.com/en-us/library/system.uint32\(v=vs.140\).aspx)|Rappresenta un intero senza segno a 32 bit.|  
        |[UInt64](https://msdn.microsoft.com/en-us/library/system.uint64\(v=vs.140\).aspx)|Rappresenta un intero senza segno a 64 bit.|  
        |[UIntPtr](https://msdn.microsoft.com/en-us/library/system.uintptr\(v=vs.140\).aspx)|Tipo specifico per la piattaforma usato per rappresentare un puntatore o un handle.|  
        |[Void](https://msdn.microsoft.com/en-us/library/system.void\(v=vs.140\).aspx)|Indica un metodo che restituisce un valore. ovvero, il metodo ha il tipo restituito void.|