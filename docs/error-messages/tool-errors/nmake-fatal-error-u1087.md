---
title: Errore irreversibile U1087 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1087
helpviewer_keywords:
- U1087
ms.assetid: 5236ab54-e117-484d-99c3-852b061fd3d0
ms.openlocfilehash: ad6f422f42b2ba284a2886065b6181b879e7c7fc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193512"
---
# <a name="nmake-fatal-error-u1087"></a>Errore irreversibile U1087 di NMAKE

non possono avere: e:: dipendenti per la stessa destinazione

Non è possibile specificare una destinazione sia in una dipendenza con un solo segno di due punti ( **:** ) che in una dipendenza con due punti (`::`).

Per specificare una destinazione in più blocchi di descrizione, utilizzare `::` in ogni linea di dipendenza.
