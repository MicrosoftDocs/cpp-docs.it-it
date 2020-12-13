---
description: 'Altre informazioni su: errore del compilatore C2414'
title: Errore del compilatore C2414
ms.date: 11/04/2016
f1_keywords:
- C2414
helpviewer_keywords:
- C2414
ms.assetid: bbe94e03-862e-4990-b15e-544ae464727d
ms.openlocfilehash: 5bf2d017ac0018fe092b5a003dee021dd13370b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340333"
---
# <a name="compiler-error-c2414"></a>Errore del compilatore C2414

numero di operandi non valido

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il codice operativo non supporta il numero di operandi utilizzati. Controllare un manuale di riferimento per il linguaggio assembly per determinare il numero corretto di operandi.

1. Un processore più recente supporta l'istruzione con un numero diverso di operandi. Modificare l'opzione di [/Arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md) per utilizzare il processore successivo.
