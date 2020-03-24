---
title: Errore irreversibile U1095 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1095
helpviewer_keywords:
- U1095
ms.assetid: a392582b-06db-4568-9c13-450293a4fbda
ms.openlocfilehash: 55c7ca7d237655b7e20406e7f28e5b2471bdec53
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193459"
---
# <a name="nmake-fatal-error-u1095"></a>Errore irreversibile U1095 di NMAKE

la riga di comando ' CommandLine ' è stata espansa troppo a lungo

Dopo l'espansione della macro, la riga di comando specificata supera il limite di lunghezza delle righe di comando per il sistema operativo.

MS-DOS consente fino a 128 caratteri in una riga di comando.

Se il comando è per un programma che può accettare l'input della riga di comando da un file, modificare il comando e fornire input da un file su disco o da un file inline. Ad esempio, LINK e LIB accettano input da un file di risposta.
