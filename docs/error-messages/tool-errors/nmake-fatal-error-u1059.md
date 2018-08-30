---
title: Errore irreversibile U1059 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1059
dev_langs:
- C++
helpviewer_keywords:
- U1059
ms.assetid: b21d9198-9c63-40d0-b589-80e17294ce24
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8b54919398c757bfe05f747ff57341f31decfc61
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43200790"
---
# <a name="nmake-fatal-error-u1059"></a>Errore irreversibile U1059 di NMAKE 

> Errore di sintassi: '}' mancante nel dipendente

Un percorso di ricerca di un dipendente è stato specificato correttamente. È presente uno spazio nel percorso o la parentesi graffa di chiusura (**}**) è stato omesso.

La sintassi per una specifica di directory per un dipendente è

> **{** *directory* **} dipendenti**

in cui *directory* specifica uno o più percorsi, ciascuno separati da punto e virgola (**;**). Non sono consentiti spazi.

Se da una macro viene sostituito o parte di un percorso di ricerca, verificare che non contenga spazi presenti nell'espansione della macro.