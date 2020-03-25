---
title: Errore irreversibile U1059 di NMAKE
ms.date: 08/27/2018
f1_keywords:
- U1059
helpviewer_keywords:
- U1059
ms.assetid: b21d9198-9c63-40d0-b589-80e17294ce24
ms.openlocfilehash: 33be3312e1f0aaa7f1e8aad64b44ea9aefd25346
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182838"
---
# <a name="nmake-fatal-error-u1059"></a>Errore irreversibile U1059 di NMAKE

> errore di sintassi:'}' mancante nel dipendente

Un percorso di ricerca per un dipendente non è stato specificato correttamente. Uno spazio nel percorso o la parentesi graffa di chiusura ( **}** ) è stata omessa.

La sintassi per una specifica di directory per un dipendente è

> **{** *directory* **} dipendenti**

dove *directory* specifica uno o più percorsi, separati da un punto e virgola ( **;** ). Non sono consentiti spazi.

Se una o più parti di un percorso di ricerca vengono sostituite da una macro, assicurarsi che non esistano spazi nell'espansione della macro.
