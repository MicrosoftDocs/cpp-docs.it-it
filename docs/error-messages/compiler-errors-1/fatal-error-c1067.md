---
description: 'Altre informazioni su: errore irreversibile C1067'
title: Errore irreversibile C1067
ms.date: 11/04/2016
f1_keywords:
- C1067
helpviewer_keywords:
- C1067
ms.assetid: e2c94be6-4573-4571-aac9-73d657fe9f96
ms.openlocfilehash: ef50719740de99f85e7e94f99cf0e14531608b22
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344419"
---
# <a name="fatal-error-c1067"></a>Errore irreversibile C1067

limite del compilatore: è stato superato il limite di 64K per la dimensione di un record di tipo

Questo errore può verificarsi se un simbolo ha un nome decorato che supera i 247 caratteri.  Per risolvere il nome, abbreviare il nome del simbolo.

Quando il compilatore genera informazioni di debug, emette record di tipo per definire i tipi rilevati nel codice sorgente.  Ad esempio, i record di tipo includono strutture semplici ed elenchi di argomenti di funzioni.  Alcuni di questi record di tipo possono essere elenchi di grandi dimensioni.

È previsto un limite di 64K per la dimensione di qualsiasi record di tipo.  Se viene superato il limite di 64K, si verificherà questo errore.

C1067 può inoltre verificarsi se sono presenti molti simboli con nomi lunghi o se una classe, uno struct o un'Unione dispone di un numero eccessivo di membri.
