---
title: Errore irreversibile C1054
ms.date: 11/04/2016
f1_keywords:
- C1054
helpviewer_keywords:
- C1054
ms.assetid: 9cfb7307-b22a-4418-b7c0-2621b0ab5b1b
ms.openlocfilehash: d094d0892d43a5f9894f03538f72e59b57bad6db
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80204464"
---
# <a name="fatal-error-c1054"></a>Errore irreversibile C1054

limite del compilatore: inizializzatori eccessivamente annidati

Il codice supera il limite di annidamento per gli inizializzatori (10-15 livelli, a seconda della combinazione di tipi inizializzati).

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Semplificare i tipi di dati inizializzati per ridurre l'annidamento.

1. Inizializzare le variabili in istruzioni separate dopo la dichiarazione.
