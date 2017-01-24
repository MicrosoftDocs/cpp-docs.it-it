---
title: "DLL in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++]"
  - "DLL [C++], informazioni sulle DLL"
  - "collegamento dinamico [C++]"
  - "file eseguibili [C++]"
  - "collegamento [C++], dinamico e statico"
ms.assetid: 5216bca4-51e2-466b-b221-0e3e776056f0
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# DLL in Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una libreria di collegamento dinamico \(DLL, Dynamic\-Link Library\) è un file eseguibile che funziona come una libreria condivisa di funzioni e risorse.  Il collegamento dinamico permette a un eseguibile di chiamare funzioni o usare risorse archiviate in un file separato.  Queste funzioni e risorse possono essere compilate e distribuite separatamente dagli eseguibili che le usano.  Il sistema operativo può caricare la DLL nello spazio di memoria dell'eseguibile quando questo viene caricato oppure su richiesta al runtime.  Le DLL semplificano anche la condivisione di funzioni e risorse tra eseguibili.  Più applicazioni possono accedere contemporaneamente al contenuto di un'unica copia di una DLL in memoria.  
  
 Il collegamento statico copia in un eseguibile tutto il codice oggetto presente in un file LIB.  Il collegamento dinamico include solo le informazioni necessarie in fase di esecuzione per individuare e caricare la DLL che contiene un elemento dati o una funzione.  Quando si crea una DLL, è necessario creare anche un file LIB che contenga informazioni.  Quando si compila un eseguibile che chiama la DLL, il linker usa i simboli esportati nel file LIB per archiviare queste informazioni per il caricatore.  Quando il caricatore carica una DLL, questa viene mappata nello spazio di memoria dell'eseguibile.  Una funzione speciale nella DLL, `DllMain`, viene chiamata per eseguire l'eventuale inizializzazione richiesta dalla DLL.  
  
 L'uso del collegamento dinamico anziché di quello statico offre vari vantaggi.  Quando si usano DLL, è possibile risparmiare spazio di memoria e ridurre lo swapping.  Quando più applicazioni possono usare un'unica copia di una DLL, è possibile risparmiare spazio su disco e larghezza di banda di download.  Le DLL possono essere distribuite e aggiornate separatamente, in modo da poter fornire supporto postvendita e aggiornamenti software senza dover ricompilare e distribuire tutto il codice.  Le DLL costituiscono un metodo pratico per fornire risorse specifiche delle impostazioni locali, in modo da supportare programmi in più lingue e semplificare la creazione di versioni internazionali delle applicazioni.  
  
 Gli argomenti seguenti contengono informazioni su come programmare le DLL.  
  
## Contenuto della sezione  
 [Procedura dettagliata: creazione e utilizzo di una libreria a collegamento dinamico \(C\+\+\)](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)  
 Viene illustrato come creare e utilizzare una DLL in Visual Studio.  
  
 [Differenze tra applicazioni e DLL](../build/differences-between-applications-and-dlls.md)  
 Vengono descritte le differenze fondamentali fra le applicazioni e le DLL.  
  
 [Vantaggi dell'utilizzo delle DLL](../build/advantages-of-using-dlls.md)  
 Vengono illustrati i vantaggi del collegamento dinamico.  
  
 [Tipi di DLL](../build/kinds-of-dlls.md)  
 Vengono fornite informazioni sui diversi tipi di DLL che è possibile compilare.  
  
 [Domande frequenti relative alle DLL](../build/dll-frequently-asked-questions.md)  
 Vengono fornite risposte alle domande frequenti relative alle DLL.  
  
 [Collegamento di un eseguibile a una DLL](../build/linking-an-executable-to-a-dll.md)  
 Viene descritto il collegamento esplicito e implicito a una DLL.  
  
 [Inizializzazione di una DLL](../build/initializing-a-dll.md)  
 Viene illustrato il codice di inizializzazione della DLL, come l'assegnazione di memoria, da eseguire al caricamento della DLL.  
  
 [Funzionamento della libreria di runtime](../build/run-time-library-behavior.md)  
 Viene illustrata la sequenza di avvio della DLL eseguita dalla libreria runtime.  
  
 [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
 Descrive l'uso di **LoadLibrary** e `AfxLoadLibrary` per il collegamento esplicito a una DLL al runtime.  
  
 [GetProcAddress](../build/getprocaddress.md)  
 Viene illustrato l'utilizzo di **GetProcAddress** per ottenere l'indirizzo di una funzione esportata nella DLL.  
  
 [FreeLibrary e AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)  
 Viene illustrato l'utilizzo di **FreeLibrary** e `AfxFreeLibrary` quando il modulo di DLL non è più necessario.  
  
 [Percorso di ricerca utilizzato da Windows per l'individuazione di una DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
 Descrive il percorso di ricerca usato dal sistema operativo Windows per individuare una DLL nel sistema.  
  
 [Stato dei moduli di una DLL regolare collegata a MFC in modo dinamico](../build/module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)  
 Vengono illustrati gli stati del modulo di una DLL regolare collegata a MFC in modo dinamico.  
  
 [DLL di estensione](../build/extension-dlls-overview.md)  
 Vengono illustrate le DLL che implementano generalmente classi riutilizzabili derivate dalle classi esistenti della libreria MFC.  
  
 [Creazione di una DLL di sole risorse](../build/creating-a-resource-only-dll.md)  
 Viene illustrata una DLL di sole risorse, ovvero che contiene unicamente delle risorse, come icone, bitmap, stringhe e finestre di dialogo.  
  
 [Risorse localizzate in applicazioni MFC: DLL satellite](../build/localized-resources-in-mfc-applications-satellite-dlls.md)  
 Viene descritto un supporto avanzato per le DLL satellite, una funzionalità che aiuta a creare applicazioni localizzate in più lingue.  
  
 [Importazione ed esportazione](../build/importing-and-exporting.md)  
 Viene descritto come importare simboli pubblici in un'applicazione o come esportare funzioni da una DLL.  
  
 [Tecnologia Active e DLL](../build/active-technology-and-dlls.md)  
 Permette l'implementazione di server oggetti in una DLL.  
  
 [Automazione in una DLL](../build/automation-in-a-dll.md)  
 Viene illustrata l'opzione di automazione nella Creazione guidata DLL MFC.  
  
 [Convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md)  
 Viene illustrato come le DLL e le librerie incluse in MFC seguono una convenzione di denominazione strutturata.  
  
 [Chiamata di funzioni DLL dalle applicazioni Visual Basic](../build/calling-dll-functions-from-visual-basic-applications.md)  
 Viene descritto come chiamare funzioni nelle DLL dalle applicazioni Visual Basic.  
  
## Sezioni correlate  
 [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
 Descrive le DLL regolari, che permettono di usare la libreria MFC come parte di una libreria di collegamento dinamico di Windows.  
  
 [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)  
 Viene illustrato come utilizzare le librerie a collegamento dinamico condivise MFCxx.dll e MFCxxD.dll, dove x rappresenta il numero di versione di MFC, con applicazioni MFC e DLL di estensione.  
  
 [\(NOTINBUILD\)Visual C\+\+ Programming Methodologies](http://msdn.microsoft.com/it-it/0822f806-fa81-4b65-bf0f-1e2921f30c95)  
 Fornisce collegamenti ad argomenti che contengono informazioni concettuali sulle librerie di Visual C\+\+ e ad argomenti che descrivono le diverse tecnologie e tecniche di codifica.