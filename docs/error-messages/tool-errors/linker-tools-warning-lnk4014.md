---
title: Strumenti del linker LNK4014 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4014
dev_langs:
- C++
helpviewer_keywords:
- LNK4014
ms.assetid: 394903e9-3ded-4ea4-b7c0-a3535d4b4da4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2fb86efbdc70342861a87a233ab687f7564cb48b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33300059"
---
# <a name="linker-tools-warning-lnk4014"></a>Avviso degli strumenti del linker LNK4014
Impossibile trovare l'oggetto membro "nomeoggetto"  
  
 Non è stato trovato `objectname` nella libreria.  
  
 Il **/rimuovere** e **/estrarre** opzioni richiedono che il nome completo dell'oggetto membro che deve essere eliminato o copiato in un file. Il nome completo include il percorso del file oggetto originale. Per visualizzare i nomi completi di oggetti membro in una raccolta, utilizzare DUMPBIN [/ARCHIVEMEMBERS](../../build/reference/archivemembers.md) o LIB [/elenco](../../build/reference/managing-a-library.md).