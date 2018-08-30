---
title: Errore di compilazione PRJ0025 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0025
dev_langs:
- C++
helpviewer_keywords:
- PRJ0025
ms.assetid: 57725c78-bc63-44f3-9667-2969b2d7c41d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 949e36424fc213459e56332c0802d2719581bac1
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43209812"
---
# <a name="project-build-error-prj0025"></a>Errore di compilazione progetto PRJ0025

> File batch '*file*' il contenuto Unicode che non può essere tradotto in tabella codici ANSI dell'utente.
>
> *Contenuto UNICODE del file*

Il sistema di progetto trovata contenuto Unicode in una classe personalizzata regola di compilazione o compilazione eventi che non possono essere convertiti correttamente alla tabella codici ANSI corrente dell'utente.

La risoluzione di questo errore è di aggiornare il contenuto della regola di generazione evento in modo da utilizzare ANSI o installare la tabella codici nel computer e impostarlo come impostazione predefinita del sistema di compilazione.

Per altre informazioni su custom istruzioni di compilazione e gli eventi di compilazione, vedere [informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../../ide/understanding-custom-build-steps-and-build-events.md).