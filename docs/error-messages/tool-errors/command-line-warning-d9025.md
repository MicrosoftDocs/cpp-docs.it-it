---
title: Avviso della riga di comando D9025 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D9025
dev_langs:
- C++
helpviewer_keywords:
- D9025
ms.assetid: 6edff72c-1508-46c2-99f4-0e4b3c5e60c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c5bcc7cbe6fcd8a61e15e80c43f27703957a1e88
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50083087"
---
# <a name="command-line-warning-d9025"></a>Avviso della riga di comando D9025

override di 'opzione1' con 'option2'

Il *opzione1* opzione è stata specificata ma è stata quindi sostituita da *opzione2*. Il *opzione2* stata utilizzata l'opzione.

Se due opzioni di specificano delle direttive incompatibili o contraddittorie, viene utilizzata la direttiva specificata o in cui è inclusa nell'opzione esterno più a destra nella riga di comando.

Se visualizzato questo messaggio di avviso durante la compilazione dall'ambiente di sviluppo e non è certi di provengano le opzioni in conflitto, considerare quanto segue:

- Nel codice o nelle impostazioni del progetto del progetto, è possibile specificare un'opzione. Se si esamina il compilatore [pagine delle proprietà della riga di comando](../../ide/command-line-property-pages.md) e se vengono visualizzate le opzioni in conflitto nel **tutte le opzioni** campo quindi le opzioni sono impostate nelle pagine delle proprietà del progetto, in caso contrario, le opzioni vengono impostati nel codice sorgente.

   Se le opzioni sono impostate nelle pagine delle proprietà del progetto, cercare nella pagina delle proprietà per il preprocessore del compilatore (con il nodo del progetto selezionato in Esplora soluzioni).  Se non viene visualizzata l'opzione set non esiste, verificare le impostazioni di pagina delle proprietà per il preprocessore per ogni file di codice sorgente (in Esplora soluzioni) che non viene aggiunto non esiste.

   Se le opzioni sono impostate nel codice è possibile impostare nel codice o nelle intestazioni di windows.  È possibile provare a creare un file pre-elaborato ([/P](../../build/reference/p-preprocess-to-a-file.md)) e si cerca il simbolo.