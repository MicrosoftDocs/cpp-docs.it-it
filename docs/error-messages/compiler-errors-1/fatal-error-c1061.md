---
description: 'Altre informazioni su: errore irreversibile C1061'
title: Errore irreversibile C1061
ms.date: 11/04/2016
f1_keywords:
- C1061
helpviewer_keywords:
- C1061
ms.assetid: 9366c0bc-96e0-4967-aa7d-4ebf098de806
ms.openlocfilehash: 58cdff5ae4878961ae69814c144402f8c93217a6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251544"
---
# <a name="fatal-error-c1061"></a>Errore irreversibile C1061

limite del compilatore: blocchi eccessivamente annidati

L'annidamento dei blocchi di codice supera il limite di 128 livelli. Si tratta di un limite fisso del compilatore sia in C che in C++, sia nel set di strumenti a 32 bit che nel set di strumenti a 64 bit. Il numero dei livelli di annidamento può essere aumentato da qualsiasi elemento che crea un ambito o un blocco. Ad esempio, spazi dei nomi, direttive using, espansioni del preprocessore, espansione del modello, gestione delle eccezioni, costrutti ciclici e clausole else-if possono tutti aumentare il livello di annidamento visto dal compilatore.

Per risolvere questo errore, è necessario effettuare il refactoring del codice. In ogni caso, il codice con un numero eccessivo di livelli di annidamento risulta di difficile comprensione. Effettuare il refactoring del codice per ridurre il numero di livelli di annidamento può contribuire a migliorare la qualità del codice e a semplificarne la gestione. Scomporre il codice con un numero eccessivo di livelli di annidamento in funzioni da chiamare dal contesto originale. Limitare il numero di cicli o clausole else-if concatenate all'interno di un blocco.
