---
title: "Inizializzazione CRT | Microsoft Docs"
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
  - "inizializzazione CRT [C++]"
ms.assetid: e7979813-1856-4848-9639-f29c86b74ad7
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Inizializzazione CRT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene descritto come il CRT inizializza gli stati globali nel codice nativo.  
  
 Per impostazione predefinita, il linker include la libreria CRT, che fornisce il proprio codice di avvio.  Questo codice di avvio inizializza la libreria CRT, chiama gli inizializzatori globali e quindi chiama la funzione fornita dall'utente `main` per le applicazioni console.  
  
## Inizializzare un oggetto globale  
 Esaminare il codice seguente:  
  
```  
int func(void)  
{  
    return 3;  
}  
  
int gi = func();  
  
int main()  
{  
    return gi;  
}  
```  
  
 Secondo lo standard C\/C\+\+, `func()` deve essere chiamato prima che `main()` venga eseguito.  Ma chi lo chiama?  
  
 Un modo per determinarlo è quello di impostare un punto di interruzione in `func()`, eseguire il debug dell'applicazione ed esaminare lo stack.  Ciò è possibile poiché il codice sorgente CRT è incluso in Visual Studio.  
  
 Quando si scorrono le funzioni sullo stack, si noterà che la CRT esegue il ciclo per scorrere un elenco di puntatori a funzione e ognuno viene chiamato quando li incontra.  Queste funzioni sono simili a `func()` o ai costruttori per le istanze di classe.  
  
 CRT ottiene l'elenco dei puntatori a funzione dal compilatore di Visual C\+\+.  Quando il compilatore rileva un inizializzatore globale, viene generato un inizializzatore dinamico nella sezione di `.CRT$XCU` \(dove `CRT` è il nome della sezione e `XCU` è il nome del gruppo\).  Per ottenere un elenco degli inizializzatori dinamici eseguire il comando **dumpbin \/all main.obj**, e quindi individuare la sezione `.CRT$XCU` \(main.cpp quando viene compilato come file C\+\+, non come file c\).  Sarà simile a quanto seguente:  
  
```  
SECTION HEADER #6  
.CRT$XCU name  
       0 physical address  
       0 virtual address  
       4 size of raw data  
     1F2 file pointer to raw data (000001F2 to 000001F5)  
     1F6 file pointer to relocation table  
       0 file pointer to line numbers  
       1 number of relocations  
       0 number of line numbers  
40300040 flags  
         Initialized Data  
         4 byte align  
         Read Only  
  
RAW DATA #6  
  00000000: 00 00 00 00                                      ....  
  
RELOCATIONS #6  
                                                Symbol    Symbol  
 Offset    Type              Applied To         Index     Name  
 --------  ----------------  -----------------  --------  ------  
 00000000  DIR32                      00000000         C  ??__Egi@@YAXXZ (void __cdecl `dynamic initializer for 'gi''(void))  
```  
  
 CRT definisce due puntatori:  
  
-   `__xc_a` in `.CRT$XCA`  
  
-   `__xc_z` in `.CRT$XCZ`  
  
 Entrambi i gruppi non hanno alcun altro simbolo definito tranne `__xc_a` e `__xc_z`.  
  
 Ora, quando il linker indica i vari gruppi di `.CRT`, li combina in una sezione e li ordina alfabeticamente.  Ciò significa che gli inizializzatori globali definiti dall'utente \(che il compilatore di Visual C\+\+ inserisce in `.CRT$XCU`\) verranno sempre dopo `.CRT$XCA` e prima di `.CRT$XCZ`.  
  
 La sezione sarà simile alla seguente:  
  
```  
.CRT$XCA  
            __xc_a  
.CRT$XCU  
            Pointer to Global Initializer 1  
            Pointer to Global Initializer 2  
.CRT$XCZ  
            __xc_z  
```  
  
 Pertanto, la libreria CRT utilizza sia `__xc_a` che `__xc_z` per determinare l'inizio e la fine dell'elenco degli inizializzatori globali a causa del modo in cui vengono disposti in memoria dopo che l'immagine viene caricata.  
  
## Vedere anche  
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)