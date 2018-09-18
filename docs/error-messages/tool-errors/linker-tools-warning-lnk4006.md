---
title: Strumenti del linker LNK4006 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4006
dev_langs:
- C++
helpviewer_keywords:
- LNK4006
ms.assetid: 3a637d17-1676-4ea6-bd8b-290137d28d3b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c992369d7bb3d9a3571e23c42a64bf936d5ae383
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017612"
---
# <a name="linker-tools-warning-lnk4006"></a>Avviso degli strumenti del linker LNK4006

simbolo già definito nell'oggetto. seconda definizione ignorato

Il `symbol` specificato, visualizzato nel formato decorato, ha più definizioni. Quando viene visualizzato questo avviso, `symbol` verranno aggiunti due volte, ma verrà utilizzato solo il primo formato.

Se si tenta di unire due librerie di importazione in un'unica, è possibile ottenere questo avviso.

Se si rigenera la libreria di runtime C, è possibile ignorare questo messaggio.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Il dato `symbol` può essere una funzione di package, creata mediante la compilazione con [/Gy](../../build/reference/gy-enable-function-level-linking.md). Questo simbolo è stato incluso in più di un file ma modificato tra compilazioni. Ricompilare tutti i file che includono il `symbol`.

1. Il dato `symbol` possono essere state definite in modo diverso in due oggetti membro in librerie diverse.

1. Un assoluto può essere stato definito due volte, con un valore diverso in ogni definizione.

1. Se il messaggio di errore viene generato quando si combinano le librerie, `symbol` esiste già nella raccolta viene aggiunto a.