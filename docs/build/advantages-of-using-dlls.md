---
title: "Vantaggi dell&#39;utilizzo delle DLL | Microsoft Docs"
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
  - "DLL [C++], vantaggi"
  - "collegamento dinamico [C++]"
  - "collegamento dinamico in fase di carico [C++]"
  - "collegamento [C++], dinamico e statico"
  - "collegamenti [C++], dinamico e statico"
ms.assetid: 8956c8ee-e7b3-446f-a0c6-462381747690
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Vantaggi dell&#39;utilizzo delle DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il collegamento dinamico presenta i vantaggi descritti di seguito.  
  
-   Consente un risparmio di memoria e una riduzione dello swapping.  Più processi possono utilizzare contemporaneamente una sola DLL, mediante la condivisione di una sola copia della DLL in memoria.  Al contrario, in Windows è necessario caricare in memoria una copia del codice della libreria per ogni applicazione compilata con una libreria a collegamento statico.  
  
-   Permette di risparmiare spazio su disco.  Più applicazioni possono condividere una sola copia della DLL sul disco.  Al contrario, in ogni applicazione compilata con una libreria a collegamento statico il codice della libreria è collegato all'immagine dell'eseguibile come copia distinta.  
  
-   Gli aggiornamenti della DLL sono più facili.  Quando si modificano le funzioni di una DLL, non occorre ricompilare né ricollegare le applicazioni che utilizzano tali DLL, purché non siano stati modificati gli argomenti delle funzioni e i valori restituiti.  Al contrario, il codice degli oggetti collegati in modo statico richiede che il collegamento dell'applicazione venga ripetuto quando si modificano le funzioni.  
  
-   Facilita il supporto postvendita.  È possibile, ad esempio, modificare una DLL del driver del monitor per supportare un monitor che non era disponibile quando è stata distribuita l'applicazione.  
  
-   Supporta i programmi multilinguaggio.  I programmi scritti in diversi linguaggi di programmazione possono chiamare la stessa funzione DLL purché seguano la convenzione di chiamata della funzione.  I programmi e la funzione DLL devono essere compatibili e specificare i seguenti punti: l'ordine in cui la funzione prevede che i propri argomenti vengano inseriti nello stack, se la pulizia dello stack verrà effettuata dalla funzione o dall'applicazione e se alcuni argomenti vengono passati nei registri.  
  
-   Fornisce un meccanismo per estendere le classi della libreria MFC.  È possibile derivare le classi dalle classi MFC esistenti e collocarle in una DLL di estensione di MFC che verrà utilizzata dalle applicazioni MFC.  
  
-   Facilita la creazione delle versioni internazionali.  La collocazione delle risorse in una DLL semplifica la creazione delle versioni internazionali di un'applicazione.  È possibile inserire le stringhe per ciascuna versione localizzata dell'applicazione in una DLL di risorsa separata e far sì che le diverse versioni carichino le risorse appropriate.  
  
 Un potenziale svantaggio nell'utilizzo delle DLL è dato dal fatto che l'applicazione non è indipendente, ma dipende dall'esistenza di un modulo DLL separato.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportare da una DLL](../build/exporting-from-a-dll.md)  
  
-   [Collegamento di un eseguibile a una DLL](../build/linking-an-executable-to-a-dll.md)  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [DLL non MFC: cenni preliminari](../build/non-mfc-dlls-overview.md)  
  
-   [DLL regolari collegate a MFC in modo statico](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [DLL di estensione: cenni preliminari](../build/extension-dlls-overview.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)