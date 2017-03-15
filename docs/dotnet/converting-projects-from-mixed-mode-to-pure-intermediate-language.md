---
title: "Conversione di progetti da modalit&#224; mista a linguaggio intermedio (IL) puro | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "linguaggio intermedio, applicazioni in modalità mista"
  - "applicazioni in modalità mista"
  - "applicazioni in modalità mista, linguaggio intermedio"
  - "progetti [C++], conversione a linguaggi intermedi"
ms.assetid: 855f9e3c-4f09-4bfe-8eab-a45f68292be9
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Conversione di progetti da modalit&#224; mista a linguaggio intermedio (IL) puro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Tutti i progetti CLR di Visual C\+\+ sono collegati per impostazione predefinita alle librerie di runtime del linguaggio C.  Di conseguenza, sono classificati come applicazioni in modalità mista poiché combinano codice nativo con codice che si avvale di Common Language Runtime \(codice gestito\).  Al momento della compilazione, vengono compilati nel linguaggio intermedio \(IL, Intermediate Language\) denominato MSIL \(Microsoft Intermediate Language\).  
  
### Per convertire un'applicazione dalla modalità mista a IL puro  
  
1.  Rimuovere i collegamenti alle [librerie di runtime del linguaggio C](../c-runtime-library/crt-library-features.md) \(CRT, C Run\-time libraries\):  
  
    1.  Nel file CPP che definisce il punto di ingresso dell'applicazione modificare il punto di ingresso in `Main()`.  L'utilizzo di `Main()` indica che il progetto non viene collegato a CRT.  
  
    2.  In Esplora soluzioni fare clic con il pulsante destro del mouse sul progetto e scegliere **Proprietà** dal menu di scelta rapida per aprire le pagine delle proprietà dell'applicazione.  
  
    3.  Nella pagina **Avanzate** delle proprietà del progetto per **Linker**, immettere **Main** nel campo **Punto di ingresso**.  
  
    4.  Per le applicazioni console, nella pagina **Sistema** delle proprietà del progetto per il **Linker**, modificare il campo **Sottosistema** in **Console \(\/SUBSYSTEM:CONSOLE\)**.  
  
        > [!NOTE]
        >  Per le applicazioni Windows Form non è necessario impostare questa proprietà, poiché l'impostazione predefinita del campo **Sottosistema** è **Windows \(\/SUBSYSTEM:WINDOWS\)**.  
  
    5.  In stdafx.h, impostare tutte le istruzioni `#include` come commento.  Ad esempio, nelle applicazioni console:  
  
        ```  
        // #include <iostream>  
        // #include <tchar.h>  
        ```  
  
         \- oppure \-  
  
         nelle applicazioni Windows Form:  
  
        ```  
        // #include <stdlib.h>  
        // #include <malloc.h>  
        // #include <memory.h>  
        // #include <tchar.h>  
        ```  
  
    6.  Per le applicazioni Windows Form, in Form1.cpp impostare come commento l'istruzione `#include` che fa riferimento a windows.h.  Di seguito è riportato un esempio.  
  
        ```  
        // #include <windows.h>  
        ```  
  
2.  Aggiungere il seguente codice a stdafx.h:  
  
    ```  
    #ifndef __FLTUSED__  
    #define __FLTUSED__  
       extern "C" __declspec(selectany) int _fltused=1;  
    #endif  
    ```  
  
3.  Rimuovere tutti i tipi non gestiti:  
  
    1.  Dove appropriato, sostituire tutti i tipi non gestiti con riferimenti a strutture dello spazio dei nomi [System](https://msdn.microsoft.com/en-us/library/system.appdomainmanager.appdomainmanager.aspx).  Nella tabella che segue vengono riportati alcuni tra i tipi gestiti più comuni.  
  
        |Struttura|Descrizione|  
        |---------------|-----------------|  
        |[\<caps:sentence id\="tgt24" sentenceid\="84e2c64f38f78ba3ea5c905ab5a2da27" class\="tgtSentence"\>Boolean\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.boolean\(v=vs.140\).aspx)|Rappresenta un valore booleano.|  
        |[\<caps:sentence id\="tgt26" sentenceid\="40ea57d3ee3c07bf1c102b466e1c3091" class\="tgtSentence"\>Byte\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.byte\(v=vs.140\).aspx)|Rappresenta un Integer senza segno a 8 bit.|  
        |[\<caps:sentence id\="tgt28" sentenceid\="a87deb01c5f539e6bda34829c8ef2368" class\="tgtSentence"\>Char\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.char\(v=vs.140\).aspx)|Rappresenta un carattere Unicode.|  
        |[\<caps:sentence id\="tgt30" sentenceid\="dfeaaeb4316477bd556ea5e8c3295887" class\="tgtSentence"\>DateTime\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.datetime.datetime.aspx)|Rappresenta un istante di tempo, in genere espresso come data e ora del giorno.|  
        |[\<caps:sentence id\="tgt32" sentenceid\="bdaa3c20a3e3851599514f7c6be5f62f" class\="tgtSentence"\>Decimale\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.decimal\(v=vs.140\).aspx)|Rappresenta un numero decimale.|  
        |[\<caps:sentence id\="tgt34" sentenceid\="e8cd7da078a86726031ad64f35f5a6c0" class\="tgtSentence"\>Double\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.double\(v=vs.140\).aspx)|Rappresenta un numero a virgola mobile e precisione doppia.|  
        |[\<caps:sentence id\="tgt36" sentenceid\="1e0ca5b1252f1f6b1e0ac91be7e7219e" class\="tgtSentence"\>Guid\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.guid\(v=vs.140\).aspx)|Rappresenta un identificatore univoco globale \(GUID\).|  
        |[\<caps:sentence id\="tgt38" sentenceid\="ce80d5ec65b1d2a2f1049eadc100db23" class\="tgtSentence"\>Int16\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.int16\(v=vs.140\).aspx)|Rappresenta un intero con segno a 16 bit.|  
        |[\<caps:sentence id\="tgt40" sentenceid\="0241adbbd83925f051b694d40f02747f" class\="tgtSentence"\>Int32\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.int32\(v=vs.140\).aspx)|Rappresenta un intero con segno a 32 bit.|  
        |[\<caps:sentence id\="tgt42" sentenceid\="ff9b3f96d37353c528517bc3656a00a8" class\="tgtSentence"\>Int64\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.int64\(v=vs.140\).aspx)|Rappresenta un intero con segno a 64 bit.|  
        |[\<caps:sentence id\="tgt44" sentenceid\="7f1db863563907cf33604ed7fad6b111" class\="tgtSentence"\>IntPtr\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.intptr\(v=vs.140\).aspx)|Tipo specifico per la piattaforma utilizzato per rappresentare un puntatore o un handle.|  
        |[\<caps:sentence id\="tgt46" sentenceid\="943756eb7841efcc43b7cd37d7254c76" class\="tgtSentence"\>SByte\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.byte.aspx)|Rappresenta un Signed Integer a 8 bit.|  
        |[\<caps:sentence id\="tgt48" sentenceid\="dd5c07036f2975ff4bce568b6511d3bc" class\="tgtSentence"\>Single\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.single.aspx)|Rappresenta un numero a virgola mobile e precisione singola.|  
        |[\<caps:sentence id\="tgt50" sentenceid\="90150402997ea9c8dc45cc4d41bb28cb" class\="tgtSentence"\>TimeSpan\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.timespan\(v=vs.140\).aspx)|Rappresenta un intervallo di tempo.|  
        |[\<caps:sentence id\="tgt52" sentenceid\="a00ef2ef85ff67b7b39339886f19044f" class\="tgtSentence"\>UInt16\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.uint16\(v=vs.140\).aspx)|Rappresenta un intero senza segno a 16 bit.|  
        |[\<caps:sentence id\="tgt54" sentenceid\="3de84ad0700f2a1571f633d399e1900e" class\="tgtSentence"\>UInt32\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.uint32\(v=vs.140\).aspx)|Rappresenta un intero senza segno a 32 bit.|  
        |[\<caps:sentence id\="tgt56" sentenceid\="2e8d31865e5d4b9d8611e1b991baed07" class\="tgtSentence"\>UInt64\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.uint64\(v=vs.140\).aspx)|Rappresenta un intero senza segno a 64 bit.|  
        |[\<caps:sentence id\="tgt58" sentenceid\="92d74abda31865424016b16e2c806a66" class\="tgtSentence"\>UIntPtr\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.uintptr\(v=vs.140\).aspx)|Tipo specifico per la piattaforma utilizzato per rappresentare un puntatore o un handle.|  
        |[\<caps:sentence id\="tgt60" sentenceid\="cab8111fd0b710a336c898e539090e34" class\="tgtSentence"\>Un tipo void.\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.void\(v=vs.140\).aspx)|Indica un metodo che non restituisce un valore. Si dice che il tipo restituito dal metodo è void.|