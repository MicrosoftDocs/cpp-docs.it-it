---
description: "Altre informazioni su: errore dell'analizzatore di espressioni CXX0022"
title: Errore dell‘analizzatore di espressioni CXX0022
ms.date: 11/04/2016
f1_keywords:
- CXX0022
helpviewer_keywords:
- CXX0022
- CAN0022
ms.assetid: f6b299ac-a4ee-492c-bd9f-6fff005bc537
ms.openlocfilehash: e1709b371b877cb86c7874ccf006d1ad1f3238fc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228119"
---
# <a name="expression-evaluator-error-cxx0022"></a>Errore dell‘analizzatore di espressioni CXX0022

chiamata di funzione prima di _main

L'analizzatore di espressioni C non è in grado di valutare una funzione prima che il debugger abbia immesso la funzione **_main**. Il programma non viene inizializzato correttamente fino a quando non viene chiamato **_main** .

Questo errore è identico a CAN0022.
