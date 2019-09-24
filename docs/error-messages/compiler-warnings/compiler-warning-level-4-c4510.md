---
title: Avviso del compilatore (livello 4) C4510
description: Descrizione e soluzione di avviso del compilatore C4510.
ms.date: 09/22/2019
f1_keywords:
- C4510
helpviewer_keywords:
- C4510
ms.assetid: fd28d1d4-ad27-4dad-94c0-9dba46c93180
ms.openlocfilehash: 05a6d0fe42d8247d3328506d8772b2fa77b5703c
ms.sourcegitcommit: 389c559918d9bfaf303d262ee5430d787a662e92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/24/2019
ms.locfileid: "71230379"
---
# <a name="compiler-warning-level-4-c4510"></a>Avviso del compilatore (livello 4) C4510

> '*Class*': Impossibile generare il costruttore predefinito

Il compilatore non può generare un costruttore predefinito per la classe specificata, che non ha costruttori definiti dall'utente. Non è possibile creare oggetti di questo tipo.

Esistono diverse situazioni che impediscono al compilatore di generare un costruttore predefinito, tra cui:

- Membro dati **const** .

- Membro dati che è un riferimento.

Per risolvere questo problema, creare un costruttore predefinito definito dall'utente per la classe che Inizializza questi membri.
