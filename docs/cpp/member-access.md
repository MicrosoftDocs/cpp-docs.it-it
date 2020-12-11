---
description: 'Altre informazioni su: accesso ai membri'
title: Accesso ai membri
ms.date: 11/04/2016
helpviewer_keywords:
- member-selection operators [C++]
- pointers, smart
- member access, overloaded operators
- operator overloading [C++], member access operators
- smart pointers, definition
- smart pointers
ms.assetid: 8c7b2c43-eb92-4d42-9a8e-61aa37d71333
ms.openlocfilehash: c35eb2e7e24da9f8e8988b47ebfd8a59df815cee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161715"
---
# <a name="member-access"></a>Accesso ai membri

L'accesso ai membri di classe può essere controllato eseguendo l'overload dell'operatore di accesso ai membri ( **->** ). Questo operatore in tale utilizzo viene considerato un operatore unario e la funzione dell'operatore di overload deve essere una funzione membro di una classe. Di conseguenza, la dichiarazione per tale funzione è:

## <a name="syntax"></a>Sintassi

```
class-type *operator->()
```

## <a name="remarks"></a>Osservazioni

dove *class-Type* è il nome della classe a cui appartiene l'operatore. La funzione operatore di accesso ai membri deve essere una funzione membro non statica.

Questo operatore viene utilizzato (spesso insieme all'operatore di dereferenziazione del puntatore) per implementare i "puntatori intelligenti" che convalidano i puntatori prima della dereferenziazione oppure ne conteggiano l'utilizzo.

L'elemento language **.** non è possibile eseguire l'overload dell'operatore di accesso ai membri.

## <a name="see-also"></a>Vedi anche

[Overload degli operatori](../cpp/operator-overloading.md)
