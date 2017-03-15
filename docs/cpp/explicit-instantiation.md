---
title: "Creazione di un&#39;istanza esplicita | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli, creazione di istanze"
  - "creazione di un'istanza esplicita"
  - "creazione di istanza esplicita"
ms.assetid: 8b0d4e32-45a6-49d5-8041-1ebdd674410e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Creazione di un&#39;istanza esplicita
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare l'istanziazione esplicita per creare un'istanziazione di una classe o di una funzione basata su modelli senza utilizzarla nel codice.  Poiché questo è utile quando si creano i file di libreria \(.lib\) che utilizzano modelli per la distribuzione, le definizioni di modello prive di istanza non vengono inserite nei file oggetto \(.obj\).  
  
 Questo codice istanzia esplicitamente `MyStack` per le variabili `int` e sei elementi:  
  
```cpp  
template class MyStack<int, 6>;  
```  
  
 Questa istruzione crea un'istanza di `MyStack` senza riservare memoria per un oggetto.  Il codice viene generato per tutti i membri.  
  
 La riga successiva crea un'istanza solo la funzione membra costruttore:  
  
```cpp  
template MyStack<int, 6>::MyStack( void );  
```  
  
 È possibile creare esplicitamente istanze dei modelli di funzione utilizzando un argomento di tipo specifico per dichiararli nuovamente, come illustrato nell'esempio in [Creazione di istanze di modelli di funzione](../cpp/function-template-instantiation.md).  
  
 È possibile utilizzare la parola chiave `extern` per impedire la creazione di un'istanza automatica dei membri.  Ad esempio:  
  
```cpp  
extern template class MyStack<int, 6>;  
```  
  
 Analogamente, è possibile contrassegnare i membri specifici come esterni e non istanziati:  
  
```cpp  
extern template MyStack<int, 6>::MyStack( void );  
```  
  
 È possibile utilizzare la parola chiave `extern` per impedire al compilatore di generare la stessa istanza di codice in più di un modulo oggetto.  È necessario creare istanze della funzione del modello utilizzando i parametri di modello specificati espliciti in almeno un modulo collegato se la funzione viene chiamata, o si verifica un errore del linker quando il programma viene compilato.  
  
> [!NOTE]
>  La parola chiave `extern` nella specializzazione si applica solo alle funzioni membro definite all'esterno del corpo della classe.  Le funzioni definite all'interno della dichiarazione della classe vengono considerate funzioni inline e vengono sempre istanziate.  
  
## Vedere anche  
 [Modelli di funzioni](../cpp/function-templates.md)