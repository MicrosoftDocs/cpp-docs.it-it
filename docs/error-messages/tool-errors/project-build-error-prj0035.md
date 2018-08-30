---
title: Errore di compilazione PRJ0035 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0035
dev_langs:
- C++
helpviewer_keywords:
- PRJ0035
ms.assetid: 0667116d-338c-40a4-972c-da875f778cb5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dd36604763e28fc3f228adec27d0c3775a327d66
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43213025"
---
# <a name="project-build-error-prj0035"></a>Errore di compilazione progetto PRJ0035

> File XML '*file*' il contenuto Unicode che non può essere tradotto in tabella codici ANSI dell'utente.
>
> *Contenuto UNICODE del file*

*file* è il file XML creato come riga di comando per lo strumento di distribuzione Web.

Il sistema di progetto trovati caratteri Unicode in alcune proprietà nella pagina delle proprietà di distribuzione Web che non può essere convertita correttamente in ANSI.

La risoluzione di questo errore consiste nell'aggiornare il contenuto della proprietà da utilizzare ANSI o per installare la tabella codici nel computer e impostarlo come impostazione predefinita del sistema.