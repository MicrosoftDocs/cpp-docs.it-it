---
title: "Matrice di parametri e puntini di sospensione | Microsoft Docs"
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
  - "overload di funzioni, corrispondenza di argomenti"
ms.assetid: 492e3f6c-1c4c-4e0c-a358-72f2d39c30be
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Matrice di parametri e puntini di sospensione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La precedenza della matrice di parametri per la risoluzione di chiamate di funzione di overload è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Sia nelle estensioni gestite che nella nuova sintassi non viene fornito supporto esplicito per la matrice di parametri supportata da C\# e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)].  Viene invece contrassegnata una matrice ordinaria con un attributo, come segue:  
  
```  
void Trace1( String* format, [ParamArray]Object* args[] );  
void Trace2( String* format, Object* args[] );  
```  
  
 Nonostante l'aspetto simile, l'attributo `ParamArray` funge da tag per C\# o altri linguaggi CLR e corrisponde a una matrice in grado di accettare un numero variabile di elementi con ciascuna chiamata.  Il diverso comportamento dei programmi nella nuova sintassi rispetto alle estensioni gestite è riscontrabile nella risoluzione di un insieme di funzioni in overload in cui un'istanza dichiara puntini di sospensione e una seconda dichiara un attributo `ParamArray`, come nel seguente esempio fornito da Artur Laksberg.  
  
```  
int fx(...); // 1  
int fx( [ParamArray] Int32[] ); // 2  
```  
  
 Nelle estensioni gestite, viene assegnata la precedenza ai puntini di sospensione rispetto all'attributo, che infatti non costituisce un aspetto formale del linguaggio.  Nella nuova sintassi, invece, la matrice di parametri è supportata direttamente nel linguaggio e ha pertanto la precedenza rispetto ai puntini di sospensione, poiché più fortemente tipizzata.  Nelle estensioni gestite, pertanto, la chiamata  
  
```  
fx( 1, 2 );  
```  
  
 viene risolta in `fx(…)`, mentre nella nuova sintassi viene risolta nell'istanza di `ParamArray`.  Nel caso in cui il comportamento del programma dipenda maggiormente dalla chiamata dell'istanza dei puntini di sospensione anziché da quella di `ParamArray`, sarà necessario modificare la firma o la chiamata.  
  
## Vedere anche  
 [Modifica generale del linguaggio](../dotnet/general-language-changes-cpp-cli.md)