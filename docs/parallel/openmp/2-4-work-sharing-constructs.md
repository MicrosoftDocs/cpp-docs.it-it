---
title: 2.4 Costrutti per la condivisione del lavoro
ms.date: 11/04/2016
ms.assetid: 25bb4ded-8466-4daa-a863-766b5a99b995
ms.openlocfilehash: e7bf8d37ecdc6a3ef451c9d9746fb47a76a16eb4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50502882"
---
# <a name="24-work-sharing-constructs"></a>2.4 Costrutti per la condivisione del lavoro

Un costrutto di condivisione del lavoro distribuisce l'esecuzione dell'istruzione associato tra i membri del team che ha rilevato. Le direttive di condivisione del lavoro non avviare nuovi thread e non vi è alcuna barriera implicita in ingresso a un costrutto di condivisione del lavoro.

Costruisce la sequenza di condivisione del lavoro e **barriera** direttive rilevate devono essere uguale per ogni thread in un team.

OpenMP definisce i seguenti costrutti di condivisione del lavoro e questi elementi sono descritti nelle sezioni che seguono:

- **per** (direttiva)

- **Nelle sezioni** (direttiva)

- **singolo** (direttiva)