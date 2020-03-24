---
title: Errore irreversibile C1067
ms.date: 11/04/2016
f1_keywords:
- C1067
helpviewer_keywords:
- C1067
ms.assetid: e2c94be6-4573-4571-aac9-73d657fe9f96
ms.openlocfilehash: 3b016790220d409435ff7ea53c6f48899a9e8f1c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80204347"
---
# <a name="fatal-error-c1067"></a>Errore irreversibile C1067

limite del compilatore: è stato superato il limite di 64K per la dimensione di un record di tipo

Questo errore può verificarsi se un simbolo ha un nome decorato che supera i 247 caratteri.  Per risolvere il nome, abbreviare il nome del simbolo.

Quando il compilatore genera informazioni di debug, emette record di tipo per definire i tipi rilevati nel codice sorgente.  Ad esempio, i record di tipo includono strutture semplici ed elenchi di argomenti di funzioni.  Alcuni di questi record di tipo possono essere elenchi di grandi dimensioni.

È previsto un limite di 64K per la dimensione di qualsiasi record di tipo.  Se viene superato il limite di 64K, si verificherà questo errore.

C1067 può inoltre verificarsi se sono presenti molti simboli con nomi lunghi o se una classe, uno struct o un'Unione dispone di un numero eccessivo di membri.
