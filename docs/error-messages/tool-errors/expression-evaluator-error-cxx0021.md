---
description: "Altre informazioni su: errore dell'analizzatore di espressioni CXX0021"
title: Errore dell‘analizzatore di espressioni CXX0021
ms.date: 11/04/2016
f1_keywords:
- CXX0021
helpviewer_keywords:
- CXX0021
- CAN0021
ms.assetid: d6c0c35a-16c2-42c0-a7d2-e910350a47f0
ms.openlocfilehash: 0ff42ec52ab19c726b0e1752fbb47f81da588533
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228137"
---
# <a name="expression-evaluator-error-cxx0021"></a>Errore dell‘analizzatore di espressioni CXX0021

struct o Union usato come scalare

Una struttura o un'Unione è stata usata in un'espressione, ma non è stato specificato alcun elemento.

Quando si modifica una struttura o una variabile di Unione, il nome della variabile può essere visualizzato da solo, senza un qualificatore di campo. Se in un'espressione viene utilizzata una struttura o un'Unione, è necessario qualificarla con l'elemento specifico desiderato.

Specificare l'elemento il cui valore deve essere utilizzato nell'espressione.

Questo errore è identico a CAN0021.
