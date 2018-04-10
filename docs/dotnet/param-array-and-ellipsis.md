---
title: Matrice di parametri e puntini di sospensione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- function overloading, argument matching
ms.assetid: 492e3f6c-1c4c-4e0c-a358-72f2d39c30be
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f6d256fd48d8c9f206619e6baa9a50a0278d30c3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="param-array-and-ellipsis"></a>Matrice di parametri e puntini di sospensione
Precedenza della matrice di parametri per la risoluzione di chiamate di funzione in overload è cambiato da estensioni gestite per C++ a Visual C++.  
  
 Nelle estensioni gestite che la nuova sintassi, non è presente alcun supporto esplicito per la matrice di parametri che c# e Visual Basic supportano. Al contrario, un contrassegno matrice ordinaria con un attributo, come indicato di seguito:  
  
```  
void Trace1( String* format, [ParamArray]Object* args[] );  
void Trace2( String* format, Object* args[] );  
```  
  
 Nonostante l'aspetto lo stesso, il `ParamArray` attributo questo tag per c# o in altri linguaggi CLR sotto forma di matrice richiede un numero variabile di elementi con ogni chiamata. La modifica del comportamento nei programmi tra le estensioni gestite e la nuova sintassi nella risoluzione di una funzione in overload set in cui un'istanza dichiara i puntini di sospensione e una seconda dichiara un `ParamArray` attributo, come nell'esempio seguente fornito da Artur Laksberg.  
  
```  
int fx(...); // 1  
int fx( [ParamArray] Int32[] ); // 2  
```  
  
 Nelle estensioni gestite, i puntini di sospensione è stata assegnata la precedenza sull'attributo che è ragionevole poiché l'attributo non è un aspetto formale del linguaggio. Tuttavia, nella nuova sintassi, la matrice di parametri è ora supportata direttamente nel linguaggio e ha pertanto la precedenza sui puntini di sospensione poiché è più fortemente tipizzato. Nelle estensioni gestite, la chiamata  
  
```  
fx( 1, 2 );  
```  
  
 si risolve in `fx(...)` mentre nella nuova sintassi, viene risolta la `ParamArray` istanza. Nel caso che il comportamento del programma dipende la chiamata dell'istanza di puntini di sospensione rispetto a quelle del `ParamArray`, è necessario modificare la firma o la chiamata.  
  
## <a name="see-also"></a>Vedere anche  
 [Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)