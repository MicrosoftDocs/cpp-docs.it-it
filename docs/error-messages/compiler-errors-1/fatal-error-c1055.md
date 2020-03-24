---
title: Errore irreversibile C1055
ms.date: 11/04/2016
f1_keywords:
- C1055
helpviewer_keywords:
- C1055
ms.assetid: a9fb9190-d7eb-4d5f-b1a2-a41e584a28c1
ms.openlocfilehash: c349c09b4931c0a303e7619b364ab237394bd4fc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80204451"
---
# <a name="fatal-error-c1055"></a>Errore irreversibile C1055

limite del compilatore: chiavi esaurite

Il file di origine contiene troppi simboli. Il compilatore ha esaurito le chiavi hash per la tabella dei simboli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Suddividere il file di origine in file più piccoli.

1. Eliminare i file di intestazione non necessari.

1. Riutilizzare le variabili temporanee e globali anziché crearne di nuove.
