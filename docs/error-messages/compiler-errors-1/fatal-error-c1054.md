---
title: Errore irreversibile C1054
ms.date: 11/04/2016
f1_keywords:
- C1054
helpviewer_keywords:
- C1054
ms.assetid: 9cfb7307-b22a-4418-b7c0-2621b0ab5b1b
ms.openlocfilehash: 0bfd0c03378b1a9c616a014ac96153b3ab04af9d
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64344803"
---
# <a name="fatal-error-c1054"></a>Errore irreversibile C1054

limite del compilatore: inizializzatori eccessivamente annidati

Il codice supera il limite di annidamento di inizializzatori (10-15 livelli, a seconda della combinazione di tipi in fase di inizializzazione).

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Semplificare i tipi di dati in fase di inizializzazione per ridurre l'annidamento.

1. Inizializzare le variabili in istruzioni separate dopo la dichiarazione.