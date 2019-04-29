---
title: Risoluzione di dichiarazioni ambigue (C++)
ms.date: 11/04/2016
ms.assetid: 3d773ee7-bbea-47de-80c2-cb0a9d4ec0b9
ms.openlocfilehash: 52e94f474d59505298cb4f78a477cedd21b90aad
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62403399"
---
# <a name="resolving-ambiguous-declarations-c"></a>Risoluzione di dichiarazioni ambigue (C++)

Per eseguire le conversioni esplicite da un tipo a un altro, è necessario utilizzare i cast, specificando il nome del tipo desiderato. Alcuni cast di tipo danno come risultato un'ambiguità sintattica. Il seguente cast di tipo funzione è ambiguo:

```cpp
char *aName( String( s ) );
```

Non è chiaro se è una dichiarazione di funzione o una dichiarazione dell'oggetto con un cast di tipo funzione come l'inizializzatore: Potrebbe dichiarare una funzione che restituisce il tipo `char *` che accetta un argomento di tipo `String`, oppure può dichiarare l'oggetto `aName` e inizializzarlo con il valore di `s` cast al tipo `String`.

Se una dichiarazione può essere considerata una dichiarazione di funzione valida, viene trattata come tale. Solo se non può eventualmente essere una dichiarazione della funzione (ovvero se è sintatticamente errata) è un'istruzione valutata per verificare se si tratta di un cast di tipo funzione. Di conseguenza, il compilatore considera l'istruzione come una dichiarazione di una funzione e ignora le parentesi dell'identificatore `s`. D'altra parte, le istruzioni:

```cpp
char *aName( (String)s );
```

e

```cpp
char *aName = String( s );
```

sono chiaramente le dichiarazioni di oggetti e una conversione dal tipo definito dall'utente `String` al tipo `char *` viene richiamato per eseguire l'inizializzazione di `aName`.