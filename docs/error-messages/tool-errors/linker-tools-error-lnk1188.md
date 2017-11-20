---
title: Strumenti del linker LNK1188 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1188
dev_langs: C++
helpviewer_keywords: LNK1188
ms.assetid: 4af574b0-5b41-4580-9a37-52a634add995
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a77f769aed208c557b72e12572d170482d2538ea
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="linker-tools-error-lnk1188"></a>Errore degli strumenti del linker LNK1188
BADFIXUPSECTION:: la destinazione della correzione non valido 'symbol'; possibili sezione abbia lunghezza zero  
  
 Durante un collegamento VxD, la destinazione di una rilocazione non conteneva una sezione. Con LINK386 (una versione precedente), un record OMF GROUP (generato da una direttiva MASM GROUP) potrebbe essere stato utilizzato per combinare la sezione abbia lunghezza zero con un'altra sezione di lunghezza diversa da zero. Formato COFF non supporta la direttiva GROUP e sezioni di lunghezza zero. Quando il collegamento converte automaticamente questo tipo di oggetti OMF a COFF, questo errore può verificarsi.