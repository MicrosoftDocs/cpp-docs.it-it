---
title: Risoluzione di dichiarazioni ambigue (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 3d773ee7-bbea-47de-80c2-cb0a9d4ec0b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c1e55d5afc3cc95dbfd61bead30cdb2d686f7f30
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46066641"
---
# <a name="resolving-ambiguous-declarations-c"></a>Risoluzione di dichiarazioni ambigue (C++)

Per eseguire le conversioni esplicite da un tipo a un altro, è necessario utilizzare i cast, specificando il nome del tipo desiderato. Alcuni cast di tipo danno come risultato un'ambiguità sintattica. Il seguente cast di tipo funzione è ambiguo:

```cpp
char *aName( String( s ) );
```

Non è chiaro se è una dichiarazione di funzione o una dichiarazione dell'oggetto con un cast di tipo funzione come l'inizializzatore: può dichiarare una funzione che restituisce il tipo `char *` che accetta un argomento di tipo `String`, oppure può dichiarare l'oggetto `aName` e inizializzarla con il valore di `s` cast al tipo `String`.

Se una dichiarazione può essere considerata una dichiarazione di funzione valida, viene trattata come tale. Solo se non può eventualmente essere una dichiarazione della funzione (ovvero se è sintatticamente errata) è un'istruzione valutata per verificare se si tratta di un cast di tipo funzione. Di conseguenza, il compilatore considera l'istruzione come una dichiarazione di una funzione e ignora le parentesi dell'identificatore `s`. D'altra parte, le istruzioni:

```cpp
char *aName( (String)s );
```

e

```cpp
char *aName = String( s );
```

sono chiaramente le dichiarazioni di oggetti e una conversione dal tipo definito dall'utente `String` al tipo `char *` viene richiamato per eseguire l'inizializzazione di `aName`.