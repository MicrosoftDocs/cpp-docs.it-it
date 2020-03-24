---
title: Errore dell‘analizzatore di espressioni CXX0021
ms.date: 11/04/2016
f1_keywords:
- CXX0021
helpviewer_keywords:
- CXX0021
- CAN0021
ms.assetid: d6c0c35a-16c2-42c0-a7d2-e910350a47f0
ms.openlocfilehash: a800deb6bacbcae8666a3abad08b87d4f027790f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195839"
---
# <a name="expression-evaluator-error-cxx0021"></a>Errore dell‘analizzatore di espressioni CXX0021

struct o Union usato come scalare

Una struttura o un'Unione è stata usata in un'espressione, ma non è stato specificato alcun elemento.

Quando si modifica una struttura o una variabile di Unione, il nome della variabile può essere visualizzato da solo, senza un qualificatore di campo. Se in un'espressione viene utilizzata una struttura o un'Unione, è necessario qualificarla con l'elemento specifico desiderato.

Specificare l'elemento il cui valore deve essere utilizzato nell'espressione.

Questo errore è identico a CAN0021.
