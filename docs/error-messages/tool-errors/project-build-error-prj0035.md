---
title: Progetto PRJ0035 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 52d4726cd6fc8091225532b2cfda33c6115c673a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="project-build-error-prj0035"></a>Errore di compilazione progetto PRJ0035
XML 'file' contenuto Unicode del file non può essere tradotto in una tabella codici ANSI dell'utente.  
  
 ***Contenuto UNICODE del file***  
  
 ***file*** è il file XML creato come riga di comando per lo strumento di distribuzione Web.  
  
 Il sistema di progetto trova caratteri Unicode in una proprietà nella pagina delle proprietà di distribuzione Web che non può essere convertita correttamente in ANSI.  
  
 La risoluzione di questo errore consiste nell'aggiornare il contenuto della proprietà da utilizzare ANSI o per installare la tabella codici nel computer in uso e impostarlo come predefinito del sistema.