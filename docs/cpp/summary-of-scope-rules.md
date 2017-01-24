---
title: "Riepilogo delle regole di ambito | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nomi di classe [C++], regole ambito"
  - "ambito classe [C++], regole"
  - "classi [C++], ambito"
  - "nomi [C++], classe"
  - "ambito [C++], nomi di classe"
ms.assetid: 47e26482-0111-466f-b857-598c15d05105
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Riepilogo delle regole di ambito
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utilizzo di un nome deve essere non ambiguo all'interno dell'ambito relativo \(fino al punto in cui viene determinata l'esecuzione dell'overload\).  Se il nome indica una funzione, quest'ultima deve essere non ambigua rispetto al numero e al tipo di parametri.  Se il nome non è ambiguo, vengono applicate le regole di [accesso ai membri](../cpp/member-access-control-cpp.md).  
  
## Inizializzatori del costruttore  
 Gli inizializzatori di un costruttore \(descritti in [Inizializzazione delle basi e dei membri](http://msdn.microsoft.com/it-it/2f71377e-2b6b-49da-9a26-18e9b40226a1)\) vengono valutati nel blocco più esterno del costruttore per il quale sono specificati.  Di conseguenza, possono usare i nomi dei parametri del costruttore.  
  
## Nomi globali  
 Un nome di un oggetto, funzione o enumeratore è globale se viene introdotto al di fuori di qualsiasi funzione o classe o se è preceduto dall'operatore unario di ambito globale \(`::`\) e se non viene usato insieme a uno degli operatori binari seguenti:  
  
-   Risoluzione ambito \(`::`\)  
  
-   Selezione membro per oggetti e riferimenti \(**.**\)  
  
-   Selezione membro per puntatori \(**–\>**\)  
  
## Nomi completi  
 I nomi usati con l'operatore di risoluzione dell'ambito binario \(`::`\) sono denominati "nomi completi". Il nome specificato dopo l'operatore di risoluzione dell'ambito binario deve essere un membro della classe specificata a sinistra dell'operatore o un membro della relativa classe base.  
  
 I nomi specificati dopo l'operatore di selezione del membro \(**.** o **\-\>**\) devono essere membri del tipo di classe dell'oggetto specificato a sinistra dell'operatore o membri della relativa classe base.  I nomi specificati a destra dell'operatore di selezione dei membri \(**–\>**\) possono essere oggetti di un altro tipo di classe, a condizione che la sinistra di **–\>** rappresenti un oggetto di classe e che la classe definisca un operatore di overload di selezione dei membri \(**–\>**\) che restituisce un puntatore a un altro tipo di classe.  \(Questa operazione viene illustrata in dettaglio in [Accesso ai membri della classe](../cpp/member-access.md)\).  
  
 Il compilatore cerca i nomi nel seguente ordine, arrestandosi quando il nome viene trovato:  
  
1.  Ambito blocco corrente se il nome è usato in una funzione; in caso contrario, ambito globale.  
  
2.  Verso l'esterno, attraverso ogni ambito di blocco contenitore, compreso l'ambito più esterno della funzione \(inclusi i parametri della funzione\).  
  
3.  Se il nome è già in una funzione membro, viene cercato l'ambito della classe per il nome.  
  
4.  Le classi base della classe sono disponibili il nome.  
  
5.  Vengono ricercati l'ambito di classe contenitore annidato \(se presente\) e le relative basi.  La ricerca continua fino a trovare l'ambito più esterno della classe contenitore.  
  
6.  Viene cercato l'ambito globale.  
  
 Tuttavia, è possibile apportare le modifiche a questo ordine di ricerca come segue:  
  
1.  I nomi preceduti da `::` forzano l'inizio della ricerca in ambito globale.  
  
2.  I nomi preceduti dalle parole chiave **class**, `struct` e **union** forzano il compilatore per cercare solo i nomi **class**, `struct` o **union**.  
  
3.  I nomi a sinistra dell'operatore di risoluzione dell'ambito \(`::`\) possono essere solo nomi **class**, `struct`, **namespace** o **union**.  
  
 Se il nome riferimento a un membro non statico ma viene usato in una funzione membro statica, verrà generato un messaggio di errore.  Analogamente, se il nome fa riferimento a un membro non statico in una classe contenitore, verrà generato un messaggio di errore perché le classi incluse non hanno puntatori **this** della classe contenitore.  
  
## Nomi dei parametri delle funzioni  
 I nomi dei parametri delle funzioni nelle definizioni di funzione sono considerati nell'ambito del blocco più esterno della funzione.  Di conseguenza, sono nomi locali e diventano esterni all'ambito quando si esce dalla funzione.  
  
 I nomi dei parametri delle funzioni nelle dichiarazioni di funzione \(prototipi\) sono inclusi nell'ambito locale della dichiarazione e diventano esterni all'ambito alla fine della dichiarazione.  
  
 I parametri predefiniti sono inclusi nell'ambito del parametro per il quale costituiscono l'impostazione predefinita, come descritto nei due paragrafi precedenti.  Tuttavia, non possono accedere alle variabili locali o ai membri di classe non statici.  I parametri predefiniti vengono valutati al momento della chiamata di funzione, ma vengono valutati nell'ambito originale della dichiarazione di funzione.  Di conseguenza, i parametri predefiniti per le funzioni membro vengono sempre valutati nell'ambito della classe.  
  
## Vedere anche  
 [Ereditarietà](../cpp/inheritance-cpp.md)