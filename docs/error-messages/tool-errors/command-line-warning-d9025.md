---
description: 'Altre informazioni su: Command-Line avviso D9025'
title: Avviso della riga di comando D9025
ms.date: 11/04/2016
f1_keywords:
- D9025
helpviewer_keywords:
- D9025
ms.assetid: 6edff72c-1508-46c2-99f4-0e4b3c5e60c9
ms.openlocfilehash: 8cec7bdb5f3816c33d395e8ae93a861a29e94c64
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115495"
---
# <a name="command-line-warning-d9025"></a>Avviso della riga di comando D9025

override di ' opzione1' con ' opzione2'

È stata specificata l'opzione *opzione1* , che è stata quindi sottoposta a override da *opzione2*. È stata usata l'opzione *opzione2* .

Se due opzioni specificano direttive contraddittorie o incompatibili, viene usata la direttiva specificata o implicita nell'opzione più a destra nella riga di comando.

Se si riceve questo avviso quando si esegue la compilazione dall'ambiente di sviluppo e non si è certi della provenienza delle opzioni in conflitto, tenere presente quanto segue:

- È possibile specificare un'opzione nel codice o nelle impostazioni del progetto del progetto. Se si esaminano le pagine delle [proprietà della riga di comando](../../build/reference/command-line-property-pages.md) del compilatore e si osservano le opzioni in conflitto nel campo **tutte le opzioni** , le opzioni vengono impostate nelle pagine delle proprietà del progetto; in caso contrario, le opzioni vengono impostate nel codice sorgente.

   Se le opzioni sono impostate nelle pagine delle proprietà del progetto, esaminare la pagina delle proprietà del preprocessore del compilatore (con il nodo del progetto selezionato nella Esplora soluzioni).  Se l'opzione non è impostata, controllare le impostazioni della pagina delle proprietà del preprocessore per ogni file di codice sorgente (in Esplora soluzioni) per assicurarsi che non sia stato aggiunto.

   Se le opzioni sono impostate nel codice, è possibile impostarle nel codice o nelle intestazioni di Windows.  È possibile provare a creare un file pre-elaborato ([/p](../../build/reference/p-preprocess-to-a-file.md)) e cercarlo per il simbolo.
