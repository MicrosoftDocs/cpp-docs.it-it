---
title: Accesso ai membri | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- member-selection operators [C++]
- pointers, smart
- member access, overloaded operators
- operator overloading [C++], member access operators
- smart pointers, definition
- smart pointers
ms.assetid: 8c7b2c43-eb92-4d42-9a8e-61aa37d71333
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2aadccd883738fe2e6e9f57cc63f67cde6d6a6c4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46099941"
---
# <a name="member-access"></a>Accesso ai membri

Accesso ai membri di classe può essere controllato tramite l'overload dell'operatore di accesso membri (**->**). Questo operatore in tale utilizzo viene considerato un operatore unario e la funzione dell'operatore di overload deve essere una funzione membro di una classe. Di conseguenza, la dichiarazione per tale funzione è:

## <a name="syntax"></a>Sintassi

```
class-type *operator->()
```

## <a name="remarks"></a>Note

in cui *di tipo classe* è il nome della classe a cui appartiene questo operatore. La funzione operatore di accesso ai membri deve essere una funzione membro non statica.

Questo operatore viene utilizzato (spesso insieme all'operatore di dereferenziazione del puntatore) per implementare i "puntatori intelligenti" che convalidano i puntatori prima della dereferenziazione oppure ne conteggiano l'utilizzo.

L'elemento language **.** operatore di accesso ai membri non possa essere sottoposti a overload.

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](../cpp/operator-overloading.md)