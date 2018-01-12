---
title: Progetto PRJ0035 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: PRJ0035
dev_langs: C++
helpviewer_keywords: PRJ0035
ms.assetid: 0667116d-338c-40a4-972c-da875f778cb5
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b80fa6c7068d46ceed13b357c68cf30179ff0469
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-build-error-prj0035"></a>Errore di compilazione progetto PRJ0035
XML 'file' contenuto Unicode del file non può essere tradotto in una tabella codici ANSI dell'utente.  
  
 ***Contenuto UNICODE del file***  
  
 ***file*** è il file XML creato come riga di comando per lo strumento di distribuzione Web.  
  
 Il sistema di progetto trova caratteri Unicode in una proprietà nella pagina delle proprietà di distribuzione Web che non può essere convertita correttamente in ANSI.  
  
 La risoluzione di questo errore consiste nell'aggiornare il contenuto della proprietà da utilizzare ANSI o per installare la tabella codici nel computer in uso e impostarlo come predefinito del sistema.