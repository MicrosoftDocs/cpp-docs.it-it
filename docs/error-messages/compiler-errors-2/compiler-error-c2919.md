---
description: 'Altre informazioni su: errore del compilatore C2919'
title: Errore del compilatore C2919
ms.date: 11/04/2016
f1_keywords:
- C2919
helpviewer_keywords:
- C2919
ms.assetid: 140a6db9-eb48-4c5e-84a7-a09d2653605b
ms.openlocfilehash: 0e6498961fc5000897bcd9815c3cd3a6f90ecdfb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270342"
---
# <a name="compiler-error-c2919"></a>Errore del compilatore C2919

'type': impossibile utilizzare operatori sulla superficie pubblicata di un tipo WinRT

Il sistema di tipo Windows Runtime non supporta funzioni membro di operatore nella superficie pubblicata di un tipo. Infatti, non tutti i linguaggi possono utilizzare funzioni membro di operatore. È possibile creare funzioni membro di operatore private o interne che possono essere chiamate dal codice C++ nella stessa classe o unità di compilazione.

Per risolvere il problema, rimuovere la funzione membro di operatore dall'interfaccia pubblica o sostituirla con una funzione membro denominata. Ad esempio, invece di `operator==`, assegnare alla funzione membro il nome `Equals`.
