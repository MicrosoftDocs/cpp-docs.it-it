---
title: Errore dell‘analizzatore di espressioni CXX0021
ms.date: 11/04/2016
f1_keywords:
- CXX0021
helpviewer_keywords:
- CXX0021
- CAN0021
ms.assetid: d6c0c35a-16c2-42c0-a7d2-e910350a47f0
ms.openlocfilehash: 373829e7200a556b3f832b1da127b4e33aa75749
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62359878"
---
# <a name="expression-evaluator-error-cxx0021"></a>Errore dell‘analizzatore di espressioni CXX0021

struct o unione utilizzato come scalare

Una struttura o un'unione è stata usata in un'espressione, ma è stato specificato alcun elemento.

Quando si modifica una struttura o una variabile di unione, il nome della variabile può comparire da solo, senza un qualificatore di campo. Se una struttura o unione viene usato in un'espressione, devono essere qualificato con l'elemento specifico desiderato.

Specificare l'elemento il cui valore deve essere utilizzato nell'espressione.

Questo errore è identico all'errore CAN0021.