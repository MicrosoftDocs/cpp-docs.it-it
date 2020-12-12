---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4006'
title: Avviso degli strumenti del linker LNK4006
ms.date: 11/04/2016
f1_keywords:
- LNK4006
helpviewer_keywords:
- LNK4006
ms.assetid: 3a637d17-1676-4ea6-bd8b-290137d28d3b
ms.openlocfilehash: 526b3f380ef7e05448280094f360c145d7f21c04
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332013"
---
# <a name="linker-tools-warning-lnk4006"></a>Avviso degli strumenti del linker LNK4006

simbolo già definito nell'oggetto; seconda definizione ignorata

Il `symbol` specificato, visualizzato nel formato decorato, ha più definizioni. Quando viene visualizzato questo avviso, `symbol` verrà aggiunto due volte, ma verrà utilizzato solo il primo form.

Questo avviso può essere visualizzato se si tenta di unire due librerie di importazione in una sola.

Se si sta ricompilando la libreria di runtime del linguaggio C, è possibile ignorare questo messaggio.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Il valore specificato `symbol` può essere una funzione in pacchetto, creata mediante la compilazione con [/Gy](../../build/reference/gy-enable-function-level-linking.md). Questo simbolo è stato incluso in più di un file, ma è stato modificato tra le compilazioni. Ricompilare tutti i file che includono `symbol` .

1. È possibile che l'oggetto specificato `symbol` sia stato definito in modo diverso in due oggetti membro in librerie diverse.

1. Un assoluto potrebbe essere stato definito due volte, con un valore diverso in ogni definizione.

1. Se il messaggio di errore viene ricevuto quando si combinano le librerie, `symbol` esiste già nella libreria aggiunta a.
