---
title: Errore irreversibile C1047 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1047
dev_langs:
- C++
helpviewer_keywords:
- C1047
ms.assetid: e1bbbc6b-a5bc-4c23-8203-488120a0ec78
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1983fa0a18667d98f84dfe5049afd4e872d87d93
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46021590"
---
# <a name="fatal-error-c1047"></a>Errore irreversibile C1047

L'oggetto o il file di libreria 'file' è stato creato con un compilatore precedente rispetto a quello utilizzato per altri oggetti. Ricompilare i vecchi oggetti e librerie

L'errore C1047 si verifica quando si collegano tra loro librerie o file oggetto compilati con **/LTCG** , ma mediante versioni diverse del set di strumenti di Visual C++.

Ciò può verificarsi quando si inizia a usare una nuova versione del compilatore senza eseguire una ricompilazione pulita dei file oggetto o delle librerie esistenti.

Per correggere l'errore C1047, ricompilare tutti i file oggetto o le librerie.