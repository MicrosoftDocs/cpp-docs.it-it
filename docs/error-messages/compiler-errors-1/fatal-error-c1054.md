---
description: 'Altre informazioni su: errore irreversibile C1054'
title: Errore irreversibile C1054
ms.date: 11/04/2016
f1_keywords:
- C1054
helpviewer_keywords:
- C1054
ms.assetid: 9cfb7307-b22a-4418-b7c0-2621b0ab5b1b
ms.openlocfilehash: 1bfe8718fcb0d3edb172f0f5a89bb2f479e56137
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251661"
---
# <a name="fatal-error-c1054"></a>Errore irreversibile C1054

limite del compilatore: inizializzatori eccessivamente annidati

Il codice supera il limite di annidamento per gli inizializzatori (10-15 livelli, a seconda della combinazione di tipi inizializzati).

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Semplificare i tipi di dati inizializzati per ridurre l'annidamento.

1. Inizializzare le variabili in istruzioni separate dopo la dichiarazione.
