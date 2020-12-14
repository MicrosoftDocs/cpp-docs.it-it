---
description: 'Altre informazioni su: errore irreversibile U1059 di NMAKE'
title: 'Errore irreversibile U1059 di NMAKE '
ms.date: 08/27/2018
f1_keywords:
- U1059
helpviewer_keywords:
- U1059
ms.assetid: b21d9198-9c63-40d0-b589-80e17294ce24
ms.openlocfilehash: 025ea8577814519b883e534c54ed8cf4383ef029
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283537"
---
# <a name="nmake-fatal-error-u1059"></a>Errore irreversibile U1059 di NMAKE 

> errore di sintassi:'}' mancante nel dipendente

Un percorso di ricerca per un dipendente non è stato specificato correttamente. Uno spazio nel percorso o la parentesi graffa di chiusura (**}**) è stata omessa.

La sintassi per una specifica di directory per un dipendente è

> **{** *directory* **} dipendenti**

dove *directory* specifica uno o più percorsi, separati da un punto e virgola (**;**). Non sono consentiti spazi.

Se una o più parti di un percorso di ricerca vengono sostituite da una macro, assicurarsi che non esistano spazi nell'espansione della macro.
