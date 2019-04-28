---
title: Avviso degli strumenti del linker LNK4006
ms.date: 11/04/2016
f1_keywords:
- LNK4006
helpviewer_keywords:
- LNK4006
ms.assetid: 3a637d17-1676-4ea6-bd8b-290137d28d3b
ms.openlocfilehash: c81c93a6df8c7eef809f243e3dc56164ea548371
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62187141"
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