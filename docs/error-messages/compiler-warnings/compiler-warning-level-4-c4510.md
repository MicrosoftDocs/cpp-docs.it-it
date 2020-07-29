---
title: Avviso del compilatore (livello 4) C4510
description: Descrizione e soluzione di avviso del compilatore C4510.
ms.date: 09/22/2019
f1_keywords:
- C4510
helpviewer_keywords:
- C4510
ms.assetid: fd28d1d4-ad27-4dad-94c0-9dba46c93180
ms.openlocfilehash: e4bb688266d9fe638978d2d3fa2666b83b3e6cc9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225254"
---
# <a name="compiler-warning-level-4-c4510"></a>Avviso del compilatore (livello 4) C4510

> '*Class*': Impossibile generare il costruttore predefinito

Il compilatore non può generare un costruttore predefinito per la classe specificata, che non ha costruttori definiti dall'utente. Non è possibile creare oggetti di questo tipo.

Esistono diverse situazioni che impediscono al compilatore di generare un costruttore predefinito, tra cui:

- **`const`** Membro dati.

- Membro dati che è un riferimento.

Per risolvere questo problema, creare un costruttore predefinito definito dall'utente per la classe che Inizializza questi membri.
