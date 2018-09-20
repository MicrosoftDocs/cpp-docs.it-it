---
title: 2.4 condivisione del lavoro costrutti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 25bb4ded-8466-4daa-a863-766b5a99b995
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 719b33698b708761f0cd56e65a70a6ea8fa3b053
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46411118"
---
# <a name="24-work-sharing-constructs"></a>2.4 Costrutti per la condivisione del lavoro

Un costrutto di condivisione del lavoro distribuisce l'esecuzione dell'istruzione associato tra i membri del team che ha rilevato. Le direttive di condivisione del lavoro non avviare nuovi thread e non vi è alcuna barriera implicita in ingresso a un costrutto di condivisione del lavoro.

Costruisce la sequenza di condivisione del lavoro e **barriera** direttive rilevate devono essere uguale per ogni thread in un team.

OpenMP definisce i seguenti costrutti di condivisione del lavoro e questi elementi sono descritti nelle sezioni che seguono:

- **per** (direttiva)

- **Nelle sezioni** (direttiva)

- **singolo** (direttiva)