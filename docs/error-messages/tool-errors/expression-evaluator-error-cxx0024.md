---
description: "Altre informazioni su: errore dell'analizzatore di espressioni CXX0024"
title: Errore dell‘analizzatore di espressioni CXX0024
ms.date: 11/04/2016
f1_keywords:
- CXX0024
helpviewer_keywords:
- CXX0024
- CAN0024
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
ms.openlocfilehash: cb40199c217180b08e62d89dee551130eefefc35
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228079"
---
# <a name="expression-evaluator-error-cxx0024"></a>Errore dell‘analizzatore di espressioni CXX0024

per l'operazione è necessario l-value

Un'espressione che non restituisce un l-value è stata specificata per un'operazione che richiede un l-value.

Un l-value (chiamato in quanto viene visualizzato sul lato sinistro di un'istruzione di assegnazione) è un'espressione che fa riferimento a una posizione di memoria.

Ad esempio, `buffer[count]` è un l-value valido perché fa riferimento a una posizione di memoria specifica. Il confronto logico `zed != 0` non è un l-value valido perché restituisce true o false, non a un indirizzo di memoria.

Questo errore è identico a CAN0024.
